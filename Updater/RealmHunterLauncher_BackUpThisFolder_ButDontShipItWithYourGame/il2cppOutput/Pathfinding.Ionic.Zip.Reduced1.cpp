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
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF;
// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs>
struct EventHandler_1_tA56433540BB20E29DFC2C9DEEE7B40C521115C41;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs>
struct EventHandler_1_tE62E79B263424359668A60CA8D416EE3F6ABAA35;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs>
struct EventHandler_1_t36EE0ED4DB2D01986F9C0CD03D728281B1651EBE;
// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs>
struct EventHandler_1_tA9EFD230A187472671E00C5064A05D8C6E53D805;
// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs>
struct EventHandler_1_tD93C348E47D61E5D1B7FEBBD1972000C616B4026;
// System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>
struct ICollection_1_t1CF5E5C41C4A26CAC420067F5497376C18102A34;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct KeyCollection_t2B12CB0BB1C7C9C3951883865377D782C99C7F94;
// System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem>
struct List_1_t0B38073835913E8646A2E67FBBC088795FD6C3C4;
// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry>
struct List_1_tB976EA785960BD5277B6315C1A15B6518B19B63D;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct ValueCollection_t42E227C450F851F1A8675B41E3F71FB0C68AA4F8;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Pathfinding.Ionic.Zip.ZipEntry>[]
struct EntryU5BU5D_tDFB4F1798E3A24C96C24336DB38CB30A6E335D30;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Pathfinding.Ionic.Zlib.DeflateManager/Config[]
struct ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t3948BCF0A787E0F5D4C246CB25C8E853EC4885FE;
// Pathfinding.Ionic.Zip.CloseDelegate
struct CloseDelegate_tCABF96B2F2DA5E88BD1E8A8033ACD71210D5233B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Pathfinding.Ionic.Zip.CountingStream
struct CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2;
// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0;
// Pathfinding.Ionic.Zlib.DeflateStream
struct DeflateStream_t5EB455179F487541C2484890C1417230D414BC10;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// Pathfinding.Ionic.Zlib.GZipStream
struct GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Pathfinding.Ionic.Zlib.InfTree
struct InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913;
// Pathfinding.Ionic.Zlib.InflateBlocks
struct InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1;
// Pathfinding.Ionic.Zlib.InflateCodes
struct InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4;
// Pathfinding.Ionic.Zlib.InflateManager
struct InflateManager_tE69F3284C4CDE3BBF04462E8AA0222B5A07C02AB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// Pathfinding.Ionic.Zip.OpenDelegate
struct OpenDelegate_t40F6D44A427D5E1E620396E2F67C2DD840D67D46;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Pathfinding.Ionic.Zip.SetCompressionCallback
struct SetCompressionCallback_tF8BC7F40E6318CDAA54DEEB9398CA9A823E7FDDD;
// System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443;
// Pathfinding.Ionic.Zlib.StaticTree
struct StaticTree_t041C70747D425BD1B97240F73E154155B71884A0;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// Pathfinding.Ionic.Zlib.Tree
struct Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Pathfinding.Ionic.Zip.WriteDelegate
struct WriteDelegate_t7BEC8A78269C92625B7EE86B4AD67110398D1D03;
// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0;
// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t98840D163A277511DDEDF396869C557B6B4061C7;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4;
// Pathfinding.Ionic.Zip.ZipException
struct ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554;
// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF;
// Pathfinding.Ionic.Zip.ZipInputStream
struct ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C;
// Pathfinding.Ionic.Zip.ZipOutputStream
struct ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4;
// Pathfinding.Ionic.Zip.ZipSegmentedStream
struct ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2;
// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25;
// Pathfinding.Ionic.Zlib.ZlibException
struct ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5;
// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC;
// Pathfinding.Ionic.Zlib.DeflateManager/Config
struct Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0
struct U3CGetEnumeratorU3Ec__Iterator0_t9E196F83EB7DD52B292C7D87788835EDA6EA81F6;

IL2CPP_EXTERN_C RuntimeClass* Adler_t0924C4DA81CD846C5A76E153176BF1013A7A1418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t42D65C85BA517BFEFCEC34EF0C6A52FA91725E6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBE44EE0A9035203AEF336815D151D515E4DE208E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RwMode_t94DA76E16CF2018D6B7B40C11C586943E92A6C47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharedUtilities_t61A2EC09D59EA862653C1A3D46AF3672F2DD40E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D5_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D6_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D7_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D8_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D9_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2DA_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2DB_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2DC_8_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0392F2218F79B257D0D256B24AF81BF739615932;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021;
IL2CPP_EXTERN_C String_t* _stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94;
IL2CPP_EXTERN_C String_t* _stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43;
IL2CPP_EXTERN_C String_t* _stringLiteral2B3F1D1F0E4D1CAB7B0FEFB41F0DED43C4DF5895;
IL2CPP_EXTERN_C String_t* _stringLiteral3301E1AE1BCA5C134551471AB287F2443E658618;
IL2CPP_EXTERN_C String_t* _stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384;
IL2CPP_EXTERN_C String_t* _stringLiteral4014E67DDE2EEC5A620BDA6E50AFD7DD63737593;
IL2CPP_EXTERN_C String_t* _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D;
IL2CPP_EXTERN_C String_t* _stringLiteral4DE4583466E161AC08D14AD37D8B70B8580B3627;
IL2CPP_EXTERN_C String_t* _stringLiteral51439F4DAD5792EB6E21CF23BCFF005E285944B0;
IL2CPP_EXTERN_C String_t* _stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0;
IL2CPP_EXTERN_C String_t* _stringLiteral540BFF2B585F6DE7F5AA022B07C05975323EFD0E;
IL2CPP_EXTERN_C String_t* _stringLiteral56B0B450D40A7D1EEE3B00809196D2011917C8BA;
IL2CPP_EXTERN_C String_t* _stringLiteral5882879161B7C9D56B5A1120EF8EF366916857FF;
IL2CPP_EXTERN_C String_t* _stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE;
IL2CPP_EXTERN_C String_t* _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766;
IL2CPP_EXTERN_C String_t* _stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6;
IL2CPP_EXTERN_C String_t* _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8;
IL2CPP_EXTERN_C String_t* _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5;
IL2CPP_EXTERN_C String_t* _stringLiteral75C670EA0F7AE5A776E170D1A225F267CA674091;
IL2CPP_EXTERN_C String_t* _stringLiteral796754270F9B2AB25ACA5093B84CF8EAF55BA1AE;
IL2CPP_EXTERN_C String_t* _stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral899F12D19EE63B5B0D29F7611A5EA989E08FF765;
IL2CPP_EXTERN_C String_t* _stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4;
IL2CPP_EXTERN_C String_t* _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
IL2CPP_EXTERN_C String_t* _stringLiteral99CF69C509815F194040366DD9B7E4FD50FF60C4;
IL2CPP_EXTERN_C String_t* _stringLiteral9A538D87C765D16B9229A517D7D588C30AF3D5AE;
IL2CPP_EXTERN_C String_t* _stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06;
IL2CPP_EXTERN_C String_t* _stringLiteral9FC4F45EF48BB08BC4D6C5BC2A71B64139E0FEE4;
IL2CPP_EXTERN_C String_t* _stringLiteralA169493E3A221FA40A2265AC8ABCD2A9235CA971;
IL2CPP_EXTERN_C String_t* _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB5343EBD7412E5B3EAC0DEDDC43D8DC4C765084B;
IL2CPP_EXTERN_C String_t* _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E4583683A19BA1CBC201CAD5FFABF027A5B94A;
IL2CPP_EXTERN_C String_t* _stringLiteralB7CA6B7A7F82DA89BFD1F6A227BE9102B12D67B3;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D;
IL2CPP_EXTERN_C String_t* _stringLiteralBD9E9268795B5AD1DC37495CAF97ECD6133B122F;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
IL2CPP_EXTERN_C String_t* _stringLiteralC013226DF137B7010B5FE9B6BEB26EF8127E5B47;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralC6555B6A4916EB4F4DC740F9090D4EBEB92CD0EB;
IL2CPP_EXTERN_C String_t* _stringLiteralC807AF4C8454C9532AB93432926AD14934A179F6;
IL2CPP_EXTERN_C String_t* _stringLiteralCC1701B5D317209D0FC002E21B48CFF6BAF60F9E;
IL2CPP_EXTERN_C String_t* _stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113;
IL2CPP_EXTERN_C String_t* _stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E;
IL2CPP_EXTERN_C String_t* _stringLiteralE577106AF74D4E432DDB4785DA3B2BE486F67838;
IL2CPP_EXTERN_C String_t* _stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4;
IL2CPP_EXTERN_C String_t* _stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB2B96131D663835BBCCB259C113F21EA8F52AAA;
IL2CPP_EXTERN_C String_t* _stringLiteralFCFFE87B700F761511CEE492D55F0737B7263A25;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateFast_m6D259BB8539CB085CFC7C39E27A1755FD1B73137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateNone_m4F29886354D7C04DE790E8B6279E35D0A7CF3A67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateSlow_m288661F95A4576063917690F50F008DC4E31E4F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_Deflate_m1B283A96A2CBB2DA85D3F1AEF2DC36EA5EE8EA9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_Initialize_mCA2164C2F23AE209047666CD039C27A5B502F3BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Flush_mE4E4EAE9FF7719CAF4DEC39D4EEA4B0A49DD1DF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Read_m2AE7BC00B78FCC14ED988FCBDF65F50A19B121D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Seek_m2890858549779F5743E02337973CA0614A2CB652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_SetLength_mE85261A546FBF95657DB6B6BD599EEB4CF6F50AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Write_m0D4EE0CE73D2A234195CC3A7D50DC9B39B130D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_CanRead_m8CF18AB188A31552A4927AF15CAE34D628773746_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_CanWrite_mEB9B65D364D592DAC9C1CF30A1AA427AFE762F4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Length_m7BD7A44370BA3CB1D8C653054F42FA9E8A175CA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_BufferSize_mCAB7E39E52BB53266CAAC8280E1DECC23CAF94E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Position_mF3A14973B55506551C682DA795BFCF6E08F36228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Strategy_m1E1279CDD54787E219EF6D126AFB2EEB1E713421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB71C475BCA28DA7323863B5B6D92C0E420E89B1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m76F2A753901F99051727F4F91D51F041834CEDA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBFADC047B2B293E32E683B528DABD12BCA3EC60F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m402E274B6CFC9362D12272C8B6BBAE1A0EA86D56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6305EA4CA5405BA8DF9DFF8FC0D9D8EBB34BEECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Flush_m2DD2C1F5511AC7AD46129C0ED7DCBA94BA7969A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Read_mA206364CF7FE969E38504CE24307C0CBB456F626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Seek_mBC9F58B3D1BC59AE786078B58681037E448D8FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_SetLength_m7C3F088154D91DBFBCA439E9C831A92B3452AC88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Write_mCC93645B5C4A31E04C1F4243E50BF3DCB724A3E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_CanRead_m2F6F8E05D29E22A45E99E1A24B584F5333D8D0A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_CanWrite_m19083C8618836645110CF173B6081451302A1524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Length_mAF0E34EA81B5C54AC6FF6501CD97F5B18C1746E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Comment_mE0BD7B9614B806CFBAC3ABD914C9229E1F112626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_FileName_m0386221D053C993552FFF435F5B57879FBA8F342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Position_m8B85AAE3E2C2E79F12BFCDAE1CA61FFF1EA6243E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ec__Iterator0_Reset_mFBDFA58F84D8FCA4A190E9D97F8BBE52C4DE7E3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m596A4230B4514DB6498403483BC83781ECA9F0D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipContainer_get_BufferSize_m2395AC6C285F8B2C09D2BFF7EF74ABC47B4734F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipContainer_get_Zip64_m5AEBA9A3B260853E04BEF6128B41A81AAB73F1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipInputStream_Flush_m72052C55DC282251D4111B5A481116A8B6B8576E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipInputStream_Read_m922B6B7FCA792C12A94DAB5C8FDD5D07BD3FBFA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipInputStream_SetLength_m2283F7672341C4EF4C62A6B404E6BD310A1BE338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipInputStream_Write_mF9F1925748FEA3284D17FCDF4826EEE97543F8B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream_Read_m85BE1714D6D321250F6E2BD429B8BB1A259FEC19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream_Seek_m1C63B862C4066EB2C04D3675CE53FE8F825711DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream_SetLength_mE067F66EA79D6C42D8D500E76A4C8751E47BA8B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream_Write_m2153B71E5E5C930F58CC1C67251119454C009959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream__InitiateCurrentEntry_m7788FD9A801361824A5FC3AEE441605EECB66D4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream_get_Length_m62DF8B551CD826BA39FA792E9228BE828B5EEE03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutputStream_set_Position_m32A31B5D2E65B15A8DFA8C740242E18F49FF04D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipOutput_WriteCentralDirectoryStructure_mB2DCF5BEA0C40344443337551EAEB23AFF6DCB58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipSegmentedStream_ForUpdate_mCC411BE1EED7A75E9197C28F92347A7C6C4892F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipSegmentedStream_Read_mC024120B4E924DCEC2AE320613D0C5DDE81A698A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipSegmentedStream_SetLength_m99281CFBC3FF91380E121A79A91D1695200B4CD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipSegmentedStream_TruncateBackward_mBA75A2D56842131D539AD58FC95D6C67ECCDFDDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipSegmentedStream_Write_m3B0D194E64108DF6CFFD1B598A5A5EF4D2ABA0DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipSegmentedStream__NameForSegment_mDFB44EFC22F2CD1F10F4247D71F2B562E78231B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDFB4F1798E3A24C96C24336DB38CB30A6E335D30* ____entries_1;
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
	KeyCollection_t2B12CB0BB1C7C9C3951883865377D782C99C7F94* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t42E227C450F851F1A8675B41E3F71FB0C68AA4F8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct ValueCollection_t42E227C450F851F1A8675B41E3F71FB0C68AA4F8  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF* ____dictionary_0;
};
struct Il2CppArrayBounds;

// Pathfinding.Ionic.Zlib.DeflateManager
struct DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0  : public RuntimeObject
{
	// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc Pathfinding.Ionic.Zlib.DeflateManager::DeflateFunction
	CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* ___DeflateFunction_2;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.DeflateManager::_codec
	ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ____codec_21;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::status
	int32_t ___status_22;
	// System.Byte[] Pathfinding.Ionic.Zlib.DeflateManager::pending
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pending_23;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::nextPending
	int32_t ___nextPending_24;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::pendingCount
	int32_t ___pendingCount_25;
	// System.SByte Pathfinding.Ionic.Zlib.DeflateManager::data_type
	int8_t ___data_type_26;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_flush
	int32_t ___last_flush_27;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_size
	int32_t ___w_size_28;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_bits
	int32_t ___w_bits_29;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::w_mask
	int32_t ___w_mask_30;
	// System.Byte[] Pathfinding.Ionic.Zlib.DeflateManager::window
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window_31;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::window_size
	int32_t ___window_size_32;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::prev
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___prev_33;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::head
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___head_34;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::ins_h
	int32_t ___ins_h_35;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_size
	int32_t ___hash_size_36;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_bits
	int32_t ___hash_bits_37;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_mask
	int32_t ___hash_mask_38;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::hash_shift
	int32_t ___hash_shift_39;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::block_start
	int32_t ___block_start_40;
	// Pathfinding.Ionic.Zlib.DeflateManager/Config Pathfinding.Ionic.Zlib.DeflateManager::config
	Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* ___config_41;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_length
	int32_t ___match_length_42;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::prev_match
	int32_t ___prev_match_43;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_available
	int32_t ___match_available_44;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::strstart
	int32_t ___strstart_45;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::match_start
	int32_t ___match_start_46;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::lookahead
	int32_t ___lookahead_47;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::prev_length
	int32_t ___prev_length_48;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.DeflateManager::compressionLevel
	int32_t ___compressionLevel_49;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.DeflateManager::compressionStrategy
	int32_t ___compressionStrategy_50;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::dyn_ltree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dyn_ltree_51;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::dyn_dtree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dyn_dtree_52;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::bl_tree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___bl_tree_53;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeLiterals
	Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* ___treeLiterals_54;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeDistances
	Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* ___treeDistances_55;
	// Pathfinding.Ionic.Zlib.Tree Pathfinding.Ionic.Zlib.DeflateManager::treeBitLengths
	Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* ___treeBitLengths_56;
	// System.Int16[] Pathfinding.Ionic.Zlib.DeflateManager::bl_count
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___bl_count_57;
	// System.Int32[] Pathfinding.Ionic.Zlib.DeflateManager::heap
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___heap_58;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::heap_len
	int32_t ___heap_len_59;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::heap_max
	int32_t ___heap_max_60;
	// System.SByte[] Pathfinding.Ionic.Zlib.DeflateManager::depth
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___depth_61;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::_lengthOffset
	int32_t ____lengthOffset_62;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::lit_bufsize
	int32_t ___lit_bufsize_63;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_lit
	int32_t ___last_lit_64;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::_distanceOffset
	int32_t ____distanceOffset_65;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::opt_len
	int32_t ___opt_len_66;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::static_len
	int32_t ___static_len_67;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::matches
	int32_t ___matches_68;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::last_eob_len
	int32_t ___last_eob_len_69;
	// System.Int16 Pathfinding.Ionic.Zlib.DeflateManager::bi_buf
	int16_t ___bi_buf_70;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::bi_valid
	int32_t ___bi_valid_71;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::Rfc1950BytesEmitted
	bool ___Rfc1950BytesEmitted_72;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_WantRfc1950HeaderBytes
	bool ____WantRfc1950HeaderBytes_73;
};

struct DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields
{
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MEM_LEVEL_MAX
	int32_t ___MEM_LEVEL_MAX_0;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MEM_LEVEL_DEFAULT
	int32_t ___MEM_LEVEL_DEFAULT_1;
	// System.String[] Pathfinding.Ionic.Zlib.DeflateManager::_ErrorMessage
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____ErrorMessage_3;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::PRESET_DICT
	int32_t ___PRESET_DICT_4;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::INIT_STATE
	int32_t ___INIT_STATE_5;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::BUSY_STATE
	int32_t ___BUSY_STATE_6;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::FINISH_STATE
	int32_t ___FINISH_STATE_7;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_DEFLATED
	int32_t ___Z_DEFLATED_8;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::STORED_BLOCK
	int32_t ___STORED_BLOCK_9;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::STATIC_TREES
	int32_t ___STATIC_TREES_10;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::DYN_TREES
	int32_t ___DYN_TREES_11;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_BINARY
	int32_t ___Z_BINARY_12;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_ASCII
	int32_t ___Z_ASCII_13;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Z_UNKNOWN
	int32_t ___Z_UNKNOWN_14;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Buf_size
	int32_t ___Buf_size_15;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MIN_MATCH
	int32_t ___MIN_MATCH_16;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MAX_MATCH
	int32_t ___MAX_MATCH_17;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::MIN_LOOKAHEAD
	int32_t ___MIN_LOOKAHEAD_18;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::HEAP_SIZE
	int32_t ___HEAP_SIZE_19;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::END_BLOCK
	int32_t ___END_BLOCK_20;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// Pathfinding.Ionic.Zlib.InfTree
struct InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913  : public RuntimeObject
{
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::hn
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hn_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::v
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v_7;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::c
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c_8;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::r
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___r_9;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::u
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___u_10;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::x
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x_11;
};

struct InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields
{
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::fixed_tl
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___fixed_tl_0;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::fixed_td
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___fixed_td_1;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cplens
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cplens_2;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cplext
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cplext_3;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cpdist
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cpdist_4;
	// System.Int32[] Pathfinding.Ionic.Zlib.InfTree::cpdext
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___cpdext_5;
};

// Pathfinding.Ionic.Zlib.InflateBlocks
struct InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1  : public RuntimeObject
{
	// Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode Pathfinding.Ionic.Zlib.InflateBlocks::mode
	int32_t ___mode_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::left
	int32_t ___left_2;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::table
	int32_t ___table_3;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::index
	int32_t ___index_4;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::blens
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___blens_5;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::bb
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bb_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::tb
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tb_7;
	// Pathfinding.Ionic.Zlib.InflateCodes Pathfinding.Ionic.Zlib.InflateBlocks::codes
	InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* ___codes_8;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::last
	int32_t ___last_9;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.InflateBlocks::_codec
	ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ____codec_10;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::bitk
	int32_t ___bitk_11;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::bitb
	int32_t ___bitb_12;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::hufts
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hufts_13;
	// System.Byte[] Pathfinding.Ionic.Zlib.InflateBlocks::window
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___window_14;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::end
	int32_t ___end_15;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::readAt
	int32_t ___readAt_16;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::writeAt
	int32_t ___writeAt_17;
	// System.Object Pathfinding.Ionic.Zlib.InflateBlocks::checkfn
	RuntimeObject* ___checkfn_18;
	// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::check
	uint32_t ___check_19;
	// Pathfinding.Ionic.Zlib.InfTree Pathfinding.Ionic.Zlib.InflateBlocks::inftree
	InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* ___inftree_20;
};

struct InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_StaticFields
{
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateBlocks::border
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___border_0;
};

// Pathfinding.Ionic.Zlib.InflateCodes
struct InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4  : public RuntimeObject
{
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::mode
	int32_t ___mode_0;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::len
	int32_t ___len_1;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateCodes::tree
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tree_2;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::tree_index
	int32_t ___tree_index_3;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::need
	int32_t ___need_4;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::lit
	int32_t ___lit_5;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::bitsToGet
	int32_t ___bitsToGet_6;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::dist
	int32_t ___dist_7;
	// System.Byte Pathfinding.Ionic.Zlib.InflateCodes::lbits
	uint8_t ___lbits_8;
	// System.Byte Pathfinding.Ionic.Zlib.InflateCodes::dbits
	uint8_t ___dbits_9;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateCodes::ltree
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ltree_10;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::ltree_index
	int32_t ___ltree_index_11;
	// System.Int32[] Pathfinding.Ionic.Zlib.InflateCodes::dtree
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___dtree_12;
	// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::dtree_index
	int32_t ___dtree_index_13;
};

// Pathfinding.Ionic.Zlib.InternalConstants
struct InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B  : public RuntimeObject
{
};

struct InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields
{
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::MAX_BITS
	int32_t ___MAX_BITS_0;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::BL_CODES
	int32_t ___BL_CODES_1;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::D_CODES
	int32_t ___D_CODES_2;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::LITERALS
	int32_t ___LITERALS_3;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::LENGTH_CODES
	int32_t ___LENGTH_CODES_4;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::L_CODES
	int32_t ___L_CODES_5;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::MAX_BL_BITS
	int32_t ___MAX_BL_BITS_6;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::REP_3_6
	int32_t ___REP_3_6_7;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::REPZ_3_10
	int32_t ___REPZ_3_10_8;
	// System.Int32 Pathfinding.Ionic.Zlib.InternalConstants::REPZ_11_138
	int32_t ___REPZ_11_138_9;
};

// Pathfinding.Ionic.Zlib.InternalInflateConstants
struct InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21  : public RuntimeObject
{
};

struct InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields
{
	// System.Int32[] Pathfinding.Ionic.Zlib.InternalInflateConstants::InflateMask
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___InflateMask_0;
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

// System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443  : public RuntimeObject
{
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Int64 System.Diagnostics.StackFrame::methodAddress
	int64_t ___methodAddress_3;
	// System.UInt32 System.Diagnostics.StackFrame::methodIndex
	uint32_t ___methodIndex_4;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t* ___methodBase_5;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_6;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_7;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_8;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_9;
};
// Native definition for P/Invoke marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	char* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	char* ___internalMethodName_9;
};
// Native definition for COM marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	Il2CppChar* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	Il2CppChar* ___internalMethodName_9;
};

// Pathfinding.Ionic.Zlib.StaticTree
struct StaticTree_t041C70747D425BD1B97240F73E154155B71884A0  : public RuntimeObject
{
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::treeCodes
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___treeCodes_5;
	// System.Int32[] Pathfinding.Ionic.Zlib.StaticTree::extraBits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___extraBits_6;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::extraBase
	int32_t ___extraBase_7;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::elems
	int32_t ___elems_8;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::maxLength
	int32_t ___maxLength_9;
};

struct StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_StaticFields
{
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::lengthAndLiteralsTreeCodes
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___lengthAndLiteralsTreeCodes_0;
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::distTreeCodes
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___distTreeCodes_1;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::Literals
	StaticTree_t041C70747D425BD1B97240F73E154155B71884A0* ___Literals_2;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::Distances
	StaticTree_t041C70747D425BD1B97240F73E154155B71884A0* ___Distances_3;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::BitLengths
	StaticTree_t041C70747D425BD1B97240F73E154155B71884A0* ___BitLengths_4;
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

// Pathfinding.Ionic.Zlib.Tree
struct Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9  : public RuntimeObject
{
	// System.Int16[] Pathfinding.Ionic.Zlib.Tree::dyn_tree
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dyn_tree_9;
	// System.Int32 Pathfinding.Ionic.Zlib.Tree::max_code
	int32_t ___max_code_10;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.Tree::staticTree
	StaticTree_t041C70747D425BD1B97240F73E154155B71884A0* ___staticTree_11;
};

struct Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_StaticFields
{
	// System.Int32 Pathfinding.Ionic.Zlib.Tree::HEAP_SIZE
	int32_t ___HEAP_SIZE_0;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::ExtraLengthBits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExtraLengthBits_1;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::ExtraDistanceBits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExtraDistanceBits_2;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::extra_blbits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___extra_blbits_3;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::bl_order
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___bl_order_4;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::_dist_code
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ____dist_code_5;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::LengthCode
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___LengthCode_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::LengthBase
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___LengthBase_7;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::DistanceBase
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___DistanceBase_8;
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

// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0  : public RuntimeObject
{
	// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipContainer::_zf
	ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* ____zf_0;
	// Pathfinding.Ionic.Zip.ZipOutputStream Pathfinding.Ionic.Zip.ZipContainer::_zos
	ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* ____zos_1;
	// Pathfinding.Ionic.Zip.ZipInputStream Pathfinding.Ionic.Zip.ZipContainer::_zis
	ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* ____zis_2;
};

// Pathfinding.Ionic.Zip.ZipOutput
struct ZipOutput_t4D6ED29D105E0986936475C1E870A3911D7D5930  : public RuntimeObject
{
};

// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibCodec::InputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InputBuffer_0;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 Pathfinding.Ionic.Zlib.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibCodec::OutputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OutputBuffer_4;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 Pathfinding.Ionic.Zlib.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String Pathfinding.Ionic.Zlib.ZlibCodec::Message
	String_t* ___Message_8;
	// Pathfinding.Ionic.Zlib.DeflateManager Pathfinding.Ionic.Zlib.ZlibCodec::dstate
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* ___dstate_9;
	// Pathfinding.Ionic.Zlib.InflateManager Pathfinding.Ionic.Zlib.ZlibCodec::istate
	InflateManager_tE69F3284C4CDE3BBF04462E8AA0222B5A07C02AB* ___istate_10;
	// System.UInt32 Pathfinding.Ionic.Zlib.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ZlibCodec::Strategy
	int32_t ___Strategy_14;
};

// Pathfinding.Ionic.Zlib.DeflateManager/Config
struct Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113  : public RuntimeObject
{
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::GoodLength
	int32_t ___GoodLength_0;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::MaxLazy
	int32_t ___MaxLazy_1;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::NiceLength
	int32_t ___NiceLength_2;
	// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager/Config::MaxChainLength
	int32_t ___MaxChainLength_3;
	// Pathfinding.Ionic.Zlib.DeflateFlavor Pathfinding.Ionic.Zlib.DeflateManager/Config::Flavor
	int32_t ___Flavor_4;
};

struct Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_StaticFields
{
	// Pathfinding.Ionic.Zlib.DeflateManager/Config[] Pathfinding.Ionic.Zlib.DeflateManager/Config::Table
	ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* ___Table_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* ____currentValue_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
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

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// Pathfinding.Ionic.Zip.CountingStream
struct CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream Pathfinding.Ionic.Zip.CountingStream::_s
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____s_5;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_bytesWritten
	int64_t ____bytesWritten_6;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_bytesRead
	int64_t ____bytesRead_7;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_initialOffset
	int64_t ____initialOffset_8;
};

// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream Pathfinding.Ionic.Crc.CrcCalculatorStream::_innerStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____innerStream_6;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Crc.CrcCalculatorStream::_Crc32
	CRC32_t3948BCF0A787E0F5D4C246CB25C8E853EC4885FE* ____Crc32_7;
	// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::_lengthLimit
	int64_t ____lengthLimit_8;
	// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::_leaveOpen
	bool ____leaveOpen_9;
};

struct CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A_StaticFields
{
	// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::UnsetLengthLimit
	int64_t ___UnsetLengthLimit_5;
};

// Pathfinding.Ionic.Zlib.DeflateStream
struct DeflateStream_t5EB455179F487541C2484890C1417230D414BC10  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// Pathfinding.Ionic.Zlib.ZlibBaseStream Pathfinding.Ionic.Zlib.DeflateStream::_baseStream
	ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* ____baseStream_5;
	// System.IO.Stream Pathfinding.Ionic.Zlib.DeflateStream::_innerStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____innerStream_6;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::_disposed
	bool ____disposed_7;
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

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_8;
	// System.String System.IO.FileStream::name
	String_t* ___name_9;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_10;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_11;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_12;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_13;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_14;
	// System.Boolean System.IO.FileStream::async
	bool ___async_15;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_16;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_17;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_18;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_19;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_20;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_21;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_22;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_6;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_7;
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

// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_pool
	List_1_t0B38073835913E8646A2E67FBBC088795FD6C3C4* ____pool_7;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_leaveOpen
	bool ____leaveOpen_8;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::emitting
	bool ___emitting_9;
	// System.IO.Stream Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_outStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____outStream_10;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_maxBufferPairs
	int32_t ____maxBufferPairs_11;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_bufferSize
	int32_t ____bufferSize_12;
	// System.Threading.AutoResetEvent Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_newlyCompressedBlob
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ____newlyCompressedBlob_13;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_outputLock
	RuntimeObject* ____outputLock_14;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_isClosed
	bool ____isClosed_15;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_firstWriteDone
	bool ____firstWriteDone_16;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_currentlyFilling
	int32_t ____currentlyFilling_17;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_lastFilled
	int32_t ____lastFilled_18;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_lastWritten
	int32_t ____lastWritten_19;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_latestCompressed
	int32_t ____latestCompressed_20;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_Crc32
	int32_t ____Crc32_21;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_runningCrc
	CRC32_t3948BCF0A787E0F5D4C246CB25C8E853EC4885FE* ____runningCrc_22;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_latestLock
	RuntimeObject* ____latestLock_23;
	// System.Collections.Generic.Queue`1<System.Int32> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_toWrite
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ____toWrite_24;
	// System.Collections.Generic.Queue`1<System.Int32> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_toFill
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ____toFill_25;
	// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_totalBytesProcessed
	int64_t ____totalBytesProcessed_26;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_compressLevel
	int32_t ____compressLevel_27;
	// System.Exception modreq(System.Runtime.CompilerServices.IsVolatile) Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_pendingException
	Exception_t* ____pendingException_28;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_handlingException
	bool ____handlingException_29;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_eLock
	RuntimeObject* ____eLock_30;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream/TraceBits Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_DesiredTrace
	uint32_t ____DesiredTrace_31;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::<Strategy>k__BackingField
	int32_t ___U3CStrategyU3Ek__BackingField_32;
};

struct ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868_StaticFields
{
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::IO_BUFFER_SIZE_DEFAULT
	int32_t ___IO_BUFFER_SIZE_DEFAULT_5;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::BufferPairsPerCore
	int32_t ___BufferPairsPerCore_6;
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

// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionMadeBy
	int16_t ____VersionMadeBy_0;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_InternalFileAttrs
	int16_t ____InternalFileAttrs_1;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_ExternalFileAttrs
	int32_t ____ExternalFileAttrs_2;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_filenameLength
	int16_t ____filenameLength_3;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_extraFieldLength
	int16_t ____extraFieldLength_4;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_commentLength
	int16_t ____commentLength_5;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_inputDecryptorStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____inputDecryptorStream_6;
	// System.Object Pathfinding.Ionic.Zip.ZipEntry::_outputLock
	RuntimeObject* ____outputLock_7;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forExtract
	ZipCrypto_t98840D163A277511DDEDF396869C557B6B4061C7* ____zipCrypto_forExtract_8;
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipEntry::_zipCrypto_forWrite
	ZipCrypto_t98840D163A277511DDEDF396869C557B6B4061C7* ____zipCrypto_forWrite_9;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_LastModified
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____LastModified_10;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Mtime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____Mtime_11;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Atime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____Atime_12;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_Ctime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____Ctime_13;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ntfsTimesAreSet
	bool ____ntfsTimesAreSet_14;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitNtfsTimes
	bool ____emitNtfsTimes_15;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_emitUnixTimes
	bool ____emitUnixTimes_16;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_TrimVolumeFromFullyQualifiedPaths
	bool ____TrimVolumeFromFullyQualifiedPaths_17;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_LocalFileName
	String_t* ____LocalFileName_18;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_FileNameInArchive
	String_t* ____FileNameInArchive_19;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_VersionNeeded
	int16_t ____VersionNeeded_20;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_BitField
	int16_t ____BitField_21;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod
	int16_t ____CompressionMethod_22;
	// System.Int16 Pathfinding.Ionic.Zip.ZipEntry::_CompressionMethod_FromZipFile
	int16_t ____CompressionMethod_FromZipFile_23;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipEntry::_CompressionLevel
	int32_t ____CompressionLevel_24;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Comment
	String_t* ____Comment_25;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsDirectory
	bool ____IsDirectory_26;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_CommentBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____CommentBytes_27;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedSize
	int64_t ____CompressedSize_28;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_CompressedFileDataSize
	int64_t ____CompressedFileDataSize_29;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_UncompressedSize
	int64_t ____UncompressedSize_30;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_TimeBlob
	int32_t ____TimeBlob_31;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_crcCalculated
	bool ____crcCalculated_32;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_Crc32
	int32_t ____Crc32_33;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_Extra
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____Extra_34;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_metadataChanged
	bool ____metadataChanged_35;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_restreamRequiredOnSave
	bool ____restreamRequiredOnSave_36;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_sourceIsEncrypted
	bool ____sourceIsEncrypted_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_skippedDuringSave
	bool ____skippedDuringSave_38;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_diskNumber
	uint32_t ____diskNumber_39;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::_actualEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____actualEncoding_41;
	// Pathfinding.Ionic.Zip.ZipContainer Pathfinding.Ionic.Zip.ZipEntry::_container
	ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* ____container_42;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::__FileDataPosition
	int64_t _____FileDataPosition_43;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_EntryHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____EntryHeader_44;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_RelativeOffsetOfLocalHeader
	int64_t ____RelativeOffsetOfLocalHeader_45;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_future_ROLH
	int64_t ____future_ROLH_46;
	// System.Int64 Pathfinding.Ionic.Zip.ZipEntry::_TotalEntrySize
	int64_t ____TotalEntrySize_47;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfHeader
	int32_t ____LengthOfHeader_48;
	// System.Int32 Pathfinding.Ionic.Zip.ZipEntry::_LengthOfTrailer
	int32_t ____LengthOfTrailer_49;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_InputUsesZip64
	bool ____InputUsesZip64_50;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipEntry::_UnsupportedAlgorithmId
	uint32_t ____UnsupportedAlgorithmId_51;
	// System.String Pathfinding.Ionic.Zip.ZipEntry::_Password
	String_t* ____Password_52;
	// Pathfinding.Ionic.Zip.ZipEntrySource Pathfinding.Ionic.Zip.ZipEntry::_Source
	int32_t ____Source_53;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption
	int32_t ____Encryption_54;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipEntry::_Encryption_FromZipFile
	int32_t ____Encryption_FromZipFile_55;
	// System.Byte[] Pathfinding.Ionic.Zip.ZipEntry::_WeakEncryptionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____WeakEncryptionHeader_56;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_archiveStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____archiveStream_57;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipEntry::_sourceStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____sourceStream_58;
	// System.Nullable`1<System.Int64> Pathfinding.Ionic.Zip.ZipEntry::_sourceStreamOriginalPosition
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____sourceStreamOriginalPosition_59;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_ioOperationCanceled
	bool ____ioOperationCanceled_60;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_presumeZip64
	bool ____presumeZip64_61;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_entryRequiresZip64
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____entryRequiresZip64_62;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipEntry::_OutputUsesZip64
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____OutputUsesZip64_63;
	// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::_IsText
	bool ____IsText_64;
	// Pathfinding.Ionic.Zip.ZipEntryTimestamp Pathfinding.Ionic.Zip.ZipEntry::_timestamp
	int32_t ____timestamp_65;
	// Pathfinding.Ionic.Zip.WriteDelegate Pathfinding.Ionic.Zip.ZipEntry::_WriteDelegate
	WriteDelegate_t7BEC8A78269C92625B7EE86B4AD67110398D1D03* ____WriteDelegate_69;
	// Pathfinding.Ionic.Zip.OpenDelegate Pathfinding.Ionic.Zip.ZipEntry::_OpenDelegate
	OpenDelegate_t40F6D44A427D5E1E620396E2F67C2DD840D67D46* ____OpenDelegate_70;
	// Pathfinding.Ionic.Zip.CloseDelegate Pathfinding.Ionic.Zip.ZipEntry::_CloseDelegate
	CloseDelegate_tCABF96B2F2DA5E88BD1E8A8033ACD71210D5233B* ____CloseDelegate_71;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipEntry::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_72;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipEntry::<ZipErrorAction>k__BackingField
	int32_t ___U3CZipErrorActionU3Ek__BackingField_73;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipEntry::<SetCompression>k__BackingField
	SetCompressionCallback_tF8BC7F40E6318CDAA54DEEB9398CA9A823E7FDDD* ___U3CSetCompressionU3Ek__BackingField_74;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncoding>k__BackingField
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CAlternateEncodingU3Ek__BackingField_75;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipEntry::<AlternateEncodingUsage>k__BackingField
	int32_t ___U3CAlternateEncodingUsageU3Ek__BackingField_76;
};

struct ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4_StaticFields
{
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipEntry::ibm437
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___ibm437_40;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_unixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____unixEpoch_66;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_win32Epoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____win32Epoch_67;
	// System.DateTime Pathfinding.Ionic.Zip.ZipEntry::_zeroHour
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____zeroHour_68;
};

// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF  : public RuntimeObject
{
	static const Il2CppGuid CLSID;

	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_lengthOfReadStream
	int64_t ____lengthOfReadStream_0;
	// System.IO.TextWriter Pathfinding.Ionic.Zip.ZipFile::_StatusMessageTextWriter
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ____StatusMessageTextWriter_1;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_CaseSensitiveRetrieval
	bool ____CaseSensitiveRetrieval_2;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_readstream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____readstream_3;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::_writestream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____writestream_4;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionMadeBy
	uint16_t ____versionMadeBy_5;
	// System.UInt16 Pathfinding.Ionic.Zip.ZipFile::_versionNeededToExtract
	uint16_t ____versionNeededToExtract_6;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_diskNumberWithCd
	uint32_t ____diskNumberWithCd_7;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxOutputSegmentSize
	int32_t ____maxOutputSegmentSize_8;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_numberOfSegmentsForMostRecentSave
	uint32_t ____numberOfSegmentsForMostRecentSave_9;
	// Pathfinding.Ionic.Zip.ZipErrorAction Pathfinding.Ionic.Zip.ZipFile::_zipErrorAction
	int32_t ____zipErrorAction_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_disposed
	bool ____disposed_11;
	// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_entries
	Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF* ____entries_12;
	// System.Collections.Generic.List`1<Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile::_zipEntriesAsList
	List_1_tB976EA785960BD5277B6315C1A15B6518B19B63D* ____zipEntriesAsList_13;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_name
	String_t* ____name_14;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_readName
	String_t* ____readName_15;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Comment
	String_t* ____Comment_16;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_Password
	String_t* ____Password_17;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitNtfsTimes
	bool ____emitNtfsTimes_18;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_emitUnixTimes
	bool ____emitUnixTimes_19;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipFile::_Strategy
	int32_t ____Strategy_20;
	// Pathfinding.Ionic.Zip.CompressionMethod Pathfinding.Ionic.Zip.ZipFile::_compressionMethod
	int32_t ____compressionMethod_21;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_fileAlreadyExists
	bool ____fileAlreadyExists_22;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_temporaryFileName
	String_t* ____temporaryFileName_23;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_contentsChanged
	bool ____contentsChanged_24;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_hasBeenSaved
	bool ____hasBeenSaved_25;
	// System.String Pathfinding.Ionic.Zip.ZipFile::_TempFileFolder
	String_t* ____TempFileFolder_26;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_ReadStreamIsOurs
	bool ____ReadStreamIsOurs_27;
	// System.Object Pathfinding.Ionic.Zip.ZipFile::LOCK
	RuntimeObject* ___LOCK_28;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_saveOperationCanceled
	bool ____saveOperationCanceled_29;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_extractOperationCanceled
	bool ____extractOperationCanceled_30;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_addOperationCanceled
	bool ____addOperationCanceled_31;
	// Pathfinding.Ionic.Zip.EncryptionAlgorithm Pathfinding.Ionic.Zip.ZipFile::_Encryption
	int32_t ____Encryption_32;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_JustSaved
	bool ____JustSaved_33;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_locEndOfCDS
	int64_t ____locEndOfCDS_34;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory
	uint32_t ____OffsetOfCentralDirectory_35;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_OffsetOfCentralDirectory64
	int64_t ____OffsetOfCentralDirectory64_36;
	// System.Nullable`1<System.Boolean> Pathfinding.Ionic.Zip.ZipFile::_OutputUsesZip64
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____OutputUsesZip64_37;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_inExtractAll
	bool ____inExtractAll_38;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_alternateEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____alternateEncoding_40;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipFile::_alternateEncodingUsage
	int32_t ____alternateEncodingUsage_41;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_BufferSize
	int32_t ____BufferSize_42;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipFile::ParallelDeflater
	ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868* ___ParallelDeflater_43;
	// System.Int64 Pathfinding.Ionic.Zip.ZipFile::_ParallelDeflateThreshold
	int64_t ____ParallelDeflateThreshold_44;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::_maxBufferPairs
	int32_t ____maxBufferPairs_45;
	// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipFile::_zip64
	int32_t ____zip64_46;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::_SavingSfx
	bool ____SavingSfx_47;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.SaveProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::SaveProgress
	EventHandler_1_tA9EFD230A187472671E00C5064A05D8C6E53D805* ___SaveProgress_49;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ReadProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ReadProgress
	EventHandler_1_t36EE0ED4DB2D01986F9C0CD03D728281B1651EBE* ___ReadProgress_50;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ExtractProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::ExtractProgress
	EventHandler_1_tE62E79B263424359668A60CA8D416EE3F6ABAA35* ___ExtractProgress_51;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.AddProgressEventArgs> Pathfinding.Ionic.Zip.ZipFile::AddProgress
	EventHandler_1_tA56433540BB20E29DFC2C9DEEE7B40C521115C41* ___AddProgress_52;
	// System.EventHandler`1<Pathfinding.Ionic.Zip.ZipErrorEventArgs> Pathfinding.Ionic.Zip.ZipFile::ZipError
	EventHandler_1_tD93C348E47D61E5D1B7FEBBD1972000C616B4026* ___ZipError_53;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FullScan>k__BackingField
	bool ___U3CFullScanU3Ek__BackingField_54;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<SortEntriesBeforeSaving>k__BackingField
	bool ___U3CSortEntriesBeforeSavingU3Ek__BackingField_55;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<AddDirectoryWillTraverseReparsePoints>k__BackingField
	bool ___U3CAddDirectoryWillTraverseReparsePointsU3Ek__BackingField_56;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_57;
	// System.Boolean Pathfinding.Ionic.Zip.ZipFile::<FlattenFoldersOnExtract>k__BackingField
	bool ___U3CFlattenFoldersOnExtractU3Ek__BackingField_58;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zip.ZipFile::<CompressionLevel>k__BackingField
	int32_t ___U3CCompressionLevelU3Ek__BackingField_59;
	// Pathfinding.Ionic.Zip.ExtractExistingFileAction Pathfinding.Ionic.Zip.ZipFile::<ExtractExistingFile>k__BackingField
	int32_t ___U3CExtractExistingFileU3Ek__BackingField_60;
	// Pathfinding.Ionic.Zip.SetCompressionCallback Pathfinding.Ionic.Zip.ZipFile::<SetCompression>k__BackingField
	SetCompressionCallback_tF8BC7F40E6318CDAA54DEEB9398CA9A823E7FDDD* ___U3CSetCompressionU3Ek__BackingField_61;
};

struct ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_StaticFields
{
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::_defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____defaultEncoding_39;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile::BufferSizeDefault
	int32_t ___BufferSizeDefault_48;
};

// Pathfinding.Ionic.Zip.ZipInputStream
struct ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipInputStream::_inputStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____inputStream_5;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipInputStream::_currentEntry
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* ____currentEntry_6;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_needSetup
	bool ____needSetup_7;
	// Pathfinding.Ionic.Crc.CrcCalculatorStream Pathfinding.Ionic.Zip.ZipInputStream::_crcStream
	CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A* ____crcStream_8;
	// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::_LeftToRead
	int64_t ____LeftToRead_9;
	// System.String Pathfinding.Ionic.Zip.ZipInputStream::_Password
	String_t* ____Password_10;
	// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::_endOfEntry
	int64_t ____endOfEntry_11;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_closed
	bool ____closed_12;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_findRequired
	bool ____findRequired_13;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_exceptionPending
	bool ____exceptionPending_14;
	// System.Int32 Pathfinding.Ionic.Zip.ZipInputStream::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_15;
};

// Pathfinding.Ionic.Zip.ZipOutputStream
struct ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.String Pathfinding.Ionic.Zip.ZipOutputStream::_password
	String_t* ____password_5;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::_outputStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____outputStream_6;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipOutputStream::_currentEntry
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* ____currentEntry_7;
	// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipOutputStream::_zip64
	int32_t ____zip64_8;
	// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipOutputStream::_entriesWritten
	Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF* ____entriesWritten_9;
	// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::_entryCount
	int32_t ____entryCount_10;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipOutputStream::_alternateEncodingUsage
	int32_t ____alternateEncodingUsage_11;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutputStream::_alternateEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____alternateEncoding_12;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_disposed
	bool ____disposed_13;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_exceptionPending
	bool ____exceptionPending_14;
	// Pathfinding.Ionic.Zip.CountingStream Pathfinding.Ionic.Zip.ZipOutputStream::_outputCounter
	CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2* ____outputCounter_15;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::_encryptor
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____encryptor_16;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::_deflater
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____deflater_17;
	// Pathfinding.Ionic.Crc.CrcCalculatorStream Pathfinding.Ionic.Zip.ZipOutputStream::_entryOutputStream
	CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A* ____entryOutputStream_18;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_needToWriteEntryHeader
	bool ____needToWriteEntryHeader_19;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipOutputStream::ParallelDeflater
	ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868* ___ParallelDeflater_20;
	// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::_ParallelDeflateThreshold
	int64_t ____ParallelDeflateThreshold_21;
	// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::_maxBufferPairs
	int32_t ____maxBufferPairs_22;
	// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_23;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipOutputStream::<Strategy>k__BackingField
	int32_t ___U3CStrategyU3Ek__BackingField_24;
};

// Pathfinding.Ionic.Zip.ZipSegmentedStream
struct ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// Pathfinding.Ionic.Zip.ZipSegmentedStream/RwMode Pathfinding.Ionic.Zip.ZipSegmentedStream::rwMode
	int32_t ___rwMode_5;
	// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::_exceptionPending
	bool ____exceptionPending_6;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_baseName
	String_t* ____baseName_7;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_baseDir
	String_t* ____baseDir_8;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_currentName
	String_t* ____currentName_9;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_currentTempName
	String_t* ____currentTempName_10;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::_currentDiskNumber
	uint32_t ____currentDiskNumber_11;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::_maxDiskNumber
	uint32_t ____maxDiskNumber_12;
	// System.Int32 Pathfinding.Ionic.Zip.ZipSegmentedStream::_maxSegmentSize
	int32_t ____maxSegmentSize_13;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipSegmentedStream::_innerStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____innerStream_14;
	// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::<ContiguousWrite>k__BackingField
	bool ___U3CContiguousWriteU3Ek__BackingField_15;
};

// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.ZlibBaseStream::_z
	ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ____z_5;
	// Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Pathfinding.Ionic.Zlib.ZlibBaseStream::_streamMode
	int32_t ____streamMode_6;
	// Pathfinding.Ionic.Zlib.FlushType Pathfinding.Ionic.Zlib.ZlibBaseStream::_flushMode
	int32_t ____flushMode_7;
	// Pathfinding.Ionic.Zlib.ZlibStreamFlavor Pathfinding.Ionic.Zlib.ZlibBaseStream::_flavor
	int32_t ____flavor_8;
	// Pathfinding.Ionic.Zlib.CompressionMode Pathfinding.Ionic.Zlib.ZlibBaseStream::_compressionMode
	int32_t ____compressionMode_9;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ZlibBaseStream::_level
	int32_t ____level_10;
	// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::_leaveOpen
	bool ____leaveOpen_11;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::_workingBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____workingBuffer_12;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_bufferSize
	int32_t ____bufferSize_13;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::_buf1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buf1_14;
	// System.IO.Stream Pathfinding.Ionic.Zlib.ZlibBaseStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_15;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ZlibBaseStream::Strategy
	int32_t ___Strategy_16;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Zlib.ZlibBaseStream::crc
	CRC32_t3948BCF0A787E0F5D4C246CB25C8E853EC4885FE* ___crc_17;
	// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipFileName
	String_t* ____GzipFileName_18;
	// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipComment
	String_t* ____GzipComment_19;
	// System.DateTime Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipMtime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____GzipMtime_20;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_gzipHeaderByteCount
	int32_t ____gzipHeaderByteCount_21;
	// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::nomoreinput
	bool ___nomoreinput_22;
};

// Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0
struct U3CGetEnumeratorU3Ec__Iterator0_t9E196F83EB7DD52B292C7D87788835EDA6EA81F6  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::<<$$>>__0
	Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740 ___U3CU3CU24U24U3EU3E__0_0;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::<e>__1
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* ___U3CeU3E__1_1;
	// System.Int32 Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::$PC
	int32_t ___U24PC_2;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::$current
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* ___U24current_3;
	// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::<>f__this
	ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* ___U3CU3Ef__this_4;
};

// Pathfinding.Ionic.Zlib.GZipStream
struct GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Nullable`1<System.DateTime> Pathfinding.Ionic.Zlib.GZipStream::LastModified
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC ___LastModified_5;
	// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::_headerByteCount
	int32_t ____headerByteCount_6;
	// Pathfinding.Ionic.Zlib.ZlibBaseStream Pathfinding.Ionic.Zlib.GZipStream::_baseStream
	ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* ____baseStream_7;
	// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::_disposed
	bool ____disposed_8;
	// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::_firstReadDone
	bool ____firstReadDone_9;
	// System.String Pathfinding.Ionic.Zlib.GZipStream::_FileName
	String_t* ____FileName_10;
	// System.String Pathfinding.Ionic.Zlib.GZipStream::_Comment
	String_t* ____Comment_11;
};

struct GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_StaticFields
{
	// System.DateTime Pathfinding.Ionic.Zlib.GZipStream::_unixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____unixEpoch_12;
	// System.Text.Encoding Pathfinding.Ionic.Zlib.GZipStream::iso8859dash1
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___iso8859dash1_13;
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

// Pathfinding.Ionic.Zip.ZipException
struct ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554  : public Exception_t
{
	static const Il2CppGuid CLSID;

};

// Pathfinding.Ionic.Zlib.ZlibException
struct ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5  : public Exception_t
{
	static const Il2CppGuid CLSID;

};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc
struct CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC  : public MulticastDelegate_t
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

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
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
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
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
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
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
// Pathfinding.Ionic.Zlib.DeflateManager/Config[]
struct ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B  : public RuntimeArray
{
	ALIGN_FIELD (8) Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* m_Items[1];

	inline Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.DateTime>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::get_Values()
inline ValueCollection_t42E227C450F851F1A8675B41E3F71FB0C68AA4F8* Dictionary_2_get_Values_m76F2A753901F99051727F4F91D51F041834CEDA1 (Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t42E227C450F851F1A8675B41E3F71FB0C68AA4F8* (*) (Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Pathfinding.Ionic.Zip.ZipEntry>::GetEnumerator()
inline Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740 ValueCollection_GetEnumerator_m596A4230B4514DB6498403483BC83781ECA9F0D5 (ValueCollection_t42E227C450F851F1A8675B41E3F71FB0C68AA4F8* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740 (*) (ValueCollection_t42E227C450F851F1A8675B41E3F71FB0C68AA4F8*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Pathfinding.Ionic.Zip.ZipEntry>::Dispose()
inline void Enumerator_Dispose_mBFADC047B2B293E32E683B528DABD12BCA3EC60F (Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Pathfinding.Ionic.Zip.ZipEntry>::get_Current()
inline ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* Enumerator_get_Current_m6305EA4CA5405BA8DF9DFF8FC0D9D8EBB34BEECA_inline (Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740* __this, const RuntimeMethod* method)
{
	return ((  ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* (*) (Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Pathfinding.Ionic.Zip.ZipEntry>::MoveNext()
inline bool Enumerator_MoveNext_m402E274B6CFC9362D12272C8B6BBAE1A0EA86D56 (Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::set_ContiguousWrite(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipSegmentedStream_set_ContiguousWrite_mD8A155CB568B8723C9B0AB38D499DC6FDD26C1A5_inline (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::get_IncludedInMostRecentSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipEntry_get_IncludedInMostRecentSave_m7062A898737BD982BFC720079084879316B73BCA (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::WriteCentralDirectoryEntry(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_WriteCentralDirectoryEntry_m0AB0A6810C2213CDF389076A705F56C7BDE3A703 (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___s0, const RuntimeMethod* method) ;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_ComputedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CountingStream_get_ComputedPosition_m95EF90339C2D60BAA835F8B17742DBFF018AF4BE (CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2* __this, const RuntimeMethod* method) ;
// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CurrentSegment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zip.ZipOutput::CountEntries(System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipOutput_CountEntries_mE9FD20C78029EF9CC583AD6F1D13B046ECB6BBA4 (RuntimeObject* ____entries0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackFrame__ctor_mF49B4810DBA48473A4495CBECB76E9AE2A4C1426 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, int32_t ___skipFrames0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipException__ctor_mDAA48A04ED3243E4B83FC88566166486111CDF2D (ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Byte[] Pathfinding.Ionic.Zip.ZipOutput::GenZip64EndOfCentralDirectory(System.Int64,System.Int64,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipOutput_GenZip64EndOfCentralDirectory_m26FC4BC865C763596701B1382007F3AE75750BF0 (int64_t ___StartOfCentralDirectory0, int64_t ___EndOfCentralDirectory1, int32_t ___entryCount2, uint32_t ___numSegments3, const RuntimeMethod* method) ;
// System.Byte[] Pathfinding.Ionic.Zip.ZipOutput::GenCentralDirectoryFooter(System.Int64,System.Int64,Pathfinding.Ionic.Zip.Zip64Option,System.Int32,System.String,Pathfinding.Ionic.Zip.ZipContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipOutput_GenCentralDirectoryFooter_mA0FFB0791D30E4DD61384A472575676A640F5F44 (int64_t ___StartOfCentralDirectory0, int64_t ___EndOfCentralDirectory1, int32_t ___zip642, int32_t ___entryCount3, String_t* ___comment4, ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* ___container5, const RuntimeMethod* method) ;
// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::ComputeSegment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ZipSegmentedStream_ComputeSegment_mD986E4BDCBA3DA23F41769DC575E3E3ED55D0F7C (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, int32_t ___length0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436 (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50 (uint16_t ___value0, const RuntimeMethod* method) ;
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipContainer::get_AlternateEncodingUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipContainer_get_AlternateEncodingUsage_m59255A7FA5DE672AB051C89DC4EA2FEF8A49E354 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) ;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipContainer::get_AlternateEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipContainer_get_AlternateEncoding_mCA77E35CA37DA4E54EDECD73A68320BF5B89B19D (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) ;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipContainer::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipContainer_get_DefaultEncoding_m4CAA8E3861C2CBA935D140D65F283D34D952D3B6 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutput::GetEncoding(Pathfinding.Ionic.Zip.ZipContainer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipOutput_GetEncoding_m5083966A75BBE2AB7A30F41F45D184158369986C (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* ___container0, String_t* ___t1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF (int64_t ___value0, const RuntimeMethod* method) ;
// Pathfinding.Ionic.Crc.CrcCalculatorStream Pathfinding.Ionic.Zip.ZipEntry::InternalOpenReader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A* ZipEntry_InternalOpenReader_m6B3FB8E117C3646E95E4DF5A04AAECFC410AEF76 (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, String_t* ___password0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::SetupStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipInputStream_SetupStream_mA7F131E57DA1C962708CFB0D14A0CC6577056259 (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_Crc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CrcCalculatorStream_get_Crc_mD281563701CF17DC67789C86BD55E7780072FCE5 (CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::VerifyCrcAfterExtract(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_VerifyCrcAfterExtract_m057BBEF7B115DF90CE69FC06B820846FD21DAE46 (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, int32_t ___actualCrc320, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean Pathfinding.Ionic.Zip.ZipEntry::get_IsDirectory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ZipEntry_get_IsDirectory_m01DA105FEECA61889572228446CBC1B8A65C594C_inline (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::_InitiateCurrentEntry(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream__InitiateCurrentEntry_m7788FD9A801361824A5FC3AEE441605EECB66D4A (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, bool ___finishing0, const RuntimeMethod* method) ;
// System.String Pathfinding.Ionic.Zip.ZipEntry::get_FileName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ZipEntry_get_FileName_mFDDE59F4E3D6BB641C72661D3EDAA6DF98544CA7_inline (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB71C475BCA28DA7323863B5B6D92C0E420E89B1A (Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF* __this, String_t* ___key0, ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF*, String_t*, ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Pathfinding.Ionic.Zip.ZipEntry::WriteHeader(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_WriteHeader_m3A2C41E470A1F667B7325C660D49BA7F5A65CBAC (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___s0, int32_t ___cycle1, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::StoreRelativeOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_StoreRelativeOffset_m6032034A378488F6F56211AA58BD865CA29C3039 (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::WriteSecurityMetadata(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_WriteSecurityMetadata_mDF3065177ABF79A2DFDD611517C1C35D0AF5D9DD (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___outstream0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipEntry::PrepOutputStream(System.IO.Stream,System.Int64,Pathfinding.Ionic.Zip.CountingStream&,System.IO.Stream&,System.IO.Stream&,Pathfinding.Ionic.Crc.CrcCalculatorStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_PrepOutputStream_m3F5F425B83CB0FF24C1D181715CAE6FC9ACF8AEF (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___s0, int64_t ___streamLength1, CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2** ___outputCounter2, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** ___encryptor3, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** ___compressor4, CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A** ___output5, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zip.ZipFile::get_BufferSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_BufferSize_m9F6C115060F3AB426732DDC5E9FA99BB68D154F2_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) ;
// System.Int64 Pathfinding.Ionic.Zip.ZipFile::get_ParallelDeflateThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ZipFile_get_ParallelDeflateThreshold_m88106ED156475E9C2921540F88D4C089EA2A6468_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) ;
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::get_ParallelDeflateThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ZipOutputStream_get_ParallelDeflateThreshold_mF782CFBB59CEF5255D03AE788E8872CE219E4153_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zip.ZipFile::get_ParallelDeflateMaxBufferPairs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_ParallelDeflateMaxBufferPairs_m0DE7AC098AB51C005EBB65FD858CE48EBA4AC0AA_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::get_ParallelDeflateMaxBufferPairs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_ParallelDeflateMaxBufferPairs_mEF97CFBC4346C3EDFB66F53A4972C96EA949DFF0_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zip.ZipFile::get_CodecBufferSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_CodecBufferSize_m821AEA9BE2186C9AFCCF24727184A88EB8129C9B_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zip.ZipInputStream::get_CodecBufferSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipInputStream_get_CodecBufferSize_m9BC2946243E1F88038702761DD08A58FD517905F_inline (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::get_CodecBufferSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_CodecBufferSize_m27C21C9848C6D833B5696CA91C40CF98579CF8D3_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) ;
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipFile::get_Strategy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_Strategy_m3332E81555D73EFDA16B50644CDCC44AB2968AFD_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) ;
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipOutputStream::get_Strategy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_Strategy_m78B431CAE1D7160D484207D829F784CE9F8E39BA_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) ;
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipFile::get_UseZip64WhenSaving()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_UseZip64WhenSaving_mC8C74A694A9B5D4F5CAB2B4F971AA6D512B005E9_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) ;
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipOutputStream::get_EnableZip64()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_EnableZip64_m1B1853D50B763037EE09B8F7D3F708B15882DB0C_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) ;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::get_AlternateEncoding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipFile_get_AlternateEncoding_mF3A845FB328E30AF47DED308FE42F214DC04095F_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) ;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutputStream::get_AlternateEncoding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipOutputStream_get_AlternateEncoding_mB437AA52388393AB59036A74A76C1D1C77BD10F5_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) ;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipFile::get_DefaultEncoding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipFile_get_DefaultEncoding_m6B1E00EBA64198B11471F7C9C2265A0B7259B071_inline (const RuntimeMethod* method) ;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutputStream::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipOutputStream_get_DefaultEncoding_m00C76CF98685407DB642F30CA2A612C2BBF34C28 (const RuntimeMethod* method) ;
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipFile::get_AlternateEncodingUsage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_AlternateEncodingUsage_m23CAA1AEF95A1FB915535FEA2012970B5782C633_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) ;
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipOutputStream::get_AlternateEncodingUsage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_AlternateEncodingUsage_m1E4A6718DEAF888FE9B86ACB213970FE012DD3C6_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) ;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipFile::get_ReadStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ZipFile_get_ReadStream_m4CC70D2839CF163ABDC584C8D6C1E9A31793675B (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) ;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipInputStream::get_ReadStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ZipInputStream_get_ReadStream_m2DBE93A1A1F536F51B515EEBFC395C1E3725902A_inline (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream__ctor_m995B2358AD663DB75063D0B4DFFD7EA50546712C (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::set_CurrentSegment(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream_set_CurrentSegment_mC782BAEFBA9BA6A472834468A5F0F39F8FD6E94D (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::_SetReadStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream__SetReadStream_mA0DE06019265AC50216F21AB00F999AED3A3A5FC (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::_SetWriteStream(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream__SetWriteStream_m975E5835D6F0F90F610D60DE720DA7F629D8F191 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, uint32_t ___increment0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Open_mEF604EACCC9E06F86B94DC87491607A02C1C778E (String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, const RuntimeMethod* method) ;
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_NameForSegment(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipSegmentedStream__NameForSegment_mDFB44EFC22F2CD1F10F4247D71F2B562E78231B3 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, uint32_t ___diskNumber0, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CurrentName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipSegmentedStream_get_CurrentName_mD6F1E5C90E77F7A6C75478144C3E497196139835 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m32C8C37542B7A02A2F643E3B816D16ABE690FF50 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Move_mF906DE37D2EF2E47B2DF79FA50C765859AFB9ECF (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zip.SharedUtilities::CreateAndOpenUniqueTempFile(System.String,System.IO.Stream&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedUtilities_CreateAndOpenUniqueTempFile_m0D11AF9EEF2AE828F58DBE051DCD574E14B9ABB0 (String_t* ___dir0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** ___fs1, String_t** ___filename2, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_ContiguousWrite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ZipSegmentedStream_get_ContiguousWrite_mFE132D1088CBE7C6098E723305637CFF63E4595F_inline (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) ;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::InternalGetTempFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedUtilities_InternalGetTempFileName_m407DBBF624E2875500A679B98510FFF90C04B9AC (const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___disposing0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.Tree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__ctor_m3D91969385DCCF1898B1DE37E92028643A9ACFC3 (Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// Pathfinding.Ionic.Zlib.DeflateManager/Config Pathfinding.Ionic.Zlib.DeflateManager/Config::Lookup(Pathfinding.Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* Config_Lookup_m212CA8F435B33FBB3562219B3735D8DBC286B601 (int32_t ___level0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::SetDeflater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_SetDeflater_m097FA31F2E28098BB28DA6D58398FEBCD3C54691 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeBlocks_mA151E3F991162090B097C68DB37ADEDDDAEA5A3E (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__IsSmaller_mC430C0367B7EC3ECE1A0DCAFC43C6AAFA9E22C77 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___n1, int32_t ___m2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___depth3, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::scan_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_scan_tree_m994257BBB76224E0ADB2B282F137D1C635795148 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.Tree::build_tree(Pathfinding.Ionic.Zlib.DeflateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_build_tree_mC6D8C80CDEAF088B4013EC8E2F57BA23993B0ED3 (Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* __this, DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* ___s0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___value0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_tree_mC034FBD94C0FF6AC4319DAD4D1A09643F01F4A22 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___c0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree1, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_flush_mAD34CBC465F8A77BCCDEB9958EA762AD0FFD2914 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.Tree::DistanceCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_DistanceCode_mC8379D324E34BCD2C415AB8910412EEFA24278C5 (int32_t ___dist0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_windup_m78C22AFB60E635BD87A19EDD9274639866E4B7BD (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_put_bytes_mA6B67EEC738D2D0310FB96CDE6EDB5E251C0CCE2 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_flush_block_m930F881EF1EC6D5455E71CFEF4E6365E9A4A65FA (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.ZlibCodec::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec_flush_pending_mA2FFE50F3FC2382C73EA7C6233833FA00841B388 (ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_fillWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__fillWindow_mACFC61F659E4DA1B7C0861972ECA65BA0A5AF628 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_flush_block_only_mA3B330A93A50BF5BB359D99600B77BB070E2E128 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, bool ___eof0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_copy_block_m10270CC8A7EA37E0D7FB7D1DF99C962A2682CD43 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_data_type_mB472D314E679A3258E888A60B321167C547EC9DA (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::build_bl_tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_build_bl_tree_mE0BAEF5CF5F384A36586DDC3FF9E1F1E2F51FC30 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_stored_block_m1E24ACF269B0391AF8AAADE3A5E4C90FE7307723 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_compressed_block_m031020CB4C2003FF8193E69F01B5BCD8D900EF09 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___ltree0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dtree1, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_all_trees_m2C1F4F213945BB5B5DFB9CC0E77ACB037181D350 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_read_buf_mDD2B588841B17A6DB911A3EFFAFB146F1B50B7A5 (ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_longest_match_mA5AD89613E7A03F0C3594EB24F1BD394267A05DE (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___cur_match0, const RuntimeMethod* method) ;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__tr_tally_mB35B4023D563CA9DA849D34BE6909DE05158E389 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,Pathfinding.Ionic.Zlib.CompressionLevel,System.Int32,System.Int32,Pathfinding.Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mCA2164C2F23AE209047666CD039C27A5B502F3BF (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___codec0, int32_t ___level1, int32_t ___windowBits2, int32_t ___memLevel3, int32_t ___strategy4, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.ZlibException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibException__ctor_mA8D4ECB35C7895A49FAF40B8A3890E968A5DA389 (ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_Reset_mB644E7D14DE3A5856AD37402C81B54A93F738160 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_mE4C46D1E78469160F7E7A797AA6651284582274B_inline (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.UInt32 Pathfinding.Ionic.Zlib.Adler::Adler32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Adler_Adler32_m9B77BE46DC62C9A81F11A8400D0EF60EB3ADE835 (uint32_t ___adler0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeTreeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeTreeData_m3658E304084025D28B30A09E2864957B6DCCA878 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeLazyMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeLazyMatch_m58AD0CF1A2B42E70949AC78FFA1F46050C476E68 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressFunc__ctor_m0D9D5756533CB77A8E8F3F0A2E400A39A48EEDF7 (CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::Invoke(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508_inline (CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* __this, int32_t ___flush0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_align_m81FBAF76C5D7EA3865F33FAC70DEDEC406AEA4F1 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateManager/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Pathfinding.Ionic.Zlib.DeflateFlavor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187 (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* __this, int32_t ___goodLength0, int32_t ___maxLazy1, int32_t ___niceLength2, int32_t ___maxChainLength3, int32_t ___flavor4, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mEC6093D583F0E7ECAF44BB7CDAEB48010250701F (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,Pathfinding.Ionic.Zlib.ZlibStreamFlavor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream__ctor_m6013326237019DF67534F598A921FBF9C4E53B67 (ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___compressionMode1, int32_t ___level2, int32_t ___flavor3, bool ___leaveOpen4, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_GetEncoding_mBF5A2BA804B4917644BBEC5A4230D0854236D8FE (String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_FileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_FileName_m0386221D053C993552FFF435F5B57879FBA8F342 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Comment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Comment_mE0BD7B9614B806CFBAC3ABD914C9229E1F112626 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get__wantCompress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get__wantCompress_mC699027E7DDCE5303CF797EDD7D8E4234F1CAAE7 (ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* __this, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::EmitHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EmitHeader_m3875C148E0B1916F3F5782E90532D2411C982456 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) ;
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_Comment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_Comment_m8BC7A090C67BBC0ECDB028B8757D6DCE488652BC_inline (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) ;
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_FileName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_FileName_m4E015DF2F74E0D2B3B177EB64B6CA39259193EC3_inline (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline)(__this, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
inline void Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.DateTime>::get_Value()
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_gshared)(__this, method);
}
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.SharedUtils::URShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SharedUtils_URShift_m83556B5C9D5FC9E7F4C81BDCFA31C2A98AD02CF9 (int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.InfTree::initWorkArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree_initWorkArea_m6DD941E5596CBC18E2CCBC1A028A566471954F79 (InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* __this, int32_t ___vsize0, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m46604697016D75115BDD7C3552A2C06A948D4536 (InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___d4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___e5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___t6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m7, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp8, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hn9, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v10, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes__ctor_mE01CA9C60A00AA8BC86F9B0DEE76C222FCD553DB (InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* __this, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.InfTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__ctor_mA9A896F4CFBB75C5881D31739C7033F28CB703D4 (InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* __this, const RuntimeMethod* method) ;
// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InflateBlocks_Reset_m675E7761BD0F90D1A4957E2C054B2FE21135C781 (InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* __this, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Flush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A (InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* __this, int32_t ___r0, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_mFF391B97328B30722D213C177B7616F5C2B89DAB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd1, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___tl2, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___td3, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___z4, const RuntimeMethod* method) ;
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes_Init_mF3CD0EC0C9F9ECCFE9A65D2F168EA7773505D323 (InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m4E67A9E1B4463EEAA3BC6B626FC34E6C84C98505 (InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bb1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tb2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp3, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___z4, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m69D377585D8B016479250A8B41B8FCB30E548CBB (InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp7, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___z8, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::Process(Pathfinding.Ionic.Zlib.InflateBlocks,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_Process_m46D3628A94CFCA79BA82AF6E6F0312356CAA9B79 (InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* __this, InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* ___blocks0, int32_t ___r1, const RuntimeMethod* method) ;
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Pathfinding.Ionic.Zlib.InflateBlocks,Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_InflateFast_m794F62B15BA1DDE12233C9208EE42467D10791AD (InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* ___s6, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___z7, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ec__Iterator0__ctor_m1BC61ED56FBB87A1FA0EED8AE34A84F45487810E (U3CGetEnumeratorU3Ec__Iterator0_t9E196F83EB7DD52B292C7D87788835EDA6EA81F6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::System.Collections.Generic.IEnumerator<Pathfinding.Ionic.Zip.ZipEntry>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CPathfinding_Ionic_Zip_ZipEntryU3E_get_Current_mC9F36A681972D0962AF3434947947A5F69A29E2B (U3CGetEnumeratorU3Ec__Iterator0_t9E196F83EB7DD52B292C7D87788835EDA6EA81F6* __this, const RuntimeMethod* method) 
{
	{
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_0 = __this->___U24current_3;
		return L_0;
	}
}
// System.Object Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_mC1BDBFFE76412131E8C3313F9DBF0FA24C9B18A8 (U3CGetEnumeratorU3Ec__Iterator0_t9E196F83EB7DD52B292C7D87788835EDA6EA81F6* __this, const RuntimeMethod* method) 
{
	{
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_0 = __this->___U24current_3;
		return L_0;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m67EA0D1C368FFD58ACB4AF41A0DB8BEC624C57F4 (U3CGetEnumeratorU3Ec__Iterator0_t9E196F83EB7DD52B292C7D87788835EDA6EA81F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m76F2A753901F99051727F4F91D51F041834CEDA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBFADC047B2B293E32E683B528DABD12BCA3EC60F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m402E274B6CFC9362D12272C8B6BBAE1A0EA86D56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6305EA4CA5405BA8DF9DFF8FC0D9D8EBB34BEECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m596A4230B4514DB6498403483BC83781ECA9F0D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U24PC_2;
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_00af;
	}

IL_0023:
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_2 = __this->___U3CU3Ef__this_4;
		NullCheck(L_2);
		Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF* L_3 = L_2->____entries_12;
		NullCheck(L_3);
		ValueCollection_t42E227C450F851F1A8675B41E3F71FB0C68AA4F8* L_4;
		L_4 = Dictionary_2_get_Values_m76F2A753901F99051727F4F91D51F041834CEDA1(L_3, Dictionary_2_get_Values_m76F2A753901F99051727F4F91D51F041834CEDA1_RuntimeMethod_var);
		NullCheck(L_4);
		Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740 L_5;
		L_5 = ValueCollection_GetEnumerator_m596A4230B4514DB6498403483BC83781ECA9F0D5(L_4, ValueCollection_GetEnumerator_m596A4230B4514DB6498403483BC83781ECA9F0D5_RuntimeMethod_var);
		__this->___U3CU3CU24U24U3EU3E__0_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3CU24U24U3EU3E__0_0))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3CU24U24U3EU3E__0_0))->____currentValue_3), (void*)NULL);
		#endif
		V_0 = ((int32_t)-3);
	}

IL_0041:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_1;
					if (!L_6)
					{
						goto IL_0096;
					}
				}
				{
					return;
				}

IL_0096:
				{
					Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740* L_7 = (&__this->___U3CU3CU24U24U3EU3E__0_0);
					Enumerator_Dispose_mBFADC047B2B293E32E683B528DABD12BCA3EC60F(L_7, Enumerator_Dispose_mBFADC047B2B293E32E683B528DABD12BCA3EC60F_RuntimeMethod_var);
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)

IL_0041_1:
			{
				uint32_t L_8 = V_0;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)))
				{
					case 0:
					{
						goto IL_007d_1;
					}
				}
			}
			{
				goto IL_007d_1;
			}

IL_0052_1:
			{
				Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740* L_9 = (&__this->___U3CU3CU24U24U3EU3E__0_0);
				ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_10;
				L_10 = Enumerator_get_Current_m6305EA4CA5405BA8DF9DFF8FC0D9D8EBB34BEECA_inline(L_9, Enumerator_get_Current_m6305EA4CA5405BA8DF9DFF8FC0D9D8EBB34BEECA_RuntimeMethod_var);
				__this->___U3CeU3E__1_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E__1_1), (void*)L_10);
				ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_11 = __this->___U3CeU3E__1_1;
				__this->___U24current_3 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U24current_3), (void*)L_11);
				__this->___U24PC_2 = 1;
				V_1 = (bool)1;
				goto IL_00b1;
			}

IL_007d_1:
			{
				Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740* L_12 = (&__this->___U3CU3CU24U24U3EU3E__0_0);
				bool L_13;
				L_13 = Enumerator_MoveNext_m402E274B6CFC9362D12272C8B6BBAE1A0EA86D56(L_12, Enumerator_MoveNext_m402E274B6CFC9362D12272C8B6BBAE1A0EA86D56_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0052_1;
				}
			}
			{
				goto IL_00a8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00af:
	{
		return (bool)0;
	}

IL_00b1:
	{
		return (bool)1;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m7F8B26932BF488AC378D2E55CCD932B559E3A8A4 (U3CGetEnumeratorU3Ec__Iterator0_t9E196F83EB7DD52B292C7D87788835EDA6EA81F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBFADC047B2B293E32E683B528DABD12BCA3EC60F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U24PC_2;
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_0038;
	}

IL_0021:
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_tE7DCAE707D457752B16CAB23615F7C1B4583E740* L_2 = (&__this->___U3CU3CU24U24U3EU3E__0_0);
				Enumerator_Dispose_mBFADC047B2B293E32E683B528DABD12BCA3EC60F(L_2, Enumerator_Dispose_mBFADC047B2B293E32E683B528DABD12BCA3EC60F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)

IL_0021_1:
			goto IL_0038;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ec__Iterator0_Reset_mFBDFA58F84D8FCA4A190E9D97F8BBE52C4DE7E3F (U3CGetEnumeratorU3Ec__Iterator0_t9E196F83EB7DD52B292C7D87788835EDA6EA81F6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ec__Iterator0_Reset_mFBDFA58F84D8FCA4A190E9D97F8BBE52C4DE7E3F_RuntimeMethod_var)));
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
// System.Boolean Pathfinding.Ionic.Zip.ZipOutput::WriteCentralDirectoryStructure(System.IO.Stream,System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>,System.UInt32,Pathfinding.Ionic.Zip.Zip64Option,System.String,Pathfinding.Ionic.Zip.ZipContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipOutput_WriteCentralDirectoryStructure_mB2DCF5BEA0C40344443337551EAEB23AFF6DCB58 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___s0, RuntimeObject* ___entries1, uint32_t ___numSegments2, int32_t ___zip643, String_t* ___comment4, ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* ___container5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t42D65C85BA517BFEFCEC34EF0C6A52FA91725E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBE44EE0A9035203AEF336815D151D515E4DE208E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* V_0 = NULL;
	int64_t V_1 = 0;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2* V_6 = NULL;
	int64_t V_7 = 0;
	int64_t V_8 = 0;
	uint32_t V_9 = 0;
	int64_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_13 = NULL;
	StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* V_14 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_15 = NULL;
	uint32_t V_16 = 0;
	int32_t V_17 = 0;
	uint16_t V_18 = 0;
	int32_t V_19 = 0;
	int64_t G_B19_0 = 0;
	uint32_t G_B22_0 = 0;
	int32_t G_B27_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___s0;
		V_0 = ((ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2*)IsInstClass((RuntimeObject*)L_0, ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2_il2cpp_TypeInfo_var));
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_2 = V_0;
		NullCheck(L_2);
		ZipSegmentedStream_set_ContiguousWrite_mD8A155CB568B8723C9B0AB38D499DC6FDD26C1A5_inline(L_2, (bool)1, NULL);
	}

IL_0014:
	{
		V_1 = ((int64_t)0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_3, NULL);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_2;
					if (!L_4)
					{
						goto IL_008e;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_008e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_6 = ___entries1;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Pathfinding.Ionic.Zip.ZipEntry>::GetEnumerator() */, IEnumerable_1_t42D65C85BA517BFEFCEC34EF0C6A52FA91725E6D_il2cpp_TypeInfo_var, L_6);
				V_3 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0055_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_8 = V_3;
							if (!L_8)
							{
								goto IL_0061_1;
							}
						}
						{
							RuntimeObject* L_9 = V_3;
							NullCheck(L_9);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
						}

IL_0061_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0045_2;
					}

IL_0029_2:
					{
						RuntimeObject* L_10 = V_3;
						NullCheck(L_10);
						ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_11;
						L_11 = InterfaceFuncInvoker0< ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Pathfinding.Ionic.Zip.ZipEntry>::get_Current() */, IEnumerator_1_tBE44EE0A9035203AEF336815D151D515E4DE208E_il2cpp_TypeInfo_var, L_10);
						V_4 = L_11;
						ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_12 = V_4;
						NullCheck(L_12);
						bool L_13;
						L_13 = ZipEntry_get_IncludedInMostRecentSave_m7062A898737BD982BFC720079084879316B73BCA(L_12, NULL);
						if (!L_13)
						{
							goto IL_0045_2;
						}
					}
					{
						ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_14 = V_4;
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = V_2;
						NullCheck(L_14);
						ZipEntry_WriteCentralDirectoryEntry_m0AB0A6810C2213CDF389076A705F56C7BDE3A703(L_14, L_15, NULL);
					}

IL_0045_2:
					{
						RuntimeObject* L_16 = V_3;
						NullCheck(L_16);
						bool L_17;
						L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
						if (L_17)
						{
							goto IL_0029_2;
						}
					}
					{
						goto IL_0062_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0062_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_18 = V_2;
				NullCheck(L_18);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
				L_19 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(43 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_18);
				V_5 = L_19;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = ___s0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_5;
				NullCheck(L_22);
				NullCheck(L_20);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, ((int32_t)(((RuntimeArray*)L_22)->max_length)));
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_5;
				NullCheck(L_23);
				V_1 = ((int64_t)((int32_t)(((RuntimeArray*)L_23)->max_length)));
				goto IL_008f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = ___s0;
		V_6 = ((CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2*)IsInstClass((RuntimeObject*)L_24, CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2_il2cpp_TypeInfo_var));
		CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2* L_25 = V_6;
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2* L_26 = V_6;
		NullCheck(L_26);
		int64_t L_27;
		L_27 = CountingStream_get_ComputedPosition_m95EF90339C2D60BAA835F8B17742DBFF018AF4BE(L_26, NULL);
		G_B19_0 = L_27;
		goto IL_00b0;
	}

IL_00aa:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28 = ___s0;
		NullCheck(L_28);
		int64_t L_29;
		L_29 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_28);
		G_B19_0 = L_29;
	}

IL_00b0:
	{
		V_7 = G_B19_0;
		int64_t L_30 = V_7;
		int64_t L_31 = V_1;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_30, L_31));
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_32 = V_0;
		if (!L_32)
		{
			goto IL_00c9;
		}
	}
	{
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_33 = V_0;
		NullCheck(L_33);
		uint32_t L_34;
		L_34 = ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline(L_33, NULL);
		G_B22_0 = L_34;
		goto IL_00ca;
	}

IL_00c9:
	{
		G_B22_0 = ((uint32_t)(0));
	}

IL_00ca:
	{
		V_9 = G_B22_0;
		int64_t L_35 = V_7;
		int64_t L_36 = V_8;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_35, L_36));
		RuntimeObject* L_37 = ___entries1;
		int32_t L_38;
		L_38 = ZipOutput_CountEntries_mE9FD20C78029EF9CC583AD6F1D13B046ECB6BBA4(L_37, NULL);
		V_11 = L_38;
		int32_t L_39 = ___zip643;
		if ((((int32_t)L_39) == ((int32_t)2)))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_40 = V_11;
		if ((((int32_t)L_40) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_00ff;
		}
	}
	{
		int64_t L_41 = V_10;
		if ((((int64_t)L_41) > ((int64_t)((int64_t)(uint64_t)((uint32_t)(-1))))))
		{
			goto IL_00ff;
		}
	}
	{
		int64_t L_42 = V_8;
		G_B27_0 = ((((int64_t)L_42) > ((int64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))? 1 : 0);
		goto IL_0100;
	}

IL_00ff:
	{
		G_B27_0 = 1;
	}

IL_0100:
	{
		V_12 = (bool)G_B27_0;
		V_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_01f7;
		}
	}
	{
		int32_t L_44 = ___zip643;
		if (L_44)
		{
			goto IL_014b;
		}
	}
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_45 = (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_il2cpp_TypeInfo_var)));
		NullCheck(L_45);
		StackFrame__ctor_mF49B4810DBA48473A4495CBECB76E9AE2A4C1426(L_45, 1, NULL);
		V_14 = L_45;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_46 = V_14;
		NullCheck(L_46);
		MethodBase_t* L_47;
		L_47 = VirtualFuncInvoker0< MethodBase_t* >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_46);
		NullCheck(L_47);
		Type_t* L_48;
		L_48 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_47);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))))
		{
			goto IL_0140;
		}
	}
	{
		ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554* L_51 = (ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554_il2cpp_TypeInfo_var)));
		NullCheck(L_51);
		ZipException__ctor_mDAA48A04ED3243E4B83FC88566166486111CDF2D(L_51, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0392F2218F79B257D0D256B24AF81BF739615932)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutput_WriteCentralDirectoryStructure_mB2DCF5BEA0C40344443337551EAEB23AFF6DCB58_RuntimeMethod_var)));
	}

IL_0140:
	{
		ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554* L_52 = (ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554_il2cpp_TypeInfo_var)));
		NullCheck(L_52);
		ZipException__ctor_mDAA48A04ED3243E4B83FC88566166486111CDF2D(L_52, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFB2B96131D663835BBCCB259C113F21EA8F52AAA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutput_WriteCentralDirectoryStructure_mB2DCF5BEA0C40344443337551EAEB23AFF6DCB58_RuntimeMethod_var)));
	}

IL_014b:
	{
		int64_t L_53 = V_8;
		int64_t L_54 = V_7;
		int32_t L_55 = V_11;
		uint32_t L_56 = ___numSegments2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57;
		L_57 = ZipOutput_GenZip64EndOfCentralDirectory_m26FC4BC865C763596701B1382007F3AE75750BF0(L_53, L_54, L_55, L_56, NULL);
		V_15 = L_57;
		int64_t L_58 = V_8;
		int64_t L_59 = V_7;
		int32_t L_60 = ___zip643;
		int32_t L_61 = V_11;
		String_t* L_62 = ___comment4;
		ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* L_63 = ___container5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64;
		L_64 = ZipOutput_GenCentralDirectoryFooter_mA0FFB0791D30E4DD61384A472575676A640F5F44(L_58, L_59, L_60, L_61, L_62, L_63, NULL);
		V_13 = L_64;
		uint32_t L_65 = V_9;
		if (!L_65)
		{
			goto IL_01e5;
		}
	}
	{
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_66 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_15;
		NullCheck(L_67);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_13;
		NullCheck(L_68);
		NullCheck(L_66);
		uint32_t L_69;
		L_69 = ZipSegmentedStream_ComputeSegment_mD986E4BDCBA3DA23F41769DC575E3E3ED55D0F7C(L_66, ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_67)->max_length)), ((int32_t)(((RuntimeArray*)L_68)->max_length)))), NULL);
		V_16 = L_69;
		V_17 = ((int32_t)16);
		uint32_t L_70 = V_16;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71;
		L_71 = BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436(L_70, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_15;
		int32_t L_73 = V_17;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_71, 0, (RuntimeArray*)L_72, L_73, 4, NULL);
		int32_t L_74 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_74, 4));
		uint32_t L_75 = V_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76;
		L_76 = BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436(L_75, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = V_15;
		int32_t L_78 = V_17;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_76, 0, (RuntimeArray*)L_77, L_78, 4, NULL);
		V_17 = ((int32_t)60);
		uint32_t L_79 = V_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80;
		L_80 = BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436(L_79, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = V_15;
		int32_t L_82 = V_17;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_80, 0, (RuntimeArray*)L_81, L_82, 4, NULL);
		int32_t L_83 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_83, 4));
		int32_t L_84 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_84, 8));
		uint32_t L_85 = V_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86;
		L_86 = BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436(L_85, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = V_15;
		int32_t L_88 = V_17;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_86, 0, (RuntimeArray*)L_87, L_88, 4, NULL);
	}

IL_01e5:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_89 = ___s0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = V_15;
		NullCheck(L_91);
		NullCheck(L_89);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_89, L_90, 0, ((int32_t)(((RuntimeArray*)L_91)->max_length)));
		goto IL_0209;
	}

IL_01f7:
	{
		int64_t L_92 = V_8;
		int64_t L_93 = V_7;
		int32_t L_94 = ___zip643;
		int32_t L_95 = V_11;
		String_t* L_96 = ___comment4;
		ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* L_97 = ___container5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98;
		L_98 = ZipOutput_GenCentralDirectoryFooter_mA0FFB0791D30E4DD61384A472575676A640F5F44(L_92, L_93, L_94, L_95, L_96, L_97, NULL);
		V_13 = L_98;
	}

IL_0209:
	{
		uint32_t L_99 = V_9;
		if (!L_99)
		{
			goto IL_0250;
		}
	}
	{
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_100 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = V_13;
		NullCheck(L_101);
		NullCheck(L_100);
		uint32_t L_102;
		L_102 = ZipSegmentedStream_ComputeSegment_mD986E4BDCBA3DA23F41769DC575E3E3ED55D0F7C(L_100, ((int32_t)(((RuntimeArray*)L_101)->max_length)), NULL);
		V_18 = (uint16_t)((int32_t)(uint16_t)L_102);
		V_19 = 4;
		uint16_t L_103 = V_18;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104;
		L_104 = BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50(L_103, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = V_13;
		int32_t L_106 = V_19;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_104, 0, (RuntimeArray*)L_105, L_106, 2, NULL);
		int32_t L_107 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_107, 2));
		uint16_t L_108 = V_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109;
		L_109 = BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50(L_108, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = V_13;
		int32_t L_111 = V_19;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_109, 0, (RuntimeArray*)L_110, L_111, 2, NULL);
		int32_t L_112 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_112, 2));
	}

IL_0250:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_113 = ___s0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = V_13;
		NullCheck(L_115);
		NullCheck(L_113);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_113, L_114, 0, ((int32_t)(((RuntimeArray*)L_115)->max_length)));
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_116 = V_0;
		if (!L_116)
		{
			goto IL_026a;
		}
	}
	{
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_117 = V_0;
		NullCheck(L_117);
		ZipSegmentedStream_set_ContiguousWrite_mD8A155CB568B8723C9B0AB38D499DC6FDD26C1A5_inline(L_117, (bool)0, NULL);
	}

IL_026a:
	{
		bool L_118 = V_12;
		return L_118;
	}
}
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutput::GetEncoding(Pathfinding.Ionic.Zip.ZipContainer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipOutput_GetEncoding_m5083966A75BBE2AB7A30F41F45D184158369986C (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* ___container0, String_t* ___t1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* L_0 = ___container0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ZipContainer_get_AlternateEncodingUsage_m59255A7FA5DE672AB051C89DC4EA2FEF8A49E354(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_001e;
			}
		}
	}
	{
		goto IL_002c;
	}

IL_001e:
	{
		ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* L_3 = ___container0;
		NullCheck(L_3);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = ZipContainer_get_AlternateEncoding_mCA77E35CA37DA4E54EDECD73A68320BF5B89B19D(L_3, NULL);
		return L_4;
	}

IL_0025:
	{
		ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* L_5 = ___container0;
		NullCheck(L_5);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = ZipContainer_get_DefaultEncoding_m4CAA8E3861C2CBA935D140D65F283D34D952D3B6(L_5, NULL);
		return L_6;
	}

IL_002c:
	{
		ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* L_7 = ___container0;
		NullCheck(L_7);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = ZipContainer_get_DefaultEncoding_m4CAA8E3861C2CBA935D140D65F283D34D952D3B6(L_7, NULL);
		V_1 = L_8;
		String_t* L_9 = ___t1;
		if (L_9)
		{
			goto IL_003b;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10 = V_1;
		return L_10;
	}

IL_003b:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11 = V_1;
		String_t* L_12 = ___t1;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, L_12);
		V_2 = L_13;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		NullCheck(L_16);
		NullCheck(L_14);
		String_t* L_17;
		L_17 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, ((int32_t)(((RuntimeArray*)L_16)->max_length)));
		V_3 = L_17;
		String_t* L_18 = V_3;
		String_t* L_19 = ___t1;
		NullCheck(L_18);
		bool L_20;
		L_20 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_005d;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_21 = V_1;
		return L_21;
	}

IL_005d:
	{
		ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* L_22 = ___container0;
		NullCheck(L_22);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
		L_23 = ZipContainer_get_AlternateEncoding_mCA77E35CA37DA4E54EDECD73A68320BF5B89B19D(L_22, NULL);
		return L_23;
	}
}
// System.Byte[] Pathfinding.Ionic.Zip.ZipOutput::GenCentralDirectoryFooter(System.Int64,System.Int64,Pathfinding.Ionic.Zip.Zip64Option,System.Int32,System.String,Pathfinding.Ionic.Zip.ZipContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipOutput_GenCentralDirectoryFooter_mA0FFB0791D30E4DD61384A472575676A640F5F44 (int64_t ___StartOfCentralDirectory0, int64_t ___EndOfCentralDirectory1, int32_t ___zip642, int32_t ___entryCount3, String_t* ___comment4, ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* ___container5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int16_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int64_t V_8 = 0;
	{
		ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* L_0 = ___container5;
		String_t* L_1 = ___comment4;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = ZipOutput_GetEncoding_m5083966A75BBE2AB7A30F41F45D184158369986C(L_0, L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		V_2 = ((int32_t)22);
		V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_4 = (int16_t)0;
		String_t* L_3 = ___comment4;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_4 = ___comment4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6 = V_0;
		String_t* L_7 = ___comment4;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_7);
		V_3 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_3;
		NullCheck(L_9);
		V_4 = ((int16_t)((int32_t)(((RuntimeArray*)L_9)->max_length)));
	}

IL_0036:
	{
		int32_t L_10 = V_2;
		int16_t L_11 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, (int32_t)L_11));
		int32_t L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_5 = L_13;
		V_6 = 0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436(((int32_t)101010256), NULL);
		V_7 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_5;
		int32_t L_17 = V_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, L_17, 4, NULL);
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_18, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		int32_t L_20 = V_6;
		int32_t L_21 = L_20;
		V_6 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_5;
		int32_t L_23 = V_6;
		int32_t L_24 = L_23;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_5;
		int32_t L_26 = V_6;
		int32_t L_27 = L_26;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_5;
		int32_t L_29 = V_6;
		int32_t L_30 = L_29;
		V_6 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint8_t)0);
		int32_t L_31 = ___entryCount3;
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)65535))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_32 = ___zip642;
		if ((!(((uint32_t)L_32) == ((uint32_t)2))))
		{
			goto IL_00c9;
		}
	}

IL_00a3:
	{
		V_1 = 0;
		goto IL_00bd;
	}

IL_00aa:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_5;
		int32_t L_34 = V_6;
		int32_t L_35 = L_34;
		V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint8_t)((int32_t)255));
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00bd:
	{
		int32_t L_37 = V_1;
		if ((((int32_t)L_37) < ((int32_t)4)))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_0115;
	}

IL_00c9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_5;
		int32_t L_39 = V_6;
		int32_t L_40 = L_39;
		V_6 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = ___entryCount3;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_41&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_5;
		int32_t L_43 = V_6;
		int32_t L_44 = L_43;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = ___entryCount3;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_45&((int32_t)65280)))>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_5;
		int32_t L_47 = V_6;
		int32_t L_48 = L_47;
		V_6 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = ___entryCount3;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_49&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_5;
		int32_t L_51 = V_6;
		int32_t L_52 = L_51;
		V_6 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		int32_t L_53 = ___entryCount3;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_53&((int32_t)65280)))>>8))));
	}

IL_0115:
	{
		int64_t L_54 = ___EndOfCentralDirectory1;
		int64_t L_55 = ___StartOfCentralDirectory0;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_54, L_55));
		int64_t L_56 = V_8;
		if ((((int64_t)L_56) >= ((int64_t)((int64_t)(uint64_t)((uint32_t)(-1))))))
		{
			goto IL_012b;
		}
	}
	{
		int64_t L_57 = ___StartOfCentralDirectory0;
		if ((((int64_t)L_57) < ((int64_t)((int64_t)(uint64_t)((uint32_t)(-1))))))
		{
			goto IL_0151;
		}
	}

IL_012b:
	{
		V_1 = 0;
		goto IL_0145;
	}

IL_0132:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_5;
		int32_t L_59 = V_6;
		int32_t L_60 = L_59;
		V_6 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint8_t)((int32_t)255));
		int32_t L_61 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0145:
	{
		int32_t L_62 = V_1;
		if ((((int32_t)L_62) < ((int32_t)8)))
		{
			goto IL_0132;
		}
	}
	{
		goto IL_01fd;
	}

IL_0151:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_5;
		int32_t L_64 = V_6;
		int32_t L_65 = L_64;
		V_6 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int64_t L_66 = V_8;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_66&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_5;
		int32_t L_68 = V_6;
		int32_t L_69 = L_68;
		V_6 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		int64_t L_70 = V_8;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_70&((int64_t)((int32_t)65280))))>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_5;
		int32_t L_72 = V_6;
		int32_t L_73 = L_72;
		V_6 = ((int32_t)il2cpp_codegen_add(L_73, 1));
		int64_t L_74 = V_8;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_74&((int64_t)((int32_t)16711680))))>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_5;
		int32_t L_76 = V_6;
		int32_t L_77 = L_76;
		V_6 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		int64_t L_78 = V_8;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_78&((int64_t)(uint64_t)((uint32_t)((int32_t)-16777216)))))>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_5;
		int32_t L_80 = V_6;
		int32_t L_81 = L_80;
		V_6 = ((int32_t)il2cpp_codegen_add(L_81, 1));
		int64_t L_82 = ___StartOfCentralDirectory0;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)((int32_t)(uint8_t)((int64_t)(L_82&((int64_t)((int32_t)255))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = V_5;
		int32_t L_84 = V_6;
		int32_t L_85 = L_84;
		V_6 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		int64_t L_86 = ___StartOfCentralDirectory0;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_86&((int64_t)((int32_t)65280))))>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = V_5;
		int32_t L_88 = V_6;
		int32_t L_89 = L_88;
		V_6 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		int64_t L_90 = ___StartOfCentralDirectory0;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_90&((int64_t)((int32_t)16711680))))>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = V_5;
		int32_t L_92 = V_6;
		int32_t L_93 = L_92;
		V_6 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		int64_t L_94 = ___StartOfCentralDirectory0;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (uint8_t)((int32_t)(uint8_t)((int64_t)(((int64_t)(L_94&((int64_t)(uint64_t)((uint32_t)((int32_t)-16777216)))))>>((int32_t)24)))));
	}

IL_01fd:
	{
		String_t* L_95 = ___comment4;
		if (!L_95)
		{
			goto IL_0210;
		}
	}
	{
		String_t* L_96 = ___comment4;
		NullCheck(L_96);
		int32_t L_97;
		L_97 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_96, NULL);
		if (L_97)
		{
			goto IL_022b;
		}
	}

IL_0210:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = V_5;
		int32_t L_99 = V_6;
		int32_t L_100 = L_99;
		V_6 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = V_5;
		int32_t L_102 = V_6;
		int32_t L_103 = L_102;
		V_6 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (uint8_t)0);
		goto IL_02a6;
	}

IL_022b:
	{
		int16_t L_104 = V_4;
		int32_t L_105 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = V_5;
		NullCheck(L_106);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_104, L_105)), 2))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_106)->max_length)))))
		{
			goto IL_0247;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_5;
		NullCheck(L_107);
		int32_t L_108 = V_6;
		V_4 = ((int16_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_107)->max_length)), L_108)), 2)));
	}

IL_0247:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = V_5;
		int32_t L_110 = V_6;
		int32_t L_111 = L_110;
		V_6 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		int16_t L_112 = V_4;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(L_111), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_112&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = V_5;
		int32_t L_114 = V_6;
		int32_t L_115 = L_114;
		V_6 = ((int32_t)il2cpp_codegen_add(L_115, 1));
		int16_t L_116 = V_4;
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(L_115), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_116&((int32_t)65280)))>>8))));
		int16_t L_117 = V_4;
		if (!L_117)
		{
			goto IL_02a6;
		}
	}
	{
		V_1 = 0;
		goto IL_028b;
	}

IL_027d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = V_5;
		int32_t L_119 = V_6;
		int32_t L_120 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121 = V_3;
		int32_t L_122 = V_1;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		uint8_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_119, L_120))), (uint8_t)L_124);
		int32_t L_125 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_028b:
	{
		int32_t L_126 = V_1;
		int16_t L_127 = V_4;
		if ((((int32_t)L_126) >= ((int32_t)L_127)))
		{
			goto IL_02a0;
		}
	}
	{
		int32_t L_128 = V_6;
		int32_t L_129 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_130 = V_5;
		NullCheck(L_130);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_128, L_129))) < ((int32_t)((int32_t)(((RuntimeArray*)L_130)->max_length)))))
		{
			goto IL_027d;
		}
	}

IL_02a0:
	{
		int32_t L_131 = V_6;
		int32_t L_132 = V_1;
		V_6 = ((int32_t)il2cpp_codegen_add(L_131, L_132));
	}

IL_02a6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = V_5;
		return L_133;
	}
}
// System.Byte[] Pathfinding.Ionic.Zip.ZipOutput::GenZip64EndOfCentralDirectory(System.Int64,System.Int64,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipOutput_GenZip64EndOfCentralDirectory_m26FC4BC865C763596701B1382007F3AE75750BF0 (int64_t ___StartOfCentralDirectory0, int64_t ___EndOfCentralDirectory1, int32_t ___entryCount2, uint32_t ___numSegments3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t G_B6_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)76));
		V_0 = L_0;
		V_1 = 0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436(((int32_t)101075792), NULL);
		V_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, L_4, 4, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 4));
		V_3 = ((int64_t)((int32_t)44));
		int64_t L_6 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF(L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, L_9, 8, NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)45));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)((int32_t)45));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)0);
		V_4 = 0;
		goto IL_0072;
	}

IL_0064:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)0);
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0072:
	{
		int32_t L_27 = V_4;
		if ((((int32_t)L_27) < ((int32_t)8)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_28 = ___entryCount2;
		V_5 = ((int64_t)L_28);
		int64_t L_29 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
		L_30 = BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF(L_29, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_0;
		int32_t L_32 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_30, 0, (RuntimeArray*)L_31, L_32, 8, NULL);
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 8));
		int64_t L_34 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF(L_34, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		int32_t L_37 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_35, 0, (RuntimeArray*)L_36, L_37, 8, NULL);
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 8));
		int64_t L_39 = ___EndOfCentralDirectory1;
		int64_t L_40 = ___StartOfCentralDirectory0;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_39, L_40));
		int64_t L_41 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF(L_41, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_0;
		int32_t L_44 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_42, 0, (RuntimeArray*)L_43, L_44, 8, NULL);
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 8));
		int64_t L_46 = ___StartOfCentralDirectory0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47;
		L_47 = BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF(L_46, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		int32_t L_49 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_47, 0, (RuntimeArray*)L_48, L_49, 8, NULL);
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_50, 8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51;
		L_51 = BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436(((int32_t)117853008), NULL);
		V_2 = L_51;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_0;
		int32_t L_54 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_52, 0, (RuntimeArray*)L_53, L_54, 4, NULL);
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_55, 4));
		uint32_t L_56 = ___numSegments3;
		if (L_56)
		{
			goto IL_00f7;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_00fa;
	}

IL_00f7:
	{
		uint32_t L_57 = ___numSegments3;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, 1));
	}

IL_00fa:
	{
		V_7 = G_B6_0;
		uint32_t L_58 = V_7;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59;
		L_59 = BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436(L_58, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_0;
		int32_t L_61 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_59, 0, (RuntimeArray*)L_60, L_61, 4, NULL);
		int32_t L_62 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_62, 4));
		int64_t L_63 = ___EndOfCentralDirectory1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64;
		L_64 = BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF(L_63, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_0;
		int32_t L_66 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_64, 0, (RuntimeArray*)L_65, L_66, 8, NULL);
		int32_t L_67 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_67, 8));
		uint32_t L_68 = ___numSegments3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69;
		L_69 = BitConverter_GetBytes_mFE194CC85029F5AE10446F919B8A53AF03AB3436(L_68, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_0;
		int32_t L_71 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_69, 0, (RuntimeArray*)L_70, L_71, 4, NULL);
		int32_t L_72 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_72, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_0;
		return L_73;
	}
}
// System.Int32 Pathfinding.Ionic.Zip.ZipOutput::CountEntries(System.Collections.Generic.ICollection`1<Pathfinding.Ionic.Zip.ZipEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipOutput_CountEntries_mE9FD20C78029EF9CC583AD6F1D13B046ECB6BBA4 (RuntimeObject* ____entries0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t42D65C85BA517BFEFCEC34EF0C6A52FA91725E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBE44EE0A9035203AEF336815D151D515E4DE208E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* V_2 = NULL;
	{
		V_0 = 0;
		RuntimeObject* L_0 = ____entries0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Pathfinding.Ionic.Zip.ZipEntry>::GetEnumerator() */, IEnumerable_1_t42D65C85BA517BFEFCEC34EF0C6A52FA91725E6D_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_1;
					if (!L_2)
					{
						goto IL_0040;
					}
				}
				{
					RuntimeObject* L_3 = V_1;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0040:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_5;
				L_5 = InterfaceFuncInvoker0< ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Pathfinding.Ionic.Zip.ZipEntry>::get_Current() */, IEnumerator_1_tBE44EE0A9035203AEF336815D151D515E4DE208E_il2cpp_TypeInfo_var, L_4);
				V_2 = L_5;
				ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_6 = V_2;
				NullCheck(L_6);
				bool L_7;
				L_7 = ZipEntry_get_IncludedInMostRecentSave_m7062A898737BD982BFC720079084879316B73BCA(L_6, NULL);
				if (!L_7)
				{
					goto IL_0024_1;
				}
			}
			{
				int32_t L_8 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
			}

IL_0024_1:
			{
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		int32_t L_11 = V_0;
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
// System.Int32 Pathfinding.Ionic.Zip.ZipInputStream::get_CodecBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipInputStream_get_CodecBufferSize_m9BC2946243E1F88038702761DD08A58FD517905F (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodecBufferSizeU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::SetupStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipInputStream_SetupStream_mA7F131E57DA1C962708CFB0D14A0CC6577056259 (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) 
{
	{
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_0 = __this->____currentEntry_6;
		String_t* L_1 = __this->____Password_10;
		NullCheck(L_0);
		CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A* L_2;
		L_2 = ZipEntry_InternalOpenReader_m6B3FB8E117C3646E95E4DF5A04AAECFC410AEF76(L_0, L_1, NULL);
		__this->____crcStream_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____crcStream_8), (void*)L_2);
		CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A* L_3 = __this->____crcStream_8;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		__this->____LeftToRead_9 = L_4;
		__this->____needSetup_7 = (bool)0;
		return;
	}
}
// System.IO.Stream Pathfinding.Ionic.Zip.ZipInputStream::get_ReadStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ZipInputStream_get_ReadStream_m2DBE93A1A1F536F51B515EEBFC395C1E3725902A (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____inputStream_5;
		return L_0;
	}
}
// System.Int32 Pathfinding.Ionic.Zip.ZipInputStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipInputStream_Read_m922B6B7FCA792C12A94DAB5C8FDD5D07BD3FBFA7 (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B9_0 = 0;
	{
		bool L_0 = __this->____closed_12;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		__this->____exceptionPending_14 = (bool)1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4014E67DDE2EEC5A620BDA6E50AFD7DD63737593)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipInputStream_Read_m922B6B7FCA792C12A94DAB5C8FDD5D07BD3FBFA7_RuntimeMethod_var)));
	}

IL_001d:
	{
		bool L_2 = __this->____needSetup_7;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		ZipInputStream_SetupStream_mA7F131E57DA1C962708CFB0D14A0CC6577056259(__this, NULL);
	}

IL_002e:
	{
		int64_t L_3 = __this->____LeftToRead_9;
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_003d;
		}
	}
	{
		return 0;
	}

IL_003d:
	{
		int64_t L_4 = __this->____LeftToRead_9;
		int32_t L_5 = ___count2;
		if ((((int64_t)L_4) <= ((int64_t)((int64_t)L_5))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___count2;
		G_B9_0 = L_6;
		goto IL_0057;
	}

IL_0050:
	{
		int64_t L_7 = __this->____LeftToRead_9;
		G_B9_0 = ((int32_t)L_7);
	}

IL_0057:
	{
		V_0 = G_B9_0;
		CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A* L_8 = __this->____crcStream_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = V_0;
		NullCheck(L_8);
		int32_t L_12;
		L_12 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, L_10, L_11);
		V_1 = L_12;
		int64_t L_13 = __this->____LeftToRead_9;
		int32_t L_14 = V_1;
		__this->____LeftToRead_9 = ((int64_t)il2cpp_codegen_subtract(L_13, ((int64_t)L_14)));
		int64_t L_15 = __this->____LeftToRead_9;
		if ((!(((uint64_t)L_15) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_00ae;
		}
	}
	{
		CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A* L_16 = __this->____crcStream_8;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = CrcCalculatorStream_get_Crc_mD281563701CF17DC67789C86BD55E7780072FCE5(L_16, NULL);
		V_2 = L_17;
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_18 = __this->____currentEntry_6;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		ZipEntry_VerifyCrcAfterExtract_m057BBEF7B115DF90CE69FC06B820846FD21DAE46(L_18, L_19, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = __this->____inputStream_5;
		int64_t L_21 = __this->____endOfEntry_11;
		NullCheck(L_20);
		int64_t L_22;
		L_22 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_20, L_21, 0);
	}

IL_00ae:
	{
		int32_t L_23 = V_1;
		return L_23;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipInputStream_get_CanRead_m12220014C1D4377047FB674A95A5E2991C87D5F4 (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipInputStream_get_CanSeek_mB9A29AAE771A26BE35D5795657729A64990E7B23 (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____inputStream_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		return L_1;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipInputStream_get_CanWrite_m83FC3963ECA7E2C34026F58DAD25F23B78BEBE67 (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipInputStream_get_Length_m17C9E6CC70A76492ECF477C70E9FA07D4812DCF0 (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____inputStream_5;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipInputStream_get_Position_m12F5C914A94AE4BD42804788EFAA30847D06BB35 (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____inputStream_5;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipInputStream_set_Position_m0D482963CB2918CAF8D2B4D4A5726F4EFFCE446D (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		int64_t L_1;
		L_1 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, __this, L_0, 0);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipInputStream_Flush_m72052C55DC282251D4111B5A481116A8B6B8576E (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipInputStream_Flush_m72052C55DC282251D4111B5A481116A8B6B8576E_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipInputStream_Write_mF9F1925748FEA3284D17FCDF4826EEE97543F8B5 (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC013226DF137B7010B5FE9B6BEB26EF8127E5B47)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipInputStream_Write_mF9F1925748FEA3284D17FCDF4826EEE97543F8B5_RuntimeMethod_var)));
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipInputStream_Seek_mC30A32AE03F15DB933D15D223FC0365E51B68358 (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		__this->____findRequired_13 = (bool)1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____inputStream_5;
		int64_t L_1 = ___offset0;
		int32_t L_2 = ___origin1;
		NullCheck(L_0);
		int64_t L_3;
		L_3 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, L_1, L_2);
		V_0 = L_3;
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipInputStream_SetLength_m2283F7672341C4EF4C62A6B404E6BD310A1BE338 (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipInputStream_SetLength_m2283F7672341C4EF4C62A6B404E6BD310A1BE338_RuntimeMethod_var)));
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
// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::get_CodecBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_CodecBufferSize_m27C21C9848C6D833B5696CA91C40CF98579CF8D3 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodecBufferSizeU3Ek__BackingField_23;
		return L_0;
	}
}
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipOutputStream::get_Strategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_Strategy_m78B431CAE1D7160D484207D829F784CE9F8E39BA (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStrategyU3Ek__BackingField_24;
		return L_0;
	}
}
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipOutputStream::get_EnableZip64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_EnableZip64_m1B1853D50B763037EE09B8F7D3F708B15882DB0C (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____zip64_8;
		return L_0;
	}
}
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutputStream::get_AlternateEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipOutputStream_get_AlternateEncoding_mB437AA52388393AB59036A74A76C1D1C77BD10F5 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = __this->____alternateEncoding_12;
		return L_0;
	}
}
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipOutputStream::get_AlternateEncodingUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_AlternateEncodingUsage_m1E4A6718DEAF888FE9B86ACB213970FE012DD3C6 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____alternateEncodingUsage_11;
		return L_0;
	}
}
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutputStream::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipOutputStream_get_DefaultEncoding_m00C76CF98685407DB642F30CA2A612C2BBF34C28 (const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		return L_0;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::get_ParallelDeflateThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipOutputStream_get_ParallelDeflateThreshold_mF782CFBB59CEF5255D03AE788E8872CE219E4153 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ParallelDeflateThreshold_21;
		return L_0;
	}
}
// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::get_ParallelDeflateMaxBufferPairs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_ParallelDeflateMaxBufferPairs_mEF97CFBC4346C3EDFB66F53A4972C96EA949DFF0 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____maxBufferPairs_22;
		return L_0;
	}
}
// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::get_OutputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ZipOutputStream_get_OutputStream_m6B67335258410AD3656CDC7C1117572AC803D893 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____outputStream_6;
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_Write_m2153B71E5E5C930F58CC1C67251119454C009959 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_13;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		__this->____exceptionPending_14 = (bool)1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4014E67DDE2EEC5A620BDA6E50AFD7DD63737593)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutputStream_Write_m2153B71E5E5C930F58CC1C67251119454C009959_RuntimeMethod_var)));
	}

IL_001d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer0;
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		__this->____exceptionPending_14 = (bool)1;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutputStream_Write_m2153B71E5E5C930F58CC1C67251119454C009959_RuntimeMethod_var)));
	}

IL_0035:
	{
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_4 = __this->____currentEntry_7;
		if (L_4)
		{
			goto IL_0052;
		}
	}
	{
		__this->____exceptionPending_14 = (bool)1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC1701B5D317209D0FC002E21B48CFF6BAF60F9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutputStream_Write_m2153B71E5E5C930F58CC1C67251119454C009959_RuntimeMethod_var)));
	}

IL_0052:
	{
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_6 = __this->____currentEntry_7;
		NullCheck(L_6);
		bool L_7;
		L_7 = ZipEntry_get_IsDirectory_m01DA105FEECA61889572228446CBC1B8A65C594C_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0074;
		}
	}
	{
		__this->____exceptionPending_14 = (bool)1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD9E9268795B5AD1DC37495CAF97ECD6133B122F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutputStream_Write_m2153B71E5E5C930F58CC1C67251119454C009959_RuntimeMethod_var)));
	}

IL_0074:
	{
		bool L_9 = __this->____needToWriteEntryHeader_19;
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		ZipOutputStream__InitiateCurrentEntry_m7788FD9A801361824A5FC3AEE441605EECB66D4A(__this, (bool)0, NULL);
	}

IL_0086:
	{
		int32_t L_10 = ___count2;
		if (!L_10)
		{
			goto IL_009a;
		}
	}
	{
		CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A* L_11 = __this->____entryOutputStream_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___buffer0;
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___count2;
		NullCheck(L_11);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, L_13, L_14);
	}

IL_009a:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::_InitiateCurrentEntry(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream__InitiateCurrentEntry_m7788FD9A801361824A5FC3AEE441605EECB66D4A (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, bool ___finishing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB71C475BCA28DA7323863B5B6D92C0E420E89B1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B5_0 = NULL;
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* G_B5_1 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B4_0 = NULL;
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B6_1 = NULL;
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* G_B6_2 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B9_0 = NULL;
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* G_B9_1 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B8_0 = NULL;
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B10_1 = NULL;
	ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* G_B10_2 = NULL;
	{
		Dictionary_2_t5CBD32C2CF0A9E223C64D881A98F182F58B000EF* L_0 = __this->____entriesWritten_9;
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_1 = __this->____currentEntry_7;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ZipEntry_get_FileName_mFDDE59F4E3D6BB641C72661D3EDAA6DF98544CA7_inline(L_1, NULL);
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_3 = __this->____currentEntry_7;
		NullCheck(L_0);
		Dictionary_2_Add_mB71C475BCA28DA7323863B5B6D92C0E420E89B1A(L_0, L_2, L_3, Dictionary_2_Add_mB71C475BCA28DA7323863B5B6D92C0E420E89B1A_RuntimeMethod_var);
		int32_t L_4 = __this->____entryCount_10;
		__this->____entryCount_10 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = __this->____entryCount_10;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)65534))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_6 = __this->____zip64_8;
		if (L_6)
		{
			goto IL_0057;
		}
	}
	{
		__this->____exceptionPending_14 = (bool)1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B3F1D1F0E4D1CAB7B0FEFB41F0DED43C4DF5895)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutputStream__InitiateCurrentEntry_m7788FD9A801361824A5FC3AEE441605EECB66D4A_RuntimeMethod_var)));
	}

IL_0057:
	{
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_8 = __this->____currentEntry_7;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = __this->____outputStream_6;
		bool L_10 = ___finishing0;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		if (!L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = ((int32_t)99);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0071;
	}

IL_0070:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0071:
	{
		NullCheck(G_B6_2);
		ZipEntry_WriteHeader_m3A2C41E470A1F667B7325C660D49BA7F5A65CBAC(G_B6_2, G_B6_1, G_B6_0, NULL);
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_11 = __this->____currentEntry_7;
		NullCheck(L_11);
		ZipEntry_StoreRelativeOffset_m6032034A378488F6F56211AA58BD865CA29C3039(L_11, NULL);
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_12 = __this->____currentEntry_7;
		NullCheck(L_12);
		bool L_13;
		L_13 = ZipEntry_get_IsDirectory_m01DA105FEECA61889572228446CBC1B8A65C594C_inline(L_12, NULL);
		if (L_13)
		{
			goto IL_00d9;
		}
	}
	{
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_14 = __this->____currentEntry_7;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = __this->____outputStream_6;
		NullCheck(L_14);
		ZipEntry_WriteSecurityMetadata_mDF3065177ABF79A2DFDD611517C1C35D0AF5D9DD(L_14, L_15, NULL);
		ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* L_16 = __this->____currentEntry_7;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = __this->____outputStream_6;
		bool L_18 = ___finishing0;
		G_B8_0 = L_17;
		G_B8_1 = L_16;
		if (!L_18)
		{
			G_B9_0 = L_17;
			G_B9_1 = L_16;
			goto IL_00ba;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00bb;
	}

IL_00ba:
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00bb:
	{
		CountingStream_tF0A763FD439D1D43CA86D6A199966FB75D1B80D2** L_19 = (&__this->____outputCounter_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** L_20 = (&__this->____encryptor_16);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** L_21 = (&__this->____deflater_17);
		CrcCalculatorStream_tFA7F6A619BD1880E221FC4D604DBBF85D705C23A** L_22 = (&__this->____entryOutputStream_18);
		NullCheck(G_B10_2);
		ZipEntry_PrepOutputStream_m3F5F425B83CB0FF24C1D181715CAE6FC9ACF8AEF(G_B10_2, G_B10_1, ((int64_t)G_B10_0), L_19, L_20, L_21, L_22, NULL);
	}

IL_00d9:
	{
		__this->____needToWriteEntryHeader_19 = (bool)0;
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipOutputStream_get_CanRead_mCBA238279873F465E6E6C8F3438070A3C15B8475 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipOutputStream_get_CanSeek_m817AADEE2E061E00E140184FA7432F39D3B06330 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipOutputStream_get_CanWrite_mB7E5E6D618073D37BA808FA3866982D769596903 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipOutputStream_get_Length_m62DF8B551CD826BA39FA792E9228BE828B5EEE03 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutputStream_get_Length_m62DF8B551CD826BA39FA792E9228BE828B5EEE03_RuntimeMethod_var)));
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipOutputStream_get_Position_mD6F0877CFEE7D32C284E1A39F1495F4169704288 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____outputStream_6;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_set_Position_m32A31B5D2E65B15A8DFA8C740242E18F49FF04D9 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutputStream_set_Position_m32A31B5D2E65B15A8DFA8C740242E18F49FF04D9_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_Flush_m471E742ECC18AB59041F6900ADEE887F79E2CE55 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipOutputStream_Read_m85BE1714D6D321250F6E2BD429B8BB1A259FEC19 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral75C670EA0F7AE5A776E170D1A225F267CA674091)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutputStream_Read_m85BE1714D6D321250F6E2BD429B8BB1A259FEC19_RuntimeMethod_var)));
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipOutputStream_Seek_m1C63B862C4066EB2C04D3675CE53FE8F825711DA (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7CA6B7A7F82DA89BFD1F6A227BE9102B12D67B3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutputStream_Seek_m1C63B862C4066EB2C04D3675CE53FE8F825711DA_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_SetLength_mE067F66EA79D6C42D8D500E76A4C8751E47BA8B3 (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipOutputStream_SetLength_mE067F66EA79D6C42D8D500E76A4C8751E47BA8B3_RuntimeMethod_var)));
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
// System.Void Pathfinding.Ionic.Zip.ZipContainer::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipContainer__ctor_mC42D7CF1F52814DA0B9F0670F4EC6E6C02BE90F9 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___o0;
		__this->____zf_0 = ((ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF*)IsInstClass((RuntimeObject*)L_0, ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____zf_0), (void*)((ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF*)IsInstClass((RuntimeObject*)L_0, ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1 = ___o0;
		__this->____zos_1 = ((ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4*)IsInstClass((RuntimeObject*)L_1, ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____zos_1), (void*)((ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4*)IsInstClass((RuntimeObject*)L_1, ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2 = ___o0;
		__this->____zis_2 = ((ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C*)IsInstClass((RuntimeObject*)L_2, ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____zis_2), (void*)((ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C*)IsInstClass((RuntimeObject*)L_2, ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C_il2cpp_TypeInfo_var)));
		return;
	}
}
// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipContainer::get_ZipFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* ZipContainer_get_ZipFile_m4E3F1C0576B1F19E90A7949CC680FB28660F1506 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		return L_0;
	}
}
// Pathfinding.Ionic.Zip.ZipOutputStream Pathfinding.Ionic.Zip.ZipContainer::get_ZipOutputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* ZipContainer_get_ZipOutputStream_mC9520A44C4990E6CE3D78907E9C0F4C138F98FD0 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_0 = __this->____zos_1;
		return L_0;
	}
}
// System.String Pathfinding.Ionic.Zip.ZipContainer::get_Password()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipContainer_get_Password_m328C8269723A327C224E11D85DABEA15BE613CA3 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		String_t* L_2 = L_1->____Password_17;
		return L_2;
	}

IL_0017:
	{
		ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* L_3 = __this->____zis_2;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* L_4 = __this->____zis_2;
		NullCheck(L_4);
		String_t* L_5 = L_4->____Password_10;
		return L_5;
	}

IL_002e:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_6 = __this->____zos_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->____password_5;
		return L_7;
	}
}
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipContainer::get_Zip64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipContainer_get_Zip64_m5AEBA9A3B260853E04BEF6128B41A81AAB73F1DB (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____zip64_46;
		return L_2;
	}

IL_0017:
	{
		ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* L_3 = __this->____zis_2;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_4 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipContainer_get_Zip64_m5AEBA9A3B260853E04BEF6128B41A81AAB73F1DB_RuntimeMethod_var)));
	}

IL_0028:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_5 = __this->____zos_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->____zip64_8;
		return L_6;
	}
}
// System.Int32 Pathfinding.Ionic.Zip.ZipContainer::get_BufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipContainer_get_BufferSize_m2395AC6C285F8B2C09D2BFF7EF74ABC47B4734F3 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ZipFile_get_BufferSize_m9F6C115060F3AB426732DDC5E9FA99BB68D154F2_inline(L_1, NULL);
		return L_2;
	}

IL_0017:
	{
		ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* L_3 = __this->____zis_2;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_4 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipContainer_get_BufferSize_m2395AC6C285F8B2C09D2BFF7EF74ABC47B4734F3_RuntimeMethod_var)));
	}

IL_0028:
	{
		return 0;
	}
}
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipContainer::get_ParallelDeflater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868* ZipContainer_get_ParallelDeflater_m8017BABB4B0B1715C689BA4E5F331EAF039C9606 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868* L_2 = L_1->___ParallelDeflater_43;
		return L_2;
	}

IL_0017:
	{
		ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* L_3 = __this->____zis_2;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return (ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868*)NULL;
	}

IL_0024:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_4 = __this->____zos_1;
		NullCheck(L_4);
		ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868* L_5 = L_4->___ParallelDeflater_20;
		return L_5;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipContainer::set_ParallelDeflater(Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipContainer_set_ParallelDeflater_mEAA4D805BD514FE038642872404FFCCD3FE09F3B (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868* ___value0, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868* L_2 = ___value0;
		NullCheck(L_1);
		L_1->___ParallelDeflater_43 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___ParallelDeflater_43), (void*)L_2);
		goto IL_0033;
	}

IL_001c:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_3 = __this->____zos_1;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_4 = __this->____zos_1;
		ParallelDeflateOutputStream_tAABD0CFD2D06448B1C1B42D2A91F81C27CAAF868* L_5 = ___value0;
		NullCheck(L_4);
		L_4->___ParallelDeflater_20 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___ParallelDeflater_20), (void*)L_5);
	}

IL_0033:
	{
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipContainer::get_ParallelDeflateThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipContainer_get_ParallelDeflateThreshold_mF096D808DB6A022A38D112AA5BFA27C532143151 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = ZipFile_get_ParallelDeflateThreshold_m88106ED156475E9C2921540F88D4C089EA2A6468_inline(L_1, NULL);
		return L_2;
	}

IL_0017:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_3 = __this->____zos_1;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = ZipOutputStream_get_ParallelDeflateThreshold_mF782CFBB59CEF5255D03AE788E8872CE219E4153_inline(L_3, NULL);
		return L_4;
	}
}
// System.Int32 Pathfinding.Ionic.Zip.ZipContainer::get_ParallelDeflateMaxBufferPairs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipContainer_get_ParallelDeflateMaxBufferPairs_mA941876B4EF134331910F563919CC6851890B7EF (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ZipFile_get_ParallelDeflateMaxBufferPairs_m0DE7AC098AB51C005EBB65FD858CE48EBA4AC0AA_inline(L_1, NULL);
		return L_2;
	}

IL_0017:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_3 = __this->____zos_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ZipOutputStream_get_ParallelDeflateMaxBufferPairs_mEF97CFBC4346C3EDFB66F53A4972C96EA949DFF0_inline(L_3, NULL);
		return L_4;
	}
}
// System.Int32 Pathfinding.Ionic.Zip.ZipContainer::get_CodecBufferSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipContainer_get_CodecBufferSize_mEC1379FFEE3112F2101A1F4D9B75CA65D713907E (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ZipFile_get_CodecBufferSize_m821AEA9BE2186C9AFCCF24727184A88EB8129C9B_inline(L_1, NULL);
		return L_2;
	}

IL_0017:
	{
		ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* L_3 = __this->____zis_2;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* L_4 = __this->____zis_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ZipInputStream_get_CodecBufferSize_m9BC2946243E1F88038702761DD08A58FD517905F_inline(L_4, NULL);
		return L_5;
	}

IL_002e:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_6 = __this->____zos_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ZipOutputStream_get_CodecBufferSize_m27C21C9848C6D833B5696CA91C40CF98579CF8D3_inline(L_6, NULL);
		return L_7;
	}
}
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipContainer::get_Strategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipContainer_get_Strategy_mE71CAED33B529F64EC79DD48E70D05605A509BF9 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ZipFile_get_Strategy_m3332E81555D73EFDA16B50644CDCC44AB2968AFD_inline(L_1, NULL);
		return L_2;
	}

IL_0017:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_3 = __this->____zos_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ZipOutputStream_get_Strategy_m78B431CAE1D7160D484207D829F784CE9F8E39BA_inline(L_3, NULL);
		return L_4;
	}
}
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipContainer::get_UseZip64WhenSaving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipContainer_get_UseZip64WhenSaving_mD077760DF204B30017FE22DCED0575690778DC11 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ZipFile_get_UseZip64WhenSaving_mC8C74A694A9B5D4F5CAB2B4F971AA6D512B005E9_inline(L_1, NULL);
		return L_2;
	}

IL_0017:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_3 = __this->____zos_1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ZipOutputStream_get_EnableZip64_m1B1853D50B763037EE09B8F7D3F708B15882DB0C_inline(L_3, NULL);
		return L_4;
	}
}
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipContainer::get_AlternateEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipContainer_get_AlternateEncoding_mCA77E35CA37DA4E54EDECD73A68320BF5B89B19D (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = ZipFile_get_AlternateEncoding_mF3A845FB328E30AF47DED308FE42F214DC04095F_inline(L_1, NULL);
		return L_2;
	}

IL_0017:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_3 = __this->____zos_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_4 = __this->____zos_1;
		NullCheck(L_4);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = ZipOutputStream_get_AlternateEncoding_mB437AA52388393AB59036A74A76C1D1C77BD10F5_inline(L_4, NULL);
		return L_5;
	}

IL_002e:
	{
		return (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL;
	}
}
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipContainer::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipContainer_get_DefaultEncoding_m4CAA8E3861C2CBA935D140D65F283D34D952D3B6 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = ZipFile_get_DefaultEncoding_m6B1E00EBA64198B11471F7C9C2265A0B7259B071_inline(NULL);
		return L_1;
	}

IL_0011:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_2 = __this->____zos_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = ZipOutputStream_get_DefaultEncoding_m00C76CF98685407DB642F30CA2A612C2BBF34C28(NULL);
		return L_3;
	}

IL_0022:
	{
		return (Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095*)NULL;
	}
}
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipContainer::get_AlternateEncodingUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipContainer_get_AlternateEncodingUsage_m59255A7FA5DE672AB051C89DC4EA2FEF8A49E354 (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ZipFile_get_AlternateEncodingUsage_m23CAA1AEF95A1FB915535FEA2012970B5782C633_inline(L_1, NULL);
		return L_2;
	}

IL_0017:
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_3 = __this->____zos_1;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* L_4 = __this->____zos_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ZipOutputStream_get_AlternateEncodingUsage_m1E4A6718DEAF888FE9B86ACB213970FE012DD3C6_inline(L_4, NULL);
		return L_5;
	}

IL_002e:
	{
		return (int32_t)(0);
	}
}
// System.IO.Stream Pathfinding.Ionic.Zip.ZipContainer::get_ReadStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ZipContainer_get_ReadStream_m60CCFBD8BBC18C2AC34CDAD7B8D0C7047FF73A2B (ZipContainer_t95D23BCC9785F9050A0DABE530B0E550ADF20FC0* __this, const RuntimeMethod* method) 
{
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_0 = __this->____zf_0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* L_1 = __this->____zf_0;
		NullCheck(L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2;
		L_2 = ZipFile_get_ReadStream_m4CC70D2839CF163ABDC584C8D6C1E9A31793675B(L_1, NULL);
		return L_2;
	}

IL_0017:
	{
		ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* L_3 = __this->____zis_2;
		NullCheck(L_3);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4;
		L_4 = ZipInputStream_get_ReadStream_m2DBE93A1A1F536F51B515EEBFC395C1E3725902A_inline(L_3, NULL);
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
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream__ctor_m995B2358AD663DB75063D0B4DFFD7EA50546712C (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		__this->____exceptionPending_6 = (bool)0;
		return;
	}
}
// Pathfinding.Ionic.Zip.ZipSegmentedStream Pathfinding.Ionic.Zip.ZipSegmentedStream::ForReading(System.String,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* ZipSegmentedStream_ForReading_mD67874BA8762891FF99E19B7377110A9E094916D (String_t* ___name0, uint32_t ___initialDiskNumber1, uint32_t ___maxDiskNumber2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* V_0 = NULL;
	ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* V_1 = NULL;
	{
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_0 = (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2*)il2cpp_codegen_object_new(ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ZipSegmentedStream__ctor_m995B2358AD663DB75063D0B4DFFD7EA50546712C(L_0, NULL);
		V_1 = L_0;
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_1 = V_1;
		NullCheck(L_1);
		L_1->___rwMode_5 = 1;
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_2 = V_1;
		uint32_t L_3 = ___initialDiskNumber1;
		NullCheck(L_2);
		ZipSegmentedStream_set_CurrentSegment_mC782BAEFBA9BA6A472834468A5F0F39F8FD6E94D(L_2, L_3, NULL);
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_4 = V_1;
		uint32_t L_5 = ___maxDiskNumber2;
		NullCheck(L_4);
		L_4->____maxDiskNumber_12 = L_5;
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_6 = V_1;
		String_t* L_7 = ___name0;
		NullCheck(L_6);
		L_6->____baseName_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____baseName_7), (void*)L_7);
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_8 = V_1;
		V_0 = L_8;
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_9 = V_0;
		NullCheck(L_9);
		ZipSegmentedStream__SetReadStream_mA0DE06019265AC50216F21AB00F999AED3A3A5FC(L_9, NULL);
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_10 = V_0;
		return L_10;
	}
}
// Pathfinding.Ionic.Zip.ZipSegmentedStream Pathfinding.Ionic.Zip.ZipSegmentedStream::ForWriting(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* ZipSegmentedStream_ForWriting_mE937C2A5CF4E2FCFCE5FE62AAEF2C026C52DA7A4 (String_t* ___name0, int32_t ___maxSegmentSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* V_0 = NULL;
	ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* V_1 = NULL;
	{
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_0 = (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2*)il2cpp_codegen_object_new(ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ZipSegmentedStream__ctor_m995B2358AD663DB75063D0B4DFFD7EA50546712C(L_0, NULL);
		V_1 = L_0;
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_1 = V_1;
		NullCheck(L_1);
		L_1->___rwMode_5 = 2;
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_2 = V_1;
		NullCheck(L_2);
		ZipSegmentedStream_set_CurrentSegment_mC782BAEFBA9BA6A472834468A5F0F39F8FD6E94D(L_2, 0, NULL);
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_3 = V_1;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		L_3->____baseName_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____baseName_7), (void*)L_4);
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_5 = V_1;
		int32_t L_6 = ___maxSegmentSize1;
		NullCheck(L_5);
		L_5->____maxSegmentSize_13 = L_6;
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_7 = V_1;
		String_t* L_8 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_8, NULL);
		NullCheck(L_7);
		L_7->____baseDir_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____baseDir_8), (void*)L_9);
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_10 = V_1;
		V_0 = L_10;
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = L_11->____baseDir_8;
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0050;
		}
	}
	{
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_15 = V_0;
		NullCheck(L_15);
		L_15->____baseDir_8 = _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____baseDir_8), (void*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
	}

IL_0050:
	{
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_16 = V_0;
		NullCheck(L_16);
		ZipSegmentedStream__SetWriteStream_m975E5835D6F0F90F610D60DE720DA7F629D8F191(L_16, 0, NULL);
		ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* L_17 = V_0;
		return L_17;
	}
}
// System.IO.Stream Pathfinding.Ionic.Zip.ZipSegmentedStream::ForUpdate(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ZipSegmentedStream_ForUpdate_mCC411BE1EED7A75E9197C28F92347A7C6C4892F7 (String_t* ___name0, uint32_t ___diskNumber1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA169493E3A221FA40A2265AC8ABCD2A9235CA971);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		uint32_t L_0 = ___diskNumber1;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)99)))))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51439F4DAD5792EB6E21CF23BCFF005E285944B0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipSegmentedStream_ForUpdate_mCC411BE1EED7A75E9197C28F92347A7C6C4892F7_RuntimeMethod_var)));
	}

IL_0013:
	{
		String_t* L_2 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_2, NULL);
		String_t* L_4 = ___name0;
		String_t* L_5;
		L_5 = Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F(L_4, NULL);
		String_t* L_6;
		L_6 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_3, L_5, NULL);
		uint32_t L_7 = ___diskNumber1;
		uint32_t L_8 = ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, 1)));
		RuntimeObject* L_9 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralA169493E3A221FA40A2265AC8ABCD2A9235CA971, L_6, L_9, NULL);
		V_0 = L_10;
		String_t* L_11 = V_0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12;
		L_12 = File_Open_mEF604EACCC9E06F86B94DC87491607A02C1C778E(L_11, 3, 3, 0, NULL);
		return L_12;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_ContiguousWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipSegmentedStream_get_ContiguousWrite_mFE132D1088CBE7C6098E723305637CFF63E4595F (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CContiguousWriteU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::set_ContiguousWrite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream_set_ContiguousWrite_mD8A155CB568B8723C9B0AB38D499DC6FDD26C1A5 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CContiguousWriteU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CurrentSegment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____currentDiskNumber_11;
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::set_CurrentSegment(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream_set_CurrentSegment_mC782BAEFBA9BA6A472834468A5F0F39F8FD6E94D (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->____currentDiskNumber_11 = L_0;
		__this->____currentName_9 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentName_9), (void*)(String_t*)NULL);
		return;
	}
}
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CurrentName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipSegmentedStream_get_CurrentName_mD6F1E5C90E77F7A6C75478144C3E497196139835 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____currentName_9;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		uint32_t L_1;
		L_1 = ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline(__this, NULL);
		String_t* L_2;
		L_2 = ZipSegmentedStream__NameForSegment_mDFB44EFC22F2CD1F10F4247D71F2B562E78231B3(__this, L_1, NULL);
		__this->____currentName_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentName_9), (void*)L_2);
	}

IL_001d:
	{
		String_t* L_3 = __this->____currentName_9;
		return L_3;
	}
}
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CurrentTempName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipSegmentedStream_get_CurrentTempName_mA89BDEE6FF030EA86E765477CCFAE0A766A3C6D6 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____currentTempName_10;
		return L_0;
	}
}
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_NameForSegment(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipSegmentedStream__NameForSegment_mDFB44EFC22F2CD1F10F4247D71F2B562E78231B3 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, uint32_t ___diskNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA169493E3A221FA40A2265AC8ABCD2A9235CA971);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___diskNumber0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)99)))))
		{
			goto IL_001a;
		}
	}
	{
		__this->____exceptionPending_6 = (bool)1;
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_1 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99CF69C509815F194040366DD9B7E4FD50FF60C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipSegmentedStream__NameForSegment_mDFB44EFC22F2CD1F10F4247D71F2B562E78231B3_RuntimeMethod_var)));
	}

IL_001a:
	{
		String_t* L_2 = __this->____baseName_7;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_2, NULL);
		String_t* L_4 = __this->____baseName_7;
		String_t* L_5;
		L_5 = Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F(L_4, NULL);
		String_t* L_6;
		L_6 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_3, L_5, NULL);
		uint32_t L_7 = ___diskNumber0;
		uint32_t L_8 = ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, 1)));
		RuntimeObject* L_9 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralA169493E3A221FA40A2265AC8ABCD2A9235CA971, L_6, L_9, NULL);
		return L_10;
	}
}
// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::ComputeSegment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ZipSegmentedStream_ComputeSegment_mD986E4BDCBA3DA23F41769DC575E3E3ED55D0F7C (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____innerStream_14;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		int32_t L_2 = ___length0;
		int32_t L_3 = __this->____maxSegmentSize_13;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(L_1, ((int64_t)L_2)))) <= ((int64_t)((int64_t)L_3))))
		{
			goto IL_0023;
		}
	}
	{
		uint32_t L_4;
		L_4 = ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)L_4, 1));
	}

IL_0023:
	{
		uint32_t L_5;
		L_5 = ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline(__this, NULL);
		return L_5;
	}
}
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipSegmentedStream_ToString_m9F18AD66049B0884F01AB080E414FFCF2CDC5737 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RwMode_t94DA76E16CF2018D6B7B40C11C586943E92A6C47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5343EBD7412E5B3EAC0DEDDC43D8DC4C765084B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6555B6A4916EB4F4DC740F9090D4EBEB92CD0EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralB5343EBD7412E5B3EAC0DEDDC43D8DC4C765084B);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralB5343EBD7412E5B3EAC0DEDDC43D8DC4C765084B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = ZipSegmentedStream_get_CurrentName_mD6F1E5C90E77F7A6C75478144C3E497196139835(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5 = __this->___rwMode_5;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(RwMode_t94DA76E16CF2018D6B7B40C11C586943E92A6C47_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)L_7, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_4;
		int64_t L_10;
		L_10 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		int64_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralC6555B6A4916EB4F4DC740F9090D4EBEB92CD0EB, L_9, NULL);
		return L_13;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::_SetReadStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream__SetReadStream_mA0DE06019265AC50216F21AB00F999AED3A3A5FC (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____innerStream_14;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->____innerStream_14;
		NullCheck(L_1);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_1, NULL);
	}

IL_0016:
	{
		uint32_t L_2;
		L_2 = ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline(__this, NULL);
		uint32_t L_3 = __this->____maxDiskNumber_12;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, 1))) == ((uint32_t)L_3))))
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = __this->____baseName_7;
		__this->____currentName_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentName_9), (void*)L_4);
	}

IL_0035:
	{
		String_t* L_5;
		L_5 = ZipSegmentedStream_get_CurrentName_mD6F1E5C90E77F7A6C75478144C3E497196139835(__this, NULL);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6;
		L_6 = File_OpenRead_m32C8C37542B7A02A2F643E3B816D16ABE690FF50(L_5, NULL);
		__this->____innerStream_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerStream_14), (void*)L_6);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zip.ZipSegmentedStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZipSegmentedStream_Read_mC024120B4E924DCEC2AE320613D0C5DDE81A698A (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___rwMode_5;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		__this->____exceptionPending_6 = (bool)1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56B0B450D40A7D1EEE3B00809196D2011917C8BA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipSegmentedStream_Read_mC024120B4E924DCEC2AE320613D0C5DDE81A698A_RuntimeMethod_var)));
	}

IL_001e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->____innerStream_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		V_0 = L_6;
		int32_t L_7 = V_0;
		V_1 = L_7;
		goto IL_00b2;
	}

IL_0034:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->____innerStream_14;
		NullCheck(L_8);
		int64_t L_9;
		L_9 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = __this->____innerStream_14;
		NullCheck(L_10);
		int64_t L_11;
		L_11 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_10);
		if ((((int64_t)L_9) == ((int64_t)L_11)))
		{
			goto IL_006c;
		}
	}
	{
		__this->____exceptionPending_6 = (bool)1;
		String_t* L_12;
		L_12 = ZipSegmentedStream_get_CurrentName_mD6F1E5C90E77F7A6C75478144C3E497196139835(__this, NULL);
		String_t* L_13;
		L_13 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC807AF4C8454C9532AB93432926AD14934A179F6)), L_12, NULL);
		ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554* L_14 = (ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ZipException__ctor_mDAA48A04ED3243E4B83FC88566166486111CDF2D(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipSegmentedStream_Read_mC024120B4E924DCEC2AE320613D0C5DDE81A698A_RuntimeMethod_var)));
	}

IL_006c:
	{
		uint32_t L_15;
		L_15 = ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline(__this, NULL);
		uint32_t L_16 = __this->____maxDiskNumber_12;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, 1))) == ((uint32_t)L_16))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}

IL_0081:
	{
		uint32_t L_18;
		L_18 = ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline(__this, NULL);
		ZipSegmentedStream_set_CurrentSegment_mC782BAEFBA9BA6A472834468A5F0F39F8FD6E94D(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_18, 1)), NULL);
		ZipSegmentedStream__SetReadStream_mA0DE06019265AC50216F21AB00F999AED3A3A5FC(__this, NULL);
		int32_t L_19 = ___offset1;
		int32_t L_20 = V_1;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		int32_t L_21 = ___count2;
		int32_t L_22 = V_1;
		___count2 = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_23 = __this->____innerStream_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___buffer0;
		int32_t L_25 = ___offset1;
		int32_t L_26 = ___count2;
		NullCheck(L_23);
		int32_t L_27;
		L_27 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, L_25, L_26);
		V_1 = L_27;
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, L_29));
	}

IL_00b2:
	{
		int32_t L_30 = V_1;
		int32_t L_31 = ___count2;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_32 = V_0;
		return L_32;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::_SetWriteStream(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream__SetWriteStream_m975E5835D6F0F90F610D60DE720DA7F629D8F191 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, uint32_t ___increment0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedUtilities_t61A2EC09D59EA862653C1A3D46AF3672F2DD40E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____innerStream_14;
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->____innerStream_14;
		NullCheck(L_1);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_1, NULL);
		String_t* L_2;
		L_2 = ZipSegmentedStream_get_CurrentName_mD6F1E5C90E77F7A6C75478144C3E497196139835(__this, NULL);
		bool L_3;
		L_3 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_2, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_4;
		L_4 = ZipSegmentedStream_get_CurrentName_mD6F1E5C90E77F7A6C75478144C3E497196139835(__this, NULL);
		File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_4, NULL);
	}

IL_0031:
	{
		String_t* L_5 = __this->____currentTempName_10;
		String_t* L_6;
		L_6 = ZipSegmentedStream_get_CurrentName_mD6F1E5C90E77F7A6C75478144C3E497196139835(__this, NULL);
		File_Move_mF906DE37D2EF2E47B2DF79FA50C765859AFB9ECF(L_5, L_6, NULL);
	}

IL_0042:
	{
		uint32_t L_7 = ___increment0;
		if ((!(((uint32_t)L_7) > ((uint32_t)0))))
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_8;
		L_8 = ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline(__this, NULL);
		uint32_t L_9 = ___increment0;
		ZipSegmentedStream_set_CurrentSegment_mC782BAEFBA9BA6A472834468A5F0F39F8FD6E94D(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), NULL);
	}

IL_0057:
	{
		String_t* L_10 = __this->____baseDir_8;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** L_11 = (&__this->____innerStream_14);
		String_t** L_12 = (&__this->____currentTempName_10);
		il2cpp_codegen_runtime_class_init_inline(SharedUtilities_t61A2EC09D59EA862653C1A3D46AF3672F2DD40E0_il2cpp_TypeInfo_var);
		SharedUtilities_CreateAndOpenUniqueTempFile_m0D11AF9EEF2AE828F58DBE051DCD574E14B9ABB0(L_10, L_11, L_12, NULL);
		uint32_t L_13;
		L_13 = ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline(__this, NULL);
		if (L_13)
		{
			goto IL_0090;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = __this->____innerStream_14;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(((int32_t)134695760), NULL);
		NullCheck(L_14);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, 4);
	}

IL_0090:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream_Write_m3B0D194E64108DF6CFFD1B598A5A5EF4D2ABA0DB (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___rwMode_5;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_001e;
		}
	}
	{
		__this->____exceptionPending_6 = (bool)1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFCFFE87B700F761511CEE492D55F0737B7263A25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipSegmentedStream_Write_m3B0D194E64108DF6CFFD1B598A5A5EF4D2ABA0DB_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_2;
		L_2 = ZipSegmentedStream_get_ContiguousWrite_mFE132D1088CBE7C6098E723305637CFF63E4595F_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->____innerStream_14;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
		int32_t L_5 = ___count2;
		int32_t L_6 = __this->____maxSegmentSize_13;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(L_4, ((int64_t)L_5)))) <= ((int64_t)((int64_t)L_6))))
		{
			goto IL_004a;
		}
	}
	{
		ZipSegmentedStream__SetWriteStream_m975E5835D6F0F90F610D60DE720DA7F629D8F191(__this, 1, NULL);
	}

IL_004a:
	{
		goto IL_00a1;
	}

IL_004f:
	{
		goto IL_0087;
	}

IL_0054:
	{
		int32_t L_7 = __this->____maxSegmentSize_13;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->____innerStream_14;
		NullCheck(L_8);
		int64_t L_9;
		L_9 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)L_9)));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = __this->____innerStream_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___buffer0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = V_0;
		NullCheck(L_10);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, L_12, L_13);
		ZipSegmentedStream__SetWriteStream_m975E5835D6F0F90F610D60DE720DA7F629D8F191(__this, 1, NULL);
		int32_t L_14 = ___count2;
		int32_t L_15 = V_0;
		___count2 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		int32_t L_16 = ___offset1;
		int32_t L_17 = V_0;
		___offset1 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
	}

IL_0087:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = __this->____innerStream_14;
		NullCheck(L_18);
		int64_t L_19;
		L_19 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_18);
		int32_t L_20 = ___count2;
		int32_t L_21 = __this->____maxSegmentSize_13;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(L_19, ((int64_t)L_20)))) > ((int64_t)((int64_t)L_21))))
		{
			goto IL_0054;
		}
	}

IL_00a1:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = __this->____innerStream_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___buffer0;
		int32_t L_24 = ___offset1;
		int32_t L_25 = ___count2;
		NullCheck(L_22);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_22, L_23, L_24, L_25);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::TruncateBackward(System.UInt32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipSegmentedStream_TruncateBackward_mBA75A2D56842131D539AD58FC95D6C67ECCDFDDE (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, uint32_t ___diskNumber0, int64_t ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedUtilities_t61A2EC09D59EA862653C1A3D46AF3672F2DD40E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	uint32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		uint32_t L_0 = ___diskNumber0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)99)))))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51439F4DAD5792EB6E21CF23BCFF005E285944B0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipSegmentedStream_TruncateBackward_mBA75A2D56842131D539AD58FC95D6C67ECCDFDDE_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->___rwMode_5;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		__this->____exceptionPending_6 = (bool)1;
		ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554* L_3 = (ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipException_t1678644AFA86FD63693FC89774B2E1C7120DA554_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ZipException__ctor_mDAA48A04ED3243E4B83FC88566166486111CDF2D(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral899F12D19EE63B5B0D29F7611A5EA989E08FF765)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipSegmentedStream_TruncateBackward_mBA75A2D56842131D539AD58FC95D6C67ECCDFDDE_RuntimeMethod_var)));
	}

IL_0031:
	{
		uint32_t L_4 = ___diskNumber0;
		uint32_t L_5;
		L_5 = ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline(__this, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_004d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->____innerStream_14;
		int64_t L_7 = ___offset1;
		NullCheck(L_6);
		int64_t L_8;
		L_8 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_6, L_7, 0);
		V_0 = L_8;
		int64_t L_9 = V_0;
		return L_9;
	}

IL_004d:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = __this->____innerStream_14;
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->____innerStream_14;
		NullCheck(L_11);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_11, NULL);
		String_t* L_12 = __this->____currentTempName_10;
		bool L_13;
		L_13 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_12, NULL);
		if (!L_13)
		{
			goto IL_007e;
		}
	}
	{
		String_t* L_14 = __this->____currentTempName_10;
		File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_14, NULL);
	}

IL_007e:
	{
		uint32_t L_15;
		L_15 = ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline(__this, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 1));
		goto IL_00a9;
	}

IL_008c:
	{
		uint32_t L_16 = V_1;
		String_t* L_17;
		L_17 = ZipSegmentedStream__NameForSegment_mDFB44EFC22F2CD1F10F4247D71F2B562E78231B3(__this, L_16, NULL);
		V_2 = L_17;
		String_t* L_18 = V_2;
		bool L_19;
		L_19 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_18, NULL);
		if (!L_19)
		{
			goto IL_00a5;
		}
	}
	{
		String_t* L_20 = V_2;
		File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_20, NULL);
	}

IL_00a5:
	{
		uint32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, 1));
	}

IL_00a9:
	{
		uint32_t L_22 = V_1;
		uint32_t L_23 = ___diskNumber0;
		if ((!(((uint32_t)L_22) <= ((uint32_t)L_23))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_24 = ___diskNumber0;
		ZipSegmentedStream_set_CurrentSegment_mC782BAEFBA9BA6A472834468A5F0F39F8FD6E94D(__this, L_24, NULL);
		V_3 = 0;
		goto IL_00f7;
	}

IL_00be:
	try
	{// begin try (depth: 1)

IL_00be_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SharedUtilities_t61A2EC09D59EA862653C1A3D46AF3672F2DD40E0_il2cpp_TypeInfo_var);
			String_t* L_25;
			L_25 = SharedUtilities_InternalGetTempFileName_m407DBBF624E2875500A679B98510FFF90C04B9AC(NULL);
			__this->____currentTempName_10 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____currentTempName_10), (void*)L_25);
			String_t* L_26;
			L_26 = ZipSegmentedStream_get_CurrentName_mD6F1E5C90E77F7A6C75478144C3E497196139835(__this, NULL);
			String_t* L_27 = __this->____currentTempName_10;
			File_Move_mF906DE37D2EF2E47B2DF79FA50C765859AFB9ECF(L_26, L_27, NULL);
			goto IL_00fe;
		}
		{
			;// IL_00df: leave IL_00f3

		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e4;
		}
		throw e;
	}

CATCH_00e4:
	{// begin catch(System.IO.IOException)
		{
			int32_t L_28 = V_3;
			if ((!(((uint32_t)L_28) == ((uint32_t)2))))
			{
				goto IL_00ee;
			}
		}
		{
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}

IL_00ee:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00f3;
		}
	}// end catch (depth: 1)

IL_00f3:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00f7:
	{
		int32_t L_30 = V_3;
		if ((((int32_t)L_30) < ((int32_t)3)))
		{
			goto IL_00be;
		}
	}

IL_00fe:
	{
		String_t* L_31 = __this->____currentTempName_10;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_32 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_32, L_31, 3, NULL);
		__this->____innerStream_14 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerStream_14), (void*)L_32);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_33 = __this->____innerStream_14;
		int64_t L_34 = ___offset1;
		NullCheck(L_33);
		int64_t L_35;
		L_35 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_33, L_34, 0);
		V_4 = L_35;
		int64_t L_36 = V_4;
		return L_36;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipSegmentedStream_get_CanRead_m5265C59B4F4B2F98B159258481D2040C12E7987E (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = __this->___rwMode_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->____innerStream_14;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->____innerStream_14;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 0;
	}

IL_0025:
	{
		return (bool)G_B4_0;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipSegmentedStream_get_CanSeek_m9F32B762F5F5A5B7A26BC636FE8A08580DCA23F1 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____innerStream_14;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->____innerStream_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipSegmentedStream_get_CanWrite_m22F2A64B8BA117863C2404B63EFBC75212060082 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = __this->___rwMode_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->____innerStream_14;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->____innerStream_14;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_0025;
	}

IL_0024:
	{
		G_B4_0 = 0;
	}

IL_0025:
	{
		return (bool)G_B4_0;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream_Flush_m38DE1C464A6D188E8767470568698D91EA01CEC5 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____innerStream_14;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipSegmentedStream_get_Length_mCC7483A74D3C13FB52782A41327AFDD584246FDC (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____innerStream_14;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipSegmentedStream_get_Position_mF37B6878AACAD8E2D14C79065127974B0BD25B36 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____innerStream_14;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream_set_Position_m27695FAC501CA0B201EBD0930E84BC4C3B8F91AA (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____innerStream_14;
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipSegmentedStream_Seek_m8D3E768733DE052923D60F447ACD465941E87774 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____innerStream_14;
		int64_t L_1 = ___offset0;
		int32_t L_2 = ___origin1;
		NullCheck(L_0);
		int64_t L_3;
		L_3 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, L_1, L_2);
		V_0 = L_3;
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream_SetLength_m99281CFBC3FF91380E121A79A91D1695200B4CD9 (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___rwMode_5;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0019;
		}
	}
	{
		__this->____exceptionPending_6 = (bool)1;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipSegmentedStream_SetLength_m99281CFBC3FF91380E121A79A91D1695200B4CD9_RuntimeMethod_var)));
	}

IL_0019:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->____innerStream_14;
		int64_t L_3 = ___value0;
		NullCheck(L_2);
		VirtualActionInvoker1< int64_t >::Invoke(33 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_2, L_3);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipSegmentedStream_Dispose_mD52AA5402790371189799F3E7C053ECDF541B45D (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				bool L_0 = ___disposing0;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->____innerStream_14;
				if (!L_1)
				{
					goto IL_0032_1;
				}
			}
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->____innerStream_14;
				NullCheck(L_2);
				Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_2, NULL);
				int32_t L_3 = __this->___rwMode_5;
				if ((!(((uint32_t)L_3) == ((uint32_t)2))))
				{
					goto IL_0032_1;
				}
			}
			{
				bool L_4 = __this->____exceptionPending_6;
				if (!L_4)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0032_1;
			}

IL_0032_1:
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
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
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__ctor_mEEE4556F437BA75A25E1E615A394254C02F607CC (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_0 = (Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9*)il2cpp_codegen_object_new(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Tree__ctor_m3D91969385DCCF1898B1DE37E92028643A9ACFC3(L_0, NULL);
		__this->___treeLiterals_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___treeLiterals_54), (void*)L_0);
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_1 = (Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9*)il2cpp_codegen_object_new(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Tree__ctor_m3D91969385DCCF1898B1DE37E92028643A9ACFC3(L_1, NULL);
		__this->___treeDistances_55 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___treeDistances_55), (void*)L_1);
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_2 = (Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9*)il2cpp_codegen_object_new(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Tree__ctor_m3D91969385DCCF1898B1DE37E92028643A9ACFC3(L_2, NULL);
		__this->___treeBitLengths_56 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___treeBitLengths_56), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_3 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___MAX_BITS_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1)));
		__this->___bl_count_57 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bl_count_57), (void*)L_4);
		int32_t L_5 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___L_CODES_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_5)), 1)));
		__this->___heap_58 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heap_58), (void*)L_6);
		int32_t L_7 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___L_CODES_5;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_8 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_7)), 1)));
		__this->___depth_61 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___depth_61), (void*)L_8);
		__this->____WantRfc1950HeaderBytes_73 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_9 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___HEAP_SIZE_19;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_9, 2)));
		__this->___dyn_ltree_51 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dyn_ltree_51), (void*)L_10);
		int32_t L_11 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___D_CODES_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_11)), 1)), 2)));
		__this->___dyn_dtree_52 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dyn_dtree_52), (void*)L_12);
		int32_t L_13 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___BL_CODES_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_14 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_13)), 1)), 2)));
		__this->___bl_tree_53 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bl_tree_53), (void*)L_14);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__cctor_mE2394805C0099FD49ECA156B53C147614848A589 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		s_Il2CppMethodInitialized = true;
	}
	{
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MEM_LEVEL_MAX_0 = ((int32_t)9);
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MEM_LEVEL_DEFAULT_1 = 8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_12);
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->____ErrorMessage_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->____ErrorMessage_3), (void*)L_11);
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___PRESET_DICT_4 = ((int32_t)32);
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___INIT_STATE_5 = ((int32_t)42);
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___BUSY_STATE_6 = ((int32_t)113);
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___FINISH_STATE_7 = ((int32_t)666);
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Z_DEFLATED_8 = 8;
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___STORED_BLOCK_9 = 0;
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___STATIC_TREES_10 = 1;
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___DYN_TREES_11 = 2;
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Z_BINARY_12 = 0;
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Z_ASCII_13 = 1;
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Z_UNKNOWN_14 = 2;
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Buf_size_15 = ((int32_t)16);
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16 = 3;
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MAX_MATCH_17 = ((int32_t)258);
		int32_t L_13 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MAX_MATCH_17;
		int32_t L_14 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1));
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_15 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___L_CODES_5;
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___HEAP_SIZE_19 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_15)), 1));
		((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___END_BLOCK_20 = ((int32_t)256);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeLazyMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeLazyMatch_m58AD0CF1A2B42E70949AC78FFA1F46050C476E68 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___w_size_28;
		__this->___window_size_32 = ((int32_t)il2cpp_codegen_multiply(2, L_0));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->___head_34;
		int32_t L_2 = __this->___hash_size_36;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_1, 0, L_2, NULL);
		int32_t L_3 = __this->___compressionLevel_49;
		il2cpp_codegen_runtime_class_init_inline(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_4;
		L_4 = Config_Lookup_m212CA8F435B33FBB3562219B3735D8DBC286B601(L_3, NULL);
		__this->___config_41 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___config_41), (void*)L_4);
		DeflateManager_SetDeflater_m097FA31F2E28098BB28DA6D58398FEBCD3C54691(__this, NULL);
		__this->___strstart_45 = 0;
		__this->___block_start_40 = 0;
		__this->___lookahead_47 = 0;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_0 = L_6;
		__this->___prev_length_48 = L_6;
		int32_t L_7 = V_0;
		__this->___match_length_42 = L_7;
		__this->___match_available_44 = 0;
		__this->___ins_h_35 = 0;
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeTreeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeTreeData_m3658E304084025D28B30A09E2864957B6DCCA878 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_0 = __this->___treeLiterals_54;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->___dyn_ltree_51;
		NullCheck(L_0);
		L_0->___dyn_tree_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___dyn_tree_9), (void*)L_1);
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_2 = __this->___treeLiterals_54;
		il2cpp_codegen_runtime_class_init_inline(StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var);
		StaticTree_t041C70747D425BD1B97240F73E154155B71884A0* L_3 = ((StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var))->___Literals_2;
		NullCheck(L_2);
		L_2->___staticTree_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___staticTree_11), (void*)L_3);
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_4 = __this->___treeDistances_55;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = __this->___dyn_dtree_52;
		NullCheck(L_4);
		L_4->___dyn_tree_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___dyn_tree_9), (void*)L_5);
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_6 = __this->___treeDistances_55;
		StaticTree_t041C70747D425BD1B97240F73E154155B71884A0* L_7 = ((StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var))->___Distances_3;
		NullCheck(L_6);
		L_6->___staticTree_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___staticTree_11), (void*)L_7);
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_8 = __this->___treeBitLengths_56;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = __this->___bl_tree_53;
		NullCheck(L_8);
		L_8->___dyn_tree_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___dyn_tree_9), (void*)L_9);
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_10 = __this->___treeBitLengths_56;
		StaticTree_t041C70747D425BD1B97240F73E154155B71884A0* L_11 = ((StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var))->___BitLengths_4;
		NullCheck(L_10);
		L_10->___staticTree_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___staticTree_11), (void*)L_11);
		__this->___bi_buf_70 = (int16_t)0;
		__this->___bi_valid_71 = 0;
		__this->___last_eob_len_69 = 8;
		DeflateManager__InitializeBlocks_mA151E3F991162090B097C68DB37ADEDDDAEA5A3E(__this, NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_InitializeBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeBlocks_mA151E3F991162090B097C68DB37ADEDDDAEA5A3E (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0007:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->___dyn_ltree_51;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_1, 2))), (int16_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_4 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___L_CODES_5;
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0007;
		}
	}
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_0028:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = __this->___dyn_dtree_52;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_6, 2))), (int16_t)0);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_9 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___D_CODES_2;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0028;
		}
	}
	{
		V_2 = 0;
		goto IL_0058;
	}

IL_0049:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = __this->___bl_tree_53;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_11, 2))), (int16_t)0);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_14 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___BL_CODES_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0049;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_15 = __this->___dyn_ltree_51;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_16 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___END_BLOCK_20;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_16, 2))), (int16_t)1);
		int32_t L_17 = 0;
		V_3 = L_17;
		__this->___static_len_67 = L_17;
		int32_t L_18 = V_3;
		__this->___opt_len_66 = L_18;
		int32_t L_19 = 0;
		V_3 = L_19;
		__this->___matches_68 = L_19;
		int32_t L_20 = V_3;
		__this->___last_lit_64 = L_20;
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::pqdownheap(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_pqdownheap_mD0E8A0E5B0EEC05B70BF8E20B4905B0D9620C19E (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___k1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___heap_58;
		int32_t L_1 = ___k1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___k1;
		V_1 = ((int32_t)(L_4<<1));
		goto IL_007b;
	}

IL_0012:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = __this->___heap_len_59;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0045;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___tree0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___heap_58;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___heap_58;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_16 = __this->___depth_61;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = DeflateManager__IsSmaller_mC430C0367B7EC3ECE1A0DCAFC43C6AAFA9E22C77(L_7, L_11, L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0045:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = ___tree0;
		int32_t L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___heap_58;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_25 = __this->___depth_61;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = DeflateManager__IsSmaller_mC430C0367B7EC3ECE1A0DCAFC43C6AAFA9E22C77(L_19, L_20, L_24, L_25, NULL);
		if (!L_26)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_0087;
	}

IL_0064:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___heap_58;
		int32_t L_28 = ___k1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___heap_58;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int32_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_32);
		int32_t L_33 = V_1;
		___k1 = L_33;
		int32_t L_34 = V_1;
		V_1 = ((int32_t)(L_34<<1));
	}

IL_007b:
	{
		int32_t L_35 = V_1;
		int32_t L_36 = __this->___heap_len_59;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_0012;
		}
	}

IL_0087:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->___heap_58;
		int32_t L_38 = ___k1;
		int32_t L_39 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)L_39);
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__IsSmaller_mC430C0367B7EC3ECE1A0DCAFC43C6AAFA9E22C77 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___n1, int32_t ___m2, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___depth3, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___tree0;
		int32_t L_1 = ___n1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(L_1, 2));
		int16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___tree0;
		int32_t L_5 = ___m2;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		int16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		int16_t L_8 = V_0;
		int16_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_002c;
		}
	}
	{
		int16_t L_10 = V_0;
		int16_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0029;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_12 = ___depth3;
		int32_t L_13 = ___n1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_16 = ___depth3;
		int32_t L_17 = ___m2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		G_B4_0 = ((((int32_t)((((int32_t)((int32_t)L_15)) > ((int32_t)((int32_t)L_19)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B4_0 = 0;
	}

IL_002a:
	{
		G_B6_0 = G_B4_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B6_0 = 1;
	}

IL_002d:
	{
		return (bool)G_B6_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::scan_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_scan_tree_m994257BBB76224E0ADB2B282F137D1C635795148 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_1 = (-1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___tree0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		V_4 = 0;
		V_5 = 7;
		V_6 = 4;
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
	}

IL_001f:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = ___tree0;
		int32_t L_5 = ___max_code1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_5, 1)), 2)), 1))), (int16_t)((int32_t)32767));
		V_0 = 0;
		goto IL_0132;
	}

IL_0034:
	{
		int32_t L_6 = V_3;
		V_2 = L_6;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ___tree0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_8, 1)), 2)), 1));
		int16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		V_4 = L_12;
		int32_t L_13 = V_5;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_005a;
		}
	}
	{
		goto IL_012e;
	}

IL_005a:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = V_6;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0080;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_18 = __this->___bl_tree_53;
		int32_t L_19 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = __this->___bl_tree_53;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_multiply(L_21, 2));
		int16_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_19, 2))), (int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, L_24))));
		goto IL_00fc;
	}

IL_0080:
	{
		int32_t L_25 = V_2;
		if (!L_25)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			goto IL_00a1;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_28 = __this->___bl_tree_53;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		int16_t* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_29, 2)))));
		int32_t L_31 = *((int16_t*)L_30);
		*((int16_t*)L_30) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_31, 1)));
	}

IL_00a1:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_32 = __this->___bl_tree_53;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_33 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___REP_3_6_7;
		NullCheck(L_32);
		int16_t* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_33, 2)))));
		int32_t L_35 = *((int16_t*)L_34);
		*((int16_t*)L_34) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_35, 1)));
		goto IL_00fc;
	}

IL_00be:
	{
		int32_t L_36 = V_4;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)10))))
		{
			goto IL_00e4;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_37 = __this->___bl_tree_53;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_38 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___REPZ_3_10_8;
		NullCheck(L_37);
		int16_t* L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_38, 2)))));
		int32_t L_40 = *((int16_t*)L_39);
		*((int16_t*)L_39) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_40, 1)));
		goto IL_00fc;
	}

IL_00e4:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_41 = __this->___bl_tree_53;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_42 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___REPZ_11_138_9;
		NullCheck(L_41);
		int16_t* L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_42, 2)))));
		int32_t L_44 = *((int16_t*)L_43);
		*((int16_t*)L_43) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_44, 1)));
	}

IL_00fc:
	{
		V_4 = 0;
		int32_t L_45 = V_2;
		V_1 = L_45;
		int32_t L_46 = V_3;
		if (L_46)
		{
			goto IL_0116;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
		goto IL_012e;
	}

IL_0116:
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_3;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_0128;
		}
	}
	{
		V_5 = 6;
		V_6 = 3;
		goto IL_012e;
	}

IL_0128:
	{
		V_5 = 7;
		V_6 = 4;
	}

IL_012e:
	{
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0132:
	{
		int32_t L_50 = V_0;
		int32_t L_51 = ___max_code1;
		if ((((int32_t)L_50) <= ((int32_t)L_51)))
		{
			goto IL_0034;
		}
	}
	{
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::build_bl_tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_build_bl_tree_mE0BAEF5CF5F384A36586DDC3FF9E1F1E2F51FC30 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->___dyn_ltree_51;
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_1 = __this->___treeLiterals_54;
		NullCheck(L_1);
		int32_t L_2 = L_1->___max_code_10;
		DeflateManager_scan_tree_m994257BBB76224E0ADB2B282F137D1C635795148(__this, L_0, L_2, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->___dyn_dtree_52;
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_4 = __this->___treeDistances_55;
		NullCheck(L_4);
		int32_t L_5 = L_4->___max_code_10;
		DeflateManager_scan_tree_m994257BBB76224E0ADB2B282F137D1C635795148(__this, L_3, L_5, NULL);
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_6 = __this->___treeBitLengths_56;
		NullCheck(L_6);
		Tree_build_tree_mC6D8C80CDEAF088B4013EC8E2F57BA23993B0ED3(L_6, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_7 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___BL_CODES_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0068;
	}

IL_0047:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = __this->___bl_tree_53;
		il2cpp_codegen_runtime_class_init_inline(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = ((Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var))->___bl_order_4;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)L_12), 2)), 1));
		int16_t L_14 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_006f;
	}

IL_0064:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_0068:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)3)))
		{
			goto IL_0047;
		}
	}

IL_006f:
	{
		int32_t L_17 = __this->___opt_len_66;
		int32_t L_18 = V_0;
		__this->___opt_len_66 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(3, ((int32_t)il2cpp_codegen_add(L_18, 1)))), 5)), 5)), 4))));
		int32_t L_19 = V_0;
		return L_19;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_all_trees_m2C1F4F213945BB5B5DFB9CC0E77ACB037181D350 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___lcodes0;
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, ((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)257))), 5, NULL);
		int32_t L_1 = ___dcodes1;
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), 5, NULL);
		int32_t L_2 = ___blcodes2;
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, ((int32_t)il2cpp_codegen_subtract(L_2, 4)), 4, NULL);
		V_0 = 0;
		goto IL_0047;
	}

IL_0029:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->___bl_tree_53;
		il2cpp_codegen_runtime_class_init_inline(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = ((Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var))->___bl_order_4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)L_7), 2)), 1));
		int16_t L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, L_9, 3, NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0047:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___blcodes2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0029;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = __this->___dyn_ltree_51;
		int32_t L_14 = ___lcodes0;
		DeflateManager_send_tree_mC034FBD94C0FF6AC4319DAD4D1A09643F01F4A22(__this, L_13, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_15 = __this->___dyn_dtree_52;
		int32_t L_16 = ___dcodes1;
		DeflateManager_send_tree_mC034FBD94C0FF6AC4319DAD4D1A09643F01F4A22(__this, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_tree_mC034FBD94C0FF6AC4319DAD4D1A09643F01F4A22 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree0, int32_t ___max_code1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_1 = (-1);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___tree0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		V_4 = 0;
		V_5 = 7;
		V_6 = 4;
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
	}

IL_001f:
	{
		V_0 = 0;
		goto IL_0131;
	}

IL_0026:
	{
		int32_t L_4 = V_3;
		V_2 = L_4;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ___tree0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_6, 1)), 2)), 1));
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		int32_t L_9 = V_4;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		V_4 = L_10;
		int32_t L_11 = V_5;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_012d;
	}

IL_004c:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = V_6;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0073;
		}
	}

IL_0055:
	{
		int32_t L_16 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_17 = __this->___bl_tree_53;
		DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C(__this, L_16, L_17, NULL);
		int32_t L_18 = V_4;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		V_4 = L_19;
		if (L_19)
		{
			goto IL_0055;
		}
	}
	{
		goto IL_00fb;
	}

IL_0073:
	{
		int32_t L_20 = V_2;
		if (!L_20)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_23 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_24 = __this->___bl_tree_53;
		DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C(__this, L_23, L_24, NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0093:
	{
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_26 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___REP_3_6_7;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = __this->___bl_tree_53;
		DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C(__this, L_26, L_27, NULL);
		int32_t L_28 = V_4;
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, ((int32_t)il2cpp_codegen_subtract(L_28, 3)), 2, NULL);
		goto IL_00fb;
	}

IL_00b4:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)10))))
		{
			goto IL_00de;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_30 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___REPZ_3_10_8;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_31 = __this->___bl_tree_53;
		DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C(__this, L_30, L_31, NULL);
		int32_t L_32 = V_4;
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, ((int32_t)il2cpp_codegen_subtract(L_32, 3)), 3, NULL);
		goto IL_00fb;
	}

IL_00de:
	{
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_33 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___REPZ_11_138_9;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_34 = __this->___bl_tree_53;
		DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C(__this, L_33, L_34, NULL);
		int32_t L_35 = V_4;
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, ((int32_t)il2cpp_codegen_subtract(L_35, ((int32_t)11))), 7, NULL);
	}

IL_00fb:
	{
		V_4 = 0;
		int32_t L_36 = V_2;
		V_1 = L_36;
		int32_t L_37 = V_3;
		if (L_37)
		{
			goto IL_0115;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
		goto IL_012d;
	}

IL_0115:
	{
		int32_t L_38 = V_2;
		int32_t L_39 = V_3;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
		{
			goto IL_0127;
		}
	}
	{
		V_5 = 6;
		V_6 = 3;
		goto IL_012d;
	}

IL_0127:
	{
		V_5 = 7;
		V_6 = 4;
	}

IL_012d:
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0131:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = ___max_code1;
		if ((((int32_t)L_41) <= ((int32_t)L_42)))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_put_bytes_mA6B67EEC738D2D0310FB96CDE6EDB5E251C0CCE2 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___p0;
		int32_t L_1 = ___start1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___pending_23;
		int32_t L_3 = __this->___pendingCount_25;
		int32_t L_4 = ___len2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, L_3, L_4, NULL);
		int32_t L_5 = __this->___pendingCount_25;
		int32_t L_6 = ___len2;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___c0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___tree1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___c0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, 2));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ___tree1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = ___tree1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, ((int32_t)((int32_t)L_4&((int32_t)65535))), ((int32_t)((int32_t)L_8&((int32_t)65535))), NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___value0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length1;
		V_0 = L_0;
		int32_t L_1 = __this->___bi_valid_71;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_2 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Buf_size_15;
		int32_t L_3 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))
		{
			goto IL_00a5;
		}
	}
	{
		int16_t L_4 = __this->___bi_buf_70;
		int32_t L_5 = ___value0;
		int32_t L_6 = __this->___bi_valid_71;
		__this->___bi_buf_70 = ((int16_t)((int32_t)((int32_t)L_4|(int32_t)((int16_t)((int32_t)(((int32_t)(L_5<<((int32_t)(L_6&((int32_t)31)))))&((int32_t)65535)))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___pending_23;
		int32_t L_8 = __this->___pendingCount_25;
		int32_t L_9 = L_8;
		V_1 = L_9;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_1;
		int16_t L_11 = __this->___bi_buf_70;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___pending_23;
		int32_t L_13 = __this->___pendingCount_25;
		int32_t L_14 = L_13;
		V_1 = L_14;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		int16_t L_16 = __this->___bi_buf_70;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_16>>8))));
		int32_t L_17 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_18 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Buf_size_15;
		int32_t L_19 = __this->___bi_valid_71;
		__this->___bi_buf_70 = ((int16_t)((int32_t)((uint32_t)L_17>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, L_19))&((int32_t)31))))));
		int32_t L_20 = __this->___bi_valid_71;
		int32_t L_21 = V_0;
		int32_t L_22 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Buf_size_15;
		__this->___bi_valid_71 = ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, L_22))));
		goto IL_00d3;
	}

IL_00a5:
	{
		int16_t L_23 = __this->___bi_buf_70;
		int32_t L_24 = ___value0;
		int32_t L_25 = __this->___bi_valid_71;
		__this->___bi_buf_70 = ((int16_t)((int32_t)((int32_t)L_23|(int32_t)((int16_t)((int32_t)(((int32_t)(L_24<<((int32_t)(L_25&((int32_t)31)))))&((int32_t)65535)))))));
		int32_t L_26 = __this->___bi_valid_71;
		int32_t L_27 = V_0;
		__this->___bi_valid_71 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
	}

IL_00d3:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_align_m81FBAF76C5D7EA3865F33FAC70DEDEC406AEA4F1 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___STATIC_TREES_10;
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, ((int32_t)(L_0<<1)), 3, NULL);
		int32_t L_1 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___END_BLOCK_20;
		il2cpp_codegen_runtime_class_init_inline(StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var))->___lengthAndLiteralsTreeCodes_0;
		DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C(__this, L_1, L_2, NULL);
		DeflateManager_bi_flush_mAD34CBC465F8A77BCCDEB9958EA762AD0FFD2914(__this, NULL);
		int32_t L_3 = __this->___last_eob_len_69;
		int32_t L_4 = __this->___bi_valid_71;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(1, L_3)), ((int32_t)10))), L_4))) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___STATIC_TREES_10;
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, ((int32_t)(L_5<<1)), 3, NULL);
		int32_t L_6 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___END_BLOCK_20;
		il2cpp_codegen_runtime_class_init_inline(StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = ((StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var))->___lengthAndLiteralsTreeCodes_0;
		DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C(__this, L_6, L_7, NULL);
		DeflateManager_bi_flush_mAD34CBC465F8A77BCCDEB9958EA762AD0FFD2914(__this, NULL);
	}

IL_0061:
	{
		__this->___last_eob_len_69 = 7;
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__tr_tally_mB35B4023D563CA9DA849D34BE6909DE05158E389 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B14_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___pending_23;
		int32_t L_1 = __this->____distanceOffset_65;
		int32_t L_2 = __this->___last_lit_64;
		int32_t L_3 = ___dist0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 2))))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_3>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___pending_23;
		int32_t L_5 = __this->____distanceOffset_65;
		int32_t L_6 = __this->___last_lit_64;
		int32_t L_7 = ___dist0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_5, ((int32_t)il2cpp_codegen_multiply(L_6, 2)))), 1))), (uint8_t)((int32_t)(uint8_t)L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___pending_23;
		int32_t L_9 = __this->____lengthOffset_62;
		int32_t L_10 = __this->___last_lit_64;
		int32_t L_11 = ___lc1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_9, L_10))), (uint8_t)((int32_t)(uint8_t)L_11));
		int32_t L_12 = __this->___last_lit_64;
		__this->___last_lit_64 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = ___dist0;
		if (L_13)
		{
			goto IL_0077;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_14 = __this->___dyn_ltree_51;
		int32_t L_15 = ___lc1;
		NullCheck(L_14);
		int16_t* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_15, 2)))));
		int32_t L_17 = *((int16_t*)L_16);
		*((int16_t*)L_16) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		goto IL_00c6;
	}

IL_0077:
	{
		int32_t L_18 = __this->___matches_68;
		__this->___matches_68 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = ___dist0;
		___dist0 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = __this->___dyn_ltree_51;
		il2cpp_codegen_runtime_class_init_inline(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_21 = ((Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var))->___LengthCode_6;
		int32_t L_22 = ___lc1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_25 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___LITERALS_3;
		NullCheck(L_20);
		int16_t* L_26 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)L_24), L_25)), 1)), 2)))));
		int32_t L_27 = *((int16_t*)L_26);
		*((int16_t*)L_26) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_27, 1)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_28 = __this->___dyn_dtree_52;
		int32_t L_29 = ___dist0;
		int32_t L_30;
		L_30 = Tree_DistanceCode_mC8379D324E34BCD2C415AB8910412EEFA24278C5(L_29, NULL);
		NullCheck(L_28);
		int16_t* L_31 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_30, 2)))));
		int32_t L_32 = *((int16_t*)L_31);
		*((int16_t*)L_31) = (int16_t)((int16_t)((int32_t)il2cpp_codegen_add(L_32, 1)));
	}

IL_00c6:
	{
		int32_t L_33 = __this->___last_lit_64;
		if (((int32_t)(L_33&((int32_t)8191))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_34 = __this->___compressionLevel_49;
		if ((((int32_t)L_34) <= ((int32_t)2)))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_35 = __this->___last_lit_64;
		V_0 = ((int32_t)(L_35<<3));
		int32_t L_36 = __this->___strstart_45;
		int32_t L_37 = __this->___block_start_40;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
		V_2 = 0;
		goto IL_0121;
	}

IL_0101:
	{
		int32_t L_38 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_39 = __this->___dyn_dtree_52;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_multiply(L_40, 2));
		int16_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		il2cpp_codegen_runtime_class_init_inline(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = ((Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var))->___ExtraDistanceBits_2;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int32_t)((int64_t)il2cpp_codegen_add(((int64_t)L_38), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_42), ((int64_t)il2cpp_codegen_add(((int64_t)5), ((int64_t)L_46))))))));
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0121:
	{
		int32_t L_48 = V_2;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_49 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___D_CODES_2;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_50 = V_0;
		V_0 = ((int32_t)(L_50>>3));
		int32_t L_51 = __this->___matches_68;
		int32_t L_52 = __this->___last_lit_64;
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)(L_52/2)))))
		{
			goto IL_014e;
		}
	}
	{
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		if ((((int32_t)L_53) >= ((int32_t)((int32_t)(L_54/2)))))
		{
			goto IL_014e;
		}
	}
	{
		return (bool)1;
	}

IL_014e:
	{
		int32_t L_55 = __this->___last_lit_64;
		int32_t L_56 = __this->___lit_bufsize_63;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_56, 1)))))
		{
			goto IL_0171;
		}
	}
	{
		int32_t L_57 = __this->___last_lit_64;
		int32_t L_58 = __this->___lit_bufsize_63;
		G_B14_0 = ((((int32_t)L_57) == ((int32_t)L_58))? 1 : 0);
		goto IL_0172;
	}

IL_0171:
	{
		G_B14_0 = 1;
	}

IL_0172:
	{
		return (bool)G_B14_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_compressed_block_m031020CB4C2003FF8193E69F01B5BCD8D900EF09 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___ltree0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___dtree1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_2 = 0;
		int32_t L_0 = __this->___last_lit_64;
		if (!L_0)
		{
			goto IL_00e8;
		}
	}

IL_000d:
	{
		int32_t L_1 = __this->____distanceOffset_65;
		int32_t L_2 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 2))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___pending_23;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___pending_23;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_6<<8))&((int32_t)65280)))|((int32_t)((int32_t)L_10&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___pending_23;
		int32_t L_12 = __this->____lengthOffset_62;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)((int32_t)L_15&((int32_t)255)));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_0;
		if (L_17)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_18 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = ___ltree0;
		DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C(__this, L_18, L_19, NULL);
		goto IL_00dc;
	}

IL_006a:
	{
		il2cpp_codegen_runtime_class_init_inline(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_20 = ((Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var))->___LengthCode_6;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)L_23);
		int32_t L_24 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_25 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___LITERALS_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_26 = ___ltree0;
		DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_24, L_25)), 1)), L_26, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ((Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var))->___ExtraLengthBits_1;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_4 = L_30;
		int32_t L_31 = V_4;
		if (!L_31)
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_32 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ((Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var))->___LengthBase_7;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_32, L_36));
		int32_t L_37 = V_1;
		int32_t L_38 = V_4;
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, L_37, L_38, NULL);
	}

IL_00a6:
	{
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		int32_t L_40 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = Tree_DistanceCode_mC8379D324E34BCD2C415AB8910412EEFA24278C5(L_40, NULL);
		V_3 = L_41;
		int32_t L_42 = V_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43 = ___dtree1;
		DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C(__this, L_42, L_43, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ((Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var))->___ExtraDistanceBits_2;
		int32_t L_45 = V_3;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_4 = L_47;
		int32_t L_48 = V_4;
		if (!L_48)
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_49 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = ((Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9_il2cpp_TypeInfo_var))->___DistanceBase_8;
		int32_t L_51 = V_3;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_49, L_53));
		int32_t L_54 = V_0;
		int32_t L_55 = V_4;
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(__this, L_54, L_55, NULL);
	}

IL_00dc:
	{
		int32_t L_56 = V_2;
		int32_t L_57 = __this->___last_lit_64;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_000d;
		}
	}

IL_00e8:
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_58 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___END_BLOCK_20;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_59 = ___ltree0;
		DeflateManager_send_code_m3482047DC2A33D192A9F6F4402C826E0C147394C(__this, L_58, L_59, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_60 = ___ltree0;
		int32_t L_61 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___END_BLOCK_20;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_61, 2)), 1));
		int16_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		__this->___last_eob_len_69 = L_63;
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_data_type_mB472D314E679A3258E888A60B321167C547EC9DA (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B11_0 = NULL;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B12_1 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_001c;
	}

IL_000b:
	{
		int32_t L_0 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->___dyn_ltree_51;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int32_t)il2cpp_codegen_add(L_0, (int32_t)L_4));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001c:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)7)))
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0039;
	}

IL_0028:
	{
		int32_t L_7 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = __this->___dyn_ltree_51;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply(L_9, 2));
		int16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, (int32_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0039:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_005a;
	}

IL_0049:
	{
		int32_t L_14 = V_2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_15 = __this->___dyn_ltree_51;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_multiply(L_16, 2));
		int16_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, (int32_t)L_18));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005a:
	{
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var);
		int32_t L_21 = ((InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_t5430CFCF3F8F6C5BB1E5D90F778B2286C4338F9B_il2cpp_TypeInfo_var))->___LITERALS_3;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		G_B10_0 = __this;
		if ((((int32_t)L_22) <= ((int32_t)((int32_t)(L_23>>2)))))
		{
			G_B11_0 = __this;
			goto IL_0079;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_24 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Z_BINARY_12;
		G_B12_0 = L_24;
		G_B12_1 = G_B10_0;
		goto IL_007e;
	}

IL_0079:
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_25 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Z_ASCII_13;
		G_B12_0 = L_25;
		G_B12_1 = G_B11_0;
	}

IL_007e:
	{
		NullCheck(G_B12_1);
		G_B12_1->___data_type_26 = ((int8_t)G_B12_0);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_flush_mAD34CBC465F8A77BCCDEB9958EA762AD0FFD2914 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bi_valid_71;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0060;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___pending_23;
		int32_t L_2 = __this->___pendingCount_25;
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		int16_t L_5 = __this->___bi_buf_70;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___pending_23;
		int32_t L_7 = __this->___pendingCount_25;
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		int16_t L_10 = __this->___bi_buf_70;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10>>8))));
		__this->___bi_buf_70 = (int16_t)0;
		__this->___bi_valid_71 = 0;
		goto IL_00a8;
	}

IL_0060:
	{
		int32_t L_11 = __this->___bi_valid_71;
		if ((((int32_t)L_11) < ((int32_t)8)))
		{
			goto IL_00a8;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___pending_23;
		int32_t L_13 = __this->___pendingCount_25;
		int32_t L_14 = L_13;
		V_0 = L_14;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_0;
		int16_t L_16 = __this->___bi_buf_70;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)(uint8_t)L_16));
		int16_t L_17 = __this->___bi_buf_70;
		__this->___bi_buf_70 = ((int16_t)((int32_t)((int32_t)L_17>>8)));
		int32_t L_18 = __this->___bi_valid_71;
		__this->___bi_valid_71 = ((int32_t)il2cpp_codegen_subtract(L_18, 8));
	}

IL_00a8:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_windup_m78C22AFB60E635BD87A19EDD9274639866E4B7BD (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bi_valid_71;
		if ((((int32_t)L_0) <= ((int32_t)8)))
		{
			goto IL_0051;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___pending_23;
		int32_t L_2 = __this->___pendingCount_25;
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		int16_t L_5 = __this->___bi_buf_70;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___pending_23;
		int32_t L_7 = __this->___pendingCount_25;
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		int16_t L_10 = __this->___bi_buf_70;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10>>8))));
		goto IL_007c;
	}

IL_0051:
	{
		int32_t L_11 = __this->___bi_valid_71;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___pending_23;
		int32_t L_13 = __this->___pendingCount_25;
		int32_t L_14 = L_13;
		V_0 = L_14;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_0;
		int16_t L_16 = __this->___bi_buf_70;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)(uint8_t)L_16));
	}

IL_007c:
	{
		__this->___bi_buf_70 = (int16_t)0;
		__this->___bi_valid_71 = 0;
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_copy_block_m10270CC8A7EA37E0D7FB7D1DF99C962A2682CD43 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		DeflateManager_bi_windup_m78C22AFB60E635BD87A19EDD9274639866E4B7BD(__this, NULL);
		__this->___last_eob_len_69 = 8;
		bool L_0 = ___header2;
		if (!L_0)
		{
			goto IL_0081;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___pending_23;
		int32_t L_2 = __this->___pendingCount_25;
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		int32_t L_5 = ___len1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___pending_23;
		int32_t L_7 = __this->___pendingCount_25;
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		int32_t L_10 = ___len1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_10>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___pending_23;
		int32_t L_12 = __this->___pendingCount_25;
		int32_t L_13 = L_12;
		V_0 = L_13;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_0;
		int32_t L_15 = ___len1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)(uint8_t)((~L_15))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___pending_23;
		int32_t L_17 = __this->___pendingCount_25;
		int32_t L_18 = L_17;
		V_0 = L_18;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_0;
		int32_t L_20 = ___len1;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)((int32_t)(uint8_t)((int32_t)(((~L_20))>>8))));
	}

IL_0081:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___window_31;
		int32_t L_22 = ___buf0;
		int32_t L_23 = ___len1;
		DeflateManager_put_bytes_mA6B67EEC738D2D0310FB96CDE6EDB5E251C0CCE2(__this, L_21, L_22, L_23, NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_flush_block_only_mA3B330A93A50BF5BB359D99600B77BB070E2E128 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, bool ___eof0, const RuntimeMethod* method) 
{
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B2_0 = NULL;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B3_1 = NULL;
	{
		int32_t L_0 = __this->___block_start_40;
		G_B1_0 = __this;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___block_start_40;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		int32_t L_2 = __this->___strstart_45;
		int32_t L_3 = __this->___block_start_40;
		bool L_4 = ___eof0;
		NullCheck(G_B3_1);
		DeflateManager__tr_flush_block_m930F881EF1EC6D5455E71CFEF4E6365E9A4A65FA(G_B3_1, G_B3_0, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), L_4, NULL);
		int32_t L_5 = __this->___strstart_45;
		__this->___block_start_40 = L_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_6 = __this->____codec_21;
		NullCheck(L_6);
		ZlibCodec_flush_pending_mA2FFE50F3FC2382C73EA7C6233833FA00841B388(L_6, NULL);
		return;
	}
}
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateNone(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateNone_m4F29886354D7C04DE790E8B6279E35D0A7CF3A67 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B24_0 = 0;
	{
		V_0 = ((int32_t)65535);
		int32_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___pending_23;
		NullCheck(L_1);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 5)))))
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___pending_23;
		NullCheck(L_2);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 5));
	}

IL_0021:
	{
		int32_t L_3 = __this->___lookahead_47;
		if ((((int32_t)L_3) > ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		DeflateManager__fillWindow_mACFC61F659E4DA1B7C0861972ECA65BA0A5AF628(__this, NULL);
		int32_t L_4 = __this->___lookahead_47;
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ___flush0;
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0046:
	{
		int32_t L_6 = __this->___lookahead_47;
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		goto IL_00fa;
	}

IL_0056:
	{
		int32_t L_7 = __this->___strstart_45;
		int32_t L_8 = __this->___lookahead_47;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		__this->___lookahead_47 = 0;
		int32_t L_9 = __this->___block_start_40;
		int32_t L_10 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		int32_t L_11 = __this->___strstart_45;
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_12 = __this->___strstart_45;
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_00be;
		}
	}

IL_0090:
	{
		int32_t L_14 = __this->___strstart_45;
		int32_t L_15 = V_1;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		int32_t L_16 = V_1;
		__this->___strstart_45 = L_16;
		DeflateManager_flush_block_only_mA3B330A93A50BF5BB359D99600B77BB070E2E128(__this, (bool)0, NULL);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_17 = __this->____codec_21;
		NullCheck(L_17);
		int32_t L_18 = L_17->___AvailableBytesOut_6;
		if (L_18)
		{
			goto IL_00be;
		}
	}
	{
		return (int32_t)(0);
	}

IL_00be:
	{
		int32_t L_19 = __this->___strstart_45;
		int32_t L_20 = __this->___block_start_40;
		int32_t L_21 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_22 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_19, L_20))) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, L_22)))))
		{
			goto IL_00f5;
		}
	}
	{
		DeflateManager_flush_block_only_mA3B330A93A50BF5BB359D99600B77BB070E2E128(__this, (bool)0, NULL);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_23 = __this->____codec_21;
		NullCheck(L_23);
		int32_t L_24 = L_23->___AvailableBytesOut_6;
		if (L_24)
		{
			goto IL_00f5;
		}
	}
	{
		return (int32_t)(0);
	}

IL_00f5:
	{
		goto IL_0021;
	}

IL_00fa:
	{
		int32_t L_25 = ___flush0;
		DeflateManager_flush_block_only_mA3B330A93A50BF5BB359D99600B77BB070E2E128(__this, (bool)((((int32_t)L_25) == ((int32_t)4))? 1 : 0), NULL);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_26 = __this->____codec_21;
		NullCheck(L_26);
		int32_t L_27 = L_26->___AvailableBytesOut_6;
		if (L_27)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_28 = ___flush0;
		if ((!(((uint32_t)L_28) == ((uint32_t)4))))
		{
			goto IL_0121;
		}
	}
	{
		G_B20_0 = 2;
		goto IL_0122;
	}

IL_0121:
	{
		G_B20_0 = 0;
	}

IL_0122:
	{
		return (int32_t)(G_B20_0);
	}

IL_0123:
	{
		int32_t L_29 = ___flush0;
		if ((!(((uint32_t)L_29) == ((uint32_t)4))))
		{
			goto IL_0130;
		}
	}
	{
		G_B24_0 = 3;
		goto IL_0131;
	}

IL_0130:
	{
		G_B24_0 = 1;
	}

IL_0131:
	{
		return (int32_t)(G_B24_0);
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_stored_block_m1E24ACF269B0391AF8AAADE3A5E4C90FE7307723 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B3_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___STORED_BLOCK_9;
		bool L_1 = ___eof2;
		G_B1_0 = ((int32_t)(L_0<<1));
		G_B1_1 = __this;
		if (!L_1)
		{
			G_B2_0 = ((int32_t)(L_0<<1));
			G_B2_1 = __this;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0015:
	{
		NullCheck(G_B3_2);
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(G_B3_2, ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0)), 3, NULL);
		int32_t L_2 = ___buf0;
		int32_t L_3 = ___stored_len1;
		DeflateManager_copy_block_m10270CC8A7EA37E0D7FB7D1DF99C962A2682CD43(__this, L_2, L_3, (bool)1, NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_flush_block_m930F881EF1EC6D5455E71CFEF4E6365E9A4A65FA (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B13_0 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B13_1 = NULL;
	int32_t G_B12_0 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B12_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B14_2 = NULL;
	int32_t G_B17_0 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B17_1 = NULL;
	int32_t G_B16_0 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B16_1 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B18_2 = NULL;
	{
		V_2 = 0;
		int32_t L_0 = __this->___compressionLevel_49;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		int8_t L_1 = __this->___data_type_26;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_2 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Z_UNKNOWN_14;
		if ((!(((uint32_t)((int32_t)L_1)) == ((uint32_t)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		DeflateManager_set_data_type_mB472D314E679A3258E888A60B321167C547EC9DA(__this, NULL);
	}

IL_0025:
	{
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_3 = __this->___treeLiterals_54;
		NullCheck(L_3);
		Tree_build_tree_mC6D8C80CDEAF088B4013EC8E2F57BA23993B0ED3(L_3, __this, NULL);
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_4 = __this->___treeDistances_55;
		NullCheck(L_4);
		Tree_build_tree_mC6D8C80CDEAF088B4013EC8E2F57BA23993B0ED3(L_4, __this, NULL);
		int32_t L_5;
		L_5 = DeflateManager_build_bl_tree_mE0BAEF5CF5F384A36586DDC3FF9E1F1E2F51FC30(__this, NULL);
		V_2 = L_5;
		int32_t L_6 = __this->___opt_len_66;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_6, 3)), 7))>>3));
		int32_t L_7 = __this->___static_len_67;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_7, 3)), 7))>>3));
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) > ((int32_t)L_9)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_10 = V_1;
		V_0 = L_10;
	}

IL_0067:
	{
		goto IL_0072;
	}

IL_006c:
	{
		int32_t L_11 = ___stored_len1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 5));
		V_1 = L_12;
		V_0 = L_12;
	}

IL_0072:
	{
		int32_t L_13 = ___stored_len1;
		int32_t L_14 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 4))) > ((int32_t)L_14)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_15 = ___buf0;
		if ((((int32_t)L_15) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_16 = ___buf0;
		int32_t L_17 = ___stored_len1;
		bool L_18 = ___eof2;
		DeflateManager__tr_stored_block_m1E24ACF269B0391AF8AAADE3A5E4C90FE7307723(__this, L_16, L_17, L_18, NULL);
		goto IL_0119;
	}

IL_0090:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_00c8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_21 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___STATIC_TREES_10;
		bool L_22 = ___eof2;
		G_B12_0 = ((int32_t)(L_21<<1));
		G_B12_1 = __this;
		if (!L_22)
		{
			G_B13_0 = ((int32_t)(L_21<<1));
			G_B13_1 = __this;
			goto IL_00ab;
		}
	}
	{
		G_B14_0 = 1;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_00ac:
	{
		NullCheck(G_B14_2);
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(G_B14_2, ((int32_t)il2cpp_codegen_add(G_B14_1, G_B14_0)), 3, NULL);
		il2cpp_codegen_runtime_class_init_inline(StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_23 = ((StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var))->___lengthAndLiteralsTreeCodes_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_24 = ((StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_t041C70747D425BD1B97240F73E154155B71884A0_il2cpp_TypeInfo_var))->___distTreeCodes_1;
		DeflateManager_send_compressed_block_m031020CB4C2003FF8193E69F01B5BCD8D900EF09(__this, L_23, L_24, NULL);
		goto IL_0119;
	}

IL_00c8:
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_25 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___DYN_TREES_11;
		bool L_26 = ___eof2;
		G_B16_0 = ((int32_t)(L_25<<1));
		G_B16_1 = __this;
		if (!L_26)
		{
			G_B17_0 = ((int32_t)(L_25<<1));
			G_B17_1 = __this;
			goto IL_00dc;
		}
	}
	{
		G_B18_0 = 1;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		goto IL_00dd;
	}

IL_00dc:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
	}

IL_00dd:
	{
		NullCheck(G_B18_2);
		DeflateManager_send_bits_m783653F872B5C9B5FE204BFBC01815B0B7F629A8(G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), 3, NULL);
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_27 = __this->___treeLiterals_54;
		NullCheck(L_27);
		int32_t L_28 = L_27->___max_code_10;
		Tree_t5A82AC93A18336356B6C8A41C7E42FD080AB2CA9* L_29 = __this->___treeDistances_55;
		NullCheck(L_29);
		int32_t L_30 = L_29->___max_code_10;
		int32_t L_31 = V_2;
		DeflateManager_send_all_trees_m2C1F4F213945BB5B5DFB9CC0E77ACB037181D350(__this, ((int32_t)il2cpp_codegen_add(L_28, 1)), ((int32_t)il2cpp_codegen_add(L_30, 1)), ((int32_t)il2cpp_codegen_add(L_31, 1)), NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_32 = __this->___dyn_ltree_51;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_33 = __this->___dyn_dtree_52;
		DeflateManager_send_compressed_block_m031020CB4C2003FF8193E69F01B5BCD8D900EF09(__this, L_32, L_33, NULL);
	}

IL_0119:
	{
		DeflateManager__InitializeBlocks_mA151E3F991162090B097C68DB37ADEDDDAEA5A3E(__this, NULL);
		bool L_34 = ___eof2;
		if (!L_34)
		{
			goto IL_012b;
		}
	}
	{
		DeflateManager_bi_windup_m78C22AFB60E635BD87A19EDD9274639866E4B7BD(__this, NULL);
	}

IL_012b:
	{
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::_fillWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__fillWindow_mACFC61F659E4DA1B7C0861972ECA65BA0A5AF628 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B10_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B10_1 = NULL;
	int32_t G_B9_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B11_2 = NULL;
	int32_t G_B15_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B15_1 = NULL;
	int32_t G_B14_0 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* G_B16_2 = NULL;

IL_0000:
	{
		int32_t L_0 = __this->___window_size_32;
		int32_t L_1 = __this->___lookahead_47;
		int32_t L_2 = __this->___strstart_45;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), L_2));
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = __this->___strstart_45;
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = __this->___lookahead_47;
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = __this->___w_size_28;
		V_3 = L_6;
		goto IL_015d;
	}

IL_003d:
	{
		int32_t L_7 = V_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_015d;
	}

IL_004d:
	{
		int32_t L_9 = __this->___strstart_45;
		int32_t L_10 = __this->___w_size_28;
		int32_t L_11 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_10, L_11)), L_12)))))
		{
			goto IL_015d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___window_31;
		int32_t L_14 = __this->___w_size_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___window_31;
		int32_t L_16 = __this->___w_size_28;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_13, L_14, (RuntimeArray*)L_15, 0, L_16, NULL);
		int32_t L_17 = __this->___match_start_46;
		int32_t L_18 = __this->___w_size_28;
		__this->___match_start_46 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		int32_t L_19 = __this->___strstart_45;
		int32_t L_20 = __this->___w_size_28;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_subtract(L_19, L_20));
		int32_t L_21 = __this->___block_start_40;
		int32_t L_22 = __this->___w_size_28;
		__this->___block_start_40 = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
		int32_t L_23 = __this->___hash_size_36;
		V_0 = L_23;
		int32_t L_24 = V_0;
		V_2 = L_24;
	}

IL_00cb:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_25 = __this->___head_34;
		int32_t L_26 = V_2;
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		V_2 = L_27;
		NullCheck(L_25);
		int32_t L_28 = L_27;
		int16_t L_29 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int32_t)((int32_t)L_29&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_30 = __this->___head_34;
		int32_t L_31 = V_2;
		int32_t L_32 = V_1;
		int32_t L_33 = __this->___w_size_28;
		G_B9_0 = L_31;
		G_B9_1 = L_30;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			G_B10_0 = L_31;
			G_B10_1 = L_30;
			goto IL_00fe;
		}
	}
	{
		int32_t L_34 = V_1;
		int32_t L_35 = __this->___w_size_28;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00ff;
	}

IL_00fe:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00ff:
	{
		NullCheck(G_B11_2);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (int16_t)((int16_t)G_B11_0));
		int32_t L_36 = V_0;
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		V_0 = L_37;
		if (L_37)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_38 = __this->___w_size_28;
		V_0 = L_38;
		int32_t L_39 = V_0;
		V_2 = L_39;
	}

IL_0114:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_40 = __this->___prev_33;
		int32_t L_41 = V_2;
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		V_2 = L_42;
		NullCheck(L_40);
		int32_t L_43 = L_42;
		int16_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_1 = ((int32_t)((int32_t)L_44&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_45 = __this->___prev_33;
		int32_t L_46 = V_2;
		int32_t L_47 = V_1;
		int32_t L_48 = __this->___w_size_28;
		G_B14_0 = L_46;
		G_B14_1 = L_45;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			G_B15_0 = L_46;
			G_B15_1 = L_45;
			goto IL_0147;
		}
	}
	{
		int32_t L_49 = V_1;
		int32_t L_50 = __this->___w_size_28;
		G_B16_0 = ((int32_t)il2cpp_codegen_subtract(L_49, L_50));
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_0148;
	}

IL_0147:
	{
		G_B16_0 = 0;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_0148:
	{
		NullCheck(G_B16_2);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (int16_t)((int16_t)G_B16_0));
		int32_t L_51 = V_0;
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		V_0 = L_52;
		if (L_52)
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_53 = V_3;
		int32_t L_54 = __this->___w_size_28;
		V_3 = ((int32_t)il2cpp_codegen_add(L_53, L_54));
	}

IL_015d:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_55 = __this->____codec_21;
		NullCheck(L_55);
		int32_t L_56 = L_55->___AvailableBytesIn_2;
		if (L_56)
		{
			goto IL_016e;
		}
	}
	{
		return;
	}

IL_016e:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_57 = __this->____codec_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->___window_31;
		int32_t L_59 = __this->___strstart_45;
		int32_t L_60 = __this->___lookahead_47;
		int32_t L_61 = V_3;
		NullCheck(L_57);
		int32_t L_62;
		L_62 = ZlibCodec_read_buf_mDD2B588841B17A6DB911A3EFFAFB146F1B50B7A5(L_57, L_58, ((int32_t)il2cpp_codegen_add(L_59, L_60)), L_61, NULL);
		V_0 = L_62;
		int32_t L_63 = __this->___lookahead_47;
		int32_t L_64 = V_0;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_add(L_63, L_64));
		int32_t L_65 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_66 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_01f8;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = __this->___window_31;
		int32_t L_68 = __this->___strstart_45;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		uint8_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		__this->___ins_h_35 = ((int32_t)((int32_t)L_70&((int32_t)255)));
		int32_t L_71 = __this->___ins_h_35;
		int32_t L_72 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = __this->___window_31;
		int32_t L_74 = __this->___strstart_45;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		uint8_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_71<<((int32_t)(L_72&((int32_t)31)))))^((int32_t)((int32_t)L_76&((int32_t)255)))))&L_77));
	}

IL_01f8:
	{
		int32_t L_78 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_79 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_78) >= ((int32_t)L_79)))
		{
			goto IL_0218;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_80 = __this->____codec_21;
		NullCheck(L_80);
		int32_t L_81 = L_80->___AvailableBytesIn_2;
		if (L_81)
		{
			goto IL_0000;
		}
	}

IL_0218:
	{
		return;
	}
}
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateFast(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateFast_m6D259BB8539CB085CFC7C39E27A1755FD1B73137 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B33_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_1 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		DeflateManager__fillWindow_mACFC61F659E4DA1B7C0861972ECA65BA0A5AF628(__this, NULL);
		int32_t L_2 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = ___flush0;
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0030:
	{
		int32_t L_5 = __this->___lookahead_47;
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_0309;
	}

IL_0040:
	{
		int32_t L_6 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_8 = __this->___ins_h_35;
		int32_t L_9 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___window_31;
		int32_t L_11 = __this->___strstart_45;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1))));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_8<<((int32_t)(L_9&((int32_t)31)))))^((int32_t)((int32_t)L_14&((int32_t)255)))))&L_15));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_16 = __this->___head_34;
		int32_t L_17 = __this->___ins_h_35;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int16_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int32_t)((int32_t)L_19&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = __this->___prev_33;
		int32_t L_21 = __this->___strstart_45;
		int32_t L_22 = __this->___w_mask_30;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_23 = __this->___head_34;
		int32_t L_24 = __this->___ins_h_35;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int16_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_21&L_22))), (int16_t)L_26);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = __this->___head_34;
		int32_t L_28 = __this->___ins_h_35;
		int32_t L_29 = __this->___strstart_45;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int16_t)((int16_t)L_29));
	}

IL_00d2:
	{
		int32_t L_30 = V_0;
		if ((((int64_t)((int64_t)L_30)) == ((int64_t)((int64_t)0))))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_31 = __this->___strstart_45;
		int32_t L_32 = V_0;
		int32_t L_33 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_34 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_31, L_32))&((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_33, L_34)))))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_35 = __this->___compressionStrategy_50;
		if ((((int32_t)L_35) == ((int32_t)2)))
		{
			goto IL_0113;
		}
	}
	{
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = DeflateManager_longest_match_mA5AD89613E7A03F0C3594EB24F1BD394267A05DE(__this, L_36, NULL);
		__this->___match_length_42 = L_37;
	}

IL_0113:
	{
		int32_t L_38 = __this->___match_length_42;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_39 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_40 = __this->___strstart_45;
		int32_t L_41 = __this->___match_start_46;
		int32_t L_42 = __this->___match_length_42;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_43 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		bool L_44;
		L_44 = DeflateManager__tr_tally_mB35B4023D563CA9DA849D34BE6909DE05158E389(__this, ((int32_t)il2cpp_codegen_subtract(L_40, L_41)), ((int32_t)il2cpp_codegen_subtract(L_42, L_43)), NULL);
		V_1 = L_44;
		int32_t L_45 = __this->___lookahead_47;
		int32_t L_46 = __this->___match_length_42;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_45, L_46));
		int32_t L_47 = __this->___match_length_42;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_48 = __this->___config_41;
		NullCheck(L_48);
		int32_t L_49 = L_48->___MaxLazy_1;
		if ((((int32_t)L_47) > ((int32_t)L_49)))
		{
			goto IL_0243;
		}
	}
	{
		int32_t L_50 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_51 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0243;
		}
	}
	{
		int32_t L_52 = __this->___match_length_42;
		__this->___match_length_42 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
	}

IL_018a:
	{
		int32_t L_53 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = __this->___ins_h_35;
		int32_t L_55 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___window_31;
		int32_t L_57 = __this->___strstart_45;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_58 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		NullCheck(L_56);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_57, ((int32_t)il2cpp_codegen_subtract(L_58, 1))));
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		int32_t L_61 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_54<<((int32_t)(L_55&((int32_t)31)))))^((int32_t)((int32_t)L_60&((int32_t)255)))))&L_61));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_62 = __this->___head_34;
		int32_t L_63 = __this->___ins_h_35;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		int16_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_0 = ((int32_t)((int32_t)L_65&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_66 = __this->___prev_33;
		int32_t L_67 = __this->___strstart_45;
		int32_t L_68 = __this->___w_mask_30;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_69 = __this->___head_34;
		int32_t L_70 = __this->___ins_h_35;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		int16_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_67&L_68))), (int16_t)L_72);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_73 = __this->___head_34;
		int32_t L_74 = __this->___ins_h_35;
		int32_t L_75 = __this->___strstart_45;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (int16_t)((int16_t)L_75));
		int32_t L_76 = __this->___match_length_42;
		int32_t L_77 = ((int32_t)il2cpp_codegen_subtract(L_76, 1));
		V_2 = L_77;
		__this->___match_length_42 = L_77;
		int32_t L_78 = V_2;
		if (L_78)
		{
			goto IL_018a;
		}
	}
	{
		int32_t L_79 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		goto IL_02a9;
	}

IL_0243:
	{
		int32_t L_80 = __this->___strstart_45;
		int32_t L_81 = __this->___match_length_42;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_80, L_81));
		__this->___match_length_42 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = __this->___window_31;
		int32_t L_83 = __this->___strstart_45;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint8_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		__this->___ins_h_35 = ((int32_t)((int32_t)L_85&((int32_t)255)));
		int32_t L_86 = __this->___ins_h_35;
		int32_t L_87 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___window_31;
		int32_t L_89 = __this->___strstart_45;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		int32_t L_92 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_86<<((int32_t)(L_87&((int32_t)31)))))^((int32_t)((int32_t)L_91&((int32_t)255)))))&L_92));
	}

IL_02a9:
	{
		goto IL_02e5;
	}

IL_02ae:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = __this->___window_31;
		int32_t L_94 = __this->___strstart_45;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		uint8_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		bool L_97;
		L_97 = DeflateManager__tr_tally_mB35B4023D563CA9DA849D34BE6909DE05158E389(__this, 0, ((int32_t)((int32_t)L_96&((int32_t)255))), NULL);
		V_1 = L_97;
		int32_t L_98 = __this->___lookahead_47;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_98, 1));
		int32_t L_99 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_02e5:
	{
		bool L_100 = V_1;
		if (!L_100)
		{
			goto IL_0304;
		}
	}
	{
		DeflateManager_flush_block_only_mA3B330A93A50BF5BB359D99600B77BB070E2E128(__this, (bool)0, NULL);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_101 = __this->____codec_21;
		NullCheck(L_101);
		int32_t L_102 = L_101->___AvailableBytesOut_6;
		if (L_102)
		{
			goto IL_0304;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0304:
	{
		goto IL_0002;
	}

IL_0309:
	{
		int32_t L_103 = ___flush0;
		DeflateManager_flush_block_only_mA3B330A93A50BF5BB359D99600B77BB070E2E128(__this, (bool)((((int32_t)L_103) == ((int32_t)4))? 1 : 0), NULL);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_104 = __this->____codec_21;
		NullCheck(L_104);
		int32_t L_105 = L_104->___AvailableBytesOut_6;
		if (L_105)
		{
			goto IL_032e;
		}
	}
	{
		int32_t L_106 = ___flush0;
		if ((!(((uint32_t)L_106) == ((uint32_t)4))))
		{
			goto IL_032c;
		}
	}
	{
		return (int32_t)(2);
	}

IL_032c:
	{
		return (int32_t)(0);
	}

IL_032e:
	{
		int32_t L_107 = ___flush0;
		if ((!(((uint32_t)L_107) == ((uint32_t)4))))
		{
			goto IL_033b;
		}
	}
	{
		G_B33_0 = 3;
		goto IL_033c;
	}

IL_033b:
	{
		G_B33_0 = 1;
	}

IL_033c:
	{
		return (int32_t)(G_B33_0);
	}
}
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager::DeflateSlow(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateSlow_m288661F95A4576063917690F50F008DC4E31E4F2 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B46_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_1 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		DeflateManager__fillWindow_mACFC61F659E4DA1B7C0861972ECA65BA0A5AF628(__this, NULL);
		int32_t L_2 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = ___flush0;
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0030:
	{
		int32_t L_5 = __this->___lookahead_47;
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_0396;
	}

IL_0040:
	{
		int32_t L_6 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_8 = __this->___ins_h_35;
		int32_t L_9 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___window_31;
		int32_t L_11 = __this->___strstart_45;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1))));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_8<<((int32_t)(L_9&((int32_t)31)))))^((int32_t)((int32_t)L_14&((int32_t)255)))))&L_15));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_16 = __this->___head_34;
		int32_t L_17 = __this->___ins_h_35;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int16_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int32_t)((int32_t)L_19&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = __this->___prev_33;
		int32_t L_21 = __this->___strstart_45;
		int32_t L_22 = __this->___w_mask_30;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_23 = __this->___head_34;
		int32_t L_24 = __this->___ins_h_35;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int16_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_21&L_22))), (int16_t)L_26);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = __this->___head_34;
		int32_t L_28 = __this->___ins_h_35;
		int32_t L_29 = __this->___strstart_45;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int16_t)((int16_t)L_29));
	}

IL_00d2:
	{
		int32_t L_30 = __this->___match_length_42;
		__this->___prev_length_48 = L_30;
		int32_t L_31 = __this->___match_start_46;
		__this->___prev_match_43 = L_31;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_32 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		__this->___match_length_42 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		int32_t L_33 = V_0;
		if (!L_33)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_34 = __this->___prev_length_48;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_35 = __this->___config_41;
		NullCheck(L_35);
		int32_t L_36 = L_35->___MaxLazy_1;
		if ((((int32_t)L_34) >= ((int32_t)L_36)))
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_37 = __this->___strstart_45;
		int32_t L_38 = V_0;
		int32_t L_39 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_40 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_37, L_38))&((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_39, L_40)))))
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_41 = __this->___compressionStrategy_50;
		if ((((int32_t)L_41) == ((int32_t)2)))
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = DeflateManager_longest_match_mA5AD89613E7A03F0C3594EB24F1BD394267A05DE(__this, L_42, NULL);
		__this->___match_length_42 = L_43;
	}

IL_014b:
	{
		int32_t L_44 = __this->___match_length_42;
		if ((((int32_t)L_44) > ((int32_t)5)))
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_45 = __this->___compressionStrategy_50;
		if ((((int32_t)L_45) == ((int32_t)1)))
		{
			goto IL_018a;
		}
	}
	{
		int32_t L_46 = __this->___match_length_42;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_47 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_48 = __this->___strstart_45;
		int32_t L_49 = __this->___match_start_46;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_48, L_49))) <= ((int32_t)((int32_t)4096))))
		{
			goto IL_0197;
		}
	}

IL_018a:
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_50 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		__this->___match_length_42 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
	}

IL_0197:
	{
		int32_t L_51 = __this->___prev_length_48;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_52 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0306;
		}
	}
	{
		int32_t L_53 = __this->___match_length_42;
		int32_t L_54 = __this->___prev_length_48;
		if ((((int32_t)L_53) > ((int32_t)L_54)))
		{
			goto IL_0306;
		}
	}
	{
		int32_t L_55 = __this->___strstart_45;
		int32_t L_56 = __this->___lookahead_47;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_57 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_55, L_56)), L_57));
		int32_t L_58 = __this->___strstart_45;
		int32_t L_59 = __this->___prev_match_43;
		int32_t L_60 = __this->___prev_length_48;
		int32_t L_61 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		bool L_62;
		L_62 = DeflateManager__tr_tally_mB35B4023D563CA9DA849D34BE6909DE05158E389(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_58, 1)), L_59)), ((int32_t)il2cpp_codegen_subtract(L_60, L_61)), NULL);
		V_1 = L_62;
		int32_t L_63 = __this->___lookahead_47;
		int32_t L_64 = __this->___prev_length_48;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_63, ((int32_t)il2cpp_codegen_subtract(L_64, 1))));
		int32_t L_65 = __this->___prev_length_48;
		__this->___prev_length_48 = ((int32_t)il2cpp_codegen_subtract(L_65, 2));
	}

IL_0211:
	{
		int32_t L_66 = __this->___strstart_45;
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		V_3 = L_67;
		__this->___strstart_45 = L_67;
		int32_t L_68 = V_3;
		int32_t L_69 = V_2;
		if ((((int32_t)L_68) > ((int32_t)L_69)))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_70 = __this->___ins_h_35;
		int32_t L_71 = __this->___hash_shift_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = __this->___window_31;
		int32_t L_73 = __this->___strstart_45;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_74 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		NullCheck(L_72);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_73, ((int32_t)il2cpp_codegen_subtract(L_74, 1))));
		uint8_t L_76 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = __this->___hash_mask_38;
		__this->___ins_h_35 = ((int32_t)(((int32_t)(((int32_t)(L_70<<((int32_t)(L_71&((int32_t)31)))))^((int32_t)((int32_t)L_76&((int32_t)255)))))&L_77));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_78 = __this->___head_34;
		int32_t L_79 = __this->___ins_h_35;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		int16_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_0 = ((int32_t)((int32_t)L_81&((int32_t)65535)));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_82 = __this->___prev_33;
		int32_t L_83 = __this->___strstart_45;
		int32_t L_84 = __this->___w_mask_30;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_85 = __this->___head_34;
		int32_t L_86 = __this->___ins_h_35;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int16_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_83&L_84))), (int16_t)L_88);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_89 = __this->___head_34;
		int32_t L_90 = __this->___ins_h_35;
		int32_t L_91 = __this->___strstart_45;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (int16_t)((int16_t)L_91));
	}

IL_02aa:
	{
		int32_t L_92 = __this->___prev_length_48;
		int32_t L_93 = ((int32_t)il2cpp_codegen_subtract(L_92, 1));
		V_3 = L_93;
		__this->___prev_length_48 = L_93;
		int32_t L_94 = V_3;
		if (L_94)
		{
			goto IL_0211;
		}
	}
	{
		__this->___match_available_44 = 0;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_95 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		__this->___match_length_42 = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		int32_t L_96 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		bool L_97 = V_1;
		if (!L_97)
		{
			goto IL_0301;
		}
	}
	{
		DeflateManager_flush_block_only_mA3B330A93A50BF5BB359D99600B77BB070E2E128(__this, (bool)0, NULL);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_98 = __this->____codec_21;
		NullCheck(L_98);
		int32_t L_99 = L_98->___AvailableBytesOut_6;
		if (L_99)
		{
			goto IL_0301;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0301:
	{
		goto IL_0391;
	}

IL_0306:
	{
		int32_t L_100 = __this->___match_available_44;
		if (!L_100)
		{
			goto IL_036e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = __this->___window_31;
		int32_t L_102 = __this->___strstart_45;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		uint8_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		bool L_105;
		L_105 = DeflateManager__tr_tally_mB35B4023D563CA9DA849D34BE6909DE05158E389(__this, 0, ((int32_t)((int32_t)L_104&((int32_t)255))), NULL);
		V_1 = L_105;
		bool L_106 = V_1;
		if (!L_106)
		{
			goto IL_033b;
		}
	}
	{
		DeflateManager_flush_block_only_mA3B330A93A50BF5BB359D99600B77BB070E2E128(__this, (bool)0, NULL);
	}

IL_033b:
	{
		int32_t L_107 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_107, 1));
		int32_t L_108 = __this->___lookahead_47;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_108, 1));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_109 = __this->____codec_21;
		NullCheck(L_109);
		int32_t L_110 = L_109->___AvailableBytesOut_6;
		if (L_110)
		{
			goto IL_0369;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0369:
	{
		goto IL_0391;
	}

IL_036e:
	{
		__this->___match_available_44 = 1;
		int32_t L_111 = __this->___strstart_45;
		__this->___strstart_45 = ((int32_t)il2cpp_codegen_add(L_111, 1));
		int32_t L_112 = __this->___lookahead_47;
		__this->___lookahead_47 = ((int32_t)il2cpp_codegen_subtract(L_112, 1));
	}

IL_0391:
	{
		goto IL_0002;
	}

IL_0396:
	{
		int32_t L_113 = __this->___match_available_44;
		if (!L_113)
		{
			goto IL_03c5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = __this->___window_31;
		int32_t L_115 = __this->___strstart_45;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_subtract(L_115, 1));
		uint8_t L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		bool L_118;
		L_118 = DeflateManager__tr_tally_mB35B4023D563CA9DA849D34BE6909DE05158E389(__this, 0, ((int32_t)((int32_t)L_117&((int32_t)255))), NULL);
		V_1 = L_118;
		__this->___match_available_44 = 0;
	}

IL_03c5:
	{
		int32_t L_119 = ___flush0;
		DeflateManager_flush_block_only_mA3B330A93A50BF5BB359D99600B77BB070E2E128(__this, (bool)((((int32_t)L_119) == ((int32_t)4))? 1 : 0), NULL);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_120 = __this->____codec_21;
		NullCheck(L_120);
		int32_t L_121 = L_120->___AvailableBytesOut_6;
		if (L_121)
		{
			goto IL_03ea;
		}
	}
	{
		int32_t L_122 = ___flush0;
		if ((!(((uint32_t)L_122) == ((uint32_t)4))))
		{
			goto IL_03e8;
		}
	}
	{
		return (int32_t)(2);
	}

IL_03e8:
	{
		return (int32_t)(0);
	}

IL_03ea:
	{
		int32_t L_123 = ___flush0;
		if ((!(((uint32_t)L_123) == ((uint32_t)4))))
		{
			goto IL_03f7;
		}
	}
	{
		G_B46_0 = 3;
		goto IL_03f8;
	}

IL_03f7:
	{
		G_B46_0 = 1;
	}

IL_03f8:
	{
		return (int32_t)(G_B46_0);
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_longest_match_mA5AD89613E7A03F0C3594EB24F1BD394267A05DE (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___cur_match0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
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
	int32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	int32_t G_B3_0 = 0;
	{
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_0 = __this->___config_41;
		NullCheck(L_0);
		int32_t L_1 = L_0->___MaxChainLength_3;
		V_0 = L_1;
		int32_t L_2 = __this->___strstart_45;
		V_1 = L_2;
		int32_t L_3 = __this->___prev_length_48;
		V_4 = L_3;
		int32_t L_4 = __this->___strstart_45;
		int32_t L_5 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_6 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_7 = __this->___strstart_45;
		int32_t L_8 = __this->___w_size_28;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_9 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_LOOKAHEAD_18;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)il2cpp_codegen_subtract(L_8, L_9))));
		goto IL_004b;
	}

IL_004a:
	{
		G_B3_0 = 0;
	}

IL_004b:
	{
		V_5 = G_B3_0;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_10 = __this->___config_41;
		NullCheck(L_10);
		int32_t L_11 = L_10->___NiceLength_2;
		V_6 = L_11;
		int32_t L_12 = __this->___w_mask_30;
		V_7 = L_12;
		int32_t L_13 = __this->___strstart_45;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_14 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MAX_MATCH_17;
		V_8 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___window_31;
		int32_t L_16 = V_1;
		int32_t L_17 = V_4;
		NullCheck(L_15);
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_16, L_17)), 1));
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_9 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___window_31;
		int32_t L_21 = V_1;
		int32_t L_22 = V_4;
		NullCheck(L_20);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		uint8_t L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_10 = L_24;
		int32_t L_25 = __this->___prev_length_48;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_26 = __this->___config_41;
		NullCheck(L_26);
		int32_t L_27 = L_26->___GoodLength_0;
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_28 = V_0;
		V_0 = ((int32_t)(L_28>>2));
	}

IL_00a6:
	{
		int32_t L_29 = V_6;
		int32_t L_30 = __this->___lookahead_47;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_31 = __this->___lookahead_47;
		V_6 = L_31;
	}

IL_00bb:
	{
		int32_t L_32 = ___cur_match0;
		V_2 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___window_31;
		int32_t L_34 = V_2;
		int32_t L_35 = V_4;
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		uint8_t L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		uint8_t L_38 = V_10;
		if ((!(((uint32_t)L_37) == ((uint32_t)L_38))))
		{
			goto IL_0113;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___window_31;
		int32_t L_40 = V_2;
		int32_t L_41 = V_4;
		NullCheck(L_39);
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_40, L_41)), 1));
		uint8_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		uint8_t L_44 = V_9;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0113;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___window_31;
		int32_t L_46 = V_2;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		uint8_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___window_31;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((!(((uint32_t)L_48) == ((uint32_t)L_52))))
		{
			goto IL_0113;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___window_31;
		int32_t L_54 = V_2;
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		V_2 = L_55;
		NullCheck(L_53);
		int32_t L_56 = L_55;
		uint8_t L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->___window_31;
		int32_t L_59 = V_1;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		uint8_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if ((((int32_t)L_57) == ((int32_t)L_61)))
		{
			goto IL_0118;
		}
	}

IL_0113:
	{
		goto IL_025f;
	}

IL_0118:
	{
		int32_t L_62 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_62, 2));
		int32_t L_63 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0120:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___window_31;
		int32_t L_65 = V_1;
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		V_1 = L_66;
		NullCheck(L_64);
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->___window_31;
		int32_t L_70 = V_2;
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		V_2 = L_71;
		NullCheck(L_69);
		int32_t L_72 = L_71;
		uint8_t L_73 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if ((!(((uint32_t)L_68) == ((uint32_t)L_73))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = __this->___window_31;
		int32_t L_75 = V_1;
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		V_1 = L_76;
		NullCheck(L_74);
		int32_t L_77 = L_76;
		uint8_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = __this->___window_31;
		int32_t L_80 = V_2;
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		V_2 = L_81;
		NullCheck(L_79);
		int32_t L_82 = L_81;
		uint8_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		if ((!(((uint32_t)L_78) == ((uint32_t)L_83))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = __this->___window_31;
		int32_t L_85 = V_1;
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		V_1 = L_86;
		NullCheck(L_84);
		int32_t L_87 = L_86;
		uint8_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = __this->___window_31;
		int32_t L_90 = V_2;
		int32_t L_91 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		V_2 = L_91;
		NullCheck(L_89);
		int32_t L_92 = L_91;
		uint8_t L_93 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		if ((!(((uint32_t)L_88) == ((uint32_t)L_93))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = __this->___window_31;
		int32_t L_95 = V_1;
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		V_1 = L_96;
		NullCheck(L_94);
		int32_t L_97 = L_96;
		uint8_t L_98 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = __this->___window_31;
		int32_t L_100 = V_2;
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		V_2 = L_101;
		NullCheck(L_99);
		int32_t L_102 = L_101;
		uint8_t L_103 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		if ((!(((uint32_t)L_98) == ((uint32_t)L_103))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = __this->___window_31;
		int32_t L_105 = V_1;
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		V_1 = L_106;
		NullCheck(L_104);
		int32_t L_107 = L_106;
		uint8_t L_108 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = __this->___window_31;
		int32_t L_110 = V_2;
		int32_t L_111 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		V_2 = L_111;
		NullCheck(L_109);
		int32_t L_112 = L_111;
		uint8_t L_113 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		if ((!(((uint32_t)L_108) == ((uint32_t)L_113))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = __this->___window_31;
		int32_t L_115 = V_1;
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 1));
		V_1 = L_116;
		NullCheck(L_114);
		int32_t L_117 = L_116;
		uint8_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = __this->___window_31;
		int32_t L_120 = V_2;
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		V_2 = L_121;
		NullCheck(L_119);
		int32_t L_122 = L_121;
		uint8_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		if ((!(((uint32_t)L_118) == ((uint32_t)L_123))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = __this->___window_31;
		int32_t L_125 = V_1;
		int32_t L_126 = ((int32_t)il2cpp_codegen_add(L_125, 1));
		V_1 = L_126;
		NullCheck(L_124);
		int32_t L_127 = L_126;
		uint8_t L_128 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = __this->___window_31;
		int32_t L_130 = V_2;
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(L_130, 1));
		V_2 = L_131;
		NullCheck(L_129);
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		if ((!(((uint32_t)L_128) == ((uint32_t)L_133))))
		{
			goto IL_0210;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = __this->___window_31;
		int32_t L_135 = V_1;
		int32_t L_136 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		V_1 = L_136;
		NullCheck(L_134);
		int32_t L_137 = L_136;
		uint8_t L_138 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = __this->___window_31;
		int32_t L_140 = V_2;
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, 1));
		V_2 = L_141;
		NullCheck(L_139);
		int32_t L_142 = L_141;
		uint8_t L_143 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		if ((!(((uint32_t)L_138) == ((uint32_t)L_143))))
		{
			goto IL_0210;
		}
	}
	{
		int32_t L_144 = V_1;
		int32_t L_145 = V_8;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_0120;
		}
	}

IL_0210:
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_146 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MAX_MATCH_17;
		int32_t L_147 = V_8;
		int32_t L_148 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_146, ((int32_t)il2cpp_codegen_subtract(L_147, L_148))));
		int32_t L_149 = V_8;
		int32_t L_150 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MAX_MATCH_17;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_149, L_150));
		int32_t L_151 = V_3;
		int32_t L_152 = V_4;
		if ((((int32_t)L_151) <= ((int32_t)L_152)))
		{
			goto IL_025f;
		}
	}
	{
		int32_t L_153 = ___cur_match0;
		__this->___match_start_46 = L_153;
		int32_t L_154 = V_3;
		V_4 = L_154;
		int32_t L_155 = V_3;
		int32_t L_156 = V_6;
		if ((((int32_t)L_155) < ((int32_t)L_156)))
		{
			goto IL_0243;
		}
	}
	{
		goto IL_0284;
	}

IL_0243:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_157 = __this->___window_31;
		int32_t L_158 = V_1;
		int32_t L_159 = V_4;
		NullCheck(L_157);
		int32_t L_160 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_158, L_159)), 1));
		uint8_t L_161 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_9 = L_161;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = __this->___window_31;
		int32_t L_163 = V_1;
		int32_t L_164 = V_4;
		NullCheck(L_162);
		int32_t L_165 = ((int32_t)il2cpp_codegen_add(L_163, L_164));
		uint8_t L_166 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		V_10 = L_166;
	}

IL_025f:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_167 = __this->___prev_33;
		int32_t L_168 = ___cur_match0;
		int32_t L_169 = V_7;
		NullCheck(L_167);
		int32_t L_170 = ((int32_t)(L_168&L_169));
		int16_t L_171 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		int32_t L_172 = ((int32_t)((int32_t)L_171&((int32_t)65535)));
		___cur_match0 = L_172;
		int32_t L_173 = V_5;
		if ((((int32_t)L_172) <= ((int32_t)L_173)))
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_174 = V_0;
		int32_t L_175 = ((int32_t)il2cpp_codegen_subtract(L_174, 1));
		V_0 = L_175;
		if (L_175)
		{
			goto IL_00bb;
		}
	}

IL_0284:
	{
		int32_t L_176 = V_4;
		int32_t L_177 = __this->___lookahead_47;
		if ((((int32_t)L_176) > ((int32_t)L_177)))
		{
			goto IL_0294;
		}
	}
	{
		int32_t L_178 = V_4;
		return L_178;
	}

IL_0294:
	{
		int32_t L_179 = __this->___lookahead_47;
		return L_179;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateManager::get_WantRfc1950HeaderBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_mE4C46D1E78469160F7E7A797AA6651284582274B (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____WantRfc1950HeaderBytes_73;
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_WantRfc1950HeaderBytes_m4DB40C6B7E40D565A1C4F70ED29A7242B6D72EB8 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____WantRfc1950HeaderBytes_73 = L_0;
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,Pathfinding.Ionic.Zlib.CompressionLevel,System.Int32,Pathfinding.Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mA627563526CD2502A5D5E39C3330AD5CA5FFEE55 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___codec0, int32_t ___level1, int32_t ___bits2, int32_t ___compressionStrategy3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_0 = ___codec0;
		int32_t L_1 = ___level1;
		int32_t L_2 = ___bits2;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MEM_LEVEL_DEFAULT_1;
		int32_t L_4 = ___compressionStrategy3;
		int32_t L_5;
		L_5 = DeflateManager_Initialize_mCA2164C2F23AE209047666CD039C27A5B502F3BF(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Initialize(Pathfinding.Ionic.Zlib.ZlibCodec,Pathfinding.Ionic.Zlib.CompressionLevel,System.Int32,System.Int32,Pathfinding.Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mCA2164C2F23AE209047666CD039C27A5B502F3BF (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___codec0, int32_t ___level1, int32_t ___windowBits2, int32_t ___memLevel3, int32_t ___strategy4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_0 = ___codec0;
		__this->____codec_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____codec_21), (void*)L_0);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_1 = __this->____codec_21;
		NullCheck(L_1);
		L_1->___Message_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Message_8), (void*)(String_t*)NULL);
		int32_t L_2 = ___windowBits2;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)9))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___windowBits2;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)15))))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5* L_4 = (ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ZlibException__ctor_mA8D4ECB35C7895A49FAF40B8A3890E968A5DA389(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral540BFF2B585F6DE7F5AA022B07C05975323EFD0E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Initialize_mCA2164C2F23AE209047666CD039C27A5B502F3BF_RuntimeMethod_var)));
	}

IL_002e:
	{
		int32_t L_5 = ___memLevel3;
		if ((((int32_t)L_5) < ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_6 = ___memLevel3;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MEM_LEVEL_MAX_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_005c;
		}
	}

IL_0042:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var)));
		int32_t L_8 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))))->___MEM_LEVEL_MAX_0;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral796754270F9B2AB25ACA5093B84CF8EAF55BA1AE)), L_10, NULL);
		ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5* L_12 = (ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ZlibException__ctor_mA8D4ECB35C7895A49FAF40B8A3890E968A5DA389(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Initialize_mCA2164C2F23AE209047666CD039C27A5B502F3BF_RuntimeMethod_var)));
	}

IL_005c:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_13 = __this->____codec_21;
		NullCheck(L_13);
		L_13->___dstate_9 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___dstate_9), (void*)__this);
		int32_t L_14 = ___windowBits2;
		__this->___w_bits_29 = L_14;
		int32_t L_15 = __this->___w_bits_29;
		__this->___w_size_28 = ((int32_t)(1<<((int32_t)(L_15&((int32_t)31)))));
		int32_t L_16 = __this->___w_size_28;
		__this->___w_mask_30 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		int32_t L_17 = ___memLevel3;
		__this->___hash_bits_37 = ((int32_t)il2cpp_codegen_add(L_17, 7));
		int32_t L_18 = __this->___hash_bits_37;
		__this->___hash_size_36 = ((int32_t)(1<<((int32_t)(L_18&((int32_t)31)))));
		int32_t L_19 = __this->___hash_size_36;
		__this->___hash_mask_38 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		int32_t L_20 = __this->___hash_bits_37;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_21 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		int32_t L_22 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___MIN_MATCH_16;
		__this->___hash_shift_39 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_20, L_21)), 1))/L_22));
		int32_t L_23 = __this->___w_size_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_23, 2)));
		__this->___window_31 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_31), (void*)L_24);
		int32_t L_25 = __this->___w_size_28;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_26 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->___prev_33 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prev_33), (void*)L_26);
		int32_t L_27 = __this->___hash_size_36;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_28 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_27);
		__this->___head_34 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___head_34), (void*)L_28);
		int32_t L_29 = ___memLevel3;
		__this->___lit_bufsize_63 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_29, 6))&((int32_t)31)))));
		int32_t L_30 = __this->___lit_bufsize_63;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_30, 4)));
		__this->___pending_23 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pending_23), (void*)L_31);
		int32_t L_32 = __this->___lit_bufsize_63;
		__this->____distanceOffset_65 = L_32;
		int32_t L_33 = __this->___lit_bufsize_63;
		__this->____lengthOffset_62 = ((int32_t)il2cpp_codegen_multiply(3, L_33));
		int32_t L_34 = ___level1;
		__this->___compressionLevel_49 = L_34;
		int32_t L_35 = ___strategy4;
		__this->___compressionStrategy_50 = L_35;
		DeflateManager_Reset_mB644E7D14DE3A5856AD37402C81B54A93F738160(__this, NULL);
		return 0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_Reset_mB644E7D14DE3A5856AD37402C81B54A93F738160 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t0924C4DA81CD846C5A76E153176BF1013A7A1418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B2_0 = NULL;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* G_B3_1 = NULL;
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_0 = __this->____codec_21;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_1 = __this->____codec_21;
		int64_t L_2 = ((int64_t)0);
		V_0 = L_2;
		NullCheck(L_1);
		L_1->___TotalBytesOut_7 = L_2;
		int64_t L_3 = V_0;
		NullCheck(L_0);
		L_0->___TotalBytesIn_3 = L_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_4 = __this->____codec_21;
		NullCheck(L_4);
		L_4->___Message_8 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___Message_8), (void*)(String_t*)NULL);
		__this->___pendingCount_25 = 0;
		__this->___nextPending_24 = 0;
		__this->___Rfc1950BytesEmitted_72 = (bool)0;
		bool L_5;
		L_5 = DeflateManager_get_WantRfc1950HeaderBytes_mE4C46D1E78469160F7E7A797AA6651284582274B_inline(__this, NULL);
		G_B1_0 = __this;
		if (!L_5)
		{
			G_B2_0 = __this;
			goto IL_0052;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_6 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___INIT_STATE_5;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0057;
	}

IL_0052:
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___BUSY_STATE_6;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0057:
	{
		NullCheck(G_B3_1);
		G_B3_1->___status_22 = G_B3_0;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_8 = __this->____codec_21;
		il2cpp_codegen_runtime_class_init_inline(Adler_t0924C4DA81CD846C5A76E153176BF1013A7A1418_il2cpp_TypeInfo_var);
		uint32_t L_9;
		L_9 = Adler_Adler32_m9B77BE46DC62C9A81F11A8400D0EF60EB3ADE835(0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		NullCheck(L_8);
		L_8->____Adler32_11 = L_9;
		__this->___last_flush_27 = 0;
		DeflateManager__InitializeTreeData_m3658E304084025D28B30A09E2864957B6DCCA878(__this, NULL);
		DeflateManager__InitializeLazyMatch_m58AD0CF1A2B42E70949AC78FFA1F46050C476E68(__this, NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager::SetDeflater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_SetDeflater_m097FA31F2E28098BB28DA6D58398FEBCD3C54691 (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateFast_m6D259BB8539CB085CFC7C39E27A1755FD1B73137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateNone_m4F29886354D7C04DE790E8B6279E35D0A7CF3A67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateSlow_m288661F95A4576063917690F50F008DC4E31E4F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_0 = __this->___config_41;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Flavor_4;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0068;
	}

IL_0023:
	{
		CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* L_3 = (CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC*)il2cpp_codegen_object_new(CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CompressFunc__ctor_m0D9D5756533CB77A8E8F3F0A2E400A39A48EEDF7(L_3, __this, (intptr_t)((void*)DeflateManager_DeflateNone_m4F29886354D7C04DE790E8B6279E35D0A7CF3A67_RuntimeMethod_var), NULL);
		__this->___DeflateFunction_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeflateFunction_2), (void*)L_3);
		goto IL_0068;
	}

IL_003a:
	{
		CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* L_4 = (CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC*)il2cpp_codegen_object_new(CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CompressFunc__ctor_m0D9D5756533CB77A8E8F3F0A2E400A39A48EEDF7(L_4, __this, (intptr_t)((void*)DeflateManager_DeflateFast_m6D259BB8539CB085CFC7C39E27A1755FD1B73137_RuntimeMethod_var), NULL);
		__this->___DeflateFunction_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeflateFunction_2), (void*)L_4);
		goto IL_0068;
	}

IL_0051:
	{
		CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* L_5 = (CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC*)il2cpp_codegen_object_new(CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CompressFunc__ctor_m0D9D5756533CB77A8E8F3F0A2E400A39A48EEDF7(L_5, __this, (intptr_t)((void*)DeflateManager_DeflateSlow_m288661F95A4576063917690F50F008DC4E31E4F2_RuntimeMethod_var), NULL);
		__this->___DeflateFunction_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DeflateFunction_2), (void*)L_5);
		goto IL_0068;
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateManager::Deflate(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Deflate_m1B283A96A2CBB2DA85D3F1AEF2DC36EA5EE8EA9D (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t0924C4DA81CD846C5A76E153176BF1013A7A1418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B56_0 = 0;
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_0 = __this->____codec_21;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___OutputBuffer_4;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_2 = __this->____codec_21;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2->___InputBuffer_0;
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_4 = __this->____codec_21;
		NullCheck(L_4);
		int32_t L_5 = L_4->___AvailableBytesIn_2;
		if (L_5)
		{
			goto IL_0047;
		}
	}

IL_0030:
	{
		int32_t L_6 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_7 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___FINISH_STATE_7;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_8 = ___flush0;
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_0074;
		}
	}

IL_0047:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_9 = __this->____codec_21;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))))->____ErrorMessage_3;
		NullCheck(L_10);
		int32_t L_11 = 4;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_9);
		L_9->___Message_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___Message_8), (void*)L_12);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_13 = __this->____codec_21;
		NullCheck(L_13);
		String_t* L_14 = L_13->___Message_8;
		String_t* L_15;
		L_15 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DE4583466E161AC08D14AD37D8B70B8580B3627)), L_14, NULL);
		ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5* L_16 = (ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ZlibException__ctor_mA8D4ECB35C7895A49FAF40B8A3890E968A5DA389(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m1B283A96A2CBB2DA85D3F1AEF2DC36EA5EE8EA9D_RuntimeMethod_var)));
	}

IL_0074:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_17 = __this->____codec_21;
		NullCheck(L_17);
		int32_t L_18 = L_17->___AvailableBytesOut_6;
		if (L_18)
		{
			goto IL_00a1;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_19 = __this->____codec_21;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))))->____ErrorMessage_3;
		NullCheck(L_20);
		int32_t L_21 = 7;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		L_19->___Message_8 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___Message_8), (void*)L_22);
		ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5* L_23 = (ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		ZlibException__ctor_mA8D4ECB35C7895A49FAF40B8A3890E968A5DA389(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6E4583683A19BA1CBC201CAD5FFABF027A5B94A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m1B283A96A2CBB2DA85D3F1AEF2DC36EA5EE8EA9D_RuntimeMethod_var)));
	}

IL_00a1:
	{
		int32_t L_24 = __this->___last_flush_27;
		V_0 = L_24;
		int32_t L_25 = ___flush0;
		__this->___last_flush_27 = L_25;
		int32_t L_26 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_27 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___INIT_STATE_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_021f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_28 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___Z_DEFLATED_8;
		int32_t L_29 = __this->___w_bits_29;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_28, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_29, 8))<<4))))<<8));
		int32_t L_30 = __this->___compressionLevel_49;
		V_2 = ((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_30, 1))&((int32_t)255)))>>1));
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) <= ((int32_t)3)))
		{
			goto IL_00ec;
		}
	}
	{
		V_2 = 3;
	}

IL_00ec:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		V_1 = ((int32_t)(L_32|((int32_t)(L_33<<6))));
		int32_t L_34 = __this->___strstart_45;
		if (!L_34)
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_35 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_36 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___PRESET_DICT_4;
		V_1 = ((int32_t)(L_35|L_36));
	}

IL_0105:
	{
		int32_t L_37 = V_1;
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)il2cpp_codegen_subtract(((int32_t)31), ((int32_t)(L_38%((int32_t)31)))))));
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_39 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___BUSY_STATE_6;
		__this->___status_22 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___pending_23;
		int32_t L_41 = __this->___pendingCount_25;
		int32_t L_42 = L_41;
		V_3 = L_42;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = V_3;
		int32_t L_44 = V_1;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_44>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___pending_23;
		int32_t L_46 = __this->___pendingCount_25;
		int32_t L_47 = L_46;
		V_3 = L_47;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = V_3;
		int32_t L_49 = V_1;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (uint8_t)((int32_t)(uint8_t)L_49));
		int32_t L_50 = __this->___strstart_45;
		if (!L_50)
		{
			goto IL_020b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___pending_23;
		int32_t L_52 = __this->___pendingCount_25;
		int32_t L_53 = L_52;
		V_3 = L_53;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_55 = __this->____codec_21;
		NullCheck(L_55);
		uint32_t L_56 = L_55->____Adler32_11;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_56&((int32_t)-16777216)))>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___pending_23;
		int32_t L_58 = __this->___pendingCount_25;
		int32_t L_59 = L_58;
		V_3 = L_59;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		int32_t L_60 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_61 = __this->____codec_21;
		NullCheck(L_61);
		uint32_t L_62 = L_61->____Adler32_11;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_62&((int32_t)16711680)))>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->___pending_23;
		int32_t L_64 = __this->___pendingCount_25;
		int32_t L_65 = L_64;
		V_3 = L_65;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_66 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_67 = __this->____codec_21;
		NullCheck(L_67);
		uint32_t L_68 = L_67->____Adler32_11;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_68&((int32_t)65280)))>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->___pending_23;
		int32_t L_70 = __this->___pendingCount_25;
		int32_t L_71 = L_70;
		V_3 = L_71;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		int32_t L_72 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_73 = __this->____codec_21;
		NullCheck(L_73);
		uint32_t L_74 = L_73->____Adler32_11;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_74&((int32_t)255)))));
	}

IL_020b:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_75 = __this->____codec_21;
		il2cpp_codegen_runtime_class_init_inline(Adler_t0924C4DA81CD846C5A76E153176BF1013A7A1418_il2cpp_TypeInfo_var);
		uint32_t L_76;
		L_76 = Adler_Adler32_m9B77BE46DC62C9A81F11A8400D0EF60EB3ADE835(0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		NullCheck(L_75);
		L_75->____Adler32_11 = L_76;
	}

IL_021f:
	{
		int32_t L_77 = __this->___pendingCount_25;
		if (!L_77)
		{
			goto IL_0253;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_78 = __this->____codec_21;
		NullCheck(L_78);
		ZlibCodec_flush_pending_mA2FFE50F3FC2382C73EA7C6233833FA00841B388(L_78, NULL);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_79 = __this->____codec_21;
		NullCheck(L_79);
		int32_t L_80 = L_79->___AvailableBytesOut_6;
		if (L_80)
		{
			goto IL_024e;
		}
	}
	{
		__this->___last_flush_27 = (-1);
		return 0;
	}

IL_024e:
	{
		goto IL_0273;
	}

IL_0253:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_81 = __this->____codec_21;
		NullCheck(L_81);
		int32_t L_82 = L_81->___AvailableBytesIn_2;
		if (L_82)
		{
			goto IL_0273;
		}
	}
	{
		int32_t L_83 = ___flush0;
		int32_t L_84 = V_0;
		if ((((int32_t)L_83) > ((int32_t)L_84)))
		{
			goto IL_0273;
		}
	}
	{
		int32_t L_85 = ___flush0;
		if ((((int32_t)L_85) == ((int32_t)4)))
		{
			goto IL_0273;
		}
	}
	{
		return 0;
	}

IL_0273:
	{
		int32_t L_86 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_87 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___FINISH_STATE_7;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_02b0;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_88 = __this->____codec_21;
		NullCheck(L_88);
		int32_t L_89 = L_88->___AvailableBytesIn_2;
		if (!L_89)
		{
			goto IL_02b0;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_90 = __this->____codec_21;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))))->____ErrorMessage_3;
		NullCheck(L_91);
		int32_t L_92 = 7;
		String_t* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_90);
		L_90->___Message_8 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&L_90->___Message_8), (void*)L_93);
		ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5* L_94 = (ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5_il2cpp_TypeInfo_var)));
		NullCheck(L_94);
		ZlibException__ctor_mA8D4ECB35C7895A49FAF40B8A3890E968A5DA389(L_94, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5882879161B7C9D56B5A1120EF8EF366916857FF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m1B283A96A2CBB2DA85D3F1AEF2DC36EA5EE8EA9D_RuntimeMethod_var)));
	}

IL_02b0:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_95 = __this->____codec_21;
		NullCheck(L_95);
		int32_t L_96 = L_95->___AvailableBytesIn_2;
		if (L_96)
		{
			goto IL_02e1;
		}
	}
	{
		int32_t L_97 = __this->___lookahead_47;
		if (L_97)
		{
			goto IL_02e1;
		}
	}
	{
		int32_t L_98 = ___flush0;
		if (!L_98)
		{
			goto IL_03a5;
		}
	}
	{
		int32_t L_99 = __this->___status_22;
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_100 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___FINISH_STATE_7;
		if ((((int32_t)L_99) == ((int32_t)L_100)))
		{
			goto IL_03a5;
		}
	}

IL_02e1:
	{
		CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* L_101 = __this->___DeflateFunction_2;
		int32_t L_102 = ___flush0;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508_inline(L_101, L_102, NULL);
		V_4 = L_103;
		int32_t L_104 = V_4;
		if ((((int32_t)L_104) == ((int32_t)2)))
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_105 = V_4;
		if ((!(((uint32_t)L_105) == ((uint32_t)3))))
		{
			goto IL_030a;
		}
	}

IL_02ff:
	{
		il2cpp_codegen_runtime_class_init_inline(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var);
		int32_t L_106 = ((DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0_il2cpp_TypeInfo_var))->___FINISH_STATE_7;
		__this->___status_22 = L_106;
	}

IL_030a:
	{
		int32_t L_107 = V_4;
		if (!L_107)
		{
			goto IL_0319;
		}
	}
	{
		int32_t L_108 = V_4;
		if ((!(((uint32_t)L_108) == ((uint32_t)2))))
		{
			goto IL_0332;
		}
	}

IL_0319:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_109 = __this->____codec_21;
		NullCheck(L_109);
		int32_t L_110 = L_109->___AvailableBytesOut_6;
		if (L_110)
		{
			goto IL_0330;
		}
	}
	{
		__this->___last_flush_27 = (-1);
	}

IL_0330:
	{
		return 0;
	}

IL_0332:
	{
		int32_t L_111 = V_4;
		if ((!(((uint32_t)L_111) == ((uint32_t)1))))
		{
			goto IL_03a5;
		}
	}
	{
		int32_t L_112 = ___flush0;
		if ((!(((uint32_t)L_112) == ((uint32_t)1))))
		{
			goto IL_034c;
		}
	}
	{
		DeflateManager__tr_align_m81FBAF76C5D7EA3865F33FAC70DEDEC406AEA4F1(__this, NULL);
		goto IL_0381;
	}

IL_034c:
	{
		DeflateManager__tr_stored_block_m1E24ACF269B0391AF8AAADE3A5E4C90FE7307723(__this, 0, 0, (bool)0, NULL);
		int32_t L_113 = ___flush0;
		if ((!(((uint32_t)L_113) == ((uint32_t)3))))
		{
			goto IL_0381;
		}
	}
	{
		V_5 = 0;
		goto IL_0374;
	}

IL_0364:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_114 = __this->___head_34;
		int32_t L_115 = V_5;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(L_115), (int16_t)0);
		int32_t L_116 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_0374:
	{
		int32_t L_117 = V_5;
		int32_t L_118 = __this->___hash_size_36;
		if ((((int32_t)L_117) < ((int32_t)L_118)))
		{
			goto IL_0364;
		}
	}

IL_0381:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_119 = __this->____codec_21;
		NullCheck(L_119);
		ZlibCodec_flush_pending_mA2FFE50F3FC2382C73EA7C6233833FA00841B388(L_119, NULL);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_120 = __this->____codec_21;
		NullCheck(L_120);
		int32_t L_121 = L_120->___AvailableBytesOut_6;
		if (L_121)
		{
			goto IL_03a5;
		}
	}
	{
		__this->___last_flush_27 = (-1);
		return 0;
	}

IL_03a5:
	{
		int32_t L_122 = ___flush0;
		if ((((int32_t)L_122) == ((int32_t)4)))
		{
			goto IL_03ae;
		}
	}
	{
		return 0;
	}

IL_03ae:
	{
		bool L_123;
		L_123 = DeflateManager_get_WantRfc1950HeaderBytes_mE4C46D1E78469160F7E7A797AA6651284582274B_inline(__this, NULL);
		if (!L_123)
		{
			goto IL_03c4;
		}
	}
	{
		bool L_124 = __this->___Rfc1950BytesEmitted_72;
		if (!L_124)
		{
			goto IL_03c6;
		}
	}

IL_03c4:
	{
		return 1;
	}

IL_03c6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_125 = __this->___pending_23;
		int32_t L_126 = __this->___pendingCount_25;
		int32_t L_127 = L_126;
		V_3 = L_127;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_127, 1));
		int32_t L_128 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_129 = __this->____codec_21;
		NullCheck(L_129);
		uint32_t L_130 = L_129->____Adler32_11;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(L_128), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_130&((int32_t)-16777216)))>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = __this->___pending_23;
		int32_t L_132 = __this->___pendingCount_25;
		int32_t L_133 = L_132;
		V_3 = L_133;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_133, 1));
		int32_t L_134 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_135 = __this->____codec_21;
		NullCheck(L_135);
		uint32_t L_136 = L_135->____Adler32_11;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(L_134), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_136&((int32_t)16711680)))>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_137 = __this->___pending_23;
		int32_t L_138 = __this->___pendingCount_25;
		int32_t L_139 = L_138;
		V_3 = L_139;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_139, 1));
		int32_t L_140 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_141 = __this->____codec_21;
		NullCheck(L_141);
		uint32_t L_142 = L_141->____Adler32_11;
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(L_140), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_142&((int32_t)65280)))>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_143 = __this->___pending_23;
		int32_t L_144 = __this->___pendingCount_25;
		int32_t L_145 = L_144;
		V_3 = L_145;
		__this->___pendingCount_25 = ((int32_t)il2cpp_codegen_add(L_145, 1));
		int32_t L_146 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_147 = __this->____codec_21;
		NullCheck(L_147);
		uint32_t L_148 = L_147->____Adler32_11;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_146), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_148&((int32_t)255)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_149 = __this->____codec_21;
		NullCheck(L_149);
		ZlibCodec_flush_pending_mA2FFE50F3FC2382C73EA7C6233833FA00841B388(L_149, NULL);
		__this->___Rfc1950BytesEmitted_72 = (bool)1;
		int32_t L_150 = __this->___pendingCount_25;
		if (!L_150)
		{
			goto IL_0499;
		}
	}
	{
		G_B56_0 = 0;
		goto IL_049a;
	}

IL_0499:
	{
		G_B56_0 = 1;
	}

IL_049a:
	{
		return G_B56_0;
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
int32_t CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508_Multicast(CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* __this, int32_t ___flush0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* currentDelegate = reinterpret_cast<CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___flush0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508_Open(CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* __this, int32_t ___flush0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___flush0, method);
}
int32_t CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508_OpenStaticInvoker(CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* __this, int32_t ___flush0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___flush0);
}
int32_t CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508_ClosedStaticInvoker(CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* __this, int32_t ___flush0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___flush0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC (CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* __this, int32_t ___flush0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___flush0);

	return returnValue;
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressFunc__ctor_m0D9D5756533CB77A8E8F3F0A2E400A39A48EEDF7 (CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508_Open;
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
	__this->___extra_arg_5 = (intptr_t)&CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508_Multicast;
}
// Pathfinding.Ionic.Zlib.BlockState Pathfinding.Ionic.Zlib.DeflateManager/CompressFunc::Invoke(Pathfinding.Ionic.Zlib.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508 (CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___flush0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pathfinding.Ionic.Zlib.DeflateManager/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Pathfinding.Ionic.Zlib.DeflateFlavor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187 (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* __this, int32_t ___goodLength0, int32_t ___maxLazy1, int32_t ___niceLength2, int32_t ___maxChainLength3, int32_t ___flavor4, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___goodLength0;
		__this->___GoodLength_0 = L_0;
		int32_t L_1 = ___maxLazy1;
		__this->___MaxLazy_1 = L_1;
		int32_t L_2 = ___niceLength2;
		__this->___NiceLength_2 = L_2;
		int32_t L_3 = ___maxChainLength3;
		__this->___MaxChainLength_3 = L_3;
		int32_t L_4 = ___flavor4;
		__this->___Flavor_4 = L_4;
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateManager/Config::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__cctor_mF04BC982FE5878DFC1B58B3B19B5880DF45150DC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_0 = (ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B*)(ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B*)SZArrayNew(ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_1 = L_0;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_2 = (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)il2cpp_codegen_object_new(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187(L_2, 0, 0, 0, 0, 0, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)L_2);
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_3 = L_1;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_4 = (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)il2cpp_codegen_object_new(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187(L_4, 4, 4, 8, 4, 1, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)L_4);
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_5 = L_3;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_6 = (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)il2cpp_codegen_object_new(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187(L_6, 4, 5, ((int32_t)16), 8, 1, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)L_6);
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_7 = L_5;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_8 = (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)il2cpp_codegen_object_new(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187(L_8, 4, 6, ((int32_t)32), ((int32_t)32), 1, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)L_8);
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_9 = L_7;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_10 = (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)il2cpp_codegen_object_new(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187(L_10, 4, 4, ((int32_t)16), ((int32_t)16), 2, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)L_10);
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_11 = L_9;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_12 = (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)il2cpp_codegen_object_new(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187(L_12, 8, ((int32_t)16), ((int32_t)32), ((int32_t)32), 2, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)L_12);
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_13 = L_11;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_14 = (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)il2cpp_codegen_object_new(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187(L_14, 8, ((int32_t)16), ((int32_t)128), ((int32_t)128), 2, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)L_14);
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_15 = L_13;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_16 = (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)il2cpp_codegen_object_new(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187(L_16, 8, ((int32_t)32), ((int32_t)128), ((int32_t)256), 2, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)L_16);
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_17 = L_15;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_18 = (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)il2cpp_codegen_object_new(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187(L_18, ((int32_t)32), ((int32_t)128), ((int32_t)258), ((int32_t)1024), 2, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)L_18);
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_19 = L_17;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_20 = (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)il2cpp_codegen_object_new(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Config__ctor_mD754786416B989AE2D20F11A9D9F4AE1F4C6A187(L_20, ((int32_t)32), ((int32_t)258), ((int32_t)258), ((int32_t)4096), 2, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113*)L_20);
		((Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_StaticFields*)il2cpp_codegen_static_fields_for(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var))->___Table_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_StaticFields*)il2cpp_codegen_static_fields_for(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var))->___Table_5), (void*)L_19);
		return;
	}
}
// Pathfinding.Ionic.Zlib.DeflateManager/Config Pathfinding.Ionic.Zlib.DeflateManager/Config::Lookup(Pathfinding.Ionic.Zlib.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* Config_Lookup_m212CA8F435B33FBB3562219B3735D8DBC286B601 (int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var);
		ConfigU5BU5D_tFCFF96F07DC813FF4FAF0562EAA923286A36E81B* L_0 = ((Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_StaticFields*)il2cpp_codegen_static_fields_for(Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113_il2cpp_TypeInfo_var))->___Table_5;
		int32_t L_1 = ___level0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Config_tF51EE3C7385CCA91717D1C5E047C24AD027D9113* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
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
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mB024C53C87014C6E1B9F8F40601E0BA91B54ABAB (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, bool ___leaveOpen2, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		bool L_2 = ___leaveOpen2;
		DeflateStream__ctor_mEC6093D583F0E7ECAF44BB7CDAEB48010250701F(__this, L_0, L_1, 6, L_2, NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mEC6093D583F0E7ECAF44BB7CDAEB48010250701F (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___mode1, int32_t ___level2, bool ___leaveOpen3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		__this->____innerStream_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____innerStream_6), (void*)L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		int32_t L_2 = ___mode1;
		int32_t L_3 = ___level2;
		bool L_4 = ___leaveOpen3;
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_5 = (ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F*)il2cpp_codegen_object_new(ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ZlibBaseStream__ctor_m6013326237019DF67534F598A921FBF9C4E53B67(L_5, L_1, L_2, L_3, ((int32_t)1951), L_4, NULL);
		__this->____baseStream_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____baseStream_5), (void*)L_5);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_BufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_BufferSize_mCAB7E39E52BB53266CAAC8280E1DECC23CAF94E3 (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_BufferSize_mCAB7E39E52BB53266CAAC8280E1DECC23CAF94E3_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_5;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2->____workingBuffer_12;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5* L_4 = (ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ZlibException__ctor_mA8D4ECB35C7895A49FAF40B8A3890E968A5DA389(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A538D87C765D16B9229A517D7D588C30AF3D5AE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_BufferSize_mCAB7E39E52BB53266CAAC8280E1DECC23CAF94E3_RuntimeMethod_var)));
	}

IL_0031:
	{
		int32_t L_5 = ___value0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = ___value0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		int32_t L_9 = ((int32_t)1024);
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3301E1AE1BCA5C134551471AB287F2443E658618)), L_8, L_10, NULL);
		ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5* L_12 = (ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_tC174DEB63A6ECEDF9DD7E388310C1BBF0AB0D1F5_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ZlibException__ctor_mA8D4ECB35C7895A49FAF40B8A3890E968A5DA389(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_BufferSize_mCAB7E39E52BB53266CAAC8280E1DECC23CAF94E3_RuntimeMethod_var)));
	}

IL_005c:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_13 = __this->____baseStream_5;
		int32_t L_14 = ___value0;
		NullCheck(L_13);
		L_13->____bufferSize_13 = L_14;
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_Strategy(Pathfinding.Ionic.Zlib.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Strategy_m1E1279CDD54787E219EF6D126AFB2EEB1E713421 (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Strategy_m1E1279CDD54787E219EF6D126AFB2EEB1E713421_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_5;
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->___Strategy_16 = L_3;
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Dispose_m035278FBD3143CE959145CCCDF33C41EF12664EC (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				bool L_0 = ___disposing0;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_1 = __this->____disposed_7;
				if (L_1)
				{
					goto IL_002e_1;
				}
			}
			{
				bool L_2 = ___disposing0;
				if (!L_2)
				{
					goto IL_0027_1;
				}
			}
			{
				ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_3 = __this->____baseStream_5;
				if (!L_3)
				{
					goto IL_0027_1;
				}
			}
			{
				ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_4 = __this->____baseStream_5;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Close() */, L_4);
			}

IL_0027_1:
			{
				__this->____disposed_7 = (bool)1;
			}

IL_002e_1:
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_m8CF18AB188A31552A4927AF15CAE34D628773746 (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_CanRead_m8CF18AB188A31552A4927AF15CAE34D628773746_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_5;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = L_2->____stream_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		return L_4;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m1DBFA3D93479563FE00C70FFEBD944321562B2B0 (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_mEB9B65D364D592DAC9C1CF30A1AA427AFE762F4F (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_CanWrite_mEB9B65D364D592DAC9C1CF30A1AA427AFE762F4F_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_5;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = L_2->____stream_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		return L_4;
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Flush_mE4E4EAE9FF7719CAF4DEC39D4EEA4B0A49DD1DF3 (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Flush_mE4E4EAE9FF7719CAF4DEC39D4EEA4B0A49DD1DF3_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_5;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_2);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_m7BD7A44370BA3CB1D8C653054F42FA9E8A175CA8 (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Length_m7BD7A44370BA3CB1D8C653054F42FA9E8A175CA8_RuntimeMethod_var)));
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_m3DF76888FEA6AA86DB32B45EB673713CB0CE12E2 (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, const RuntimeMethod* method) 
{
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_0 = __this->____baseStream_5;
		NullCheck(L_0);
		int32_t L_1 = L_0->____streamMode_6;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_5;
		NullCheck(L_2);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_3 = L_2->____z_5;
		NullCheck(L_3);
		int64_t L_4 = L_3->___TotalBytesOut_7;
		return L_4;
	}

IL_0021:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_5 = __this->____baseStream_5;
		NullCheck(L_5);
		int32_t L_6 = L_5->____streamMode_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0043;
		}
	}
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_7 = __this->____baseStream_5;
		NullCheck(L_7);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_8 = L_7->____z_5;
		NullCheck(L_8);
		int64_t L_9 = L_8->___TotalBytesIn_3;
		return L_9;
	}

IL_0043:
	{
		return ((int64_t)0);
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Position_mF3A14973B55506551C682DA795BFCF6E08F36228 (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Position_mF3A14973B55506551C682DA795BFCF6E08F36228_RuntimeMethod_var)));
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m2AE7BC00B78FCC14ED988FCBDF65F50A19B121D9 (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m2AE7BC00B78FCC14ED988FCBDF65F50A19B121D9_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_m2890858549779F5743E02337973CA0614A2CB652 (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Seek_m2890858549779F5743E02337973CA0614A2CB652_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetLength_mE85261A546FBF95657DB6B6BD599EEB4CF6F50AC (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_SetLength_mE85261A546FBF95657DB6B6BD599EEB4CF6F50AC_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_m0D4EE0CE73D2A234195CC3A7D50DC9B39B130D95 (DeflateStream_t5EB455179F487541C2484890C1417230D414BC10* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_7;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB4C2C551A889112C121523FD58AFAD11566C6E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_m0D4EE0CE73D2A234195CC3A7D50DC9B39B130D95_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
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
// System.Void Pathfinding.Ionic.Zlib.GZipStream::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__cctor_m2E018D2219F652E2AC1C6E9F884AA9C94746672D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE577106AF74D4E432DDB4785DA3B2BE486F67838);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		((GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var))->____unixEpoch_12 = L_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_GetEncoding_mBF5A2BA804B4917644BBEC5A4230D0854236D8FE(_stringLiteralE577106AF74D4E432DDB4785DA3B2BE486F67838, NULL);
		((GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var))->___iso8859dash1_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var))->___iso8859dash1_13), (void*)L_1);
		return;
	}
}
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_Comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GZipStream_get_Comment_m8BC7A090C67BBC0ECDB028B8757D6DCE488652BC (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____Comment_11;
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Comment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Comment_mE0BD7B9614B806CFBAC3ABD914C9229E1F112626 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Comment_mE0BD7B9614B806CFBAC3ABD914C9229E1F112626_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_2 = ___value0;
		__this->____Comment_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Comment_11), (void*)L_2);
		return;
	}
}
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_FileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GZipStream_get_FileName_m4E015DF2F74E0D2B3B177EB64B6CA39259193EC3 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____FileName_10;
		return L_0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_FileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_FileName_m0386221D053C993552FFF435F5B57879FBA8F342 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_FileName_m0386221D053C993552FFF435F5B57879FBA8F342_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_2 = ___value0;
		__this->____FileName_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____FileName_10), (void*)L_2);
		String_t* L_3 = __this->____FileName_10;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		String_t* L_4 = __this->____FileName_10;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_6 = __this->____FileName_10;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, NULL);
		__this->____FileName_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____FileName_10), (void*)L_7);
	}

IL_005a:
	{
		String_t* L_8 = __this->____FileName_10;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_8, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, NULL);
		if (!L_9)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9FC4F45EF48BB08BC4D6C5BC2A71B64139E0FEE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_FileName_m0386221D053C993552FFF435F5B57879FBA8F342_RuntimeMethod_var)));
	}

IL_007a:
	{
		String_t* L_11 = __this->____FileName_10;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_11, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, NULL);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_13 = __this->____FileName_10;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5(L_13, NULL);
		__this->____FileName_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____FileName_10), (void*)L_14);
	}

IL_00a1:
	{
		return;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanRead_m2F6F8E05D29E22A45E99E1A24B584F5333D8D0A0 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_CanRead_m2F6F8E05D29E22A45E99E1A24B584F5333D8D0A0_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_7;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = L_2->____stream_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		return L_4;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanSeek_m2822355435B5F9E0B436E81CC0254F3D9B8C124C (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanWrite_m19083C8618836645110CF173B6081451302A1524 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_CanWrite_m19083C8618836645110CF173B6081451302A1524_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_7;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = L_2->____stream_15;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		return L_4;
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Flush_m2DD2C1F5511AC7AD46129C0ED7DCBA94BA7969A0 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Flush_m2DD2C1F5511AC7AD46129C0ED7DCBA94BA7969A0_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_7;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_2);
		return;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Length_mAF0E34EA81B5C54AC6FF6501CD97F5B18C1746E8 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Length_mAF0E34EA81B5C54AC6FF6501CD97F5B18C1746E8_RuntimeMethod_var)));
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Position_mED06A90A75476E6D5F98AC5D3B68776FE3A75C3F (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) 
{
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_0 = __this->____baseStream_7;
		NullCheck(L_0);
		int32_t L_1 = L_0->____streamMode_6;
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_7;
		NullCheck(L_2);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_3 = L_2->____z_5;
		NullCheck(L_3);
		int64_t L_4 = L_3->___TotalBytesOut_7;
		int32_t L_5 = __this->____headerByteCount_6;
		return ((int64_t)il2cpp_codegen_add(L_4, ((int64_t)L_5)));
	}

IL_0029:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_6 = __this->____baseStream_7;
		NullCheck(L_6);
		int32_t L_7 = L_6->____streamMode_6;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_8 = __this->____baseStream_7;
		NullCheck(L_8);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_9 = L_8->____z_5;
		NullCheck(L_9);
		int64_t L_10 = L_9->___TotalBytesIn_3;
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_11 = __this->____baseStream_7;
		NullCheck(L_11);
		int32_t L_12 = L_11->____gzipHeaderByteCount_21;
		return ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)L_12)));
	}

IL_0058:
	{
		return ((int64_t)0);
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Position_m8B85AAE3E2C2E79F12BFCDAE1CA61FFF1EA6243E (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Position_m8B85AAE3E2C2E79F12BFCDAE1CA61FFF1EA6243E_RuntimeMethod_var)));
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_mA206364CF7FE969E38504CE24307C0CBB456F626 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Read_mA206364CF7FE969E38504CE24307C0CBB456F626_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		V_0 = L_6;
		bool L_7 = __this->____firstReadDone_9;
		if (L_7)
		{
			goto IL_0059;
		}
	}
	{
		__this->____firstReadDone_9 = (bool)1;
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_8 = __this->____baseStream_7;
		NullCheck(L_8);
		String_t* L_9 = L_8->____GzipFileName_18;
		GZipStream_set_FileName_m0386221D053C993552FFF435F5B57879FBA8F342(__this, L_9, NULL);
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_10 = __this->____baseStream_7;
		NullCheck(L_10);
		String_t* L_11 = L_10->____GzipComment_19;
		GZipStream_set_Comment_mE0BD7B9614B806CFBAC3ABD914C9229E1F112626(__this, L_11, NULL);
	}

IL_0059:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_Seek_mBC9F58B3D1BC59AE786078B58681037E448D8FB4 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Seek_mBC9F58B3D1BC59AE786078B58681037E448D8FB4_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_SetLength_m7C3F088154D91DBFBCA439E9C831A92B3452AC88 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_SetLength_m7C3F088154D91DBFBCA439E9C831A92B3452AC88_RuntimeMethod_var)));
	}
}
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mCC93645B5C4A31E04C1F4243E50BF3DCB724A3E2 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____disposed_8;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B0901D1A74BD2E4F4054DAEB235D92C54C70808)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Write_mCC93645B5C4A31E04C1F4243E50BF3DCB724A3E2_RuntimeMethod_var)));
	}

IL_0016:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_2 = __this->____baseStream_7;
		NullCheck(L_2);
		int32_t L_3 = L_2->____streamMode_6;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_4 = __this->____baseStream_7;
		NullCheck(L_4);
		bool L_5;
		L_5 = ZlibBaseStream_get__wantCompress_mC699027E7DDCE5303CF797EDD7D8E4234F1CAAE7(L_4, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_6;
		L_6 = GZipStream_EmitHeader_m3875C148E0B1916F3F5782E90532D2411C982456(__this, NULL);
		__this->____headerByteCount_6 = L_6;
		goto IL_004e;
	}

IL_0048:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Write_mCC93645B5C4A31E04C1F4243E50BF3DCB724A3E2_RuntimeMethod_var)));
	}

IL_004e:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_8 = __this->____baseStream_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___buffer0;
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___count2;
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, L_10, L_11);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::EmitHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EmitHeader_m3875C148E0B1916F3F5782E90532D2411C982456 (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B6_0 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		String_t* L_0;
		L_0 = GZipStream_get_Comment_m8BC7A090C67BBC0ECDB028B8757D6DCE488652BC_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
		goto IL_0021;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = ((GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var))->___iso8859dash1_13;
		String_t* L_2;
		L_2 = GZipStream_get_Comment_m8BC7A090C67BBC0ECDB028B8757D6DCE488652BC_inline(__this, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		G_B3_0 = L_3;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		String_t* L_4;
		L_4 = GZipStream_get_FileName_m4E015DF2F74E0D2B3B177EB64B6CA39259193EC3_inline(__this, NULL);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		G_B6_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
		goto IL_0043;
	}

IL_0033:
	{
		il2cpp_codegen_runtime_class_init_inline(GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5 = ((GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var))->___iso8859dash1_13;
		String_t* L_6;
		L_6 = GZipStream_get_FileName_m4E015DF2F74E0D2B3B177EB64B6CA39259193EC3_inline(__this, NULL);
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		G_B6_0 = L_7;
	}

IL_0043:
	{
		V_1 = G_B6_0;
		String_t* L_8;
		L_8 = GZipStream_get_Comment_m8BC7A090C67BBC0ECDB028B8757D6DCE488652BC_inline(__this, NULL);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_005a;
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		G_B9_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1));
	}

IL_005a:
	{
		V_2 = G_B9_0;
		String_t* L_10;
		L_10 = GZipStream_get_FileName_m4E015DF2F74E0D2B3B177EB64B6CA39259193EC3_inline(__this, NULL);
		if (L_10)
		{
			goto IL_006c;
		}
	}
	{
		G_B12_0 = 0;
		goto IL_0071;
	}

IL_006c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		NullCheck(L_11);
		G_B12_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_11)->max_length)), 1));
	}

IL_0071:
	{
		V_3 = G_B12_0;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)10), L_12)), L_13));
		int32_t L_14 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_14);
		V_5 = L_15;
		V_6 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_5;
		int32_t L_17 = V_6;
		int32_t L_18 = L_17;
		V_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)31));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_5;
		int32_t L_20 = V_6;
		int32_t L_21 = L_20;
		V_6 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)((int32_t)139));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_5;
		int32_t L_23 = V_6;
		int32_t L_24 = L_23;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)8);
		V_7 = (uint8_t)0;
		String_t* L_25;
		L_25 = GZipStream_get_Comment_m8BC7A090C67BBC0ECDB028B8757D6DCE488652BC_inline(__this, NULL);
		if (!L_25)
		{
			goto IL_00c2;
		}
	}
	{
		uint8_t L_26 = V_7;
		V_7 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_26^((int32_t)16))));
	}

IL_00c2:
	{
		String_t* L_27;
		L_27 = GZipStream_get_FileName_m4E015DF2F74E0D2B3B177EB64B6CA39259193EC3_inline(__this, NULL);
		if (!L_27)
		{
			goto IL_00d4;
		}
	}
	{
		uint8_t L_28 = V_7;
		V_7 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_28^8)));
	}

IL_00d4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_5;
		int32_t L_30 = V_6;
		int32_t L_31 = L_30;
		V_6 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint8_t L_32 = V_7;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)L_32);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* L_33 = (&__this->___LastModified_5);
		bool L_34;
		L_34 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline(L_33, Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		if (L_34)
		{
			goto IL_0100;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_35;
		L_35 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_36;
		memset((&L_36), 0, sizeof(L_36));
		Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF((&L_36), L_35, /*hidden argument*/Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		__this->___LastModified_5 = L_36;
	}

IL_0100:
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* L_37 = (&__this->___LastModified_5);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38;
		L_38 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991(L_37, Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_39 = ((GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_StaticFields*)il2cpp_codegen_static_fields_for(GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44_il2cpp_TypeInfo_var))->____unixEpoch_12;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_40;
		L_40 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_38, L_39, NULL);
		V_8 = L_40;
		double L_41;
		L_41 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_8), NULL);
		V_9 = il2cpp_codegen_cast_double_to_int<int32_t>(L_41);
		int32_t L_42 = V_9;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43;
		L_43 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(L_42, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_5;
		int32_t L_45 = V_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_43, 0, (RuntimeArray*)L_44, L_45, 4, NULL);
		int32_t L_46 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_46, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_5;
		int32_t L_48 = V_6;
		int32_t L_49 = L_48;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_5;
		int32_t L_51 = V_6;
		int32_t L_52 = L_51;
		V_6 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (uint8_t)((int32_t)255));
		int32_t L_53 = V_3;
		if (!L_53)
		{
			goto IL_017a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_5;
		int32_t L_56 = V_6;
		int32_t L_57 = V_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_54, 0, (RuntimeArray*)L_55, L_56, ((int32_t)il2cpp_codegen_subtract(L_57, 1)), NULL);
		int32_t L_58 = V_6;
		int32_t L_59 = V_3;
		V_6 = ((int32_t)il2cpp_codegen_add(L_58, ((int32_t)il2cpp_codegen_subtract(L_59, 1))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_5;
		int32_t L_61 = V_6;
		int32_t L_62 = L_61;
		V_6 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)0);
	}

IL_017a:
	{
		int32_t L_63 = V_2;
		if (!L_63)
		{
			goto IL_01a1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_5;
		int32_t L_66 = V_6;
		int32_t L_67 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_64, 0, (RuntimeArray*)L_65, L_66, ((int32_t)il2cpp_codegen_subtract(L_67, 1)), NULL);
		int32_t L_68 = V_6;
		int32_t L_69 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_add(L_68, ((int32_t)il2cpp_codegen_subtract(L_69, 1))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_5;
		int32_t L_71 = V_6;
		int32_t L_72 = L_71;
		V_6 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (uint8_t)0);
	}

IL_01a1:
	{
		ZlibBaseStream_t3BC46FAC8DFE73349E90F528AA63F8666AC4600F* L_73 = __this->____baseStream_7;
		NullCheck(L_73);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_74 = L_73->____stream_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = V_5;
		NullCheck(L_76);
		NullCheck(L_74);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_74, L_75, 0, ((int32_t)(((RuntimeArray*)L_76)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = V_5;
		NullCheck(L_77);
		return ((int32_t)(((RuntimeArray*)L_77)->max_length));
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
// System.Void Pathfinding.Ionic.Zlib.InfTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__ctor_mA9A896F4CFBB75C5881D31739C7033F28CB703D4 (InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InfTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__cctor_mD7AE3C3591C24AD15D687A9C7828F5A6B2093D17 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D5_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D6_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D7_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D8_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D9_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2DA_6_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1536));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D5_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___fixed_tl_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___fixed_tl_0), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D6_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___fixed_td_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___fixed_td_1), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D7_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cplens_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cplens_2), (void*)L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D8_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_10, L_11, NULL);
		((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cplext_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cplext_3), (void*)L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2D9_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_13, L_14, NULL);
		((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cpdist_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cpdist_4), (void*)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2DA_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_16, L_17, NULL);
		((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cpdext_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cpdext_5), (void*)L_16);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m46604697016D75115BDD7C3552A2C06A948D4536 (InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___d4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___e5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___t6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m7, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp8, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hn9, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v10, const RuntimeMethod* method) 
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
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B56_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B56_1 = NULL;
	int32_t G_B55_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B55_1 = NULL;
	int32_t G_B57_0 = 0;
	int32_t G_B57_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B57_2 = NULL;
	int32_t G_B75_0 = 0;
	{
		V_9 = 0;
		int32_t L_0 = ___n2;
		V_4 = L_0;
	}

IL_0006:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___c_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___b0;
		int32_t L_3 = ___bindex1;
		int32_t L_4 = V_9;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		int32_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		int32_t* L_7 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0006;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___c_8;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ___n2;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0049;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___t6;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___m7;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		return 0;
	}

IL_0049:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___m7;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_7 = L_20;
		V_5 = 1;
		goto IL_0070;
	}

IL_0057:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___c_8;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (!L_24)
		{
			goto IL_006a;
		}
	}
	{
		goto IL_0079;
	}

IL_006a:
	{
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0070:
	{
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0057;
		}
	}

IL_0079:
	{
		int32_t L_27 = V_5;
		V_6 = L_27;
		int32_t L_28 = V_7;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_30 = V_5;
		V_7 = L_30;
	}

IL_008a:
	{
		V_4 = ((int32_t)15);
		goto IL_00ac;
	}

IL_0093:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___c_8;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (!L_34)
		{
			goto IL_00a6;
		}
	}
	{
		goto IL_00b3;
	}

IL_00a6:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
	}

IL_00ac:
	{
		int32_t L_36 = V_4;
		if (L_36)
		{
			goto IL_0093;
		}
	}

IL_00b3:
	{
		int32_t L_37 = V_4;
		V_2 = L_37;
		int32_t L_38 = V_7;
		int32_t L_39 = V_4;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_40 = V_4;
		V_7 = L_40;
	}

IL_00c3:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ___m7;
		int32_t L_42 = V_7;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_42);
		int32_t L_43 = V_5;
		V_13 = ((int32_t)(1<<((int32_t)(L_43&((int32_t)31)))));
		goto IL_00fb;
	}

IL_00d7:
	{
		int32_t L_44 = V_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___c_8;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract(L_44, L_48));
		V_13 = L_49;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_00ef;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00ef:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = V_13;
		V_13 = ((int32_t)(L_51<<1));
	}

IL_00fb:
	{
		int32_t L_52 = V_5;
		int32_t L_53 = V_4;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_54 = V_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = __this->___c_8;
		int32_t L_56 = V_4;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract(L_54, L_58));
		V_13 = L_59;
		if ((((int32_t)L_59) >= ((int32_t)0)))
		{
			goto IL_011c;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_011c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___c_8;
		int32_t L_61 = V_4;
		NullCheck(L_60);
		int32_t* L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)));
		int32_t L_63 = *((int32_t*)L_62);
		int32_t L_64 = V_13;
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_add(L_63, L_64));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___x_11;
		int32_t L_66 = 0;
		V_5 = L_66;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_66);
		V_9 = 1;
		V_12 = 2;
		goto IL_016a;
	}

IL_0146:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = __this->___x_11;
		int32_t L_68 = V_12;
		int32_t L_69 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = __this->___c_8;
		int32_t L_71 = V_9;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_69, L_73));
		V_5 = L_74;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_74);
		int32_t L_75 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_76 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_016a:
	{
		int32_t L_77 = V_4;
		int32_t L_78 = ((int32_t)il2cpp_codegen_subtract(L_77, 1));
		V_4 = L_78;
		if (L_78)
		{
			goto IL_0146;
		}
	}
	{
		V_4 = 0;
		V_9 = 0;
	}

IL_017c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = ___b0;
		int32_t L_80 = ___bindex1;
		int32_t L_81 = V_9;
		NullCheck(L_79);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_80, L_81));
		int32_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = L_83;
		V_5 = L_84;
		if (!L_84)
		{
			goto IL_01a6;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = ___v10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = __this->___x_11;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		int32_t* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((int32_t*)L_88);
		int32_t L_90 = L_89;
		V_15 = L_90;
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_add(L_90, 1));
		int32_t L_91 = V_15;
		int32_t L_92 = V_4;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (int32_t)L_92);
	}

IL_01a6:
	{
		int32_t L_93 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		int32_t L_94 = V_4;
		int32_t L_95 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		V_4 = L_95;
		int32_t L_96 = ___n2;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_017c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = __this->___x_11;
		int32_t L_98 = V_2;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		int32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		___n2 = L_100;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = __this->___x_11;
		int32_t L_102 = 0;
		V_4 = L_102;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_102);
		V_9 = 0;
		V_3 = (-1);
		int32_t L_103 = V_7;
		V_11 = ((-L_103));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = __this->___u_10;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		V_10 = 0;
		V_14 = 0;
		goto IL_04a3;
	}

IL_01ed:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = __this->___c_8;
		int32_t L_106 = V_6;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		int32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_0 = L_108;
		goto IL_0493;
	}

IL_01fc:
	{
		goto IL_033d;
	}

IL_0201:
	{
		int32_t L_109 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		int32_t L_110 = V_11;
		int32_t L_111 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, L_111));
		int32_t L_112 = V_2;
		int32_t L_113 = V_11;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_112, L_113));
		int32_t L_114 = V_14;
		int32_t L_115 = V_7;
		if ((((int32_t)L_114) <= ((int32_t)L_115)))
		{
			goto IL_0222;
		}
	}
	{
		int32_t L_116 = V_7;
		G_B38_0 = L_116;
		goto IL_0224;
	}

IL_0222:
	{
		int32_t L_117 = V_14;
		G_B38_0 = L_117;
	}

IL_0224:
	{
		V_14 = G_B38_0;
		int32_t L_118 = V_6;
		int32_t L_119 = V_11;
		int32_t L_120 = ((int32_t)il2cpp_codegen_subtract(L_118, L_119));
		V_5 = L_120;
		int32_t L_121 = ((int32_t)(1<<((int32_t)(L_120&((int32_t)31)))));
		V_1 = L_121;
		int32_t L_122 = V_0;
		if ((((int32_t)L_121) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_122, 1)))))
		{
			goto IL_028c;
		}
	}
	{
		int32_t L_123 = V_1;
		int32_t L_124 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_123, ((int32_t)il2cpp_codegen_add(L_124, 1))));
		int32_t L_125 = V_6;
		V_12 = L_125;
		int32_t L_126 = V_5;
		int32_t L_127 = V_14;
		if ((((int32_t)L_126) >= ((int32_t)L_127)))
		{
			goto IL_028c;
		}
	}
	{
		goto IL_027e;
	}

IL_0255:
	{
		int32_t L_128 = V_1;
		int32_t L_129 = ((int32_t)(L_128<<1));
		V_1 = L_129;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = __this->___c_8;
		int32_t L_131 = V_12;
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		V_12 = L_132;
		NullCheck(L_130);
		int32_t L_133 = L_132;
		int32_t L_134 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		if ((((int32_t)L_129) > ((int32_t)L_134)))
		{
			goto IL_0272;
		}
	}
	{
		goto IL_028c;
	}

IL_0272:
	{
		int32_t L_135 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = __this->___c_8;
		int32_t L_137 = V_12;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		int32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_135, L_139));
	}

IL_027e:
	{
		int32_t L_140 = V_5;
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, 1));
		V_5 = L_141;
		int32_t L_142 = V_14;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_0255;
		}
	}

IL_028c:
	{
		int32_t L_143 = V_5;
		V_14 = ((int32_t)(1<<((int32_t)(L_143&((int32_t)31)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = ___hn9;
		NullCheck(L_144);
		int32_t L_145 = 0;
		int32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_146, L_147))) <= ((int32_t)((int32_t)1440))))
		{
			goto IL_02a9;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_02a9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = __this->___u_10;
		int32_t L_149 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_150 = ___hn9;
		NullCheck(L_150);
		int32_t L_151 = 0;
		int32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		int32_t L_153 = L_152;
		V_10 = L_153;
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (int32_t)L_153);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_154 = ___hn9;
		NullCheck(L_154);
		int32_t* L_155 = ((L_154)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_156 = *((int32_t*)L_155);
		int32_t L_157 = V_14;
		*((int32_t*)L_155) = (int32_t)((int32_t)il2cpp_codegen_add(L_156, L_157));
		int32_t L_158 = V_3;
		if (!L_158)
		{
			goto IL_0337;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_159 = __this->___x_11;
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(L_160), (int32_t)L_161);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = __this->___r_9;
		int32_t L_163 = V_5;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)((int8_t)L_163)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = __this->___r_9;
		int32_t L_165 = V_7;
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)((int8_t)L_165)));
		int32_t L_166 = V_4;
		int32_t L_167 = V_11;
		int32_t L_168 = V_7;
		int32_t L_169;
		L_169 = SharedUtils_URShift_m83556B5C9D5FC9E7F4C81BDCFA31C2A98AD02CF9(L_166, ((int32_t)il2cpp_codegen_subtract(L_167, L_168)), NULL);
		V_5 = L_169;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_170 = __this->___r_9;
		int32_t L_171 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = __this->___u_10;
		int32_t L_173 = V_3;
		NullCheck(L_172);
		int32_t L_174 = ((int32_t)il2cpp_codegen_subtract(L_173, 1));
		int32_t L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		int32_t L_176 = V_5;
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_171, L_175)), L_176)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = __this->___r_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = ___hp8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_179 = __this->___u_10;
		int32_t L_180 = V_3;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_subtract(L_180, 1));
		int32_t L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = V_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_177, 0, (RuntimeArray*)L_178, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_182, L_183)), 3)), 3, NULL);
		goto IL_033d;
	}

IL_0337:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_184 = ___t6;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_185);
	}

IL_033d:
	{
		int32_t L_186 = V_6;
		int32_t L_187 = V_11;
		int32_t L_188 = V_7;
		if ((((int32_t)L_186) > ((int32_t)((int32_t)il2cpp_codegen_add(L_187, L_188)))))
		{
			goto IL_0201;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = __this->___r_9;
		int32_t L_190 = V_6;
		int32_t L_191 = V_11;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)((int8_t)((int32_t)il2cpp_codegen_subtract(L_190, L_191)))));
		int32_t L_192 = V_9;
		int32_t L_193 = ___n2;
		if ((((int32_t)L_192) < ((int32_t)L_193)))
		{
			goto IL_0372;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_194 = __this->___r_9;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)192));
		goto IL_03e9;
	}

IL_0372:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = ___v10;
		int32_t L_196 = V_9;
		NullCheck(L_195);
		int32_t L_197 = L_196;
		int32_t L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ___s3;
		if ((((int32_t)L_198) >= ((int32_t)L_199)))
		{
			goto IL_03b6;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_200 = __this->___r_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = ___v10;
		int32_t L_202 = V_9;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		G_B55_0 = 0;
		G_B55_1 = L_200;
		if ((((int32_t)L_204) >= ((int32_t)((int32_t)256))))
		{
			G_B56_0 = 0;
			G_B56_1 = L_200;
			goto IL_039a;
		}
	}
	{
		G_B57_0 = 0;
		G_B57_1 = G_B55_0;
		G_B57_2 = G_B55_1;
		goto IL_039c;
	}

IL_039a:
	{
		G_B57_0 = ((int32_t)96);
		G_B57_1 = G_B56_0;
		G_B57_2 = G_B56_1;
	}

IL_039c:
	{
		NullCheck(G_B57_2);
		(G_B57_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B57_1), (int32_t)((int32_t)((int8_t)G_B57_0)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_205 = __this->___r_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_206 = ___v10;
		int32_t L_207 = V_9;
		int32_t L_208 = L_207;
		V_9 = ((int32_t)il2cpp_codegen_add(L_208, 1));
		NullCheck(L_206);
		int32_t L_209 = L_208;
		int32_t L_210 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_210);
		goto IL_03e9;
	}

IL_03b6:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_211 = __this->___r_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = ___e5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_213 = ___v10;
		int32_t L_214 = V_9;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		int32_t L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = ___s3;
		NullCheck(L_212);
		int32_t L_218 = ((int32_t)il2cpp_codegen_subtract(L_216, L_217));
		int32_t L_219 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		NullCheck(L_211);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)((int8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_219, ((int32_t)16))), ((int32_t)64))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_220 = __this->___r_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = ___d4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_222 = ___v10;
		int32_t L_223 = V_9;
		int32_t L_224 = L_223;
		V_9 = ((int32_t)il2cpp_codegen_add(L_224, 1));
		NullCheck(L_222);
		int32_t L_225 = L_224;
		int32_t L_226 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ___s3;
		NullCheck(L_221);
		int32_t L_228 = ((int32_t)il2cpp_codegen_subtract(L_226, L_227));
		int32_t L_229 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_228));
		NullCheck(L_220);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_229);
	}

IL_03e9:
	{
		int32_t L_230 = V_6;
		int32_t L_231 = V_11;
		V_1 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_230, L_231))&((int32_t)31)))));
		int32_t L_232 = V_4;
		int32_t L_233 = V_11;
		int32_t L_234;
		L_234 = SharedUtils_URShift_m83556B5C9D5FC9E7F4C81BDCFA31C2A98AD02CF9(L_232, L_233, NULL);
		V_5 = L_234;
		goto IL_0420;
	}

IL_0404:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_235 = __this->___r_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_236 = ___hp8;
		int32_t L_237 = V_10;
		int32_t L_238 = V_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_235, 0, (RuntimeArray*)L_236, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_237, L_238)), 3)), 3, NULL);
		int32_t L_239 = V_5;
		int32_t L_240 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add(L_239, L_240));
	}

IL_0420:
	{
		int32_t L_241 = V_5;
		int32_t L_242 = V_14;
		if ((((int32_t)L_241) < ((int32_t)L_242)))
		{
			goto IL_0404;
		}
	}
	{
		int32_t L_243 = V_6;
		V_5 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_243, 1))&((int32_t)31)))));
		goto IL_044a;
	}

IL_0439:
	{
		int32_t L_244 = V_4;
		int32_t L_245 = V_5;
		V_4 = ((int32_t)(L_244^L_245));
		int32_t L_246 = V_5;
		int32_t L_247;
		L_247 = SharedUtils_URShift_m83556B5C9D5FC9E7F4C81BDCFA31C2A98AD02CF9(L_246, 1, NULL);
		V_5 = L_247;
	}

IL_044a:
	{
		int32_t L_248 = V_4;
		int32_t L_249 = V_5;
		if (((int32_t)(L_248&L_249)))
		{
			goto IL_0439;
		}
	}
	{
		int32_t L_250 = V_4;
		int32_t L_251 = V_5;
		V_4 = ((int32_t)(L_250^L_251));
		int32_t L_252 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_252&((int32_t)31))))), 1));
		goto IL_0481;
	}

IL_046b:
	{
		int32_t L_253 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_253, 1));
		int32_t L_254 = V_11;
		int32_t L_255 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_254, L_255));
		int32_t L_256 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_256&((int32_t)31))))), 1));
	}

IL_0481:
	{
		int32_t L_257 = V_4;
		int32_t L_258 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_259 = __this->___x_11;
		int32_t L_260 = V_3;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		int32_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		if ((!(((uint32_t)((int32_t)(L_257&L_258))) == ((uint32_t)L_262))))
		{
			goto IL_046b;
		}
	}

IL_0493:
	{
		int32_t L_263 = V_0;
		int32_t L_264 = L_263;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_264, 1));
		if (L_264)
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_265 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_265, 1));
	}

IL_04a3:
	{
		int32_t L_266 = V_6;
		int32_t L_267 = V_2;
		if ((((int32_t)L_266) <= ((int32_t)L_267)))
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_268 = V_13;
		if (!L_268)
		{
			goto IL_04c0;
		}
	}
	{
		int32_t L_269 = V_2;
		if ((((int32_t)L_269) == ((int32_t)1)))
		{
			goto IL_04c0;
		}
	}
	{
		G_B75_0 = ((int32_t)-5);
		goto IL_04c1;
	}

IL_04c0:
	{
		G_B75_0 = 0;
	}

IL_04c1:
	{
		return G_B75_0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m4E67A9E1B4463EEAA3BC6B626FC34E6C84C98505 (InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bb1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tb2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp3, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___z4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InfTree_initWorkArea_m6DD941E5596CBC18E2CCBC1A028A566471954F79(__this, ((int32_t)19), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___hn_6;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___c0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___tb2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___bb1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___hp3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___hn_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___v_7;
		int32_t L_7;
		L_7 = InfTree_huft_build_m46604697016D75115BDD7C3552A2C06A948D4536(__this, L_1, 0, ((int32_t)19), ((int32_t)19), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL, L_2, L_3, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0049;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_9 = ___z4;
		NullCheck(L_9);
		L_9->___Message_8 = _stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___Message_8), (void*)_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		goto IL_0068;
	}

IL_0049:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-5))))
		{
			goto IL_0059;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___bb1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (L_13)
		{
			goto IL_0068;
		}
	}

IL_0059:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_14 = ___z4;
		NullCheck(L_14);
		L_14->___Message_8 = _stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___Message_8), (void*)_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		V_0 = ((int32_t)-3);
	}

IL_0068:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m69D377585D8B016479250A8B41B8FCB30E548CBB (InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___c2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd4, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl5, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hp7, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___z8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InfTree_initWorkArea_m6DD941E5596CBC18E2CCBC1A028A566471954F79(__this, ((int32_t)288), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___hn_6;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___c2;
		int32_t L_2 = ___nl0;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cplens_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cplext_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___tl5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___bl3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___hp7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___hn_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___v_7;
		int32_t L_10;
		L_10 = InfTree_huft_build_m46604697016D75115BDD7C3552A2C06A948D4536(__this, L_1, 0, L_2, ((int32_t)257), L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___bl3;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0080;
		}
	}

IL_004e:
	{
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0067;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_16 = ___z8;
		NullCheck(L_16);
		L_16->___Message_8 = _stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___Message_8), (void*)_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		goto IL_007e;
	}

IL_0067:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-4))))
		{
			goto IL_007e;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_18 = ___z8;
		NullCheck(L_18);
		L_18->___Message_8 = _stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___Message_8), (void*)_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		V_0 = ((int32_t)-3);
	}

IL_007e:
	{
		int32_t L_19 = V_0;
		return L_19;
	}

IL_0080:
	{
		InfTree_initWorkArea_m6DD941E5596CBC18E2CCBC1A028A566471954F79(__this, ((int32_t)288), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___c2;
		int32_t L_21 = ___nl0;
		int32_t L_22 = ___nd1;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cpdist_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___cpdext_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___td6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = ___bd4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___hp7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->___hn_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___v_7;
		int32_t L_30;
		L_30 = InfTree_huft_build_m46604697016D75115BDD7C3552A2C06A948D4536(__this, L_20, L_21, L_22, 0, L_23, L_24, L_25, L_26, L_27, L_28, L_29, NULL);
		V_0 = L_30;
		int32_t L_31 = V_0;
		if (L_31)
		{
			goto IL_00cc;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___bd4;
		NullCheck(L_32);
		int32_t L_33 = 0;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (L_34)
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_35 = ___nl0;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)257))))
		{
			goto IL_011a;
		}
	}

IL_00cc:
	{
		int32_t L_36 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_00e5;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_37 = ___z8;
		NullCheck(L_37);
		L_37->___Message_8 = _stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->___Message_8), (void*)_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		goto IL_0118;
	}

IL_00e5:
	{
		int32_t L_38 = V_0;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0101;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_39 = ___z8;
		NullCheck(L_39);
		L_39->___Message_8 = _stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->___Message_8), (void*)_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		V_0 = ((int32_t)-3);
		goto IL_0118;
	}

IL_0101:
	{
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-4))))
		{
			goto IL_0118;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_41 = ___z8;
		NullCheck(L_41);
		L_41->___Message_8 = _stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6;
		Il2CppCodeGenWriteBarrier((void**)(&L_41->___Message_8), (void*)_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		V_0 = ((int32_t)-3);
	}

IL_0118:
	{
		int32_t L_42 = V_0;
		return L_42;
	}

IL_011a:
	{
		return 0;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_mFF391B97328B30722D213C177B7616F5C2B89DAB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bl0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bd1, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___tl2, Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___td3, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___z4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___bl0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___bd1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)5);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_2 = ___tl2;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___fixed_tl_0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_3);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = ___td3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var))->___fixed_td_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_5);
		return 0;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InfTree::initWorkArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree_initWorkArea_m6DD941E5596CBC18E2CCBC1A028A566471954F79 (InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* __this, int32_t ___vsize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___hn_6;
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___hn_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hn_6), (void*)L_1);
		int32_t L_2 = ___vsize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___v_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___v_7), (void*)L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___c_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c_8), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___r_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___r_9), (void*)L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		__this->___u_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___u_10), (void*)L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___x_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_11), (void*)L_7);
		goto IL_00c7;
	}

IL_005b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___v_7;
		NullCheck(L_8);
		int32_t L_9 = ___vsize0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) >= ((int32_t)L_9)))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_10 = ___vsize0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___v_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___v_7), (void*)L_11);
	}

IL_0075:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___v_7;
		int32_t L_13 = ___vsize0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_12, 0, L_13, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___c_8;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_14, 0, ((int32_t)16), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___r_9;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___r_9;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___r_9;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___u_10;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_18, 0, ((int32_t)15), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___x_11;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_19, 0, ((int32_t)16), NULL);
	}

IL_00c7:
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
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::.ctor(Pathfinding.Ionic.Zlib.ZlibCodec,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks__ctor_m63CCF7BA0924B2E4E820AEAF1E09022669D3517C (InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* __this, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___codec0, RuntimeObject* ___checkfn1, int32_t ___w2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___bb_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bb_6), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___tb_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tb_7), (void*)L_1);
		InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* L_2 = (InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4*)il2cpp_codegen_object_new(InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InflateCodes__ctor_mE01CA9C60A00AA8BC86F9B0DEE76C222FCD553DB(L_2, NULL);
		__this->___codes_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codes_8), (void*)L_2);
		InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* L_3 = (InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913*)il2cpp_codegen_object_new(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InfTree__ctor_mA9A896F4CFBB75C5881D31739C7033F28CB703D4(L_3, NULL);
		__this->___inftree_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inftree_20), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_4 = ___codec0;
		__this->____codec_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____codec_10), (void*)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4320));
		__this->___hufts_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hufts_13), (void*)L_5);
		int32_t L_6 = ___w2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___window_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_14), (void*)L_7);
		int32_t L_8 = ___w2;
		__this->___end_15 = L_8;
		RuntimeObject* L_9 = ___checkfn1;
		__this->___checkfn_18 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkfn_18), (void*)L_9);
		__this->___mode_1 = 0;
		uint32_t L_10;
		L_10 = InflateBlocks_Reset_m675E7761BD0F90D1A4957E2C054B2FE21135C781(__this, NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks__cctor_m21834372170DE9653E14DC60B83EC8321B4BC191 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2DB_7_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2DB_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_il2cpp_TypeInfo_var))->___border_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_il2cpp_TypeInfo_var))->___border_0), (void*)L_1);
		return;
	}
}
// System.UInt32 Pathfinding.Ionic.Zlib.InflateBlocks::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InflateBlocks_Reset_m675E7761BD0F90D1A4957E2C054B2FE21135C781 (InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t0924C4DA81CD846C5A76E153176BF1013A7A1418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		uint32_t L_0 = __this->___check_19;
		V_0 = L_0;
		__this->___mode_1 = 0;
		__this->___bitk_11 = 0;
		__this->___bitb_12 = 0;
		int32_t L_1 = 0;
		V_1 = L_1;
		__this->___writeAt_17 = L_1;
		int32_t L_2 = V_1;
		__this->___readAt_16 = L_2;
		RuntimeObject* L_3 = __this->___checkfn_18;
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_4 = __this->____codec_10;
		il2cpp_codegen_runtime_class_init_inline(Adler_t0924C4DA81CD846C5A76E153176BF1013A7A1418_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = Adler_Adler32_m9B77BE46DC62C9A81F11A8400D0EF60EB3ADE835(0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, 0, 0, NULL);
		uint32_t L_6 = L_5;
		V_2 = L_6;
		__this->___check_19 = L_6;
		uint32_t L_7 = V_2;
		NullCheck(L_4);
		L_4->____Adler32_11 = L_7;
	}

IL_0054:
	{
		uint32_t L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Process(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Process_m680E1A7307ECB89176C73B4F21342B278F393DFA (InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* __this, int32_t ___r0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
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
	uint32_t V_8 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_11 = NULL;
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_17 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_18 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_19 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_20 = NULL;
	int32_t G_B3_0 = 0;
	InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* G_B29_0 = NULL;
	InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* G_B28_0 = NULL;
	int32_t G_B32_0 = 0;
	InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* G_B32_1 = NULL;
	InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* G_B31_0 = NULL;
	InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* G_B30_0 = NULL;
	int32_t G_B41_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B51_0 = 0;
	InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* G_B62_0 = NULL;
	InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* G_B61_0 = NULL;
	int32_t G_B63_0 = 0;
	InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* G_B63_1 = NULL;
	int32_t G_B108_0 = 0;
	int32_t G_B111_0 = 0;
	int32_t G_B124_0 = 0;
	int32_t G_B138_0 = 0;
	int32_t G_B144_0 = 0;
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_0 = __this->____codec_10;
		NullCheck(L_0);
		int32_t L_1 = L_0->___NextIn_1;
		V_3 = L_1;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_2 = __this->____codec_10;
		NullCheck(L_2);
		int32_t L_3 = L_2->___AvailableBytesIn_2;
		V_4 = L_3;
		int32_t L_4 = __this->___bitb_12;
		V_1 = L_4;
		int32_t L_5 = __this->___bitk_11;
		V_2 = L_5;
		int32_t L_6 = __this->___writeAt_17;
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = __this->___readAt_16;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_9 = __this->___readAt_16;
		int32_t L_10 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_9, L_10)), 1));
		goto IL_0055;
	}

IL_004c:
	{
		int32_t L_11 = __this->___end_15;
		int32_t L_12 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
	}

IL_0055:
	{
		V_6 = G_B3_0;
	}

IL_0057:
	{
		int32_t L_13 = __this->___mode_1;
		V_7 = L_13;
		int32_t L_14 = V_7;
		switch (L_14)
		{
			case 0:
			{
				goto IL_0093;
			}
			case 1:
			{
				goto IL_0278;
			}
			case 2:
			{
				goto IL_03dd;
			}
			case 3:
			{
				goto IL_05f8;
			}
			case 4:
			{
				goto IL_0794;
			}
			case 5:
			{
				goto IL_0965;
			}
			case 6:
			{
				goto IL_0da6;
			}
			case 7:
			{
				goto IL_0e90;
			}
			case 8:
			{
				goto IL_0f45;
			}
			case 9:
			{
				goto IL_0f9f;
			}
		}
	}
	{
		goto IL_0ffa;
	}

IL_0093:
	{
		goto IL_0127;
	}

IL_0098:
	{
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_00a7;
		}
	}
	{
		___r0 = 0;
		goto IL_00fe;
	}

IL_00a7:
	{
		int32_t L_16 = V_1;
		__this->___bitb_12 = L_16;
		int32_t L_17 = V_2;
		__this->___bitk_11 = L_17;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_18 = __this->____codec_10;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		L_18->___AvailableBytesIn_2 = L_19;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_20 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_21 = L_20;
		NullCheck(L_21);
		int64_t L_22 = L_21->___TotalBytesIn_3;
		int32_t L_23 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_24 = __this->____codec_10;
		NullCheck(L_24);
		int32_t L_25 = L_24->___NextIn_1;
		NullCheck(L_21);
		L_21->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_22, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_23, L_25)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_26 = __this->____codec_10;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		L_26->___NextIn_1 = L_27;
		int32_t L_28 = V_5;
		__this->___writeAt_17 = L_28;
		int32_t L_29 = ___r0;
		int32_t L_30;
		L_30 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_29, NULL);
		return L_30;
	}

IL_00fe:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		int32_t L_32 = V_1;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_33 = __this->____codec_10;
		NullCheck(L_33);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = L_33->___InputBuffer_0;
		int32_t L_35 = V_3;
		int32_t L_36 = L_35;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = V_2;
		V_1 = ((int32_t)(L_32|((int32_t)(((int32_t)((int32_t)L_38&((int32_t)255)))<<((int32_t)(L_39&((int32_t)31)))))));
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 8));
	}

IL_0127:
	{
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) < ((int32_t)3)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_42 = V_1;
		V_0 = ((int32_t)(L_42&7));
		int32_t L_43 = V_0;
		__this->___last_9 = ((int32_t)(L_43&1));
		int32_t L_44 = V_0;
		V_8 = ((int32_t)((uint32_t)L_44>>1));
		uint32_t L_45 = V_8;
		switch (L_45)
		{
			case 0:
			{
				goto IL_015c;
			}
			case 1:
			{
				goto IL_017f;
			}
			case 2:
			{
				goto IL_01e4;
			}
			case 3:
			{
				goto IL_01f8;
			}
		}
	}
	{
		goto IL_0273;
	}

IL_015c:
	{
		int32_t L_46 = V_1;
		V_1 = ((int32_t)(L_46>>3));
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_47, 3));
		int32_t L_48 = V_2;
		V_0 = ((int32_t)(L_48&7));
		int32_t L_49 = V_1;
		int32_t L_50 = V_0;
		V_1 = ((int32_t)(L_49>>((int32_t)(L_50&((int32_t)31)))));
		int32_t L_51 = V_2;
		int32_t L_52 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_51, L_52));
		__this->___mode_1 = 1;
		goto IL_0273;
	}

IL_017f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_9 = L_53;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_10 = L_54;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_55 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)1);
		V_11 = L_55;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_56 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E_il2cpp_TypeInfo_var, (uint32_t)1);
		V_12 = L_56;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_10;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_59 = V_11;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_60 = V_12;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_61 = __this->____codec_10;
		il2cpp_codegen_runtime_class_init_inline(InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = InfTree_inflate_trees_fixed_mFF391B97328B30722D213C177B7616F5C2B89DAB(L_57, L_58, L_59, L_60, L_61, NULL);
		InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* L_63 = __this->___codes_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_9;
		NullCheck(L_64);
		int32_t L_65 = 0;
		int32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_10;
		NullCheck(L_67);
		int32_t L_68 = 0;
		int32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_70 = V_11;
		NullCheck(L_70);
		int32_t L_71 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_73 = V_12;
		NullCheck(L_73);
		int32_t L_74 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_63);
		InflateCodes_Init_mF3CD0EC0C9F9ECCFE9A65D2F168EA7773505D323(L_63, L_66, L_69, L_72, 0, L_75, 0, NULL);
		int32_t L_76 = V_1;
		V_1 = ((int32_t)(L_76>>3));
		int32_t L_77 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_77, 3));
		__this->___mode_1 = 6;
		goto IL_0273;
	}

IL_01e4:
	{
		int32_t L_78 = V_1;
		V_1 = ((int32_t)(L_78>>3));
		int32_t L_79 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_79, 3));
		__this->___mode_1 = 3;
		goto IL_0273;
	}

IL_01f8:
	{
		int32_t L_80 = V_1;
		V_1 = ((int32_t)(L_80>>3));
		int32_t L_81 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_81, 3));
		__this->___mode_1 = ((int32_t)9);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_82 = __this->____codec_10;
		NullCheck(L_82);
		L_82->___Message_8 = _stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06;
		Il2CppCodeGenWriteBarrier((void**)(&L_82->___Message_8), (void*)_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		___r0 = ((int32_t)-3);
		int32_t L_83 = V_1;
		__this->___bitb_12 = L_83;
		int32_t L_84 = V_2;
		__this->___bitk_11 = L_84;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_85 = __this->____codec_10;
		int32_t L_86 = V_4;
		NullCheck(L_85);
		L_85->___AvailableBytesIn_2 = L_86;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_87 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_88 = L_87;
		NullCheck(L_88);
		int64_t L_89 = L_88->___TotalBytesIn_3;
		int32_t L_90 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_91 = __this->____codec_10;
		NullCheck(L_91);
		int32_t L_92 = L_91->___NextIn_1;
		NullCheck(L_88);
		L_88->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_89, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_90, L_92)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_93 = __this->____codec_10;
		int32_t L_94 = V_3;
		NullCheck(L_93);
		L_93->___NextIn_1 = L_94;
		int32_t L_95 = V_5;
		__this->___writeAt_17 = L_95;
		int32_t L_96 = ___r0;
		int32_t L_97;
		L_97 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_96, NULL);
		return L_97;
	}

IL_0273:
	{
		goto IL_1055;
	}

IL_0278:
	{
		goto IL_030c;
	}

IL_027d:
	{
		int32_t L_98 = V_4;
		if (!L_98)
		{
			goto IL_028c;
		}
	}
	{
		___r0 = 0;
		goto IL_02e3;
	}

IL_028c:
	{
		int32_t L_99 = V_1;
		__this->___bitb_12 = L_99;
		int32_t L_100 = V_2;
		__this->___bitk_11 = L_100;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_101 = __this->____codec_10;
		int32_t L_102 = V_4;
		NullCheck(L_101);
		L_101->___AvailableBytesIn_2 = L_102;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_103 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_104 = L_103;
		NullCheck(L_104);
		int64_t L_105 = L_104->___TotalBytesIn_3;
		int32_t L_106 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_107 = __this->____codec_10;
		NullCheck(L_107);
		int32_t L_108 = L_107->___NextIn_1;
		NullCheck(L_104);
		L_104->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_105, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_106, L_108)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_109 = __this->____codec_10;
		int32_t L_110 = V_3;
		NullCheck(L_109);
		L_109->___NextIn_1 = L_110;
		int32_t L_111 = V_5;
		__this->___writeAt_17 = L_111;
		int32_t L_112 = ___r0;
		int32_t L_113;
		L_113 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_112, NULL);
		return L_113;
	}

IL_02e3:
	{
		int32_t L_114 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_114, 1));
		int32_t L_115 = V_1;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_116 = __this->____codec_10;
		NullCheck(L_116);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = L_116->___InputBuffer_0;
		int32_t L_118 = V_3;
		int32_t L_119 = L_118;
		V_3 = ((int32_t)il2cpp_codegen_add(L_119, 1));
		NullCheck(L_117);
		int32_t L_120 = L_119;
		uint8_t L_121 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		int32_t L_122 = V_2;
		V_1 = ((int32_t)(L_115|((int32_t)(((int32_t)((int32_t)L_121&((int32_t)255)))<<((int32_t)(L_122&((int32_t)31)))))));
		int32_t L_123 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_123, 8));
	}

IL_030c:
	{
		int32_t L_124 = V_2;
		if ((((int32_t)L_124) < ((int32_t)((int32_t)32))))
		{
			goto IL_027d;
		}
	}
	{
		int32_t L_125 = V_1;
		int32_t L_126 = V_1;
		if ((((int32_t)((int32_t)(((int32_t)(((~L_125))>>((int32_t)16)))&((int32_t)65535)))) == ((int32_t)((int32_t)(L_126&((int32_t)65535))))))
		{
			goto IL_039e;
		}
	}
	{
		__this->___mode_1 = ((int32_t)9);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_127 = __this->____codec_10;
		NullCheck(L_127);
		L_127->___Message_8 = _stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113;
		Il2CppCodeGenWriteBarrier((void**)(&L_127->___Message_8), (void*)_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
		___r0 = ((int32_t)-3);
		int32_t L_128 = V_1;
		__this->___bitb_12 = L_128;
		int32_t L_129 = V_2;
		__this->___bitk_11 = L_129;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_130 = __this->____codec_10;
		int32_t L_131 = V_4;
		NullCheck(L_130);
		L_130->___AvailableBytesIn_2 = L_131;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_132 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_133 = L_132;
		NullCheck(L_133);
		int64_t L_134 = L_133->___TotalBytesIn_3;
		int32_t L_135 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_136 = __this->____codec_10;
		NullCheck(L_136);
		int32_t L_137 = L_136->___NextIn_1;
		NullCheck(L_133);
		L_133->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_134, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_135, L_137)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_138 = __this->____codec_10;
		int32_t L_139 = V_3;
		NullCheck(L_138);
		L_138->___NextIn_1 = L_139;
		int32_t L_140 = V_5;
		__this->___writeAt_17 = L_140;
		int32_t L_141 = ___r0;
		int32_t L_142;
		L_142 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_141, NULL);
		return L_142;
	}

IL_039e:
	{
		int32_t L_143 = V_1;
		__this->___left_2 = ((int32_t)(L_143&((int32_t)65535)));
		int32_t L_144 = 0;
		V_2 = L_144;
		V_1 = L_144;
		int32_t L_145 = __this->___left_2;
		G_B28_0 = __this;
		if (!L_145)
		{
			G_B29_0 = __this;
			goto IL_03c1;
		}
	}
	{
		G_B32_0 = 2;
		G_B32_1 = G_B28_0;
		goto IL_03d3;
	}

IL_03c1:
	{
		int32_t L_146 = __this->___last_9;
		G_B30_0 = G_B29_0;
		if (!L_146)
		{
			G_B31_0 = G_B29_0;
			goto IL_03d2;
		}
	}
	{
		G_B32_0 = 7;
		G_B32_1 = G_B30_0;
		goto IL_03d3;
	}

IL_03d2:
	{
		G_B32_0 = 0;
		G_B32_1 = G_B31_0;
	}

IL_03d3:
	{
		NullCheck(G_B32_1);
		G_B32_1->___mode_1 = G_B32_0;
		goto IL_1055;
	}

IL_03dd:
	{
		int32_t L_147 = V_4;
		if (L_147)
		{
			goto IL_043b;
		}
	}
	{
		int32_t L_148 = V_1;
		__this->___bitb_12 = L_148;
		int32_t L_149 = V_2;
		__this->___bitk_11 = L_149;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_150 = __this->____codec_10;
		int32_t L_151 = V_4;
		NullCheck(L_150);
		L_150->___AvailableBytesIn_2 = L_151;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_152 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_153 = L_152;
		NullCheck(L_153);
		int64_t L_154 = L_153->___TotalBytesIn_3;
		int32_t L_155 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_156 = __this->____codec_10;
		NullCheck(L_156);
		int32_t L_157 = L_156->___NextIn_1;
		NullCheck(L_153);
		L_153->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_154, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_155, L_157)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_158 = __this->____codec_10;
		int32_t L_159 = V_3;
		NullCheck(L_158);
		L_158->___NextIn_1 = L_159;
		int32_t L_160 = V_5;
		__this->___writeAt_17 = L_160;
		int32_t L_161 = ___r0;
		int32_t L_162;
		L_162 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_161, NULL);
		return L_162;
	}

IL_043b:
	{
		int32_t L_163 = V_6;
		if (L_163)
		{
			goto IL_056e;
		}
	}
	{
		int32_t L_164 = V_5;
		int32_t L_165 = __this->___end_15;
		if ((!(((uint32_t)L_164) == ((uint32_t)L_165))))
		{
			goto IL_0485;
		}
	}
	{
		int32_t L_166 = __this->___readAt_16;
		if (!L_166)
		{
			goto IL_0485;
		}
	}
	{
		V_5 = 0;
		int32_t L_167 = V_5;
		int32_t L_168 = __this->___readAt_16;
		if ((((int32_t)L_167) >= ((int32_t)L_168)))
		{
			goto IL_047a;
		}
	}
	{
		int32_t L_169 = __this->___readAt_16;
		int32_t L_170 = V_5;
		G_B41_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_169, L_170)), 1));
		goto IL_0483;
	}

IL_047a:
	{
		int32_t L_171 = __this->___end_15;
		int32_t L_172 = V_5;
		G_B41_0 = ((int32_t)il2cpp_codegen_subtract(L_171, L_172));
	}

IL_0483:
	{
		V_6 = G_B41_0;
	}

IL_0485:
	{
		int32_t L_173 = V_6;
		if (L_173)
		{
			goto IL_056e;
		}
	}
	{
		int32_t L_174 = V_5;
		__this->___writeAt_17 = L_174;
		int32_t L_175 = ___r0;
		int32_t L_176;
		L_176 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_175, NULL);
		___r0 = L_176;
		int32_t L_177 = __this->___writeAt_17;
		V_5 = L_177;
		int32_t L_178 = V_5;
		int32_t L_179 = __this->___readAt_16;
		if ((((int32_t)L_178) >= ((int32_t)L_179)))
		{
			goto IL_04c2;
		}
	}
	{
		int32_t L_180 = __this->___readAt_16;
		int32_t L_181 = V_5;
		G_B46_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_180, L_181)), 1));
		goto IL_04cb;
	}

IL_04c2:
	{
		int32_t L_182 = __this->___end_15;
		int32_t L_183 = V_5;
		G_B46_0 = ((int32_t)il2cpp_codegen_subtract(L_182, L_183));
	}

IL_04cb:
	{
		V_6 = G_B46_0;
		int32_t L_184 = V_5;
		int32_t L_185 = __this->___end_15;
		if ((!(((uint32_t)L_184) == ((uint32_t)L_185))))
		{
			goto IL_0510;
		}
	}
	{
		int32_t L_186 = __this->___readAt_16;
		if (!L_186)
		{
			goto IL_0510;
		}
	}
	{
		V_5 = 0;
		int32_t L_187 = V_5;
		int32_t L_188 = __this->___readAt_16;
		if ((((int32_t)L_187) >= ((int32_t)L_188)))
		{
			goto IL_0505;
		}
	}
	{
		int32_t L_189 = __this->___readAt_16;
		int32_t L_190 = V_5;
		G_B51_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_189, L_190)), 1));
		goto IL_050e;
	}

IL_0505:
	{
		int32_t L_191 = __this->___end_15;
		int32_t L_192 = V_5;
		G_B51_0 = ((int32_t)il2cpp_codegen_subtract(L_191, L_192));
	}

IL_050e:
	{
		V_6 = G_B51_0;
	}

IL_0510:
	{
		int32_t L_193 = V_6;
		if (L_193)
		{
			goto IL_056e;
		}
	}
	{
		int32_t L_194 = V_1;
		__this->___bitb_12 = L_194;
		int32_t L_195 = V_2;
		__this->___bitk_11 = L_195;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_196 = __this->____codec_10;
		int32_t L_197 = V_4;
		NullCheck(L_196);
		L_196->___AvailableBytesIn_2 = L_197;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_198 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_199 = L_198;
		NullCheck(L_199);
		int64_t L_200 = L_199->___TotalBytesIn_3;
		int32_t L_201 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_202 = __this->____codec_10;
		NullCheck(L_202);
		int32_t L_203 = L_202->___NextIn_1;
		NullCheck(L_199);
		L_199->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_200, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_201, L_203)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_204 = __this->____codec_10;
		int32_t L_205 = V_3;
		NullCheck(L_204);
		L_204->___NextIn_1 = L_205;
		int32_t L_206 = V_5;
		__this->___writeAt_17 = L_206;
		int32_t L_207 = ___r0;
		int32_t L_208;
		L_208 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_207, NULL);
		return L_208;
	}

IL_056e:
	{
		___r0 = 0;
		int32_t L_209 = __this->___left_2;
		V_0 = L_209;
		int32_t L_210 = V_0;
		int32_t L_211 = V_4;
		if ((((int32_t)L_210) <= ((int32_t)L_211)))
		{
			goto IL_0583;
		}
	}
	{
		int32_t L_212 = V_4;
		V_0 = L_212;
	}

IL_0583:
	{
		int32_t L_213 = V_0;
		int32_t L_214 = V_6;
		if ((((int32_t)L_213) <= ((int32_t)L_214)))
		{
			goto IL_058e;
		}
	}
	{
		int32_t L_215 = V_6;
		V_0 = L_215;
	}

IL_058e:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_216 = __this->____codec_10;
		NullCheck(L_216);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_217 = L_216->___InputBuffer_0;
		int32_t L_218 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_219 = __this->___window_14;
		int32_t L_220 = V_5;
		int32_t L_221 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_217, L_218, (RuntimeArray*)L_219, L_220, L_221, NULL);
		int32_t L_222 = V_3;
		int32_t L_223 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_222, L_223));
		int32_t L_224 = V_4;
		int32_t L_225 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_224, L_225));
		int32_t L_226 = V_5;
		int32_t L_227 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add(L_226, L_227));
		int32_t L_228 = V_6;
		int32_t L_229 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_228, L_229));
		int32_t L_230 = __this->___left_2;
		int32_t L_231 = V_0;
		int32_t L_232 = ((int32_t)il2cpp_codegen_subtract(L_230, L_231));
		V_13 = L_232;
		__this->___left_2 = L_232;
		int32_t L_233 = V_13;
		if (!L_233)
		{
			goto IL_05db;
		}
	}
	{
		goto IL_1055;
	}

IL_05db:
	{
		int32_t L_234 = __this->___last_9;
		G_B61_0 = __this;
		if (!L_234)
		{
			G_B62_0 = __this;
			goto IL_05ed;
		}
	}
	{
		G_B63_0 = 7;
		G_B63_1 = G_B61_0;
		goto IL_05ee;
	}

IL_05ed:
	{
		G_B63_0 = 0;
		G_B63_1 = G_B62_0;
	}

IL_05ee:
	{
		NullCheck(G_B63_1);
		G_B63_1->___mode_1 = G_B63_0;
		goto IL_1055;
	}

IL_05f8:
	{
		goto IL_068c;
	}

IL_05fd:
	{
		int32_t L_235 = V_4;
		if (!L_235)
		{
			goto IL_060c;
		}
	}
	{
		___r0 = 0;
		goto IL_0663;
	}

IL_060c:
	{
		int32_t L_236 = V_1;
		__this->___bitb_12 = L_236;
		int32_t L_237 = V_2;
		__this->___bitk_11 = L_237;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_238 = __this->____codec_10;
		int32_t L_239 = V_4;
		NullCheck(L_238);
		L_238->___AvailableBytesIn_2 = L_239;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_240 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_241 = L_240;
		NullCheck(L_241);
		int64_t L_242 = L_241->___TotalBytesIn_3;
		int32_t L_243 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_244 = __this->____codec_10;
		NullCheck(L_244);
		int32_t L_245 = L_244->___NextIn_1;
		NullCheck(L_241);
		L_241->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_242, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_243, L_245)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_246 = __this->____codec_10;
		int32_t L_247 = V_3;
		NullCheck(L_246);
		L_246->___NextIn_1 = L_247;
		int32_t L_248 = V_5;
		__this->___writeAt_17 = L_248;
		int32_t L_249 = ___r0;
		int32_t L_250;
		L_250 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_249, NULL);
		return L_250;
	}

IL_0663:
	{
		int32_t L_251 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_251, 1));
		int32_t L_252 = V_1;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_253 = __this->____codec_10;
		NullCheck(L_253);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_254 = L_253->___InputBuffer_0;
		int32_t L_255 = V_3;
		int32_t L_256 = L_255;
		V_3 = ((int32_t)il2cpp_codegen_add(L_256, 1));
		NullCheck(L_254);
		int32_t L_257 = L_256;
		uint8_t L_258 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		int32_t L_259 = V_2;
		V_1 = ((int32_t)(L_252|((int32_t)(((int32_t)((int32_t)L_258&((int32_t)255)))<<((int32_t)(L_259&((int32_t)31)))))));
		int32_t L_260 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_260, 8));
	}

IL_068c:
	{
		int32_t L_261 = V_2;
		if ((((int32_t)L_261) < ((int32_t)((int32_t)14))))
		{
			goto IL_05fd;
		}
	}
	{
		int32_t L_262 = V_1;
		int32_t L_263 = ((int32_t)(L_262&((int32_t)16383)));
		V_0 = L_263;
		__this->___table_3 = L_263;
		int32_t L_264 = V_0;
		if ((((int32_t)((int32_t)(L_264&((int32_t)31)))) > ((int32_t)((int32_t)29))))
		{
			goto IL_06bb;
		}
	}
	{
		int32_t L_265 = V_0;
		if ((((int32_t)((int32_t)(((int32_t)(L_265>>5))&((int32_t)31)))) <= ((int32_t)((int32_t)29))))
		{
			goto IL_072e;
		}
	}

IL_06bb:
	{
		__this->___mode_1 = ((int32_t)9);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_266 = __this->____codec_10;
		NullCheck(L_266);
		L_266->___Message_8 = _stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43;
		Il2CppCodeGenWriteBarrier((void**)(&L_266->___Message_8), (void*)_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		___r0 = ((int32_t)-3);
		int32_t L_267 = V_1;
		__this->___bitb_12 = L_267;
		int32_t L_268 = V_2;
		__this->___bitk_11 = L_268;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_269 = __this->____codec_10;
		int32_t L_270 = V_4;
		NullCheck(L_269);
		L_269->___AvailableBytesIn_2 = L_270;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_271 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_272 = L_271;
		NullCheck(L_272);
		int64_t L_273 = L_272->___TotalBytesIn_3;
		int32_t L_274 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_275 = __this->____codec_10;
		NullCheck(L_275);
		int32_t L_276 = L_275->___NextIn_1;
		NullCheck(L_272);
		L_272->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_273, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_274, L_276)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_277 = __this->____codec_10;
		int32_t L_278 = V_3;
		NullCheck(L_277);
		L_277->___NextIn_1 = L_278;
		int32_t L_279 = V_5;
		__this->___writeAt_17 = L_279;
		int32_t L_280 = ___r0;
		int32_t L_281;
		L_281 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_280, NULL);
		return L_281;
	}

IL_072e:
	{
		int32_t L_282 = V_0;
		int32_t L_283 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)258), ((int32_t)(L_282&((int32_t)31))))), ((int32_t)(((int32_t)(L_283>>5))&((int32_t)31)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_284 = __this->___blens_5;
		if (!L_284)
		{
			goto IL_0759;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_285 = __this->___blens_5;
		NullCheck(L_285);
		int32_t L_286 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_285)->max_length))) >= ((int32_t)L_286)))
		{
			goto IL_076a;
		}
	}

IL_0759:
	{
		int32_t L_287 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_287);
		__this->___blens_5 = L_288;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_5), (void*)L_288);
		goto IL_0777;
	}

IL_076a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = __this->___blens_5;
		int32_t L_290 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_289, 0, L_290, NULL);
	}

IL_0777:
	{
		int32_t L_291 = V_1;
		V_1 = ((int32_t)(L_291>>((int32_t)14)));
		int32_t L_292 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_292, ((int32_t)14)));
		__this->___index_4 = 0;
		__this->___mode_1 = 4;
		goto IL_0794;
	}

IL_0794:
	{
		goto IL_085f;
	}

IL_0799:
	{
		goto IL_082d;
	}

IL_079e:
	{
		int32_t L_293 = V_4;
		if (!L_293)
		{
			goto IL_07ad;
		}
	}
	{
		___r0 = 0;
		goto IL_0804;
	}

IL_07ad:
	{
		int32_t L_294 = V_1;
		__this->___bitb_12 = L_294;
		int32_t L_295 = V_2;
		__this->___bitk_11 = L_295;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_296 = __this->____codec_10;
		int32_t L_297 = V_4;
		NullCheck(L_296);
		L_296->___AvailableBytesIn_2 = L_297;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_298 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_299 = L_298;
		NullCheck(L_299);
		int64_t L_300 = L_299->___TotalBytesIn_3;
		int32_t L_301 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_302 = __this->____codec_10;
		NullCheck(L_302);
		int32_t L_303 = L_302->___NextIn_1;
		NullCheck(L_299);
		L_299->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_300, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_301, L_303)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_304 = __this->____codec_10;
		int32_t L_305 = V_3;
		NullCheck(L_304);
		L_304->___NextIn_1 = L_305;
		int32_t L_306 = V_5;
		__this->___writeAt_17 = L_306;
		int32_t L_307 = ___r0;
		int32_t L_308;
		L_308 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_307, NULL);
		return L_308;
	}

IL_0804:
	{
		int32_t L_309 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_309, 1));
		int32_t L_310 = V_1;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_311 = __this->____codec_10;
		NullCheck(L_311);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_312 = L_311->___InputBuffer_0;
		int32_t L_313 = V_3;
		int32_t L_314 = L_313;
		V_3 = ((int32_t)il2cpp_codegen_add(L_314, 1));
		NullCheck(L_312);
		int32_t L_315 = L_314;
		uint8_t L_316 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		int32_t L_317 = V_2;
		V_1 = ((int32_t)(L_310|((int32_t)(((int32_t)((int32_t)L_316&((int32_t)255)))<<((int32_t)(L_317&((int32_t)31)))))));
		int32_t L_318 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_318, 8));
	}

IL_082d:
	{
		int32_t L_319 = V_2;
		if ((((int32_t)L_319) < ((int32_t)3)))
		{
			goto IL_079e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_320 = __this->___blens_5;
		il2cpp_codegen_runtime_class_init_inline(InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = ((InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_il2cpp_TypeInfo_var))->___border_0;
		int32_t L_322 = __this->___index_4;
		int32_t L_323 = L_322;
		V_13 = L_323;
		__this->___index_4 = ((int32_t)il2cpp_codegen_add(L_323, 1));
		int32_t L_324 = V_13;
		NullCheck(L_321);
		int32_t L_325 = L_324;
		int32_t L_326 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_1;
		NullCheck(L_320);
		(L_320)->SetAt(static_cast<il2cpp_array_size_t>(L_326), (int32_t)((int32_t)(L_327&7)));
		int32_t L_328 = V_1;
		V_1 = ((int32_t)(L_328>>3));
		int32_t L_329 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_329, 3));
	}

IL_085f:
	{
		int32_t L_330 = __this->___index_4;
		int32_t L_331 = __this->___table_3;
		if ((((int32_t)L_330) < ((int32_t)((int32_t)il2cpp_codegen_add(4, ((int32_t)(L_331>>((int32_t)10))))))))
		{
			goto IL_0799;
		}
	}
	{
		goto IL_089b;
	}

IL_087a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = __this->___blens_5;
		il2cpp_codegen_runtime_class_init_inline(InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = ((InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1_il2cpp_TypeInfo_var))->___border_0;
		int32_t L_334 = __this->___index_4;
		int32_t L_335 = L_334;
		V_13 = L_335;
		__this->___index_4 = ((int32_t)il2cpp_codegen_add(L_335, 1));
		int32_t L_336 = V_13;
		NullCheck(L_333);
		int32_t L_337 = L_336;
		int32_t L_338 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		NullCheck(L_332);
		(L_332)->SetAt(static_cast<il2cpp_array_size_t>(L_338), (int32_t)0);
	}

IL_089b:
	{
		int32_t L_339 = __this->___index_4;
		if ((((int32_t)L_339) < ((int32_t)((int32_t)19))))
		{
			goto IL_087a;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_340 = __this->___bb_6;
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)7);
		InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* L_341 = __this->___inftree_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_342 = __this->___blens_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_343 = __this->___bb_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_344 = __this->___tb_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_345 = __this->___hufts_13;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_346 = __this->____codec_10;
		NullCheck(L_341);
		int32_t L_347;
		L_347 = InfTree_inflate_trees_bits_m4E67A9E1B4463EEAA3BC6B626FC34E6C84C98505(L_341, L_342, L_343, L_344, L_345, L_346, NULL);
		V_0 = L_347;
		int32_t L_348 = V_0;
		if (!L_348)
		{
			goto IL_0952;
		}
	}
	{
		int32_t L_349 = V_0;
		___r0 = L_349;
		int32_t L_350 = ___r0;
		if ((!(((uint32_t)L_350) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_08fb;
		}
	}
	{
		__this->___blens_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_5), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->___mode_1 = ((int32_t)9);
	}

IL_08fb:
	{
		int32_t L_351 = V_1;
		__this->___bitb_12 = L_351;
		int32_t L_352 = V_2;
		__this->___bitk_11 = L_352;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_353 = __this->____codec_10;
		int32_t L_354 = V_4;
		NullCheck(L_353);
		L_353->___AvailableBytesIn_2 = L_354;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_355 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_356 = L_355;
		NullCheck(L_356);
		int64_t L_357 = L_356->___TotalBytesIn_3;
		int32_t L_358 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_359 = __this->____codec_10;
		NullCheck(L_359);
		int32_t L_360 = L_359->___NextIn_1;
		NullCheck(L_356);
		L_356->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_357, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_358, L_360)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_361 = __this->____codec_10;
		int32_t L_362 = V_3;
		NullCheck(L_361);
		L_361->___NextIn_1 = L_362;
		int32_t L_363 = V_5;
		__this->___writeAt_17 = L_363;
		int32_t L_364 = ___r0;
		int32_t L_365;
		L_365 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_364, NULL);
		return L_365;
	}

IL_0952:
	{
		__this->___index_4 = 0;
		__this->___mode_1 = 5;
		goto IL_0965;
	}

IL_0965:
	{
		int32_t L_366 = __this->___table_3;
		V_0 = L_366;
		int32_t L_367 = __this->___index_4;
		int32_t L_368 = V_0;
		int32_t L_369 = V_0;
		if ((((int32_t)L_367) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)258), ((int32_t)(L_368&((int32_t)31))))), ((int32_t)(((int32_t)(L_369>>5))&((int32_t)31))))))))
		{
			goto IL_098d;
		}
	}
	{
		goto IL_0c8b;
	}

IL_098d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_370 = __this->___bb_6;
		NullCheck(L_370);
		int32_t L_371 = 0;
		int32_t L_372 = (L_370)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		V_0 = L_372;
		goto IL_0a2a;
	}

IL_099b:
	{
		int32_t L_373 = V_4;
		if (!L_373)
		{
			goto IL_09aa;
		}
	}
	{
		___r0 = 0;
		goto IL_0a01;
	}

IL_09aa:
	{
		int32_t L_374 = V_1;
		__this->___bitb_12 = L_374;
		int32_t L_375 = V_2;
		__this->___bitk_11 = L_375;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_376 = __this->____codec_10;
		int32_t L_377 = V_4;
		NullCheck(L_376);
		L_376->___AvailableBytesIn_2 = L_377;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_378 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_379 = L_378;
		NullCheck(L_379);
		int64_t L_380 = L_379->___TotalBytesIn_3;
		int32_t L_381 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_382 = __this->____codec_10;
		NullCheck(L_382);
		int32_t L_383 = L_382->___NextIn_1;
		NullCheck(L_379);
		L_379->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_380, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_381, L_383)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_384 = __this->____codec_10;
		int32_t L_385 = V_3;
		NullCheck(L_384);
		L_384->___NextIn_1 = L_385;
		int32_t L_386 = V_5;
		__this->___writeAt_17 = L_386;
		int32_t L_387 = ___r0;
		int32_t L_388;
		L_388 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_387, NULL);
		return L_388;
	}

IL_0a01:
	{
		int32_t L_389 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_389, 1));
		int32_t L_390 = V_1;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_391 = __this->____codec_10;
		NullCheck(L_391);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_392 = L_391->___InputBuffer_0;
		int32_t L_393 = V_3;
		int32_t L_394 = L_393;
		V_3 = ((int32_t)il2cpp_codegen_add(L_394, 1));
		NullCheck(L_392);
		int32_t L_395 = L_394;
		uint8_t L_396 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_395));
		int32_t L_397 = V_2;
		V_1 = ((int32_t)(L_390|((int32_t)(((int32_t)((int32_t)L_396&((int32_t)255)))<<((int32_t)(L_397&((int32_t)31)))))));
		int32_t L_398 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_398, 8));
	}

IL_0a2a:
	{
		int32_t L_399 = V_2;
		int32_t L_400 = V_0;
		if ((((int32_t)L_399) < ((int32_t)L_400)))
		{
			goto IL_099b;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = __this->___hufts_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_402 = __this->___tb_7;
		NullCheck(L_402);
		int32_t L_403 = 0;
		int32_t L_404 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_403));
		int32_t L_405 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_406 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_407 = V_0;
		NullCheck(L_406);
		int32_t L_408 = L_407;
		int32_t L_409 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_408));
		NullCheck(L_401);
		int32_t L_410 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_404, ((int32_t)(L_405&L_409)))), 3)), 1));
		int32_t L_411 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		V_0 = L_411;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = __this->___hufts_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_413 = __this->___tb_7;
		NullCheck(L_413);
		int32_t L_414 = 0;
		int32_t L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		int32_t L_416 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_417 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_418 = V_0;
		NullCheck(L_417);
		int32_t L_419 = L_418;
		int32_t L_420 = (L_417)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		NullCheck(L_412);
		int32_t L_421 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_415, ((int32_t)(L_416&L_420)))), 3)), 2));
		int32_t L_422 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		V_16 = L_422;
		int32_t L_423 = V_16;
		if ((((int32_t)L_423) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0aa3;
		}
	}
	{
		int32_t L_424 = V_1;
		int32_t L_425 = V_0;
		V_1 = ((int32_t)(L_424>>((int32_t)(L_425&((int32_t)31)))));
		int32_t L_426 = V_2;
		int32_t L_427 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_426, L_427));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_428 = __this->___blens_5;
		int32_t L_429 = __this->___index_4;
		int32_t L_430 = L_429;
		V_13 = L_430;
		__this->___index_4 = ((int32_t)il2cpp_codegen_add(L_430, 1));
		int32_t L_431 = V_13;
		int32_t L_432 = V_16;
		NullCheck(L_428);
		(L_428)->SetAt(static_cast<il2cpp_array_size_t>(L_431), (int32_t)L_432);
		goto IL_0c86;
	}

IL_0aa3:
	{
		int32_t L_433 = V_16;
		if ((!(((uint32_t)L_433) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0ab2;
		}
	}
	{
		G_B108_0 = 7;
		goto IL_0ab7;
	}

IL_0ab2:
	{
		int32_t L_434 = V_16;
		G_B108_0 = ((int32_t)il2cpp_codegen_subtract(L_434, ((int32_t)14)));
	}

IL_0ab7:
	{
		V_14 = G_B108_0;
		int32_t L_435 = V_16;
		if ((!(((uint32_t)L_435) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0ac9;
		}
	}
	{
		G_B111_0 = ((int32_t)11);
		goto IL_0aca;
	}

IL_0ac9:
	{
		G_B111_0 = 3;
	}

IL_0aca:
	{
		V_15 = G_B111_0;
		goto IL_0b60;
	}

IL_0ad1:
	{
		int32_t L_436 = V_4;
		if (!L_436)
		{
			goto IL_0ae0;
		}
	}
	{
		___r0 = 0;
		goto IL_0b37;
	}

IL_0ae0:
	{
		int32_t L_437 = V_1;
		__this->___bitb_12 = L_437;
		int32_t L_438 = V_2;
		__this->___bitk_11 = L_438;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_439 = __this->____codec_10;
		int32_t L_440 = V_4;
		NullCheck(L_439);
		L_439->___AvailableBytesIn_2 = L_440;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_441 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_442 = L_441;
		NullCheck(L_442);
		int64_t L_443 = L_442->___TotalBytesIn_3;
		int32_t L_444 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_445 = __this->____codec_10;
		NullCheck(L_445);
		int32_t L_446 = L_445->___NextIn_1;
		NullCheck(L_442);
		L_442->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_443, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_444, L_446)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_447 = __this->____codec_10;
		int32_t L_448 = V_3;
		NullCheck(L_447);
		L_447->___NextIn_1 = L_448;
		int32_t L_449 = V_5;
		__this->___writeAt_17 = L_449;
		int32_t L_450 = ___r0;
		int32_t L_451;
		L_451 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_450, NULL);
		return L_451;
	}

IL_0b37:
	{
		int32_t L_452 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_452, 1));
		int32_t L_453 = V_1;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_454 = __this->____codec_10;
		NullCheck(L_454);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_455 = L_454->___InputBuffer_0;
		int32_t L_456 = V_3;
		int32_t L_457 = L_456;
		V_3 = ((int32_t)il2cpp_codegen_add(L_457, 1));
		NullCheck(L_455);
		int32_t L_458 = L_457;
		uint8_t L_459 = (L_455)->GetAt(static_cast<il2cpp_array_size_t>(L_458));
		int32_t L_460 = V_2;
		V_1 = ((int32_t)(L_453|((int32_t)(((int32_t)((int32_t)L_459&((int32_t)255)))<<((int32_t)(L_460&((int32_t)31)))))));
		int32_t L_461 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_461, 8));
	}

IL_0b60:
	{
		int32_t L_462 = V_2;
		int32_t L_463 = V_0;
		int32_t L_464 = V_14;
		if ((((int32_t)L_462) < ((int32_t)((int32_t)il2cpp_codegen_add(L_463, L_464)))))
		{
			goto IL_0ad1;
		}
	}
	{
		int32_t L_465 = V_1;
		int32_t L_466 = V_0;
		V_1 = ((int32_t)(L_465>>((int32_t)(L_466&((int32_t)31)))));
		int32_t L_467 = V_2;
		int32_t L_468 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_467, L_468));
		int32_t L_469 = V_15;
		int32_t L_470 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_471 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_472 = V_14;
		NullCheck(L_471);
		int32_t L_473 = L_472;
		int32_t L_474 = (L_471)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		V_15 = ((int32_t)il2cpp_codegen_add(L_469, ((int32_t)(L_470&L_474))));
		int32_t L_475 = V_1;
		int32_t L_476 = V_14;
		V_1 = ((int32_t)(L_475>>((int32_t)(L_476&((int32_t)31)))));
		int32_t L_477 = V_2;
		int32_t L_478 = V_14;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_477, L_478));
		int32_t L_479 = __this->___index_4;
		V_14 = L_479;
		int32_t L_480 = __this->___table_3;
		V_0 = L_480;
		int32_t L_481 = V_14;
		int32_t L_482 = V_15;
		int32_t L_483 = V_0;
		int32_t L_484 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_481, L_482))) > ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)258), ((int32_t)(L_483&((int32_t)31))))), ((int32_t)(((int32_t)(L_484>>5))&((int32_t)31))))))))
		{
			goto IL_0bcc;
		}
	}
	{
		int32_t L_485 = V_16;
		if ((!(((uint32_t)L_485) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0c46;
		}
	}
	{
		int32_t L_486 = V_14;
		if ((((int32_t)L_486) >= ((int32_t)1)))
		{
			goto IL_0c46;
		}
	}

IL_0bcc:
	{
		__this->___blens_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_5), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->___mode_1 = ((int32_t)9);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_487 = __this->____codec_10;
		NullCheck(L_487);
		L_487->___Message_8 = _stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384;
		Il2CppCodeGenWriteBarrier((void**)(&L_487->___Message_8), (void*)_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		___r0 = ((int32_t)-3);
		int32_t L_488 = V_1;
		__this->___bitb_12 = L_488;
		int32_t L_489 = V_2;
		__this->___bitk_11 = L_489;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_490 = __this->____codec_10;
		int32_t L_491 = V_4;
		NullCheck(L_490);
		L_490->___AvailableBytesIn_2 = L_491;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_492 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_493 = L_492;
		NullCheck(L_493);
		int64_t L_494 = L_493->___TotalBytesIn_3;
		int32_t L_495 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_496 = __this->____codec_10;
		NullCheck(L_496);
		int32_t L_497 = L_496->___NextIn_1;
		NullCheck(L_493);
		L_493->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_494, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_495, L_497)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_498 = __this->____codec_10;
		int32_t L_499 = V_3;
		NullCheck(L_498);
		L_498->___NextIn_1 = L_499;
		int32_t L_500 = V_5;
		__this->___writeAt_17 = L_500;
		int32_t L_501 = ___r0;
		int32_t L_502;
		L_502 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_501, NULL);
		return L_502;
	}

IL_0c46:
	{
		int32_t L_503 = V_16;
		if ((!(((uint32_t)L_503) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0c5f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_504 = __this->___blens_5;
		int32_t L_505 = V_14;
		NullCheck(L_504);
		int32_t L_506 = ((int32_t)il2cpp_codegen_subtract(L_505, 1));
		int32_t L_507 = (L_504)->GetAt(static_cast<il2cpp_array_size_t>(L_506));
		G_B124_0 = L_507;
		goto IL_0c60;
	}

IL_0c5f:
	{
		G_B124_0 = 0;
	}

IL_0c60:
	{
		V_16 = G_B124_0;
	}

IL_0c62:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_508 = __this->___blens_5;
		int32_t L_509 = V_14;
		int32_t L_510 = L_509;
		V_14 = ((int32_t)il2cpp_codegen_add(L_510, 1));
		int32_t L_511 = V_16;
		NullCheck(L_508);
		(L_508)->SetAt(static_cast<il2cpp_array_size_t>(L_510), (int32_t)L_511);
		int32_t L_512 = V_15;
		int32_t L_513 = ((int32_t)il2cpp_codegen_subtract(L_512, 1));
		V_15 = L_513;
		if (L_513)
		{
			goto IL_0c62;
		}
	}
	{
		int32_t L_514 = V_14;
		__this->___index_4 = L_514;
	}

IL_0c86:
	{
		goto IL_0965;
	}

IL_0c8b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_515 = __this->___tb_7;
		NullCheck(L_515);
		(L_515)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_516 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_517 = L_516;
		NullCheck(L_517);
		(L_517)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		V_17 = L_517;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_518 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_519 = L_518;
		NullCheck(L_519);
		(L_519)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)6);
		V_18 = L_519;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_520 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_19 = L_520;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)1);
		V_20 = L_521;
		int32_t L_522 = __this->___table_3;
		V_0 = L_522;
		InfTree_t0C5405ED96649B7E79FF79CB4F182914A569A913* L_523 = __this->___inftree_20;
		int32_t L_524 = V_0;
		int32_t L_525 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_526 = __this->___blens_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_527 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_528 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = V_19;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_530 = V_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_531 = __this->___hufts_13;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_532 = __this->____codec_10;
		NullCheck(L_523);
		int32_t L_533;
		L_533 = InfTree_inflate_trees_dynamic_m69D377585D8B016479250A8B41B8FCB30E548CBB(L_523, ((int32_t)il2cpp_codegen_add(((int32_t)257), ((int32_t)(L_524&((int32_t)31))))), ((int32_t)il2cpp_codegen_add(1, ((int32_t)(((int32_t)(L_525>>5))&((int32_t)31))))), L_526, L_527, L_528, L_529, L_530, L_531, L_532, NULL);
		V_0 = L_533;
		int32_t L_534 = V_0;
		if (!L_534)
		{
			goto IL_0d73;
		}
	}
	{
		int32_t L_535 = V_0;
		if ((!(((uint32_t)L_535) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0d19;
		}
	}
	{
		__this->___blens_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blens_5), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->___mode_1 = ((int32_t)9);
	}

IL_0d19:
	{
		int32_t L_536 = V_0;
		___r0 = L_536;
		int32_t L_537 = V_1;
		__this->___bitb_12 = L_537;
		int32_t L_538 = V_2;
		__this->___bitk_11 = L_538;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_539 = __this->____codec_10;
		int32_t L_540 = V_4;
		NullCheck(L_539);
		L_539->___AvailableBytesIn_2 = L_540;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_541 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_542 = L_541;
		NullCheck(L_542);
		int64_t L_543 = L_542->___TotalBytesIn_3;
		int32_t L_544 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_545 = __this->____codec_10;
		NullCheck(L_545);
		int32_t L_546 = L_545->___NextIn_1;
		NullCheck(L_542);
		L_542->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_543, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_544, L_546)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_547 = __this->____codec_10;
		int32_t L_548 = V_3;
		NullCheck(L_547);
		L_547->___NextIn_1 = L_548;
		int32_t L_549 = V_5;
		__this->___writeAt_17 = L_549;
		int32_t L_550 = ___r0;
		int32_t L_551;
		L_551 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_550, NULL);
		return L_551;
	}

IL_0d73:
	{
		InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* L_552 = __this->___codes_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_553 = V_17;
		NullCheck(L_553);
		int32_t L_554 = 0;
		int32_t L_555 = (L_553)->GetAt(static_cast<il2cpp_array_size_t>(L_554));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_556 = V_18;
		NullCheck(L_556);
		int32_t L_557 = 0;
		int32_t L_558 = (L_556)->GetAt(static_cast<il2cpp_array_size_t>(L_557));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_559 = __this->___hufts_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_560 = V_19;
		NullCheck(L_560);
		int32_t L_561 = 0;
		int32_t L_562 = (L_560)->GetAt(static_cast<il2cpp_array_size_t>(L_561));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_563 = __this->___hufts_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_564 = V_20;
		NullCheck(L_564);
		int32_t L_565 = 0;
		int32_t L_566 = (L_564)->GetAt(static_cast<il2cpp_array_size_t>(L_565));
		NullCheck(L_552);
		InflateCodes_Init_mF3CD0EC0C9F9ECCFE9A65D2F168EA7773505D323(L_552, L_555, L_558, L_559, L_562, L_563, L_566, NULL);
		__this->___mode_1 = 6;
		goto IL_0da6;
	}

IL_0da6:
	{
		int32_t L_567 = V_1;
		__this->___bitb_12 = L_567;
		int32_t L_568 = V_2;
		__this->___bitk_11 = L_568;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_569 = __this->____codec_10;
		int32_t L_570 = V_4;
		NullCheck(L_569);
		L_569->___AvailableBytesIn_2 = L_570;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_571 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_572 = L_571;
		NullCheck(L_572);
		int64_t L_573 = L_572->___TotalBytesIn_3;
		int32_t L_574 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_575 = __this->____codec_10;
		NullCheck(L_575);
		int32_t L_576 = L_575->___NextIn_1;
		NullCheck(L_572);
		L_572->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_573, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_574, L_576)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_577 = __this->____codec_10;
		int32_t L_578 = V_3;
		NullCheck(L_577);
		L_577->___NextIn_1 = L_578;
		int32_t L_579 = V_5;
		__this->___writeAt_17 = L_579;
		InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* L_580 = __this->___codes_8;
		int32_t L_581 = ___r0;
		NullCheck(L_580);
		int32_t L_582;
		L_582 = InflateCodes_Process_m46D3628A94CFCA79BA82AF6E6F0312356CAA9B79(L_580, __this, L_581, NULL);
		___r0 = L_582;
		int32_t L_583 = ___r0;
		if ((((int32_t)L_583) == ((int32_t)1)))
		{
			goto IL_0e13;
		}
	}
	{
		int32_t L_584 = ___r0;
		int32_t L_585;
		L_585 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_584, NULL);
		return L_585;
	}

IL_0e13:
	{
		___r0 = 0;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_586 = __this->____codec_10;
		NullCheck(L_586);
		int32_t L_587 = L_586->___NextIn_1;
		V_3 = L_587;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_588 = __this->____codec_10;
		NullCheck(L_588);
		int32_t L_589 = L_588->___AvailableBytesIn_2;
		V_4 = L_589;
		int32_t L_590 = __this->___bitb_12;
		V_1 = L_590;
		int32_t L_591 = __this->___bitk_11;
		V_2 = L_591;
		int32_t L_592 = __this->___writeAt_17;
		V_5 = L_592;
		int32_t L_593 = V_5;
		int32_t L_594 = __this->___readAt_16;
		if ((((int32_t)L_593) >= ((int32_t)L_594)))
		{
			goto IL_0e62;
		}
	}
	{
		int32_t L_595 = __this->___readAt_16;
		int32_t L_596 = V_5;
		G_B138_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_595, L_596)), 1));
		goto IL_0e6b;
	}

IL_0e62:
	{
		int32_t L_597 = __this->___end_15;
		int32_t L_598 = V_5;
		G_B138_0 = ((int32_t)il2cpp_codegen_subtract(L_597, L_598));
	}

IL_0e6b:
	{
		V_6 = G_B138_0;
		int32_t L_599 = __this->___last_9;
		if (L_599)
		{
			goto IL_0e84;
		}
	}
	{
		__this->___mode_1 = 0;
		goto IL_1055;
	}

IL_0e84:
	{
		__this->___mode_1 = 7;
		goto IL_0e90;
	}

IL_0e90:
	{
		int32_t L_600 = V_5;
		__this->___writeAt_17 = L_600;
		int32_t L_601 = ___r0;
		int32_t L_602;
		L_602 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_601, NULL);
		___r0 = L_602;
		int32_t L_603 = __this->___writeAt_17;
		V_5 = L_603;
		int32_t L_604 = V_5;
		int32_t L_605 = __this->___readAt_16;
		if ((((int32_t)L_604) >= ((int32_t)L_605)))
		{
			goto IL_0ec6;
		}
	}
	{
		int32_t L_606 = __this->___readAt_16;
		int32_t L_607 = V_5;
		G_B144_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_606, L_607)), 1));
		goto IL_0ecf;
	}

IL_0ec6:
	{
		int32_t L_608 = __this->___end_15;
		int32_t L_609 = V_5;
		G_B144_0 = ((int32_t)il2cpp_codegen_subtract(L_608, L_609));
	}

IL_0ecf:
	{
		V_6 = G_B144_0;
		int32_t L_610 = __this->___readAt_16;
		int32_t L_611 = __this->___writeAt_17;
		if ((((int32_t)L_610) == ((int32_t)L_611)))
		{
			goto IL_0f39;
		}
	}
	{
		int32_t L_612 = V_1;
		__this->___bitb_12 = L_612;
		int32_t L_613 = V_2;
		__this->___bitk_11 = L_613;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_614 = __this->____codec_10;
		int32_t L_615 = V_4;
		NullCheck(L_614);
		L_614->___AvailableBytesIn_2 = L_615;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_616 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_617 = L_616;
		NullCheck(L_617);
		int64_t L_618 = L_617->___TotalBytesIn_3;
		int32_t L_619 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_620 = __this->____codec_10;
		NullCheck(L_620);
		int32_t L_621 = L_620->___NextIn_1;
		NullCheck(L_617);
		L_617->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_618, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_619, L_621)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_622 = __this->____codec_10;
		int32_t L_623 = V_3;
		NullCheck(L_622);
		L_622->___NextIn_1 = L_623;
		int32_t L_624 = V_5;
		__this->___writeAt_17 = L_624;
		int32_t L_625 = ___r0;
		int32_t L_626;
		L_626 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_625, NULL);
		return L_626;
	}

IL_0f39:
	{
		__this->___mode_1 = 8;
		goto IL_0f45;
	}

IL_0f45:
	{
		___r0 = 1;
		int32_t L_627 = V_1;
		__this->___bitb_12 = L_627;
		int32_t L_628 = V_2;
		__this->___bitk_11 = L_628;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_629 = __this->____codec_10;
		int32_t L_630 = V_4;
		NullCheck(L_629);
		L_629->___AvailableBytesIn_2 = L_630;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_631 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_632 = L_631;
		NullCheck(L_632);
		int64_t L_633 = L_632->___TotalBytesIn_3;
		int32_t L_634 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_635 = __this->____codec_10;
		NullCheck(L_635);
		int32_t L_636 = L_635->___NextIn_1;
		NullCheck(L_632);
		L_632->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_633, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_634, L_636)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_637 = __this->____codec_10;
		int32_t L_638 = V_3;
		NullCheck(L_637);
		L_637->___NextIn_1 = L_638;
		int32_t L_639 = V_5;
		__this->___writeAt_17 = L_639;
		int32_t L_640 = ___r0;
		int32_t L_641;
		L_641 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_640, NULL);
		return L_641;
	}

IL_0f9f:
	{
		___r0 = ((int32_t)-3);
		int32_t L_642 = V_1;
		__this->___bitb_12 = L_642;
		int32_t L_643 = V_2;
		__this->___bitk_11 = L_643;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_644 = __this->____codec_10;
		int32_t L_645 = V_4;
		NullCheck(L_644);
		L_644->___AvailableBytesIn_2 = L_645;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_646 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_647 = L_646;
		NullCheck(L_647);
		int64_t L_648 = L_647->___TotalBytesIn_3;
		int32_t L_649 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_650 = __this->____codec_10;
		NullCheck(L_650);
		int32_t L_651 = L_650->___NextIn_1;
		NullCheck(L_647);
		L_647->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_648, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_649, L_651)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_652 = __this->____codec_10;
		int32_t L_653 = V_3;
		NullCheck(L_652);
		L_652->___NextIn_1 = L_653;
		int32_t L_654 = V_5;
		__this->___writeAt_17 = L_654;
		int32_t L_655 = ___r0;
		int32_t L_656;
		L_656 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_655, NULL);
		return L_656;
	}

IL_0ffa:
	{
		___r0 = ((int32_t)-2);
		int32_t L_657 = V_1;
		__this->___bitb_12 = L_657;
		int32_t L_658 = V_2;
		__this->___bitk_11 = L_658;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_659 = __this->____codec_10;
		int32_t L_660 = V_4;
		NullCheck(L_659);
		L_659->___AvailableBytesIn_2 = L_660;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_661 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_662 = L_661;
		NullCheck(L_662);
		int64_t L_663 = L_662->___TotalBytesIn_3;
		int32_t L_664 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_665 = __this->____codec_10;
		NullCheck(L_665);
		int32_t L_666 = L_665->___NextIn_1;
		NullCheck(L_662);
		L_662->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_663, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_664, L_666)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_667 = __this->____codec_10;
		int32_t L_668 = V_3;
		NullCheck(L_667);
		L_667->___NextIn_1 = L_668;
		int32_t L_669 = V_5;
		__this->___writeAt_17 = L_669;
		int32_t L_670 = ___r0;
		int32_t L_671;
		L_671 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(__this, L_670, NULL);
		return L_671;
	}

IL_1055:
	{
		goto IL_0057;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InflateBlocks::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks_Free_m6634A0992F4C16BDE6887AA1F23AEB408CCC1DDB (InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = InflateBlocks_Reset_m675E7761BD0F90D1A4957E2C054B2FE21135C781(__this, NULL);
		__this->___window_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___window_14), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___hufts_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hufts_13), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateBlocks::Flush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A (InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* __this, int32_t ___r0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_t0924C4DA81CD846C5A76E153176BF1013A7A1418_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		V_1 = 0;
		goto IL_0175;
	}

IL_0007:
	{
		int32_t L_0 = V_1;
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_1 = __this->___readAt_16;
		int32_t L_2 = __this->___writeAt_17;
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = __this->___writeAt_17;
		G_B5_0 = L_3;
		goto IL_002f;
	}

IL_0029:
	{
		int32_t L_4 = __this->___end_15;
		G_B5_0 = L_4;
	}

IL_002f:
	{
		int32_t L_5 = __this->___readAt_16;
		V_0 = ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_5));
		goto IL_004a;
	}

IL_003c:
	{
		int32_t L_6 = __this->___writeAt_17;
		int32_t L_7 = __this->___readAt_16;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
	}

IL_004a:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_9 = ___r0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_005b;
		}
	}
	{
		___r0 = 0;
	}

IL_005b:
	{
		int32_t L_10 = ___r0;
		return L_10;
	}

IL_005d:
	{
		int32_t L_11 = V_0;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_12 = __this->____codec_10;
		NullCheck(L_12);
		int32_t L_13 = L_12->___AvailableBytesOut_6;
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_007a;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_14 = __this->____codec_10;
		NullCheck(L_14);
		int32_t L_15 = L_14->___AvailableBytesOut_6;
		V_0 = L_15;
	}

IL_007a:
	{
		int32_t L_16 = V_0;
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_17 = ___r0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_008b;
		}
	}
	{
		___r0 = 0;
	}

IL_008b:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_18 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->___AvailableBytesOut_6;
		int32_t L_21 = V_0;
		NullCheck(L_19);
		L_19->___AvailableBytesOut_6 = ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_22 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_23 = L_22;
		NullCheck(L_23);
		int64_t L_24 = L_23->___TotalBytesOut_7;
		int32_t L_25 = V_0;
		NullCheck(L_23);
		L_23->___TotalBytesOut_7 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)L_25)));
		RuntimeObject* L_26 = __this->___checkfn_18;
		if (!L_26)
		{
			goto IL_00e9;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_27 = __this->____codec_10;
		uint32_t L_28 = __this->___check_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___window_14;
		int32_t L_30 = __this->___readAt_16;
		int32_t L_31 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Adler_t0924C4DA81CD846C5A76E153176BF1013A7A1418_il2cpp_TypeInfo_var);
		uint32_t L_32;
		L_32 = Adler_Adler32_m9B77BE46DC62C9A81F11A8400D0EF60EB3ADE835(L_28, L_29, L_30, L_31, NULL);
		uint32_t L_33 = L_32;
		V_2 = L_33;
		__this->___check_19 = L_33;
		uint32_t L_34 = V_2;
		NullCheck(L_27);
		L_27->____Adler32_11 = L_34;
	}

IL_00e9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___window_14;
		int32_t L_36 = __this->___readAt_16;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_37 = __this->____codec_10;
		NullCheck(L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = L_37->___OutputBuffer_4;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_39 = __this->____codec_10;
		NullCheck(L_39);
		int32_t L_40 = L_39->___NextOut_5;
		int32_t L_41 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_35, L_36, (RuntimeArray*)L_38, L_40, L_41, NULL);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_42 = __this->____codec_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_43 = L_42;
		NullCheck(L_43);
		int32_t L_44 = L_43->___NextOut_5;
		int32_t L_45 = V_0;
		NullCheck(L_43);
		L_43->___NextOut_5 = ((int32_t)il2cpp_codegen_add(L_44, L_45));
		int32_t L_46 = __this->___readAt_16;
		int32_t L_47 = V_0;
		__this->___readAt_16 = ((int32_t)il2cpp_codegen_add(L_46, L_47));
		int32_t L_48 = __this->___readAt_16;
		int32_t L_49 = __this->___end_15;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_50 = V_1;
		if (L_50)
		{
			goto IL_016d;
		}
	}
	{
		__this->___readAt_16 = 0;
		int32_t L_51 = __this->___writeAt_17;
		int32_t L_52 = __this->___end_15;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0168;
		}
	}
	{
		__this->___writeAt_17 = 0;
	}

IL_0168:
	{
		goto IL_0171;
	}

IL_016d:
	{
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0171:
	{
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0175:
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_56 = ___r0;
		return L_56;
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
// System.Void Pathfinding.Ionic.Zlib.InternalInflateConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalInflateConstants__cctor_mF58C712ABAB324579EE372798770A4E80CC8BFC3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2DC_8_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B99f15b47U2D93f0U2D442dU2Da950U2D84e2e79a92c8U7D_tC68C1F2D969823EA99F566986F306F7DA625FD3F____U24fieldU2DC_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0), (void*)L_1);
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
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes__ctor_mE01CA9C60A00AA8BC86F9B0DEE76C222FCD553DB (InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Pathfinding.Ionic.Zlib.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes_Init_mF3CD0EC0C9F9ECCFE9A65D2F168EA7773505D323 (InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, const RuntimeMethod* method) 
{
	{
		__this->___mode_0 = 0;
		int32_t L_0 = ___bl0;
		__this->___lbits_8 = (uint8_t)((int32_t)(uint8_t)L_0);
		int32_t L_1 = ___bd1;
		__this->___dbits_9 = (uint8_t)((int32_t)(uint8_t)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___tl2;
		__this->___ltree_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ltree_10), (void*)L_2);
		int32_t L_3 = ___tl_index3;
		__this->___ltree_index_11 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___td4;
		__this->___dtree_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dtree_12), (void*)L_4);
		int32_t L_5 = ___td_index5;
		__this->___dtree_index_13 = L_5;
		__this->___tree_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		return;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::Process(Pathfinding.Ionic.Zlib.InflateBlocks,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_Process_m46D3628A94CFCA79BA82AF6E6F0312356CAA9B79 (InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* __this, InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* ___blocks0, int32_t ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
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
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* G_B14_0 = NULL;
	InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* G_B15_1 = NULL;
	int32_t G_B67_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B77_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B96_0 = 0;
	int32_t G_B101_0 = 0;
	int32_t G_B110_0 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_0 = ___blocks0;
		NullCheck(L_0);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_1 = L_0->____codec_10;
		V_10 = L_1;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_2 = V_10;
		NullCheck(L_2);
		int32_t L_3 = L_2->___NextIn_1;
		V_5 = L_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_4 = V_10;
		NullCheck(L_4);
		int32_t L_5 = L_4->___AvailableBytesIn_2;
		V_6 = L_5;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_6 = ___blocks0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bitb_12;
		V_3 = L_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_8 = ___blocks0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___bitk_11;
		V_4 = L_9;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_10 = ___blocks0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___writeAt_17;
		V_7 = L_11;
		int32_t L_12 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_13 = ___blocks0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___readAt_16;
		if ((((int32_t)L_12) >= ((int32_t)L_14)))
		{
			goto IL_0056;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_15 = ___blocks0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___readAt_16;
		int32_t L_17 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_16, L_17)), 1));
		goto IL_005f;
	}

IL_0056:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_18 = ___blocks0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___end_15;
		int32_t L_20 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_19, L_20));
	}

IL_005f:
	{
		V_8 = G_B3_0;
	}

IL_0061:
	{
		int32_t L_21 = __this->___mode_0;
		V_11 = L_21;
		int32_t L_22 = V_11;
		switch (L_22)
		{
			case 0:
			{
				goto IL_009d;
			}
			case 1:
			{
				goto IL_01c4;
			}
			case 2:
			{
				goto IL_0387;
			}
			case 3:
			{
				goto IL_0471;
			}
			case 4:
			{
				goto IL_05fd;
			}
			case 5:
			{
				goto IL_06c3;
			}
			case 6:
			{
				goto IL_0868;
			}
			case 7:
			{
				goto IL_09b8;
			}
			case 8:
			{
				goto IL_0a7a;
			}
			case 9:
			{
				goto IL_0ac7;
			}
		}
	}
	{
		goto IL_0b15;
	}

IL_009d:
	{
		int32_t L_23 = V_8;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)258))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_24 = V_6;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)10))))
		{
			goto IL_0194;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_25 = ___blocks0;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		L_25->___bitb_12 = L_26;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_27 = ___blocks0;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		L_27->___bitk_11 = L_28;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_29 = V_10;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		L_29->___AvailableBytesIn_2 = L_30;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_31 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_32 = L_31;
		NullCheck(L_32);
		int64_t L_33 = L_32->___TotalBytesIn_3;
		int32_t L_34 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_35 = V_10;
		NullCheck(L_35);
		int32_t L_36 = L_35->___NextIn_1;
		NullCheck(L_32);
		L_32->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_33, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_34, L_36)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_37 = V_10;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		L_37->___NextIn_1 = L_38;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_39 = ___blocks0;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		L_39->___writeAt_17 = L_40;
		uint8_t L_41 = __this->___lbits_8;
		uint8_t L_42 = __this->___dbits_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->___ltree_10;
		int32_t L_44 = __this->___ltree_index_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___dtree_12;
		int32_t L_46 = __this->___dtree_index_13;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_47 = ___blocks0;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_48 = V_10;
		int32_t L_49;
		L_49 = InflateCodes_InflateFast_m794F62B15BA1DDE12233C9208EE42467D10791AD(__this, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, NULL);
		___r1 = L_49;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_50 = V_10;
		NullCheck(L_50);
		int32_t L_51 = L_50->___NextIn_1;
		V_5 = L_51;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_52 = V_10;
		NullCheck(L_52);
		int32_t L_53 = L_52->___AvailableBytesIn_2;
		V_6 = L_53;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_54 = ___blocks0;
		NullCheck(L_54);
		int32_t L_55 = L_54->___bitb_12;
		V_3 = L_55;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_56 = ___blocks0;
		NullCheck(L_56);
		int32_t L_57 = L_56->___bitk_11;
		V_4 = L_57;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_58 = ___blocks0;
		NullCheck(L_58);
		int32_t L_59 = L_58->___writeAt_17;
		V_7 = L_59;
		int32_t L_60 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_61 = ___blocks0;
		NullCheck(L_61);
		int32_t L_62 = L_61->___readAt_16;
		if ((((int32_t)L_60) >= ((int32_t)L_62)))
		{
			goto IL_0169;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_63 = ___blocks0;
		NullCheck(L_63);
		int32_t L_64 = L_63->___readAt_16;
		int32_t L_65 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_64, L_65)), 1));
		goto IL_0172;
	}

IL_0169:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_66 = ___blocks0;
		NullCheck(L_66);
		int32_t L_67 = L_66->___end_15;
		int32_t L_68 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract(L_67, L_68));
	}

IL_0172:
	{
		V_8 = G_B11_0;
		int32_t L_69 = ___r1;
		if (!L_69)
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_70 = ___r1;
		G_B13_0 = __this;
		if ((!(((uint32_t)L_70) == ((uint32_t)1))))
		{
			G_B14_0 = __this;
			goto IL_0188;
		}
	}
	{
		G_B15_0 = 7;
		G_B15_1 = G_B13_0;
		goto IL_018a;
	}

IL_0188:
	{
		G_B15_0 = ((int32_t)9);
		G_B15_1 = G_B14_0;
	}

IL_018a:
	{
		NullCheck(G_B15_1);
		G_B15_1->___mode_0 = G_B15_0;
		goto IL_0b63;
	}

IL_0194:
	{
		uint8_t L_71 = __this->___lbits_8;
		__this->___need_4 = L_71;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = __this->___ltree_10;
		__this->___tree_2 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_72);
		int32_t L_73 = __this->___ltree_index_11;
		__this->___tree_index_3 = L_73;
		__this->___mode_0 = 1;
		goto IL_01c4;
	}

IL_01c4:
	{
		int32_t L_74 = __this->___need_4;
		V_0 = L_74;
		goto IL_0253;
	}

IL_01d0:
	{
		int32_t L_75 = V_6;
		if (!L_75)
		{
			goto IL_01df;
		}
	}
	{
		___r1 = 0;
		goto IL_0229;
	}

IL_01df:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_76 = ___blocks0;
		int32_t L_77 = V_3;
		NullCheck(L_76);
		L_76->___bitb_12 = L_77;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_78 = ___blocks0;
		int32_t L_79 = V_4;
		NullCheck(L_78);
		L_78->___bitk_11 = L_79;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_80 = V_10;
		int32_t L_81 = V_6;
		NullCheck(L_80);
		L_80->___AvailableBytesIn_2 = L_81;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_82 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_83 = L_82;
		NullCheck(L_83);
		int64_t L_84 = L_83->___TotalBytesIn_3;
		int32_t L_85 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_86 = V_10;
		NullCheck(L_86);
		int32_t L_87 = L_86->___NextIn_1;
		NullCheck(L_83);
		L_83->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_84, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_85, L_87)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_88 = V_10;
		int32_t L_89 = V_5;
		NullCheck(L_88);
		L_88->___NextIn_1 = L_89;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_90 = ___blocks0;
		int32_t L_91 = V_7;
		NullCheck(L_90);
		L_90->___writeAt_17 = L_91;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_92 = ___blocks0;
		int32_t L_93 = ___r1;
		NullCheck(L_92);
		int32_t L_94;
		L_94 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_92, L_93, NULL);
		return L_94;
	}

IL_0229:
	{
		int32_t L_95 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		int32_t L_96 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_97 = V_10;
		NullCheck(L_97);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = L_97->___InputBuffer_0;
		int32_t L_99 = V_5;
		int32_t L_100 = L_99;
		V_5 = ((int32_t)il2cpp_codegen_add(L_100, 1));
		NullCheck(L_98);
		int32_t L_101 = L_100;
		uint8_t L_102 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = V_4;
		V_3 = ((int32_t)(L_96|((int32_t)(((int32_t)((int32_t)L_102&((int32_t)255)))<<((int32_t)(L_103&((int32_t)31)))))));
		int32_t L_104 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_104, 8));
	}

IL_0253:
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_0;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_01d0;
		}
	}
	{
		int32_t L_107 = __this->___tree_index_3;
		int32_t L_108 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_110 = V_0;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		V_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_107, ((int32_t)(L_108&L_112)))), 3));
		int32_t L_113 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114 = __this->___tree_2;
		int32_t L_115 = V_1;
		NullCheck(L_114);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add(L_115, 1));
		int32_t L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_3 = ((int32_t)(L_113>>((int32_t)(L_117&((int32_t)31)))));
		int32_t L_118 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = __this->___tree_2;
		int32_t L_120 = V_1;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 1));
		int32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_118, L_122));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = __this->___tree_2;
		int32_t L_124 = V_1;
		NullCheck(L_123);
		int32_t L_125 = L_124;
		int32_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		V_2 = L_126;
		int32_t L_127 = V_2;
		if (L_127)
		{
			goto IL_02b8;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = __this->___tree_2;
		int32_t L_129 = V_1;
		NullCheck(L_128);
		int32_t L_130 = ((int32_t)il2cpp_codegen_add(L_129, 2));
		int32_t L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		__this->___lit_5 = L_131;
		__this->___mode_0 = 6;
		goto IL_0b63;
	}

IL_02b8:
	{
		int32_t L_132 = V_2;
		if (!((int32_t)(L_132&((int32_t)16))))
		{
			goto IL_02e7;
		}
	}
	{
		int32_t L_133 = V_2;
		__this->___bitsToGet_6 = ((int32_t)(L_133&((int32_t)15)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_134 = __this->___tree_2;
		int32_t L_135 = V_1;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add(L_135, 2));
		int32_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		__this->___len_1 = L_137;
		__this->___mode_0 = 2;
		goto IL_0b63;
	}

IL_02e7:
	{
		int32_t L_138 = V_2;
		if (((int32_t)(L_138&((int32_t)64))))
		{
			goto IL_0310;
		}
	}
	{
		int32_t L_139 = V_2;
		__this->___need_4 = L_139;
		int32_t L_140 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = __this->___tree_2;
		int32_t L_142 = V_1;
		NullCheck(L_141);
		int32_t L_143 = ((int32_t)il2cpp_codegen_add(L_142, 2));
		int32_t L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		__this->___tree_index_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_140/3)), L_144));
		goto IL_0b63;
	}

IL_0310:
	{
		int32_t L_145 = V_2;
		if (!((int32_t)(L_145&((int32_t)32))))
		{
			goto IL_0325;
		}
	}
	{
		__this->___mode_0 = 7;
		goto IL_0b63;
	}

IL_0325:
	{
		__this->___mode_0 = ((int32_t)9);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_146 = V_10;
		NullCheck(L_146);
		L_146->___Message_8 = _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
		Il2CppCodeGenWriteBarrier((void**)(&L_146->___Message_8), (void*)_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		___r1 = ((int32_t)-3);
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_147 = ___blocks0;
		int32_t L_148 = V_3;
		NullCheck(L_147);
		L_147->___bitb_12 = L_148;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_149 = ___blocks0;
		int32_t L_150 = V_4;
		NullCheck(L_149);
		L_149->___bitk_11 = L_150;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_151 = V_10;
		int32_t L_152 = V_6;
		NullCheck(L_151);
		L_151->___AvailableBytesIn_2 = L_152;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_153 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_154 = L_153;
		NullCheck(L_154);
		int64_t L_155 = L_154->___TotalBytesIn_3;
		int32_t L_156 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_157 = V_10;
		NullCheck(L_157);
		int32_t L_158 = L_157->___NextIn_1;
		NullCheck(L_154);
		L_154->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_155, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_156, L_158)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_159 = V_10;
		int32_t L_160 = V_5;
		NullCheck(L_159);
		L_159->___NextIn_1 = L_160;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_161 = ___blocks0;
		int32_t L_162 = V_7;
		NullCheck(L_161);
		L_161->___writeAt_17 = L_162;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_163 = ___blocks0;
		int32_t L_164 = ___r1;
		NullCheck(L_163);
		int32_t L_165;
		L_165 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_163, L_164, NULL);
		return L_165;
	}

IL_0387:
	{
		int32_t L_166 = __this->___bitsToGet_6;
		V_0 = L_166;
		goto IL_0416;
	}

IL_0393:
	{
		int32_t L_167 = V_6;
		if (!L_167)
		{
			goto IL_03a2;
		}
	}
	{
		___r1 = 0;
		goto IL_03ec;
	}

IL_03a2:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_168 = ___blocks0;
		int32_t L_169 = V_3;
		NullCheck(L_168);
		L_168->___bitb_12 = L_169;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_170 = ___blocks0;
		int32_t L_171 = V_4;
		NullCheck(L_170);
		L_170->___bitk_11 = L_171;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_172 = V_10;
		int32_t L_173 = V_6;
		NullCheck(L_172);
		L_172->___AvailableBytesIn_2 = L_173;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_174 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_175 = L_174;
		NullCheck(L_175);
		int64_t L_176 = L_175->___TotalBytesIn_3;
		int32_t L_177 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_178 = V_10;
		NullCheck(L_178);
		int32_t L_179 = L_178->___NextIn_1;
		NullCheck(L_175);
		L_175->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_176, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_177, L_179)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_180 = V_10;
		int32_t L_181 = V_5;
		NullCheck(L_180);
		L_180->___NextIn_1 = L_181;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_182 = ___blocks0;
		int32_t L_183 = V_7;
		NullCheck(L_182);
		L_182->___writeAt_17 = L_183;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_184 = ___blocks0;
		int32_t L_185 = ___r1;
		NullCheck(L_184);
		int32_t L_186;
		L_186 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_184, L_185, NULL);
		return L_186;
	}

IL_03ec:
	{
		int32_t L_187 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_187, 1));
		int32_t L_188 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_189 = V_10;
		NullCheck(L_189);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_190 = L_189->___InputBuffer_0;
		int32_t L_191 = V_5;
		int32_t L_192 = L_191;
		V_5 = ((int32_t)il2cpp_codegen_add(L_192, 1));
		NullCheck(L_190);
		int32_t L_193 = L_192;
		uint8_t L_194 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = V_4;
		V_3 = ((int32_t)(L_188|((int32_t)(((int32_t)((int32_t)L_194&((int32_t)255)))<<((int32_t)(L_195&((int32_t)31)))))));
		int32_t L_196 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_196, 8));
	}

IL_0416:
	{
		int32_t L_197 = V_4;
		int32_t L_198 = V_0;
		if ((((int32_t)L_197) < ((int32_t)L_198)))
		{
			goto IL_0393;
		}
	}
	{
		int32_t L_199 = __this->___len_1;
		int32_t L_200 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_202 = V_0;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		__this->___len_1 = ((int32_t)il2cpp_codegen_add(L_199, ((int32_t)(L_200&L_204))));
		int32_t L_205 = V_3;
		int32_t L_206 = V_0;
		V_3 = ((int32_t)(L_205>>((int32_t)(L_206&((int32_t)31)))));
		int32_t L_207 = V_4;
		int32_t L_208 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_207, L_208));
		uint8_t L_209 = __this->___dbits_9;
		__this->___need_4 = L_209;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_210 = __this->___dtree_12;
		__this->___tree_2 = L_210;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_210);
		int32_t L_211 = __this->___dtree_index_13;
		__this->___tree_index_3 = L_211;
		__this->___mode_0 = 3;
		goto IL_0471;
	}

IL_0471:
	{
		int32_t L_212 = __this->___need_4;
		V_0 = L_212;
		goto IL_0500;
	}

IL_047d:
	{
		int32_t L_213 = V_6;
		if (!L_213)
		{
			goto IL_048c;
		}
	}
	{
		___r1 = 0;
		goto IL_04d6;
	}

IL_048c:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_214 = ___blocks0;
		int32_t L_215 = V_3;
		NullCheck(L_214);
		L_214->___bitb_12 = L_215;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_216 = ___blocks0;
		int32_t L_217 = V_4;
		NullCheck(L_216);
		L_216->___bitk_11 = L_217;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_218 = V_10;
		int32_t L_219 = V_6;
		NullCheck(L_218);
		L_218->___AvailableBytesIn_2 = L_219;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_220 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_221 = L_220;
		NullCheck(L_221);
		int64_t L_222 = L_221->___TotalBytesIn_3;
		int32_t L_223 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_224 = V_10;
		NullCheck(L_224);
		int32_t L_225 = L_224->___NextIn_1;
		NullCheck(L_221);
		L_221->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_222, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_223, L_225)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_226 = V_10;
		int32_t L_227 = V_5;
		NullCheck(L_226);
		L_226->___NextIn_1 = L_227;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_228 = ___blocks0;
		int32_t L_229 = V_7;
		NullCheck(L_228);
		L_228->___writeAt_17 = L_229;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_230 = ___blocks0;
		int32_t L_231 = ___r1;
		NullCheck(L_230);
		int32_t L_232;
		L_232 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_230, L_231, NULL);
		return L_232;
	}

IL_04d6:
	{
		int32_t L_233 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_233, 1));
		int32_t L_234 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_235 = V_10;
		NullCheck(L_235);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_236 = L_235->___InputBuffer_0;
		int32_t L_237 = V_5;
		int32_t L_238 = L_237;
		V_5 = ((int32_t)il2cpp_codegen_add(L_238, 1));
		NullCheck(L_236);
		int32_t L_239 = L_238;
		uint8_t L_240 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		int32_t L_241 = V_4;
		V_3 = ((int32_t)(L_234|((int32_t)(((int32_t)((int32_t)L_240&((int32_t)255)))<<((int32_t)(L_241&((int32_t)31)))))));
		int32_t L_242 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_242, 8));
	}

IL_0500:
	{
		int32_t L_243 = V_4;
		int32_t L_244 = V_0;
		if ((((int32_t)L_243) < ((int32_t)L_244)))
		{
			goto IL_047d;
		}
	}
	{
		int32_t L_245 = __this->___tree_index_3;
		int32_t L_246 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_248 = V_0;
		NullCheck(L_247);
		int32_t L_249 = L_248;
		int32_t L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		V_1 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_245, ((int32_t)(L_246&L_250)))), 3));
		int32_t L_251 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = __this->___tree_2;
		int32_t L_253 = V_1;
		NullCheck(L_252);
		int32_t L_254 = ((int32_t)il2cpp_codegen_add(L_253, 1));
		int32_t L_255 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		V_3 = ((int32_t)(L_251>>((int32_t)(L_255&((int32_t)31)))));
		int32_t L_256 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = __this->___tree_2;
		int32_t L_258 = V_1;
		NullCheck(L_257);
		int32_t L_259 = ((int32_t)il2cpp_codegen_add(L_258, 1));
		int32_t L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_256, L_260));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = __this->___tree_2;
		int32_t L_262 = V_1;
		NullCheck(L_261);
		int32_t L_263 = L_262;
		int32_t L_264 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		V_2 = L_264;
		int32_t L_265 = V_2;
		if (!((int32_t)(L_265&((int32_t)16))))
		{
			goto IL_0572;
		}
	}
	{
		int32_t L_266 = V_2;
		__this->___bitsToGet_6 = ((int32_t)(L_266&((int32_t)15)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = __this->___tree_2;
		int32_t L_268 = V_1;
		NullCheck(L_267);
		int32_t L_269 = ((int32_t)il2cpp_codegen_add(L_268, 2));
		int32_t L_270 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		__this->___dist_7 = L_270;
		__this->___mode_0 = 4;
		goto IL_0b63;
	}

IL_0572:
	{
		int32_t L_271 = V_2;
		if (((int32_t)(L_271&((int32_t)64))))
		{
			goto IL_059b;
		}
	}
	{
		int32_t L_272 = V_2;
		__this->___need_4 = L_272;
		int32_t L_273 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_274 = __this->___tree_2;
		int32_t L_275 = V_1;
		NullCheck(L_274);
		int32_t L_276 = ((int32_t)il2cpp_codegen_add(L_275, 2));
		int32_t L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		__this->___tree_index_3 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_273/3)), L_277));
		goto IL_0b63;
	}

IL_059b:
	{
		__this->___mode_0 = ((int32_t)9);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_278 = V_10;
		NullCheck(L_278);
		L_278->___Message_8 = _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
		Il2CppCodeGenWriteBarrier((void**)(&L_278->___Message_8), (void*)_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		___r1 = ((int32_t)-3);
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_279 = ___blocks0;
		int32_t L_280 = V_3;
		NullCheck(L_279);
		L_279->___bitb_12 = L_280;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_281 = ___blocks0;
		int32_t L_282 = V_4;
		NullCheck(L_281);
		L_281->___bitk_11 = L_282;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_283 = V_10;
		int32_t L_284 = V_6;
		NullCheck(L_283);
		L_283->___AvailableBytesIn_2 = L_284;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_285 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_286 = L_285;
		NullCheck(L_286);
		int64_t L_287 = L_286->___TotalBytesIn_3;
		int32_t L_288 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_289 = V_10;
		NullCheck(L_289);
		int32_t L_290 = L_289->___NextIn_1;
		NullCheck(L_286);
		L_286->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_287, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_288, L_290)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_291 = V_10;
		int32_t L_292 = V_5;
		NullCheck(L_291);
		L_291->___NextIn_1 = L_292;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_293 = ___blocks0;
		int32_t L_294 = V_7;
		NullCheck(L_293);
		L_293->___writeAt_17 = L_294;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_295 = ___blocks0;
		int32_t L_296 = ___r1;
		NullCheck(L_295);
		int32_t L_297;
		L_297 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_295, L_296, NULL);
		return L_297;
	}

IL_05fd:
	{
		int32_t L_298 = __this->___bitsToGet_6;
		V_0 = L_298;
		goto IL_068c;
	}

IL_0609:
	{
		int32_t L_299 = V_6;
		if (!L_299)
		{
			goto IL_0618;
		}
	}
	{
		___r1 = 0;
		goto IL_0662;
	}

IL_0618:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_300 = ___blocks0;
		int32_t L_301 = V_3;
		NullCheck(L_300);
		L_300->___bitb_12 = L_301;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_302 = ___blocks0;
		int32_t L_303 = V_4;
		NullCheck(L_302);
		L_302->___bitk_11 = L_303;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_304 = V_10;
		int32_t L_305 = V_6;
		NullCheck(L_304);
		L_304->___AvailableBytesIn_2 = L_305;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_306 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_307 = L_306;
		NullCheck(L_307);
		int64_t L_308 = L_307->___TotalBytesIn_3;
		int32_t L_309 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_310 = V_10;
		NullCheck(L_310);
		int32_t L_311 = L_310->___NextIn_1;
		NullCheck(L_307);
		L_307->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_308, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_309, L_311)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_312 = V_10;
		int32_t L_313 = V_5;
		NullCheck(L_312);
		L_312->___NextIn_1 = L_313;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_314 = ___blocks0;
		int32_t L_315 = V_7;
		NullCheck(L_314);
		L_314->___writeAt_17 = L_315;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_316 = ___blocks0;
		int32_t L_317 = ___r1;
		NullCheck(L_316);
		int32_t L_318;
		L_318 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_316, L_317, NULL);
		return L_318;
	}

IL_0662:
	{
		int32_t L_319 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_319, 1));
		int32_t L_320 = V_3;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_321 = V_10;
		NullCheck(L_321);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_322 = L_321->___InputBuffer_0;
		int32_t L_323 = V_5;
		int32_t L_324 = L_323;
		V_5 = ((int32_t)il2cpp_codegen_add(L_324, 1));
		NullCheck(L_322);
		int32_t L_325 = L_324;
		uint8_t L_326 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_4;
		V_3 = ((int32_t)(L_320|((int32_t)(((int32_t)((int32_t)L_326&((int32_t)255)))<<((int32_t)(L_327&((int32_t)31)))))));
		int32_t L_328 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_328, 8));
	}

IL_068c:
	{
		int32_t L_329 = V_4;
		int32_t L_330 = V_0;
		if ((((int32_t)L_329) < ((int32_t)L_330)))
		{
			goto IL_0609;
		}
	}
	{
		int32_t L_331 = __this->___dist_7;
		int32_t L_332 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_334 = V_0;
		NullCheck(L_333);
		int32_t L_335 = L_334;
		int32_t L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		__this->___dist_7 = ((int32_t)il2cpp_codegen_add(L_331, ((int32_t)(L_332&L_336))));
		int32_t L_337 = V_3;
		int32_t L_338 = V_0;
		V_3 = ((int32_t)(L_337>>((int32_t)(L_338&((int32_t)31)))));
		int32_t L_339 = V_4;
		int32_t L_340 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_339, L_340));
		__this->___mode_0 = 5;
		goto IL_06c3;
	}

IL_06c3:
	{
		int32_t L_341 = V_7;
		int32_t L_342 = __this->___dist_7;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_341, L_342));
		goto IL_06de;
	}

IL_06d3:
	{
		int32_t L_343 = V_9;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_344 = ___blocks0;
		NullCheck(L_344);
		int32_t L_345 = L_344->___end_15;
		V_9 = ((int32_t)il2cpp_codegen_add(L_343, L_345));
	}

IL_06de:
	{
		int32_t L_346 = V_9;
		if ((((int32_t)L_346) < ((int32_t)0)))
		{
			goto IL_06d3;
		}
	}
	{
		goto IL_0851;
	}

IL_06eb:
	{
		int32_t L_347 = V_8;
		if (L_347)
		{
			goto IL_0811;
		}
	}
	{
		int32_t L_348 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_349 = ___blocks0;
		NullCheck(L_349);
		int32_t L_350 = L_349->___end_15;
		if ((!(((uint32_t)L_348) == ((uint32_t)L_350))))
		{
			goto IL_0735;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_351 = ___blocks0;
		NullCheck(L_351);
		int32_t L_352 = L_351->___readAt_16;
		if (!L_352)
		{
			goto IL_0735;
		}
	}
	{
		V_7 = 0;
		int32_t L_353 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_354 = ___blocks0;
		NullCheck(L_354);
		int32_t L_355 = L_354->___readAt_16;
		if ((((int32_t)L_353) >= ((int32_t)L_355)))
		{
			goto IL_072a;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_356 = ___blocks0;
		NullCheck(L_356);
		int32_t L_357 = L_356->___readAt_16;
		int32_t L_358 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_357, L_358)), 1));
		goto IL_0733;
	}

IL_072a:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_359 = ___blocks0;
		NullCheck(L_359);
		int32_t L_360 = L_359->___end_15;
		int32_t L_361 = V_7;
		G_B67_0 = ((int32_t)il2cpp_codegen_subtract(L_360, L_361));
	}

IL_0733:
	{
		V_8 = G_B67_0;
	}

IL_0735:
	{
		int32_t L_362 = V_8;
		if (L_362)
		{
			goto IL_0811;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_363 = ___blocks0;
		int32_t L_364 = V_7;
		NullCheck(L_363);
		L_363->___writeAt_17 = L_364;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_365 = ___blocks0;
		int32_t L_366 = ___r1;
		NullCheck(L_365);
		int32_t L_367;
		L_367 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_365, L_366, NULL);
		___r1 = L_367;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_368 = ___blocks0;
		NullCheck(L_368);
		int32_t L_369 = L_368->___writeAt_17;
		V_7 = L_369;
		int32_t L_370 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_371 = ___blocks0;
		NullCheck(L_371);
		int32_t L_372 = L_371->___readAt_16;
		if ((((int32_t)L_370) >= ((int32_t)L_372)))
		{
			goto IL_0772;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_373 = ___blocks0;
		NullCheck(L_373);
		int32_t L_374 = L_373->___readAt_16;
		int32_t L_375 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_374, L_375)), 1));
		goto IL_077b;
	}

IL_0772:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_376 = ___blocks0;
		NullCheck(L_376);
		int32_t L_377 = L_376->___end_15;
		int32_t L_378 = V_7;
		G_B72_0 = ((int32_t)il2cpp_codegen_subtract(L_377, L_378));
	}

IL_077b:
	{
		V_8 = G_B72_0;
		int32_t L_379 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_380 = ___blocks0;
		NullCheck(L_380);
		int32_t L_381 = L_380->___end_15;
		if ((!(((uint32_t)L_379) == ((uint32_t)L_381))))
		{
			goto IL_07c0;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_382 = ___blocks0;
		NullCheck(L_382);
		int32_t L_383 = L_382->___readAt_16;
		if (!L_383)
		{
			goto IL_07c0;
		}
	}
	{
		V_7 = 0;
		int32_t L_384 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_385 = ___blocks0;
		NullCheck(L_385);
		int32_t L_386 = L_385->___readAt_16;
		if ((((int32_t)L_384) >= ((int32_t)L_386)))
		{
			goto IL_07b5;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_387 = ___blocks0;
		NullCheck(L_387);
		int32_t L_388 = L_387->___readAt_16;
		int32_t L_389 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_388, L_389)), 1));
		goto IL_07be;
	}

IL_07b5:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_390 = ___blocks0;
		NullCheck(L_390);
		int32_t L_391 = L_390->___end_15;
		int32_t L_392 = V_7;
		G_B77_0 = ((int32_t)il2cpp_codegen_subtract(L_391, L_392));
	}

IL_07be:
	{
		V_8 = G_B77_0;
	}

IL_07c0:
	{
		int32_t L_393 = V_8;
		if (L_393)
		{
			goto IL_0811;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_394 = ___blocks0;
		int32_t L_395 = V_3;
		NullCheck(L_394);
		L_394->___bitb_12 = L_395;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_396 = ___blocks0;
		int32_t L_397 = V_4;
		NullCheck(L_396);
		L_396->___bitk_11 = L_397;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_398 = V_10;
		int32_t L_399 = V_6;
		NullCheck(L_398);
		L_398->___AvailableBytesIn_2 = L_399;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_400 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_401 = L_400;
		NullCheck(L_401);
		int64_t L_402 = L_401->___TotalBytesIn_3;
		int32_t L_403 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_404 = V_10;
		NullCheck(L_404);
		int32_t L_405 = L_404->___NextIn_1;
		NullCheck(L_401);
		L_401->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_402, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_403, L_405)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_406 = V_10;
		int32_t L_407 = V_5;
		NullCheck(L_406);
		L_406->___NextIn_1 = L_407;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_408 = ___blocks0;
		int32_t L_409 = V_7;
		NullCheck(L_408);
		L_408->___writeAt_17 = L_409;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_410 = ___blocks0;
		int32_t L_411 = ___r1;
		NullCheck(L_410);
		int32_t L_412;
		L_412 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_410, L_411, NULL);
		return L_412;
	}

IL_0811:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_413 = ___blocks0;
		NullCheck(L_413);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_414 = L_413->___window_14;
		int32_t L_415 = V_7;
		int32_t L_416 = L_415;
		V_7 = ((int32_t)il2cpp_codegen_add(L_416, 1));
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_417 = ___blocks0;
		NullCheck(L_417);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_418 = L_417->___window_14;
		int32_t L_419 = V_9;
		int32_t L_420 = L_419;
		V_9 = ((int32_t)il2cpp_codegen_add(L_420, 1));
		NullCheck(L_418);
		int32_t L_421 = L_420;
		uint8_t L_422 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		NullCheck(L_414);
		(L_414)->SetAt(static_cast<il2cpp_array_size_t>(L_416), (uint8_t)L_422);
		int32_t L_423 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_423, 1));
		int32_t L_424 = V_9;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_425 = ___blocks0;
		NullCheck(L_425);
		int32_t L_426 = L_425->___end_15;
		if ((!(((uint32_t)L_424) == ((uint32_t)L_426))))
		{
			goto IL_0843;
		}
	}
	{
		V_9 = 0;
	}

IL_0843:
	{
		int32_t L_427 = __this->___len_1;
		__this->___len_1 = ((int32_t)il2cpp_codegen_subtract(L_427, 1));
	}

IL_0851:
	{
		int32_t L_428 = __this->___len_1;
		if (L_428)
		{
			goto IL_06eb;
		}
	}
	{
		__this->___mode_0 = 0;
		goto IL_0b63;
	}

IL_0868:
	{
		int32_t L_429 = V_8;
		if (L_429)
		{
			goto IL_098e;
		}
	}
	{
		int32_t L_430 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_431 = ___blocks0;
		NullCheck(L_431);
		int32_t L_432 = L_431->___end_15;
		if ((!(((uint32_t)L_430) == ((uint32_t)L_432))))
		{
			goto IL_08b2;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_433 = ___blocks0;
		NullCheck(L_433);
		int32_t L_434 = L_433->___readAt_16;
		if (!L_434)
		{
			goto IL_08b2;
		}
	}
	{
		V_7 = 0;
		int32_t L_435 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_436 = ___blocks0;
		NullCheck(L_436);
		int32_t L_437 = L_436->___readAt_16;
		if ((((int32_t)L_435) >= ((int32_t)L_437)))
		{
			goto IL_08a7;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_438 = ___blocks0;
		NullCheck(L_438);
		int32_t L_439 = L_438->___readAt_16;
		int32_t L_440 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_439, L_440)), 1));
		goto IL_08b0;
	}

IL_08a7:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_441 = ___blocks0;
		NullCheck(L_441);
		int32_t L_442 = L_441->___end_15;
		int32_t L_443 = V_7;
		G_B91_0 = ((int32_t)il2cpp_codegen_subtract(L_442, L_443));
	}

IL_08b0:
	{
		V_8 = G_B91_0;
	}

IL_08b2:
	{
		int32_t L_444 = V_8;
		if (L_444)
		{
			goto IL_098e;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_445 = ___blocks0;
		int32_t L_446 = V_7;
		NullCheck(L_445);
		L_445->___writeAt_17 = L_446;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_447 = ___blocks0;
		int32_t L_448 = ___r1;
		NullCheck(L_447);
		int32_t L_449;
		L_449 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_447, L_448, NULL);
		___r1 = L_449;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_450 = ___blocks0;
		NullCheck(L_450);
		int32_t L_451 = L_450->___writeAt_17;
		V_7 = L_451;
		int32_t L_452 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_453 = ___blocks0;
		NullCheck(L_453);
		int32_t L_454 = L_453->___readAt_16;
		if ((((int32_t)L_452) >= ((int32_t)L_454)))
		{
			goto IL_08ef;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_455 = ___blocks0;
		NullCheck(L_455);
		int32_t L_456 = L_455->___readAt_16;
		int32_t L_457 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_456, L_457)), 1));
		goto IL_08f8;
	}

IL_08ef:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_458 = ___blocks0;
		NullCheck(L_458);
		int32_t L_459 = L_458->___end_15;
		int32_t L_460 = V_7;
		G_B96_0 = ((int32_t)il2cpp_codegen_subtract(L_459, L_460));
	}

IL_08f8:
	{
		V_8 = G_B96_0;
		int32_t L_461 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_462 = ___blocks0;
		NullCheck(L_462);
		int32_t L_463 = L_462->___end_15;
		if ((!(((uint32_t)L_461) == ((uint32_t)L_463))))
		{
			goto IL_093d;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_464 = ___blocks0;
		NullCheck(L_464);
		int32_t L_465 = L_464->___readAt_16;
		if (!L_465)
		{
			goto IL_093d;
		}
	}
	{
		V_7 = 0;
		int32_t L_466 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_467 = ___blocks0;
		NullCheck(L_467);
		int32_t L_468 = L_467->___readAt_16;
		if ((((int32_t)L_466) >= ((int32_t)L_468)))
		{
			goto IL_0932;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_469 = ___blocks0;
		NullCheck(L_469);
		int32_t L_470 = L_469->___readAt_16;
		int32_t L_471 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_470, L_471)), 1));
		goto IL_093b;
	}

IL_0932:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_472 = ___blocks0;
		NullCheck(L_472);
		int32_t L_473 = L_472->___end_15;
		int32_t L_474 = V_7;
		G_B101_0 = ((int32_t)il2cpp_codegen_subtract(L_473, L_474));
	}

IL_093b:
	{
		V_8 = G_B101_0;
	}

IL_093d:
	{
		int32_t L_475 = V_8;
		if (L_475)
		{
			goto IL_098e;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_476 = ___blocks0;
		int32_t L_477 = V_3;
		NullCheck(L_476);
		L_476->___bitb_12 = L_477;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_478 = ___blocks0;
		int32_t L_479 = V_4;
		NullCheck(L_478);
		L_478->___bitk_11 = L_479;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_480 = V_10;
		int32_t L_481 = V_6;
		NullCheck(L_480);
		L_480->___AvailableBytesIn_2 = L_481;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_482 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_483 = L_482;
		NullCheck(L_483);
		int64_t L_484 = L_483->___TotalBytesIn_3;
		int32_t L_485 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_486 = V_10;
		NullCheck(L_486);
		int32_t L_487 = L_486->___NextIn_1;
		NullCheck(L_483);
		L_483->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_484, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_485, L_487)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_488 = V_10;
		int32_t L_489 = V_5;
		NullCheck(L_488);
		L_488->___NextIn_1 = L_489;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_490 = ___blocks0;
		int32_t L_491 = V_7;
		NullCheck(L_490);
		L_490->___writeAt_17 = L_491;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_492 = ___blocks0;
		int32_t L_493 = ___r1;
		NullCheck(L_492);
		int32_t L_494;
		L_494 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_492, L_493, NULL);
		return L_494;
	}

IL_098e:
	{
		___r1 = 0;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_495 = ___blocks0;
		NullCheck(L_495);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_496 = L_495->___window_14;
		int32_t L_497 = V_7;
		int32_t L_498 = L_497;
		V_7 = ((int32_t)il2cpp_codegen_add(L_498, 1));
		int32_t L_499 = __this->___lit_5;
		NullCheck(L_496);
		(L_496)->SetAt(static_cast<il2cpp_array_size_t>(L_498), (uint8_t)((int32_t)(uint8_t)L_499));
		int32_t L_500 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_500, 1));
		__this->___mode_0 = 0;
		goto IL_0b63;
	}

IL_09b8:
	{
		int32_t L_501 = V_4;
		if ((((int32_t)L_501) <= ((int32_t)7)))
		{
			goto IL_09d2;
		}
	}
	{
		int32_t L_502 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_502, 8));
		int32_t L_503 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_503, 1));
		int32_t L_504 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_504, 1));
	}

IL_09d2:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_505 = ___blocks0;
		int32_t L_506 = V_7;
		NullCheck(L_505);
		L_505->___writeAt_17 = L_506;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_507 = ___blocks0;
		int32_t L_508 = ___r1;
		NullCheck(L_507);
		int32_t L_509;
		L_509 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_507, L_508, NULL);
		___r1 = L_509;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_510 = ___blocks0;
		NullCheck(L_510);
		int32_t L_511 = L_510->___writeAt_17;
		V_7 = L_511;
		int32_t L_512 = V_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_513 = ___blocks0;
		NullCheck(L_513);
		int32_t L_514 = L_513->___readAt_16;
		if ((((int32_t)L_512) >= ((int32_t)L_514)))
		{
			goto IL_0a08;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_515 = ___blocks0;
		NullCheck(L_515);
		int32_t L_516 = L_515->___readAt_16;
		int32_t L_517 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_516, L_517)), 1));
		goto IL_0a11;
	}

IL_0a08:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_518 = ___blocks0;
		NullCheck(L_518);
		int32_t L_519 = L_518->___end_15;
		int32_t L_520 = V_7;
		G_B110_0 = ((int32_t)il2cpp_codegen_subtract(L_519, L_520));
	}

IL_0a11:
	{
		V_8 = G_B110_0;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_521 = ___blocks0;
		NullCheck(L_521);
		int32_t L_522 = L_521->___readAt_16;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_523 = ___blocks0;
		NullCheck(L_523);
		int32_t L_524 = L_523->___writeAt_17;
		if ((((int32_t)L_522) == ((int32_t)L_524)))
		{
			goto IL_0a6e;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_525 = ___blocks0;
		int32_t L_526 = V_3;
		NullCheck(L_525);
		L_525->___bitb_12 = L_526;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_527 = ___blocks0;
		int32_t L_528 = V_4;
		NullCheck(L_527);
		L_527->___bitk_11 = L_528;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_529 = V_10;
		int32_t L_530 = V_6;
		NullCheck(L_529);
		L_529->___AvailableBytesIn_2 = L_530;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_531 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_532 = L_531;
		NullCheck(L_532);
		int64_t L_533 = L_532->___TotalBytesIn_3;
		int32_t L_534 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_535 = V_10;
		NullCheck(L_535);
		int32_t L_536 = L_535->___NextIn_1;
		NullCheck(L_532);
		L_532->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_533, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_534, L_536)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_537 = V_10;
		int32_t L_538 = V_5;
		NullCheck(L_537);
		L_537->___NextIn_1 = L_538;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_539 = ___blocks0;
		int32_t L_540 = V_7;
		NullCheck(L_539);
		L_539->___writeAt_17 = L_540;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_541 = ___blocks0;
		int32_t L_542 = ___r1;
		NullCheck(L_541);
		int32_t L_543;
		L_543 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_541, L_542, NULL);
		return L_543;
	}

IL_0a6e:
	{
		__this->___mode_0 = 8;
		goto IL_0a7a;
	}

IL_0a7a:
	{
		___r1 = 1;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_544 = ___blocks0;
		int32_t L_545 = V_3;
		NullCheck(L_544);
		L_544->___bitb_12 = L_545;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_546 = ___blocks0;
		int32_t L_547 = V_4;
		NullCheck(L_546);
		L_546->___bitk_11 = L_547;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_548 = V_10;
		int32_t L_549 = V_6;
		NullCheck(L_548);
		L_548->___AvailableBytesIn_2 = L_549;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_550 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_551 = L_550;
		NullCheck(L_551);
		int64_t L_552 = L_551->___TotalBytesIn_3;
		int32_t L_553 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_554 = V_10;
		NullCheck(L_554);
		int32_t L_555 = L_554->___NextIn_1;
		NullCheck(L_551);
		L_551->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_552, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_553, L_555)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_556 = V_10;
		int32_t L_557 = V_5;
		NullCheck(L_556);
		L_556->___NextIn_1 = L_557;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_558 = ___blocks0;
		int32_t L_559 = V_7;
		NullCheck(L_558);
		L_558->___writeAt_17 = L_559;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_560 = ___blocks0;
		int32_t L_561 = ___r1;
		NullCheck(L_560);
		int32_t L_562;
		L_562 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_560, L_561, NULL);
		return L_562;
	}

IL_0ac7:
	{
		___r1 = ((int32_t)-3);
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_563 = ___blocks0;
		int32_t L_564 = V_3;
		NullCheck(L_563);
		L_563->___bitb_12 = L_564;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_565 = ___blocks0;
		int32_t L_566 = V_4;
		NullCheck(L_565);
		L_565->___bitk_11 = L_566;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_567 = V_10;
		int32_t L_568 = V_6;
		NullCheck(L_567);
		L_567->___AvailableBytesIn_2 = L_568;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_569 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_570 = L_569;
		NullCheck(L_570);
		int64_t L_571 = L_570->___TotalBytesIn_3;
		int32_t L_572 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_573 = V_10;
		NullCheck(L_573);
		int32_t L_574 = L_573->___NextIn_1;
		NullCheck(L_570);
		L_570->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_571, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_572, L_574)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_575 = V_10;
		int32_t L_576 = V_5;
		NullCheck(L_575);
		L_575->___NextIn_1 = L_576;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_577 = ___blocks0;
		int32_t L_578 = V_7;
		NullCheck(L_577);
		L_577->___writeAt_17 = L_578;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_579 = ___blocks0;
		int32_t L_580 = ___r1;
		NullCheck(L_579);
		int32_t L_581;
		L_581 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_579, L_580, NULL);
		return L_581;
	}

IL_0b15:
	{
		___r1 = ((int32_t)-2);
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_582 = ___blocks0;
		int32_t L_583 = V_3;
		NullCheck(L_582);
		L_582->___bitb_12 = L_583;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_584 = ___blocks0;
		int32_t L_585 = V_4;
		NullCheck(L_584);
		L_584->___bitk_11 = L_585;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_586 = V_10;
		int32_t L_587 = V_6;
		NullCheck(L_586);
		L_586->___AvailableBytesIn_2 = L_587;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_588 = V_10;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_589 = L_588;
		NullCheck(L_589);
		int64_t L_590 = L_589->___TotalBytesIn_3;
		int32_t L_591 = V_5;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_592 = V_10;
		NullCheck(L_592);
		int32_t L_593 = L_592->___NextIn_1;
		NullCheck(L_589);
		L_589->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_590, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_591, L_593)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_594 = V_10;
		int32_t L_595 = V_5;
		NullCheck(L_594);
		L_594->___NextIn_1 = L_595;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_596 = ___blocks0;
		int32_t L_597 = V_7;
		NullCheck(L_596);
		L_596->___writeAt_17 = L_597;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_598 = ___blocks0;
		int32_t L_599 = ___r1;
		NullCheck(L_598);
		int32_t L_600;
		L_600 = InflateBlocks_Flush_m0DD550A6A77388B986519185538E89721071520A(L_598, L_599, NULL);
		return L_600;
	}

IL_0b63:
	{
		goto IL_0061;
	}
}
// System.Int32 Pathfinding.Ionic.Zlib.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,Pathfinding.Ionic.Zlib.InflateBlocks,Pathfinding.Ionic.Zlib.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_InflateFast_m794F62B15BA1DDE12233C9208EE42467D10791AD (InflateCodes_t42FFED4E4D2372DBB6BACFCF8EA5B5B48E1472E4* __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___td4, int32_t ___td_index5, InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* ___s6, ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* ___z7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
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
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B66_0 = 0;
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_0 = ___z7;
		NullCheck(L_0);
		int32_t L_1 = L_0->___NextIn_1;
		V_6 = L_1;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_2 = ___z7;
		NullCheck(L_2);
		int32_t L_3 = L_2->___AvailableBytesIn_2;
		V_7 = L_3;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_4 = ___s6;
		NullCheck(L_4);
		int32_t L_5 = L_4->___bitb_12;
		V_4 = L_5;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_6 = ___s6;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bitk_11;
		V_5 = L_7;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_8 = ___s6;
		NullCheck(L_8);
		int32_t L_9 = L_8->___writeAt_17;
		V_8 = L_9;
		int32_t L_10 = V_8;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_11 = ___s6;
		NullCheck(L_11);
		int32_t L_12 = L_11->___readAt_16;
		if ((((int32_t)L_10) >= ((int32_t)L_12)))
		{
			goto IL_004c;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_13 = ___s6;
		NullCheck(L_13);
		int32_t L_14 = L_13->___readAt_16;
		int32_t L_15 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_14, L_15)), 1));
		goto IL_0056;
	}

IL_004c:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_16 = ___s6;
		NullCheck(L_16);
		int32_t L_17 = L_16->___end_15;
		int32_t L_18 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
	}

IL_0056:
	{
		V_9 = G_B3_0;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_20 = ___bl0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_10 = L_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_24 = ___bd1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_11 = L_26;
	}

IL_006a:
	{
		goto IL_009b;
	}

IL_006f:
	{
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		int32_t L_28 = V_4;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_29 = ___z7;
		NullCheck(L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = L_29->___InputBuffer_0;
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		NullCheck(L_30);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_5;
		V_4 = ((int32_t)(L_28|((int32_t)(((int32_t)((int32_t)L_34&((int32_t)255)))<<((int32_t)(L_35&((int32_t)31)))))));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_36, 8));
	}

IL_009b:
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)20))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_10;
		V_0 = ((int32_t)(L_38&L_39));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ___tl2;
		V_1 = L_40;
		int32_t L_41 = ___tl_index3;
		V_2 = L_41;
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_42, L_43)), 3));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_1;
		int32_t L_45 = V_15;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = L_47;
		V_3 = L_48;
		if (L_48)
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_49 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_1;
		int32_t L_51 = V_15;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_4 = ((int32_t)(L_49>>((int32_t)(L_53&((int32_t)31)))));
		int32_t L_54 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_1;
		int32_t L_56 = V_15;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_54, L_58));
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_59 = ___s6;
		NullCheck(L_59);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = L_59->___window_14;
		int32_t L_61 = V_8;
		int32_t L_62 = L_61;
		V_8 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_1;
		int32_t L_64 = V_15;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 2));
		int32_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)((int32_t)(uint8_t)L_66));
		int32_t L_67 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
		goto IL_062b;
	}

IL_00fb:
	{
		int32_t L_68 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_1;
		int32_t L_70 = V_15;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_4 = ((int32_t)(L_68>>((int32_t)(L_72&((int32_t)31)))));
		int32_t L_73 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_1;
		int32_t L_75 = V_15;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_73, L_77));
		int32_t L_78 = V_3;
		if (!((int32_t)(L_78&((int32_t)16))))
		{
			goto IL_049a;
		}
	}
	{
		int32_t L_79 = V_3;
		V_3 = ((int32_t)(L_79&((int32_t)15)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_1;
		int32_t L_81 = V_15;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 2));
		int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_86 = V_3;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_12 = ((int32_t)il2cpp_codegen_add(L_83, ((int32_t)(L_84&L_88))));
		int32_t L_89 = V_4;
		int32_t L_90 = V_3;
		V_4 = ((int32_t)(L_89>>((int32_t)(L_90&((int32_t)31)))));
		int32_t L_91 = V_5;
		int32_t L_92 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_91, L_92));
		goto IL_0175;
	}

IL_0149:
	{
		int32_t L_93 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		int32_t L_94 = V_4;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_95 = ___z7;
		NullCheck(L_95);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = L_95->___InputBuffer_0;
		int32_t L_97 = V_6;
		int32_t L_98 = L_97;
		V_6 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		NullCheck(L_96);
		int32_t L_99 = L_98;
		uint8_t L_100 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = V_5;
		V_4 = ((int32_t)(L_94|((int32_t)(((int32_t)((int32_t)L_100&((int32_t)255)))<<((int32_t)(L_101&((int32_t)31)))))));
		int32_t L_102 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_102, 8));
	}

IL_0175:
	{
		int32_t L_103 = V_5;
		if ((((int32_t)L_103) < ((int32_t)((int32_t)15))))
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_104 = V_4;
		int32_t L_105 = V_11;
		V_0 = ((int32_t)(L_104&L_105));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = ___td4;
		V_1 = L_106;
		int32_t L_107 = ___td_index5;
		V_2 = L_107;
		int32_t L_108 = V_2;
		int32_t L_109 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_108, L_109)), 3));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = V_1;
		int32_t L_111 = V_15;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_3 = L_113;
	}

IL_0196:
	{
		int32_t L_114 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = V_1;
		int32_t L_116 = V_15;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_4 = ((int32_t)(L_114>>((int32_t)(L_118&((int32_t)31)))));
		int32_t L_119 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = V_1;
		int32_t L_121 = V_15;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 1));
		int32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_119, L_123));
		int32_t L_124 = V_3;
		if (!((int32_t)(L_124&((int32_t)16))))
		{
			goto IL_03d0;
		}
	}
	{
		int32_t L_125 = V_3;
		V_3 = ((int32_t)(L_125&((int32_t)15)));
		goto IL_01ee;
	}

IL_01c2:
	{
		int32_t L_126 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_126, 1));
		int32_t L_127 = V_4;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_128 = ___z7;
		NullCheck(L_128);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = L_128->___InputBuffer_0;
		int32_t L_130 = V_6;
		int32_t L_131 = L_130;
		V_6 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		NullCheck(L_129);
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		int32_t L_134 = V_5;
		V_4 = ((int32_t)(L_127|((int32_t)(((int32_t)((int32_t)L_133&((int32_t)255)))<<((int32_t)(L_134&((int32_t)31)))))));
		int32_t L_135 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_135, 8));
	}

IL_01ee:
	{
		int32_t L_136 = V_5;
		int32_t L_137 = V_3;
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_01c2;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = V_1;
		int32_t L_139 = V_15;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(L_139, 2));
		int32_t L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		int32_t L_142 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_143 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_144 = V_3;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		int32_t L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_13 = ((int32_t)il2cpp_codegen_add(L_141, ((int32_t)(L_142&L_146))));
		int32_t L_147 = V_4;
		int32_t L_148 = V_3;
		V_4 = ((int32_t)(L_147>>((int32_t)(L_148&((int32_t)31)))));
		int32_t L_149 = V_5;
		int32_t L_150 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_149, L_150));
		int32_t L_151 = V_9;
		int32_t L_152 = V_12;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_151, L_152));
		int32_t L_153 = V_8;
		int32_t L_154 = V_13;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_02bb;
		}
	}
	{
		int32_t L_155 = V_8;
		int32_t L_156 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_155, L_156));
		int32_t L_157 = V_8;
		int32_t L_158 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_157, L_158))) <= ((int32_t)0)))
		{
			goto IL_028c;
		}
	}
	{
		int32_t L_159 = V_8;
		int32_t L_160 = V_14;
		if ((((int32_t)2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_159, L_160)))))
		{
			goto IL_028c;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_161 = ___s6;
		NullCheck(L_161);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = L_161->___window_14;
		int32_t L_163 = V_8;
		int32_t L_164 = L_163;
		V_8 = ((int32_t)il2cpp_codegen_add(L_164, 1));
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_165 = ___s6;
		NullCheck(L_165);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_166 = L_165->___window_14;
		int32_t L_167 = V_14;
		int32_t L_168 = L_167;
		V_14 = ((int32_t)il2cpp_codegen_add(L_168, 1));
		NullCheck(L_166);
		int32_t L_169 = L_168;
		uint8_t L_170 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(L_164), (uint8_t)L_170);
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_171 = ___s6;
		NullCheck(L_171);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172 = L_171->___window_14;
		int32_t L_173 = V_8;
		int32_t L_174 = L_173;
		V_8 = ((int32_t)il2cpp_codegen_add(L_174, 1));
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_175 = ___s6;
		NullCheck(L_175);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_176 = L_175->___window_14;
		int32_t L_177 = V_14;
		int32_t L_178 = L_177;
		V_14 = ((int32_t)il2cpp_codegen_add(L_178, 1));
		NullCheck(L_176);
		int32_t L_179 = L_178;
		uint8_t L_180 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (uint8_t)L_180);
		int32_t L_181 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_181, 2));
		goto IL_02b6;
	}

IL_028c:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_182 = ___s6;
		NullCheck(L_182);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183 = L_182->___window_14;
		int32_t L_184 = V_14;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_185 = ___s6;
		NullCheck(L_185);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_186 = L_185->___window_14;
		int32_t L_187 = V_8;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_183, L_184, (RuntimeArray*)L_186, L_187, 2, NULL);
		int32_t L_188 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_188, 2));
		int32_t L_189 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_189, 2));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_190, 2));
	}

IL_02b6:
	{
		goto IL_035b;
	}

IL_02bb:
	{
		int32_t L_191 = V_8;
		int32_t L_192 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_191, L_192));
	}

IL_02c2:
	{
		int32_t L_193 = V_14;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_194 = ___s6;
		NullCheck(L_194);
		int32_t L_195 = L_194->___end_15;
		V_14 = ((int32_t)il2cpp_codegen_add(L_193, L_195));
		int32_t L_196 = V_14;
		if ((((int32_t)L_196) < ((int32_t)0)))
		{
			goto IL_02c2;
		}
	}
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_197 = ___s6;
		NullCheck(L_197);
		int32_t L_198 = L_197->___end_15;
		int32_t L_199 = V_14;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_198, L_199));
		int32_t L_200 = V_12;
		int32_t L_201 = V_3;
		if ((((int32_t)L_200) <= ((int32_t)L_201)))
		{
			goto IL_035b;
		}
	}
	{
		int32_t L_202 = V_12;
		int32_t L_203 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_202, L_203));
		int32_t L_204 = V_8;
		int32_t L_205 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_204, L_205))) <= ((int32_t)0)))
		{
			goto IL_0332;
		}
	}
	{
		int32_t L_206 = V_3;
		int32_t L_207 = V_8;
		int32_t L_208 = V_14;
		if ((((int32_t)L_206) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_207, L_208)))))
		{
			goto IL_0332;
		}
	}

IL_0305:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_209 = ___s6;
		NullCheck(L_209);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_210 = L_209->___window_14;
		int32_t L_211 = V_8;
		int32_t L_212 = L_211;
		V_8 = ((int32_t)il2cpp_codegen_add(L_212, 1));
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_213 = ___s6;
		NullCheck(L_213);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_214 = L_213->___window_14;
		int32_t L_215 = V_14;
		int32_t L_216 = L_215;
		V_14 = ((int32_t)il2cpp_codegen_add(L_216, 1));
		NullCheck(L_214);
		int32_t L_217 = L_216;
		uint8_t L_218 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(L_212), (uint8_t)L_218);
		int32_t L_219 = V_3;
		int32_t L_220 = ((int32_t)il2cpp_codegen_subtract(L_219, 1));
		V_3 = L_220;
		if (L_220)
		{
			goto IL_0305;
		}
	}
	{
		goto IL_0358;
	}

IL_0332:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_221 = ___s6;
		NullCheck(L_221);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_222 = L_221->___window_14;
		int32_t L_223 = V_14;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_224 = ___s6;
		NullCheck(L_224);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_225 = L_224->___window_14;
		int32_t L_226 = V_8;
		int32_t L_227 = V_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_222, L_223, (RuntimeArray*)L_225, L_226, L_227, NULL);
		int32_t L_228 = V_8;
		int32_t L_229 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_add(L_228, L_229));
		int32_t L_230 = V_14;
		int32_t L_231 = V_3;
		V_14 = ((int32_t)il2cpp_codegen_add(L_230, L_231));
		V_3 = 0;
	}

IL_0358:
	{
		V_14 = 0;
	}

IL_035b:
	{
		int32_t L_232 = V_8;
		int32_t L_233 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_232, L_233))) <= ((int32_t)0)))
		{
			goto IL_03a1;
		}
	}
	{
		int32_t L_234 = V_12;
		int32_t L_235 = V_8;
		int32_t L_236 = V_14;
		if ((((int32_t)L_234) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_235, L_236)))))
		{
			goto IL_03a1;
		}
	}

IL_0372:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_237 = ___s6;
		NullCheck(L_237);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_238 = L_237->___window_14;
		int32_t L_239 = V_8;
		int32_t L_240 = L_239;
		V_8 = ((int32_t)il2cpp_codegen_add(L_240, 1));
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_241 = ___s6;
		NullCheck(L_241);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_242 = L_241->___window_14;
		int32_t L_243 = V_14;
		int32_t L_244 = L_243;
		V_14 = ((int32_t)il2cpp_codegen_add(L_244, 1));
		NullCheck(L_242);
		int32_t L_245 = L_244;
		uint8_t L_246 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		NullCheck(L_238);
		(L_238)->SetAt(static_cast<il2cpp_array_size_t>(L_240), (uint8_t)L_246);
		int32_t L_247 = V_12;
		int32_t L_248 = ((int32_t)il2cpp_codegen_subtract(L_247, 1));
		V_12 = L_248;
		if (L_248)
		{
			goto IL_0372;
		}
	}
	{
		goto IL_03cb;
	}

IL_03a1:
	{
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_249 = ___s6;
		NullCheck(L_249);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_250 = L_249->___window_14;
		int32_t L_251 = V_14;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_252 = ___s6;
		NullCheck(L_252);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_253 = L_252->___window_14;
		int32_t L_254 = V_8;
		int32_t L_255 = V_12;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_250, L_251, (RuntimeArray*)L_253, L_254, L_255, NULL);
		int32_t L_256 = V_8;
		int32_t L_257 = V_12;
		V_8 = ((int32_t)il2cpp_codegen_add(L_256, L_257));
		int32_t L_258 = V_14;
		int32_t L_259 = V_12;
		V_14 = ((int32_t)il2cpp_codegen_add(L_258, L_259));
		V_12 = 0;
	}

IL_03cb:
	{
		goto IL_0495;
	}

IL_03d0:
	{
		int32_t L_260 = V_3;
		if (((int32_t)(L_260&((int32_t)64))))
		{
			goto IL_0400;
		}
	}
	{
		int32_t L_261 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_262 = V_1;
		int32_t L_263 = V_15;
		NullCheck(L_262);
		int32_t L_264 = ((int32_t)il2cpp_codegen_add(L_263, 2));
		int32_t L_265 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		V_0 = ((int32_t)il2cpp_codegen_add(L_261, L_265));
		int32_t L_266 = V_0;
		int32_t L_267 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_269 = V_3;
		NullCheck(L_268);
		int32_t L_270 = L_269;
		int32_t L_271 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		V_0 = ((int32_t)il2cpp_codegen_add(L_266, ((int32_t)(L_267&L_271))));
		int32_t L_272 = V_2;
		int32_t L_273 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_272, L_273)), 3));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_274 = V_1;
		int32_t L_275 = V_15;
		NullCheck(L_274);
		int32_t L_276 = L_275;
		int32_t L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		V_3 = L_277;
		goto IL_0490;
	}

IL_0400:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_278 = ___z7;
		NullCheck(L_278);
		L_278->___Message_8 = _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
		Il2CppCodeGenWriteBarrier((void**)(&L_278->___Message_8), (void*)_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_279 = ___z7;
		NullCheck(L_279);
		int32_t L_280 = L_279->___AvailableBytesIn_2;
		int32_t L_281 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_280, L_281));
		int32_t L_282 = V_5;
		int32_t L_283 = V_12;
		if ((((int32_t)((int32_t)(L_282>>3))) >= ((int32_t)L_283)))
		{
			goto IL_042c;
		}
	}
	{
		int32_t L_284 = V_5;
		G_B44_0 = ((int32_t)(L_284>>3));
		goto IL_042e;
	}

IL_042c:
	{
		int32_t L_285 = V_12;
		G_B44_0 = L_285;
	}

IL_042e:
	{
		V_12 = G_B44_0;
		int32_t L_286 = V_7;
		int32_t L_287 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_286, L_287));
		int32_t L_288 = V_6;
		int32_t L_289 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_288, L_289));
		int32_t L_290 = V_5;
		int32_t L_291 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_290, ((int32_t)(L_291<<3))));
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_292 = ___s6;
		int32_t L_293 = V_4;
		NullCheck(L_292);
		L_292->___bitb_12 = L_293;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_294 = ___s6;
		int32_t L_295 = V_5;
		NullCheck(L_294);
		L_294->___bitk_11 = L_295;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_296 = ___z7;
		int32_t L_297 = V_7;
		NullCheck(L_296);
		L_296->___AvailableBytesIn_2 = L_297;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_298 = ___z7;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_299 = L_298;
		NullCheck(L_299);
		int64_t L_300 = L_299->___TotalBytesIn_3;
		int32_t L_301 = V_6;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_302 = ___z7;
		NullCheck(L_302);
		int32_t L_303 = L_302->___NextIn_1;
		NullCheck(L_299);
		L_299->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_300, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_301, L_303)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_304 = ___z7;
		int32_t L_305 = V_6;
		NullCheck(L_304);
		L_304->___NextIn_1 = L_305;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_306 = ___s6;
		int32_t L_307 = V_8;
		NullCheck(L_306);
		L_306->___writeAt_17 = L_307;
		return ((int32_t)-3);
	}

IL_0490:
	{
		goto IL_0196;
	}

IL_0495:
	{
		goto IL_062b;
	}

IL_049a:
	{
		int32_t L_308 = V_3;
		if (((int32_t)(L_308&((int32_t)64))))
		{
			goto IL_050a;
		}
	}
	{
		int32_t L_309 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_310 = V_1;
		int32_t L_311 = V_15;
		NullCheck(L_310);
		int32_t L_312 = ((int32_t)il2cpp_codegen_add(L_311, 2));
		int32_t L_313 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		V_0 = ((int32_t)il2cpp_codegen_add(L_309, L_313));
		int32_t L_314 = V_0;
		int32_t L_315 = V_4;
		il2cpp_codegen_runtime_class_init_inline(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_316 = ((InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t47C96CC1C82CBBA8304D67FF8BDD1CE2A7A14F21_il2cpp_TypeInfo_var))->___InflateMask_0;
		int32_t L_317 = V_3;
		NullCheck(L_316);
		int32_t L_318 = L_317;
		int32_t L_319 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		V_0 = ((int32_t)il2cpp_codegen_add(L_314, ((int32_t)(L_315&L_319))));
		int32_t L_320 = V_2;
		int32_t L_321 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_320, L_321)), 3));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_322 = V_1;
		int32_t L_323 = V_15;
		NullCheck(L_322);
		int32_t L_324 = L_323;
		int32_t L_325 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		int32_t L_326 = L_325;
		V_3 = L_326;
		if (L_326)
		{
			goto IL_0505;
		}
	}
	{
		int32_t L_327 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_328 = V_1;
		int32_t L_329 = V_15;
		NullCheck(L_328);
		int32_t L_330 = ((int32_t)il2cpp_codegen_add(L_329, 1));
		int32_t L_331 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		V_4 = ((int32_t)(L_327>>((int32_t)(L_331&((int32_t)31)))));
		int32_t L_332 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = V_1;
		int32_t L_334 = V_15;
		NullCheck(L_333);
		int32_t L_335 = ((int32_t)il2cpp_codegen_add(L_334, 1));
		int32_t L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_332, L_336));
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_337 = ___s6;
		NullCheck(L_337);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_338 = L_337->___window_14;
		int32_t L_339 = V_8;
		int32_t L_340 = L_339;
		V_8 = ((int32_t)il2cpp_codegen_add(L_340, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = V_1;
		int32_t L_342 = V_15;
		NullCheck(L_341);
		int32_t L_343 = ((int32_t)il2cpp_codegen_add(L_342, 2));
		int32_t L_344 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(L_340), (uint8_t)((int32_t)(uint8_t)L_344));
		int32_t L_345 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_345, 1));
		goto IL_062b;
	}

IL_0505:
	{
		goto IL_0626;
	}

IL_050a:
	{
		int32_t L_346 = V_3;
		if (!((int32_t)(L_346&((int32_t)32))))
		{
			goto IL_0596;
		}
	}
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_347 = ___z7;
		NullCheck(L_347);
		int32_t L_348 = L_347->___AvailableBytesIn_2;
		int32_t L_349 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_348, L_349));
		int32_t L_350 = V_5;
		int32_t L_351 = V_12;
		if ((((int32_t)((int32_t)(L_350>>3))) >= ((int32_t)L_351)))
		{
			goto IL_0533;
		}
	}
	{
		int32_t L_352 = V_5;
		G_B55_0 = ((int32_t)(L_352>>3));
		goto IL_0535;
	}

IL_0533:
	{
		int32_t L_353 = V_12;
		G_B55_0 = L_353;
	}

IL_0535:
	{
		V_12 = G_B55_0;
		int32_t L_354 = V_7;
		int32_t L_355 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_354, L_355));
		int32_t L_356 = V_6;
		int32_t L_357 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_356, L_357));
		int32_t L_358 = V_5;
		int32_t L_359 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_358, ((int32_t)(L_359<<3))));
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_360 = ___s6;
		int32_t L_361 = V_4;
		NullCheck(L_360);
		L_360->___bitb_12 = L_361;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_362 = ___s6;
		int32_t L_363 = V_5;
		NullCheck(L_362);
		L_362->___bitk_11 = L_363;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_364 = ___z7;
		int32_t L_365 = V_7;
		NullCheck(L_364);
		L_364->___AvailableBytesIn_2 = L_365;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_366 = ___z7;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_367 = L_366;
		NullCheck(L_367);
		int64_t L_368 = L_367->___TotalBytesIn_3;
		int32_t L_369 = V_6;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_370 = ___z7;
		NullCheck(L_370);
		int32_t L_371 = L_370->___NextIn_1;
		NullCheck(L_367);
		L_367->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_368, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_369, L_371)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_372 = ___z7;
		int32_t L_373 = V_6;
		NullCheck(L_372);
		L_372->___NextIn_1 = L_373;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_374 = ___s6;
		int32_t L_375 = V_8;
		NullCheck(L_374);
		L_374->___writeAt_17 = L_375;
		return 1;
	}

IL_0596:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_376 = ___z7;
		NullCheck(L_376);
		L_376->___Message_8 = _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
		Il2CppCodeGenWriteBarrier((void**)(&L_376->___Message_8), (void*)_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_377 = ___z7;
		NullCheck(L_377);
		int32_t L_378 = L_377->___AvailableBytesIn_2;
		int32_t L_379 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_378, L_379));
		int32_t L_380 = V_5;
		int32_t L_381 = V_12;
		if ((((int32_t)((int32_t)(L_380>>3))) >= ((int32_t)L_381)))
		{
			goto IL_05c2;
		}
	}
	{
		int32_t L_382 = V_5;
		G_B59_0 = ((int32_t)(L_382>>3));
		goto IL_05c4;
	}

IL_05c2:
	{
		int32_t L_383 = V_12;
		G_B59_0 = L_383;
	}

IL_05c4:
	{
		V_12 = G_B59_0;
		int32_t L_384 = V_7;
		int32_t L_385 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_384, L_385));
		int32_t L_386 = V_6;
		int32_t L_387 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_386, L_387));
		int32_t L_388 = V_5;
		int32_t L_389 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_388, ((int32_t)(L_389<<3))));
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_390 = ___s6;
		int32_t L_391 = V_4;
		NullCheck(L_390);
		L_390->___bitb_12 = L_391;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_392 = ___s6;
		int32_t L_393 = V_5;
		NullCheck(L_392);
		L_392->___bitk_11 = L_393;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_394 = ___z7;
		int32_t L_395 = V_7;
		NullCheck(L_394);
		L_394->___AvailableBytesIn_2 = L_395;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_396 = ___z7;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_397 = L_396;
		NullCheck(L_397);
		int64_t L_398 = L_397->___TotalBytesIn_3;
		int32_t L_399 = V_6;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_400 = ___z7;
		NullCheck(L_400);
		int32_t L_401 = L_400->___NextIn_1;
		NullCheck(L_397);
		L_397->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_398, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_399, L_401)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_402 = ___z7;
		int32_t L_403 = V_6;
		NullCheck(L_402);
		L_402->___NextIn_1 = L_403;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_404 = ___s6;
		int32_t L_405 = V_8;
		NullCheck(L_404);
		L_404->___writeAt_17 = L_405;
		return ((int32_t)-3);
	}

IL_0626:
	{
		goto IL_00fb;
	}

IL_062b:
	{
		int32_t L_406 = V_9;
		if ((((int32_t)L_406) < ((int32_t)((int32_t)258))))
		{
			goto IL_0640;
		}
	}
	{
		int32_t L_407 = V_7;
		if ((((int32_t)L_407) >= ((int32_t)((int32_t)10))))
		{
			goto IL_006a;
		}
	}

IL_0640:
	{
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_408 = ___z7;
		NullCheck(L_408);
		int32_t L_409 = L_408->___AvailableBytesIn_2;
		int32_t L_410 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_409, L_410));
		int32_t L_411 = V_5;
		int32_t L_412 = V_12;
		if ((((int32_t)((int32_t)(L_411>>3))) >= ((int32_t)L_412)))
		{
			goto IL_0660;
		}
	}
	{
		int32_t L_413 = V_5;
		G_B66_0 = ((int32_t)(L_413>>3));
		goto IL_0662;
	}

IL_0660:
	{
		int32_t L_414 = V_12;
		G_B66_0 = L_414;
	}

IL_0662:
	{
		V_12 = G_B66_0;
		int32_t L_415 = V_7;
		int32_t L_416 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add(L_415, L_416));
		int32_t L_417 = V_6;
		int32_t L_418 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_417, L_418));
		int32_t L_419 = V_5;
		int32_t L_420 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_419, ((int32_t)(L_420<<3))));
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_421 = ___s6;
		int32_t L_422 = V_4;
		NullCheck(L_421);
		L_421->___bitb_12 = L_422;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_423 = ___s6;
		int32_t L_424 = V_5;
		NullCheck(L_423);
		L_423->___bitk_11 = L_424;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_425 = ___z7;
		int32_t L_426 = V_7;
		NullCheck(L_425);
		L_425->___AvailableBytesIn_2 = L_426;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_427 = ___z7;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_428 = L_427;
		NullCheck(L_428);
		int64_t L_429 = L_428->___TotalBytesIn_3;
		int32_t L_430 = V_6;
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_431 = ___z7;
		NullCheck(L_431);
		int32_t L_432 = L_431->___NextIn_1;
		NullCheck(L_428);
		L_428->___TotalBytesIn_3 = ((int64_t)il2cpp_codegen_add(L_429, ((int64_t)((int32_t)il2cpp_codegen_subtract(L_430, L_432)))));
		ZlibCodec_t5CADB53F8AB02951F294A642D88F123372A2AF25* L_433 = ___z7;
		int32_t L_434 = V_6;
		NullCheck(L_433);
		L_433->___NextIn_1 = L_434;
		InflateBlocks_tB51D87995B120BB5B4915BA87DBA57FFDD5AA5D1* L_435 = ___s6;
		int32_t L_436 = V_8;
		NullCheck(L_435);
		L_435->___writeAt_17 = L_436;
		return 0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipSegmentedStream_set_ContiguousWrite_mD8A155CB568B8723C9B0AB38D499DC6FDD26C1A5_inline (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CContiguousWriteU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ZipSegmentedStream_get_CurrentSegment_m8234643C95620F6178A626D96ED27829AF4F5F1D_inline (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____currentDiskNumber_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ZipEntry_get_IsDirectory_m01DA105FEECA61889572228446CBC1B8A65C594C_inline (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____IsDirectory_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ZipEntry_get_FileName_mFDDE59F4E3D6BB641C72661D3EDAA6DF98544CA7_inline (ZipEntry_t4CA08F4B43AFD6D9C4B8B5114CEAB4A9FFDC2FB4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____FileNameInArchive_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_BufferSize_m9F6C115060F3AB426732DDC5E9FA99BB68D154F2_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____BufferSize_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ZipFile_get_ParallelDeflateThreshold_m88106ED156475E9C2921540F88D4C089EA2A6468_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ParallelDeflateThreshold_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ZipOutputStream_get_ParallelDeflateThreshold_mF782CFBB59CEF5255D03AE788E8872CE219E4153_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ParallelDeflateThreshold_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_ParallelDeflateMaxBufferPairs_m0DE7AC098AB51C005EBB65FD858CE48EBA4AC0AA_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____maxBufferPairs_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_ParallelDeflateMaxBufferPairs_mEF97CFBC4346C3EDFB66F53A4972C96EA949DFF0_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____maxBufferPairs_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_CodecBufferSize_m821AEA9BE2186C9AFCCF24727184A88EB8129C9B_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodecBufferSizeU3Ek__BackingField_57;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipInputStream_get_CodecBufferSize_m9BC2946243E1F88038702761DD08A58FD517905F_inline (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodecBufferSizeU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_CodecBufferSize_m27C21C9848C6D833B5696CA91C40CF98579CF8D3_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCodecBufferSizeU3Ek__BackingField_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_Strategy_m3332E81555D73EFDA16B50644CDCC44AB2968AFD_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____Strategy_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_Strategy_m78B431CAE1D7160D484207D829F784CE9F8E39BA_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStrategyU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_UseZip64WhenSaving_mC8C74A694A9B5D4F5CAB2B4F971AA6D512B005E9_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____zip64_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_EnableZip64_m1B1853D50B763037EE09B8F7D3F708B15882DB0C_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____zip64_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipFile_get_AlternateEncoding_mF3A845FB328E30AF47DED308FE42F214DC04095F_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = __this->____alternateEncoding_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipOutputStream_get_AlternateEncoding_mB437AA52388393AB59036A74A76C1D1C77BD10F5_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = __this->____alternateEncoding_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ZipFile_get_DefaultEncoding_m6B1E00EBA64198B11471F7C9C2265A0B7259B071_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ((ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_StaticFields*)il2cpp_codegen_static_fields_for(ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF_il2cpp_TypeInfo_var))->____defaultEncoding_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipFile_get_AlternateEncodingUsage_m23CAA1AEF95A1FB915535FEA2012970B5782C633_inline (ZipFile_t9DF6FA07046D82E186A9D42B3B8DBBAE516B89DF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____alternateEncodingUsage_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ZipOutputStream_get_AlternateEncodingUsage_m1E4A6718DEAF888FE9B86ACB213970FE012DD3C6_inline (ZipOutputStream_tC50D9D077DE30197A3EB44D33AE1A80CCB4B12C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____alternateEncodingUsage_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ZipInputStream_get_ReadStream_m2DBE93A1A1F536F51B515EEBFC395C1E3725902A_inline (ZipInputStream_t2A03C7306ADC2CE1164DB3BBDBE0252443EC452C* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____inputStream_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ZipSegmentedStream_get_ContiguousWrite_mFE132D1088CBE7C6098E723305637CFF63E4595F_inline (ZipSegmentedStream_t0217631B4AFF6850F587C2E699072C1E0A9728F2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CContiguousWriteU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_mE4C46D1E78469160F7E7A797AA6651284582274B_inline (DeflateManager_t5ABF15139902FC52147D8A3B54277B5AA476A5C0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____WantRfc1950HeaderBytes_73;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_mA7DD460A9D73BCD6C9AD24312DA294EA30EF3508_inline (CompressFunc_tA9AAA056E52C98167798EB77A7690F48074CA2BC* __this, int32_t ___flush0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___flush0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_Comment_m8BC7A090C67BBC0ECDB028B8757D6DCE488652BC_inline (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____Comment_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GZipStream_get_FileName_m4E015DF2F74E0D2B3B177EB64B6CA39259193EC3_inline (GZipStream_t2FD25DB10E26382452A1CCB2221F5557FE70FC44* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____FileName_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
