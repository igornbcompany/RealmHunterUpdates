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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,MHLab.Patch.Core.IO.LocalFileInfo>
struct Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,MHLab.Patch.Core.IO.FilePath>
struct Func_2_tF8439878BE72A3811351B2B234AB21FAD0BBD19C;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Func`2<System.String,MHLab.Patch.Core.IO.FilePath>
struct Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF;
// System.Collections.Generic.IEnumerable`1<MHLab.Patch.Core.IO.FilePath>
struct IEnumerable_1_t1E138890B4FCC6FBB416138719E7BA1B3EFFCF25;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,MHLab.Patch.Core.IO.LocalFileInfo>
struct KeyCollection_t61232C6BDDFD1970D8D3CB08A4A6CE230409B02A;
// System.Collections.Generic.List`1<MHLab.Patch.Core.Octodiff.ChunkSignature>
struct List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<ICSharpCode.SharpZipLib.Zip.ZipEntry>
struct List_1_tBD6A19CD695C1864780E20A273EE24977701641C;
// System.Collections.Generic.List`1<ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate>
struct List_1_t3A66ABD1ACDC5DC9CA0C87701C69734654732069;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,MHLab.Patch.Core.IO.LocalFileInfo>
struct ValueCollection_t4A1EDF8B9D8A6E7CA933DD2CF85E8563810CA00B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,MHLab.Patch.Core.IO.LocalFileInfo>[]
struct EntryU5BU5D_t465E067FCCEF130F0B77E8EBAF7ABF48A6A4AAC6;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// MHLab.Patch.Core.Octodiff.ChunkSignature[]
struct ChunkSignatureU5BU5D_t4A14D70DED962A72591869933CF65545BC528E62;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
// MHLab.Patch.Core.IO.FilePath[]
struct FilePathU5BU5D_t9693191E2004496B26B8779125BE19248467A924;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// MHLab.Patch.Core.IO.LocalFileInfo[]
struct LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// ICSharpCode.SharpZipLib.Zip.ZipEntry[]
struct ZipEntryU5BU5D_tB17684D9BD6B973A8C391D8DCA4A7BCDF51450A6;
// MHLab.Patch.Core.Octodiff.Adler32RollingChecksum
struct Adler32RollingChecksum_t706C2DD9268408FF198FBFA22DEFCF780382D035;
// MHLab.Patch.Core.Octodiff.AggregateCopyOperationsDecorator
struct AggregateCopyOperationsDecorator_t74B10B220FED70413E8EF41C02CE8E79C51B0772;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// MHLab.Patch.Core.Octodiff.BinaryDeltaReader
struct BinaryDeltaReader_t4E4E12680C24BC2B64B387BC76D214680A7FD31A;
// MHLab.Patch.Core.Octodiff.BinaryDeltaWriter
struct BinaryDeltaWriter_t42C8225139F6B74BA25651E37FD1EDE7E4851F63;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// MHLab.Patch.Core.Octodiff.ChunkSignature
struct ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010;
// MHLab.Patch.Core.Octodiff.CompatibilityException
struct CompatibilityException_t909D280FEC66B482A145F63F7F752206302A8765;
// MHLab.Patch.Core.Octodiff.CorruptFileFormatException
struct CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58;
// ICSharpCode.SharpZipLib.Checksum.Crc32
struct Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct Deflater_t8287F9AE01983279256AABA94642FF95CC633FB4;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream
struct DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// MHLab.Patch.Core.Octodiff.DeltaApplier
struct DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C;
// MHLab.Patch.Core.Octodiff.DeltaBuilder
struct DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E;
// MHLab.Patch.Core.Octodiff.DeltaStatistics
struct DeltaStatistics_t023F79C3CB7338661CD8072144ECAC72D84E6A03;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.IO.DirectoryNotFoundException
struct DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF;
// System.IO.DriveInfo
struct DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// MHLab.Patch.Core.IO.FileSystem
struct FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463;
// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper
struct HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276;
// ICSharpCode.SharpZipLib.Zip.IArchiveStorage
struct IArchiveStorage_t360D581E170B19C039AD55B45C35D36E029F116B;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377;
// MHLab.Patch.Core.Octodiff.IDeltaReader
struct IDeltaReader_t24A4DF34FF3E5BA6405A5B8C354C6C4B64972A48;
// MHLab.Patch.Core.Octodiff.IDeltaWriter
struct IDeltaWriter_t7C19123F4FA0DCF91C0E76E0D599ABA206A54C81;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ICSharpCode.SharpZipLib.Zip.IDynamicDataSource
struct IDynamicDataSource_tD0D5DFFB2BB57E9DE359D0710CB62A490E060844;
// ICSharpCode.SharpZipLib.Zip.IEntryFactory
struct IEntryFactory_t2B10496844AD95727A6508DFA2F7BB389C570568;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// MHLab.Patch.Core.IO.IFileSystem
struct IFileSystem_t1113B7B3A20C19DB92F5D866E5A26730EFC8F1E8;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// MHLab.Patch.Core.Octodiff.IHashAlgorithm
struct IHashAlgorithm_tA8CBF0EE04BF54E101D8C322BE0B5838F82AFAFB;
// ICSharpCode.SharpZipLib.Core.INameTransform
struct INameTransform_t6A9862A2D5080ABA5C79C43C9698E422FAF42B15;
// MHLab.Patch.Core.Octodiff.IProgressReporter
struct IProgressReporter_t00CFCEED6169C90F076DEA60514A2AC92A6F7849;
// MHLab.Patch.Core.Octodiff.IRollingChecksum
struct IRollingChecksum_t26CD8FC9B98DC2967B4D3DB11E0D184E8E626999;
// MHLab.Patch.Core.Octodiff.ISignatureReader
struct ISignatureReader_t82F9751EEAE7E0FC9ADF587F463B342A8F7CF8D1;
// MHLab.Patch.Core.Octodiff.ISignatureWriter
struct ISignatureWriter_tA5E8820AF6C8AB184B0BB76588E270EDC72EEBE8;
// MHLab.Patch.Core.IO.LocalFileInfo
struct LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MHLab.Patch.Core.Octodiff.NullProgressReporter
struct NullProgressReporter_t49220E3809B357BB31DE6A58C06AC1EC9CE06863;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// MHLab.Patch.Core.Octodiff.Signature
struct Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256;
// MHLab.Patch.Core.Octodiff.SignatureBuilder
struct SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D;
// MHLab.Patch.Core.Octodiff.SignatureReader
struct SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8;
// MHLab.Patch.Core.Octodiff.SignatureWriter
struct SignatureWriter_t5E4AD90C230598AA209C1C4B0B4230AFFE8E931F;
// MHLab.Patch.Core.Logging.SimpleLogger
struct SimpleLogger_t078F01C7C6458CC74764B51F13B0BA0F5E88DE4F;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// MHLab.Patch.Core.Octodiff.UsageException
struct UsageException_t5765EEC5528206A2D84C5EA7C334C3DD9943EBC4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// MHLab.Patch.Core.Compressing.ZipCompressor
struct ZipCompressor_t83FE90A3175F1A2E718E1B01E688B4CAA132799A;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC;
// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B;
// ICSharpCode.SharpZipLib.Zip.ZipOutputStream
struct ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7;
// MHLab.Patch.Core.IO.FileSystem/<>c
struct U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF;
// MHLab.Patch.Core.IO.FilesManager/<>c
struct U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler
struct KeysRequiredEventHandler_t598C3F03F5132474D50EAA659C58CAC9A27BF494;

IL2CPP_EXTERN_C RuntimeClass* Adler32RollingChecksum_t706C2DD9268408FF198FBFA22DEFCF780382D035_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateCopyOperationsDecorator_t74B10B220FED70413E8EF41C02CE8E79C51B0772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryDeltaReader_t4E4E12680C24BC2B64B387BC76D214680A7FD31A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryDeltaWriter_t42C8225139F6B74BA25651E37FD1EDE7E4851F63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompatibilityException_t909D280FEC66B482A145F63F7F752206302A8765_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFileSystem_t1113B7B3A20C19DB92F5D866E5A26730EFC8F1E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHashAlgorithm_tA8CBF0EE04BF54E101D8C322BE0B5838F82AFAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProgressReporter_t00CFCEED6169C90F076DEA60514A2AC92A6F7849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRollingChecksum_t26CD8FC9B98DC2967B4D3DB11E0D184E8E626999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignatureWriter_tA5E8820AF6C8AB184B0BB76588E270EDC72EEBE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullProgressReporter_t49220E3809B357BB31DE6A58C06AC1EC9CE06863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignatureWriter_t5E4AD90C230598AA209C1C4B0B4230AFFE8E931F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UsageException_t5765EEC5528206A2D84C5EA7C334C3DD9943EBC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E284B545FEABA735A2C1DBD74243FC42D31BD57;
IL2CPP_EXTERN_C String_t* _stringLiteral26BEBDCD7A2CC9156DEFBA9B12675987312B7DF6;
IL2CPP_EXTERN_C String_t* _stringLiteral397AD22306FCCF42A9A8414AE74403693037DB02;
IL2CPP_EXTERN_C String_t* _stringLiteral3BAC2607E4DC5E7F0229DD7CA4BDEF951A39A6CC;
IL2CPP_EXTERN_C String_t* _stringLiteral455008E9CF44D99D9F83F9B797FF155910BDD761;
IL2CPP_EXTERN_C String_t* _stringLiteral47129985C61D06083C044EB99BD79ED1E440F149;
IL2CPP_EXTERN_C String_t* _stringLiteral4BB0F47A7EDB0F1FABDEF6B92139815C2F81B895;
IL2CPP_EXTERN_C String_t* _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B;
IL2CPP_EXTERN_C String_t* _stringLiteral579FCA2DAB445A1C3F967C09D5DBC981EF4680EC;
IL2CPP_EXTERN_C String_t* _stringLiteral632DC47F192F65D158748DF69E4CB047E6341370;
IL2CPP_EXTERN_C String_t* _stringLiteral6BE6EE2A778951B8B845B4C1A19A89D210C0C603;
IL2CPP_EXTERN_C String_t* _stringLiteral71526C5D34999CFA5E9AAF00653DBD0DD542E84F;
IL2CPP_EXTERN_C String_t* _stringLiteral71CE889ED625DFF7D8ECF98C3BC553C976079455;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8C11E7AB783DD1B3DB090FBD3F5FFB3DACC06BB1;
IL2CPP_EXTERN_C String_t* _stringLiteral9AEDC655AB9D6CF2A4EB87F93F7958BCF670FD06;
IL2CPP_EXTERN_C String_t* _stringLiteral9E22E510891DAB00B168113003C6A37CE8F2AA6A;
IL2CPP_EXTERN_C String_t* _stringLiteralA76D5B769D4CA0D02CE3E8E2C5F414631717B251;
IL2CPP_EXTERN_C String_t* _stringLiteralA9C605EE5F0D52EE5F7E261342F33626CE1F5B79;
IL2CPP_EXTERN_C String_t* _stringLiteralAE7ABB94FD0FC1728AA3706CAD7761D082FAF188;
IL2CPP_EXTERN_C String_t* _stringLiteralC5DFA3405132DA45AB225A47DFDE77887E87FA66;
IL2CPP_EXTERN_C String_t* _stringLiteralCB76F327BE61A95B5759913BE2C94FCCC9A205FE;
IL2CPP_EXTERN_C String_t* _stringLiteralD07686D0577E76D3E0A4BBF69F33BE9DAD888D03;
IL2CPP_EXTERN_C String_t* _stringLiteralD63EA1D36E774A7D28A6699C6CA4DFA6379BC624;
IL2CPP_EXTERN_C String_t* _stringLiteralE234B9B3008F7AF74090CF31173BA7029F3120A3;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE95D9F65398F7FDD420D6306CF1E9DE41AB8FE48;
IL2CPP_EXTERN_C String_t* _stringLiteralFA13C967E585F33FC40DF14B485AC69E7C90855E;
IL2CPP_EXTERN_C String_t* _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A;
IL2CPP_EXTERN_C const RuntimeMethod* Checksum_Create_mEF705FF70F400C74F2E7ECD1ED9E3A2F0D7A6947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m193C16C96D29E88313D6CACCE2E34B71167420A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9535CF4AC5A3BEB408ADD69811DFF46B7EAD2FBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DirectoriesManager_Clean_mF9C2069A014B250E9A98FE199DC645383617AA68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DirectoriesManager_Delete_m04E4E87F840D6A6674EEADF221BFA20757212251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DirectoriesManager_IsEmpty_m86BF3B190FEAC84EF39C628970368FEE7D2A086B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m3F49E0A8F18B3D563CB76937ED85E35FE0BAEFFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m5A1DF15068006271E124D044365DF17D829E31FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FilesManager_Delete_m5E2179E78D03CF813277423435CCBD2D9682ED67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FilesManager_GetAvailableDiskSpace_m1F3A1556FC64B4DCD2F4F4C94EC56FA35B684345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FilesManager_Move_m359E99D1C5B3B797E399CB175E4209058D2E8EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashing_Create_mCAAC84D02815D40F1BFD130B6395B075D08BB1BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB405206D3E60FD48F1F4596F78D215CEF498F80A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB380D28AFF1690ED4175C96C75BC109C0DA0E220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SignatureBuilder_set_ChunkSize_mB80C824E33C1105621C54740DE3688570D1E322D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SignatureReader_ReadSignature_m8EA654619F508BB8DB200F339C476AC1D5943279_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetFilesListU3Eb__12_0_m330DAA70A5774259B14F9FF93B2C37E22BD62B81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetFilesU3Eb__1_0_m619DA3D812F580AA9BAFD73B132FAC2ECB545023_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
struct FilePathU5BU5D_t9693191E2004496B26B8779125BE19248467A924;
struct LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,MHLab.Patch.Core.IO.LocalFileInfo>
struct Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t465E067FCCEF130F0B77E8EBAF7ABF48A6A4AAC6* ____entries_1;
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
	KeyCollection_t61232C6BDDFD1970D8D3CB08A4A6CE230409B02A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4A1EDF8B9D8A6E7CA933DD2CF85E8563810CA00B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<MHLab.Patch.Core.Octodiff.ChunkSignature>
struct List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChunkSignatureU5BU5D_t4A14D70DED962A72591869933CF65545BC528E62* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChunkSignatureU5BU5D_t4A14D70DED962A72591869933CF65545BC528E62* ___s_emptyArray_5;
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

// MHLab.Patch.Core.Octodiff.Adler32RollingChecksum
struct Adler32RollingChecksum_t706C2DD9268408FF198FBFA22DEFCF780382D035  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// MHLab.Patch.Core.Octodiff.BinaryDeltaReader
struct BinaryDeltaReader_t4E4E12680C24BC2B64B387BC76D214680A7FD31A  : public RuntimeObject
{
	// System.IO.BinaryReader MHLab.Patch.Core.Octodiff.BinaryDeltaReader::reader
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader_0;
	// MHLab.Patch.Core.Octodiff.IProgressReporter MHLab.Patch.Core.Octodiff.BinaryDeltaReader::progressReporter
	RuntimeObject* ___progressReporter_1;
	// System.Byte[] MHLab.Patch.Core.Octodiff.BinaryDeltaReader::expectedHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___expectedHash_2;
	// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.BinaryDeltaReader::hashAlgorithm
	RuntimeObject* ___hashAlgorithm_3;
	// System.Boolean MHLab.Patch.Core.Octodiff.BinaryDeltaReader::hasReadMetadata
	bool ___hasReadMetadata_4;
};

// MHLab.Patch.Core.Octodiff.BinaryDeltaWriter
struct BinaryDeltaWriter_t42C8225139F6B74BA25651E37FD1EDE7E4851F63  : public RuntimeObject
{
	// System.IO.BinaryWriter MHLab.Patch.Core.Octodiff.BinaryDeltaWriter::writer
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___writer_0;
};

// MHLab.Patch.Core.Octodiff.BinaryFormat
struct BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897  : public RuntimeObject
{
};

struct BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_StaticFields
{
	// System.Byte[] MHLab.Patch.Core.Octodiff.BinaryFormat::SignatureHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SignatureHeader_0;
	// System.Byte[] MHLab.Patch.Core.Octodiff.BinaryFormat::DeltaHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DeltaHeader_1;
	// System.Byte[] MHLab.Patch.Core.Octodiff.BinaryFormat::EndOfMetadata
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EndOfMetadata_2;
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
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

// MHLab.Patch.Core.Octodiff.ChunkSignature
struct ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010  : public RuntimeObject
{
	// System.Int64 MHLab.Patch.Core.Octodiff.ChunkSignature::StartOffset
	int64_t ___StartOffset_0;
	// System.Int16 MHLab.Patch.Core.Octodiff.ChunkSignature::Length
	int16_t ___Length_1;
	// System.Byte[] MHLab.Patch.Core.Octodiff.ChunkSignature::Hash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Hash_2;
	// System.UInt32 MHLab.Patch.Core.Octodiff.ChunkSignature::RollingChecksum
	uint32_t ___RollingChecksum_3;
};

// MHLab.Patch.Core.Compressing.Compressor
struct Compressor_t83DB3AF3779B970EA8B38C2BC6B7BF94F791FE5A  : public RuntimeObject
{
};

// MHLab.Patch.Core.Octodiff.DeltaApplier
struct DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C  : public RuntimeObject
{
	// System.Boolean MHLab.Patch.Core.Octodiff.DeltaApplier::<SkipHashCheck>k__BackingField
	bool ___U3CSkipHashCheckU3Ek__BackingField_0;
};

// MHLab.Patch.Core.Octodiff.DeltaBuilder
struct DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E  : public RuntimeObject
{
	// MHLab.Patch.Core.Octodiff.IProgressReporter MHLab.Patch.Core.Octodiff.DeltaBuilder::<ProgressReporter>k__BackingField
	RuntimeObject* ___U3CProgressReporterU3Ek__BackingField_1;
};

// MHLab.Patch.Core.Octodiff.DeltaFileApplier
struct DeltaFileApplier_t356049F86E77C2357068223FFC2773F4E8E9ED60  : public RuntimeObject
{
};

// MHLab.Patch.Core.Octodiff.DeltaFileBuilder
struct DeltaFileBuilder_t1A7AA8F833819912212AF97F525240D6B0EC8051  : public RuntimeObject
{
};

// MHLab.Patch.Core.Octodiff.DeltaStatistics
struct DeltaStatistics_t023F79C3CB7338661CD8072144ECAC72D84E6A03  : public RuntimeObject
{
	// System.Int32 MHLab.Patch.Core.Octodiff.DeltaStatistics::<ChunksCopied>k__BackingField
	int32_t ___U3CChunksCopiedU3Ek__BackingField_0;
	// System.Int64 MHLab.Patch.Core.Octodiff.DeltaStatistics::<BytesCopied>k__BackingField
	int64_t ___U3CBytesCopiedU3Ek__BackingField_1;
};

// MHLab.Patch.Core.IO.DirectoriesManager
struct DirectoriesManager_tB7D237C1E3A11332F76585B4115E7ADEDDB4A67E  : public RuntimeObject
{
};

// System.IO.DriveInfo
struct DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6  : public RuntimeObject
{
	// System.String System.IO.DriveInfo::drive_format
	String_t* ___drive_format_0;
	// System.String System.IO.DriveInfo::path
	String_t* ___path_1;
};

// MHLab.Patch.Core.IO.FileSystem
struct FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463  : public RuntimeObject
{
};

// MHLab.Patch.Core.IO.FilesManager
struct FilesManager_t6C0EFDB46955150EF2518968434D8DB498995C29  : public RuntimeObject
{
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper
struct HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276  : public RuntimeObject
{
	// System.Security.Cryptography.HashAlgorithm MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper::algorithm
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___algorithm_0;
	// System.String MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
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

// MHLab.Patch.Core.Octodiff.NullProgressReporter
struct NullProgressReporter_t49220E3809B357BB31DE6A58C06AC1EC9CE06863  : public RuntimeObject
{
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// MHLab.Patch.Core.IO.PathsManager
struct PathsManager_t161F0A429444D51D888BB16A918E067A0D17EE0E  : public RuntimeObject
{
};

// MHLab.Patch.Core.Octodiff.Signature
struct Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256  : public RuntimeObject
{
	// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.Signature::<HashAlgorithm>k__BackingField
	RuntimeObject* ___U3CHashAlgorithmU3Ek__BackingField_0;
	// MHLab.Patch.Core.Octodiff.IRollingChecksum MHLab.Patch.Core.Octodiff.Signature::<RollingChecksumAlgorithm>k__BackingField
	RuntimeObject* ___U3CRollingChecksumAlgorithmU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<MHLab.Patch.Core.Octodiff.ChunkSignature> MHLab.Patch.Core.Octodiff.Signature::<Chunks>k__BackingField
	List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* ___U3CChunksU3Ek__BackingField_2;
};

// MHLab.Patch.Core.Octodiff.SignatureBuilder
struct SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D  : public RuntimeObject
{
	// System.Int16 MHLab.Patch.Core.Octodiff.SignatureBuilder::chunkSize
	int16_t ___chunkSize_3;
	// MHLab.Patch.Core.Octodiff.IProgressReporter MHLab.Patch.Core.Octodiff.SignatureBuilder::<ProgressReporter>k__BackingField
	RuntimeObject* ___U3CProgressReporterU3Ek__BackingField_4;
	// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.SignatureBuilder::<HashAlgorithm>k__BackingField
	RuntimeObject* ___U3CHashAlgorithmU3Ek__BackingField_5;
	// MHLab.Patch.Core.Octodiff.IRollingChecksum MHLab.Patch.Core.Octodiff.SignatureBuilder::<RollingChecksumAlgorithm>k__BackingField
	RuntimeObject* ___U3CRollingChecksumAlgorithmU3Ek__BackingField_6;
};

struct SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_StaticFields
{
	// System.Int16 MHLab.Patch.Core.Octodiff.SignatureBuilder::MinimumChunkSize
	int16_t ___MinimumChunkSize_0;
	// System.Int16 MHLab.Patch.Core.Octodiff.SignatureBuilder::DefaultChunkSize
	int16_t ___DefaultChunkSize_1;
	// System.Int16 MHLab.Patch.Core.Octodiff.SignatureBuilder::MaximumChunkSize
	int16_t ___MaximumChunkSize_2;
};

// MHLab.Patch.Core.Octodiff.SignatureReader
struct SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8  : public RuntimeObject
{
	// MHLab.Patch.Core.Octodiff.IProgressReporter MHLab.Patch.Core.Octodiff.SignatureReader::reporter
	RuntimeObject* ___reporter_0;
	// System.IO.BinaryReader MHLab.Patch.Core.Octodiff.SignatureReader::reader
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader_1;
};

// MHLab.Patch.Core.Octodiff.SignatureWriter
struct SignatureWriter_t5E4AD90C230598AA209C1C4B0B4230AFFE8E931F  : public RuntimeObject
{
	// System.IO.BinaryWriter MHLab.Patch.Core.Octodiff.SignatureWriter::signatureStream
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___signatureStream_0;
};

// MHLab.Patch.Core.Logging.SimpleLogger
struct SimpleLogger_t078F01C7C6458CC74764B51F13B0BA0F5E88DE4F  : public RuntimeObject
{
	// System.Boolean MHLab.Patch.Core.Logging.SimpleLogger::_isDebug
	bool ____isDebug_0;
	// System.IO.StreamWriter MHLab.Patch.Core.Logging.SimpleLogger::_streamWriter
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ____streamWriter_1;
	// MHLab.Patch.Core.IO.IFileSystem MHLab.Patch.Core.Logging.SimpleLogger::_fileSystem
	RuntimeObject* ____fileSystem_2;
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

// MHLab.Patch.Core.Octodiff.SupportedAlgorithms
struct SupportedAlgorithms_t80C301DEF8862606841E325441DDB608A61CC8C7  : public RuntimeObject
{
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

// MHLab.Patch.Core.Compressing.ZipCompressor
struct ZipCompressor_t83FE90A3175F1A2E718E1B01E688B4CAA132799A  : public RuntimeObject
{
};

// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B  : public RuntimeObject
{
	// ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler ICSharpCode.SharpZipLib.Zip.ZipFile::KeysRequired
	KeysRequiredEventHandler_t598C3F03F5132474D50EAA659C58CAC9A27BF494* ___KeysRequired_0;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::isDisposed_
	bool ___isDisposed__1;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::name_
	String_t* ___name__2;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::comment_
	String_t* ___comment__3;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::rawPassword_
	String_t* ___rawPassword__4;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::baseStream_
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseStream__5;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::isStreamOwner
	bool ___isStreamOwner_6;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::offsetOfFirstEntry
	int64_t ___offsetOfFirstEntry_7;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry[] ICSharpCode.SharpZipLib.Zip.ZipFile::entries_
	ZipEntryU5BU5D_tB17684D9BD6B973A8C391D8DCA4A7BCDF51450A6* ___entries__8;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipFile::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_9;
	// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipFile::useZip64_
	int32_t ___useZip64__10;
	// System.Collections.Generic.List`1<ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate> ICSharpCode.SharpZipLib.Zip.ZipFile::updates_
	List_1_t3A66ABD1ACDC5DC9CA0C87701C69734654732069* ___updates__11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ICSharpCode.SharpZipLib.Zip.ZipFile::updateIndex_
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___updateIndex__12;
	// ICSharpCode.SharpZipLib.Zip.IArchiveStorage ICSharpCode.SharpZipLib.Zip.ZipFile::archiveStorage_
	RuntimeObject* ___archiveStorage__13;
	// ICSharpCode.SharpZipLib.Zip.IDynamicDataSource ICSharpCode.SharpZipLib.Zip.ZipFile::updateDataSource_
	RuntimeObject* ___updateDataSource__14;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::bufferSize_
	int32_t ___bufferSize__15;
	// ICSharpCode.SharpZipLib.Zip.IEntryFactory ICSharpCode.SharpZipLib.Zip.ZipFile::updateEntryFactory_
	RuntimeObject* ___updateEntryFactory__16;
};

// MHLab.Patch.Core.IO.FileSystem/<>c
struct U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF  : public RuntimeObject
{
};

struct U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_StaticFields
{
	// MHLab.Patch.Core.IO.FileSystem/<>c MHLab.Patch.Core.IO.FileSystem/<>c::<>9
	U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF* ___U3CU3E9_0;
	// System.Func`2<System.String,MHLab.Patch.Core.IO.FilePath> MHLab.Patch.Core.IO.FileSystem/<>c::<>9__12_0
	Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF* ___U3CU3E9__12_0_1;
};

// MHLab.Patch.Core.IO.FilesManager/<>c
struct U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01  : public RuntimeObject
{
};

struct U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_StaticFields
{
	// MHLab.Patch.Core.IO.FilesManager/<>c MHLab.Patch.Core.IO.FilesManager/<>c::<>9
	U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01* ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> MHLab.Patch.Core.IO.FilesManager/<>c::<>9__1_0
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___U3CU3E9__1_0_1;
};

// MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Checksum
struct Checksum_tC8FE3E8A7B581D0D0A801A89B2036B3CDEF1C0A3  : public RuntimeObject
{
};

// MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Hashing
struct Hashing_tC70D46BFFDEBF082C407AA081B10AF6146DCA29D  : public RuntimeObject
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// MHLab.Patch.Core.Octodiff.DataRange
struct DataRange_t66FB958DAE59BAA5EC6A6156BD318C7B963E1365 
{
	// System.Int64 MHLab.Patch.Core.Octodiff.DataRange::StartOffset
	int64_t ___StartOffset_0;
	// System.Int64 MHLab.Patch.Core.Octodiff.DataRange::Length
	int64_t ___Length_1;
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

// MHLab.Patch.Core.IO.FilePath
struct FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 
{
	// System.String MHLab.Patch.Core.IO.FilePath::BasePath
	String_t* ___BasePath_0;
	// System.String MHLab.Patch.Core.IO.FilePath::FullPath
	String_t* ___FullPath_1;
};
// Native definition for P/Invoke marshalling of MHLab.Patch.Core.IO.FilePath
struct FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshaled_pinvoke
{
	char* ___BasePath_0;
	char* ___FullPath_1;
};
// Native definition for COM marshalling of MHLab.Patch.Core.IO.FilePath
struct FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshaled_com
{
	Il2CppChar* ___BasePath_0;
	Il2CppChar* ___FullPath_1;
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

// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
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

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1028
struct __StaticArrayInitTypeSizeU3D1028_t7BCD015972306A811D372A74C17CEA3F93007571 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1028_t7BCD015972306A811D372A74C17CEA3F93007571__padding[1028];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=136
struct __StaticArrayInitTypeSizeU3D136_tAB97FFB09E2A7C2C3EA62D34A254F3DB60076476 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D136_tAB97FFB09E2A7C2C3EA62D34A254F3DB60076476__padding[136];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144
struct __StaticArrayInitTypeSizeU3D144_t4839144B438E5DCF848D2BCCA695C05728CB3D82 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D144_t4839144B438E5DCF848D2BCCA695C05728CB3D82__padding[144];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792__padding[36];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE__padding[48];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct __StaticArrayInitTypeSizeU3D512_tC1954DF71761952F33D2EDF6DFBD702D1FA82772 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_tC1954DF71761952F33D2EDF6DFBD702D1FA82772__padding[512];
	};
};

// Interop/Kernel32/FILE_TIME
struct FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 
{
	// System.UInt32 Interop/Kernel32/FILE_TIME::dwLowDateTime
	uint32_t ___dwLowDateTime_0;
	// System.UInt32 Interop/Kernel32/FILE_TIME::dwHighDateTime
	uint32_t ___dwHighDateTime_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___13BA99FB374DE24EB2656ACE253C54E2DA7EBAEDA4DD3DAB04852553EAF91EF6_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::25DD2C3220D833E94BF73322F00F2496F15EE01109A0C43004141BDB1B19776E
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792 ___25DD2C3220D833E94BF73322F00F2496F15EE01109A0C43004141BDB1B19776E_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1028 <PrivateImplementationDetails>::36E0F04382A34EF3EEF3534B22721C295381B8CCAAD079E3FA90781EBB7BB830
	__StaticArrayInitTypeSizeU3D1028_t7BCD015972306A811D372A74C17CEA3F93007571 ___36E0F04382A34EF3EEF3534B22721C295381B8CCAAD079E3FA90781EBB7BB830_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144 <PrivateImplementationDetails>::8A0B27D03B5BD78AF9BF8C224C83E6E1206B3E9A06BDA834FF32CBC4BEF9C932
	__StaticArrayInitTypeSizeU3D144_t4839144B438E5DCF848D2BCCA695C05728CB3D82 ___8A0B27D03B5BD78AF9BF8C224C83E6E1206B3E9A06BDA834FF32CBC4BEF9C932_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=136 <PrivateImplementationDetails>::9EF1399FA2C431602672865F11867EB312FF404189900BEE080BB4958A7580A0
	__StaticArrayInitTypeSizeU3D136_tAB97FFB09E2A7C2C3EA62D34A254F3DB60076476 ___9EF1399FA2C431602672865F11867EB312FF404189900BEE080BB4958A7580A0_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::A904D3AAA8D8C4025E1A2F4A68473C0ADB06E993C20CD17E08405616B5DCC2CF
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792 ___A904D3AAA8D8C4025E1A2F4A68473C0ADB06E993C20CD17E08405616B5DCC2CF_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::AA90DAA9658172F888CC465E68CFCADB9CF95A5F2B9A7DD5D861BDA85ABF50EB
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___AA90DAA9658172F888CC465E68CFCADB9CF95A5F2B9A7DD5D861BDA85ABF50EB_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::E190ED442FDA02FA60F80C5629898C2442191C6B7ECDBE58D36A7FA84E9648B7
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___E190ED442FDA02FA60F80C5629898C2442191C6B7ECDBE58D36A7FA84E9648B7_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::E73E7A0C5373709F5377ED0FE29345DCEC4AC34177BFEF2B02062F302C22503B
	__StaticArrayInitTypeSizeU3D512_tC1954DF71761952F33D2EDF6DFBD702D1FA82772 ___E73E7A0C5373709F5377ED0FE29345DCEC4AC34177BFEF2B02062F302C22503B_8;
};

// MHLab.Patch.Core.Octodiff.AggregateCopyOperationsDecorator
struct AggregateCopyOperationsDecorator_t74B10B220FED70413E8EF41C02CE8E79C51B0772  : public RuntimeObject
{
	// MHLab.Patch.Core.Octodiff.IDeltaWriter MHLab.Patch.Core.Octodiff.AggregateCopyOperationsDecorator::decorated
	RuntimeObject* ___decorated_0;
	// MHLab.Patch.Core.Octodiff.DataRange MHLab.Patch.Core.Octodiff.AggregateCopyOperationsDecorator::bufferedCopy
	DataRange_t66FB958DAE59BAA5EC6A6156BD318C7B963E1365 ___bufferedCopy_1;
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

// MHLab.Patch.Core.IO.LocalFileInfo
struct LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0  : public RuntimeObject
{
	// System.String MHLab.Patch.Core.IO.LocalFileInfo::<RelativePath>k__BackingField
	String_t* ___U3CRelativePathU3Ek__BackingField_0;
	// System.Int64 MHLab.Patch.Core.IO.LocalFileInfo::<Size>k__BackingField
	int64_t ___U3CSizeU3Ek__BackingField_1;
	// System.DateTime MHLab.Patch.Core.IO.LocalFileInfo::<LastWriting>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CLastWritingU3Ek__BackingField_2;
	// System.IO.FileAttributes MHLab.Patch.Core.IO.LocalFileInfo::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_3;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC  : public RuntimeObject
{
	// ICSharpCode.SharpZipLib.Zip.ZipEntry/Known ICSharpCode.SharpZipLib.Zip.ZipEntry::known
	uint8_t ___known_0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::externalFileAttributes
	int32_t ___externalFileAttributes_1;
	// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipEntry::versionMadeBy
	uint16_t ___versionMadeBy_2;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::name
	String_t* ___name_3;
	// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipEntry::size
	uint64_t ___size_4;
	// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipEntry::compressedSize
	uint64_t ___compressedSize_5;
	// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipEntry::versionToExtract
	uint16_t ___versionToExtract_6;
	// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipEntry::crc
	uint32_t ___crc_7;
	// System.DateTime ICSharpCode.SharpZipLib.Zip.ZipEntry::dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime_8;
	// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipEntry::method
	int32_t ___method_9;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipEntry::extra
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extra_10;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::comment
	String_t* ___comment_11;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::flags
	int32_t ___flags_12;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::zipFileIndex
	int64_t ___zipFileIndex_13;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipEntry::offset
	int64_t ___offset_14;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::forceZip64_
	bool ___forceZip64__15;
	// System.Byte ICSharpCode.SharpZipLib.Zip.ZipEntry::cryptoCheckValue_
	uint8_t ___cryptoCheckValue__16;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::_aesVer
	int32_t ____aesVer_17;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipEntry::_aesEncryptionStrength
	int32_t ____aesEncryptionStrength_18;
};

// Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA
struct WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B 
{
	// System.Int32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::dwFileAttributes
	int32_t ___dwFileAttributes_0;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftCreationTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftCreationTime_1;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftLastAccessTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastAccessTime_2;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftLastWriteTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastWriteTime_3;
	// System.UInt32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::nFileSizeHigh
	uint32_t ___nFileSizeHigh_4;
	// System.UInt32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::nFileSizeLow
	uint32_t ___nFileSizeLow_5;
};

// MHLab.Patch.Core.Octodiff.CompatibilityException
struct CompatibilityException_t909D280FEC66B482A145F63F7F752206302A8765  : public Exception_t
{
};

// MHLab.Patch.Core.Octodiff.CorruptFileFormatException
struct CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58  : public Exception_t
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA System.IO.FileSystemInfo::_data
	WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialized
	int32_t ____dataInitialized_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_5;
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

// MHLab.Patch.Core.Octodiff.UsageException
struct UsageException_t5765EEC5528206A2D84C5EA7C334C3DD9943EBC4  : public Exception_t
{
};

// ICSharpCode.SharpZipLib.Zip.ZipOutputStream
struct ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7  : public DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259
{
	// ICSharpCode.SharpZipLib.Core.INameTransform ICSharpCode.SharpZipLib.Zip.ZipOutputStream::<NameTransform>k__BackingField
	RuntimeObject* ___U3CNameTransformU3Ek__BackingField_12;
	// System.Collections.Generic.List`1<ICSharpCode.SharpZipLib.Zip.ZipEntry> ICSharpCode.SharpZipLib.Zip.ZipOutputStream::entries
	List_1_tBD6A19CD695C1864780E20A273EE24977701641C* ___entries_13;
	// ICSharpCode.SharpZipLib.Checksum.Crc32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::crc
	Crc32_t44597B0AB0A0CE01AB30303BA5EC0F6E4F51BF33* ___crc_14;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipOutputStream::curEntry
	ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* ___curEntry_15;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::defaultCompressionLevel
	int32_t ___defaultCompressionLevel_16;
	// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipOutputStream::curMethod
	int32_t ___curMethod_17;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::size
	int64_t ___size_18;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::offset
	int64_t ___offset_19;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipOutputStream::zipComment
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___zipComment_20;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipOutputStream::patchEntryHeader
	bool ___patchEntryHeader_21;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::crcPatchPos
	int64_t ___crcPatchPos_22;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::sizePatchPos
	int64_t ___sizePatchPos_23;
	// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::useZip64_
	int32_t ___useZip64__24;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipOutputStream::password
	String_t* ___password_25;
};

struct ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7_StaticFields
{
	// System.Security.Cryptography.RandomNumberGenerator ICSharpCode.SharpZipLib.Zip.ZipOutputStream::_aesRnd
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ____aesRnd_26;
};

// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,MHLab.Patch.Core.IO.FilePath>
struct Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.DirectoryNotFoundException
struct DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
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
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6  : public RuntimeArray
{
	ALIGN_FIELD (8) FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* m_Items[1];

	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953  : public RuntimeArray
{
	ALIGN_FIELD (8) DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* m_Items[1];

	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MHLab.Patch.Core.IO.LocalFileInfo[]
struct LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3  : public RuntimeArray
{
	ALIGN_FIELD (8) LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* m_Items[1];

	inline LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MHLab.Patch.Core.IO.FilePath[]
struct FilePathU5BU5D_t9693191E2004496B26B8779125BE19248467A924  : public RuntimeArray
{
	ALIGN_FIELD (8) FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 m_Items[1];

	inline FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___BasePath_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___FullPath_1), (void*)NULL);
		#endif
	}
	inline FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___BasePath_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___FullPath_1), (void*)NULL);
		#endif
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,MHLab.Patch.Core.IO.FilePath>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mC05806B1F4545FB3AEEA1C93120447874F1DED16_gshared (Func_2_tF8439878BE72A3811351B2B234AB21FAD0BBD19C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,MHLab.Patch.Core.IO.FilePath>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_mBB6FA3995A7B63E17011CA6147352A8E67B32060_gshared (RuntimeObject* ___source0, Func_2_tF8439878BE72A3811351B2B234AB21FAD0BBD19C* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<MHLab.Patch.Core.IO.FilePath>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePathU5BU5D_t9693191E2004496B26B8779125BE19248467A924* Enumerable_ToArray_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m5A1DF15068006271E124D044365DF17D829E31FA_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;

// System.Void MHLab.Patch.Core.Octodiff.DeltaApplier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeltaApplier__ctor_m854227CF81C06484FE5C65B77D9A7E245D294637 (DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C* __this, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.DeltaApplier::set_SkipHashCheck(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeltaApplier_set_SkipHashCheck_mA416D89A12A5DF21C37AFC17B79E99889359D911_inline (DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.BinaryDeltaReader::.ctor(System.IO.Stream,MHLab.Patch.Core.Octodiff.IProgressReporter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryDeltaReader__ctor_mF8F74C858FD9C9386F564BA8FCB932EEA6F5E2BD (BinaryDeltaReader_t4E4E12680C24BC2B64B387BC76D214680A7FD31A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___progressReporter1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.DeltaApplier::Apply(System.IO.Stream,MHLab.Patch.Core.Octodiff.IDeltaReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeltaApplier_Apply_m8015AF60DF686970C11D836137545A703DB31A61 (DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___basisFileStream0, RuntimeObject* ___delta1, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___outputStream2, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder__ctor_m1E30B57B3F7E30C7C4F7A3101D6FD12895699058 (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.DeltaBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeltaBuilder__ctor_m0A9CE07218E12C0C860AEE66D3B69F37543DF454 (DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E* __this, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.SignatureWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureWriter__ctor_m104E90A3917730D6B0BE788777BF9FE5BD93F278 (SignatureWriter_t5E4AD90C230598AA209C1C4B0B4230AFFE8E931F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___signatureStream0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::Build(System.IO.Stream,MHLab.Patch.Core.Octodiff.ISignatureWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder_Build_m7BBC654C4FC1FE4C0E758B45F7DA720753DD13CA (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___signatureWriter1, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// MHLab.Patch.Core.Octodiff.IProgressReporter MHLab.Patch.Core.Octodiff.DeltaBuilder::get_ProgressReporter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DeltaBuilder_get_ProgressReporter_m254D0C9020C2570F9E7689EE4B212DC8A1389B0D_inline (DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E* __this, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.SignatureReader::.ctor(System.String,MHLab.Patch.Core.Octodiff.IProgressReporter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureReader__ctor_m2931770F3FB202CCA3E1CE398246626F39AE22E8 (SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8* __this, String_t* ___signatureFileName0, RuntimeObject* ___reporter1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.BinaryDeltaWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryDeltaWriter__ctor_m1036F7A1C5E610758574E84F266CD288D05D56CB (BinaryDeltaWriter_t42C8225139F6B74BA25651E37FD1EDE7E4851F63* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.AggregateCopyOperationsDecorator::.ctor(MHLab.Patch.Core.Octodiff.IDeltaWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateCopyOperationsDecorator__ctor_mB62E97F2B3478B9815428AAB76C3EF226DAC6CBA (AggregateCopyOperationsDecorator_t74B10B220FED70413E8EF41C02CE8E79C51B0772* __this, RuntimeObject* ___decorated0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.DeltaBuilder::BuildDelta(System.IO.Stream,MHLab.Patch.Core.Octodiff.ISignatureReader,MHLab.Patch.Core.Octodiff.IDeltaWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeltaBuilder_BuildDelta_m1C7B0EB6A01AFA76789C5998221E0ABB2F159144 (DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___newFileStream0, RuntimeObject* ___signatureReader1, RuntimeObject* ___deltaWriter2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashAlgorithmWrapper_set_Name_m55FDB958D8C7764DA474DDFC0B1BB7F62ABE19C2_inline (HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___inputStream0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mFAB8CADA69B3BE03B1C974250EEC30ADF8805710 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.Signature::set_HashAlgorithm(MHLab.Patch.Core.Octodiff.IHashAlgorithm)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_HashAlgorithm_m922F620B7FAB28E335629A4A6186B45F70B5AB13_inline (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.Signature::set_RollingChecksumAlgorithm(MHLab.Patch.Core.Octodiff.IRollingChecksum)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_RollingChecksumAlgorithm_m47AC600B0DBD2F19DC2F5A59F2E234A1BBD7D3F1_inline (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MHLab.Patch.Core.Octodiff.ChunkSignature>::.ctor()
inline void List_1__ctor_mB380D28AFF1690ED4175C96C75BC109C0DA0E220 (List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void MHLab.Patch.Core.Octodiff.Signature::set_Chunks(System.Collections.Generic.List`1<MHLab.Patch.Core.Octodiff.ChunkSignature>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_Chunks_mBBFC9F8174C419CED85761CA7516877570DEE4B1_inline (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* ___value0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::set_ChunkSize(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder_set_ChunkSize_mB80C824E33C1105621C54740DE3688570D1E322D (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, int16_t ___value0, const RuntimeMethod* method) ;
// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Hashing::Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashing_Default_m64446187BA7AC2C637C49DD3DCB3596E1DB45822 (const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::set_HashAlgorithm(MHLab.Patch.Core.Octodiff.IHashAlgorithm)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignatureBuilder_set_HashAlgorithm_m4039EA2ECBAD8E38930D786000C5FE0C06D9DD8A_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// MHLab.Patch.Core.Octodiff.IRollingChecksum MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Checksum::Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Checksum_Default_m1D720DBC52633ADE1ACA787C9A37C66231EA3BFA (const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::set_RollingChecksumAlgorithm(MHLab.Patch.Core.Octodiff.IRollingChecksum)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignatureBuilder_set_RollingChecksumAlgorithm_mE02D0E1918990685714252C591D7FF3C3D5A5CCF_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.NullProgressReporter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullProgressReporter__ctor_mBF992826107A57387D3E07636ACB7FA2D1CAD650 (NullProgressReporter_t49220E3809B357BB31DE6A58C06AC1EC9CE06863* __this, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::set_ProgressReporter(MHLab.Patch.Core.Octodiff.IProgressReporter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignatureBuilder_set_ProgressReporter_m6B662E2058A95F66D47909405B05CDAE285D93D3_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.UsageException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsageException__ctor_m02FBEB510B96FAC7D67AC269443768C45910A2BA (UsageException_t5765EEC5528206A2D84C5EA7C334C3DD9943EBC4* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::WriteMetadata(System.IO.Stream,MHLab.Patch.Core.Octodiff.ISignatureWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder_WriteMetadata_mC0D8B1FD28DAD986B77086B3B62A9043E07BCFB0 (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___signatureWriter1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::WriteChunkSignatures(System.IO.Stream,MHLab.Patch.Core.Octodiff.ISignatureWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder_WriteChunkSignatures_m37E1731ED54DA4B7687677FE11923655300D6FE8 (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___signatureWriter1, const RuntimeMethod* method) ;
// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.SignatureBuilder::get_HashAlgorithm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SignatureBuilder_get_HashAlgorithm_mF8510A30E923F756D682D2559E2E5BF7F633D16D_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) ;
// MHLab.Patch.Core.Octodiff.IRollingChecksum MHLab.Patch.Core.Octodiff.SignatureBuilder::get_RollingChecksumAlgorithm()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SignatureBuilder_get_RollingChecksumAlgorithm_mE3C0C30516597145DB2B62671B67D33E25451FA6_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) ;
// System.Int16 MHLab.Patch.Core.Octodiff.SignatureBuilder::get_ChunkSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t SignatureBuilder_get_ChunkSize_m465C941647B4F76C8E35AFBD7F07068A81BCB70D_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.ChunkSignature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChunkSignature__ctor_m8174B81E7E57CA4E9C5F01803FEE0C2E0E3E04E4 (ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* __this, const RuntimeMethod* method) ;
// MHLab.Patch.Core.Octodiff.IProgressReporter MHLab.Patch.Core.Octodiff.SignatureBuilder::get_ProgressReporter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SignatureBuilder_get_ProgressReporter_m039F63F3A8C5C8D68E91DB6E406F636F8E1C9562_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.SignatureReader::Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureReader_Progress_mE31BEE915BB5731CD964101393A82AC9F039742A (SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8* __this, const RuntimeMethod* method) ;
// System.Boolean MHLab.Patch.Core.Octodiff.BinaryComparer::CompareArray(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BinaryComparer_CompareArray_m9A61ACB0873BB861CFD4BC397BD67AE436F53B30 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___strA0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___strB1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.CorruptFileFormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CorruptFileFormatException__ctor_m554F01889101CC403F66D384DD587C877EAFA3D3 (CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58* __this, String_t* ___message0, const RuntimeMethod* method) ;
// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Hashing::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashing_Create_mCAAC84D02815D40F1BFD130B6395B075D08BB1BF (String_t* ___algorithm0, const RuntimeMethod* method) ;
// MHLab.Patch.Core.Octodiff.IRollingChecksum MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Checksum::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Checksum_Create_mEF705FF70F400C74F2E7ECD1ED9E3A2F0D7A6947 (String_t* ___algorithm0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.Signature::.ctor(MHLab.Patch.Core.Octodiff.IHashAlgorithm,MHLab.Patch.Core.Octodiff.IRollingChecksum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature__ctor_m8B1195954BB2F5938DB9A737C50645EFEA3F2A16 (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, RuntimeObject* ___hashAlgorithm0, RuntimeObject* ___rollingChecksumAlgorithm1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<MHLab.Patch.Core.Octodiff.ChunkSignature> MHLab.Patch.Core.Octodiff.Signature::get_Chunks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* Signature_get_Chunks_m701AE007E0D519447ACC0C9C0E39EA0C38352B52_inline (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<MHLab.Patch.Core.Octodiff.ChunkSignature>::Add(T)
inline void List_1_Add_mB405206D3E60FD48F1F4596F78D215CEF498F80A_inline (List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* __this, ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8*, ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* SHA1_Create_m6F713539D55576456BDF91B7BFC7103ED8CB766C (const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper::.ctor(System.String,System.Security.Cryptography.HashAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashAlgorithmWrapper__ctor_m810B42F0AD13644BC0271F5068376892D0F3BE9B (HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276* __this, String_t* ___name0, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___algorithm1, const RuntimeMethod* method) ;
// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Hashing::Sha1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashing_Sha1_m247195B2653F06E097FD4FD220AEFD4A93A9CD16 (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.CompatibilityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompatibilityException__ctor_m0ACB4C3E420FFF50203F2367A8781800F4E8E61A (CompatibilityException_t909D280FEC66B482A145F63F7F752206302A8765* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Octodiff.Adler32RollingChecksum::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler32RollingChecksum__ctor_m56A2842908FD7BA4BA7BB50677C300A8317FE8F3 (Adler32RollingChecksum_t706C2DD9268408FF198FBFA22DEFCF780382D035* __this, const RuntimeMethod* method) ;
// MHLab.Patch.Core.Octodiff.IRollingChecksum MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Checksum::Adler32Rolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Checksum_Adler32Rolling_m92B591EB328686EADA8F987E8DA9BF24EB686DD0 (const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// MHLab.Patch.Core.IO.FilePath MHLab.Patch.Core.IO.FilePath::op_Explicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FilePath::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilePath__ctor_m745E953E5FF3004F480828DB2FF0FA10859F25D9 (FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0* __this, String_t* ___basePath0, String_t* ___fullPath1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.String MHLab.Patch.Core.Logging.SimpleLogger::BuildMessage(System.String,System.String,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleLogger_BuildMessage_m7AD1C7E8A5224D3AF43600BF3F7EBBAB37B54B51 (SimpleLogger_t078F01C7C6458CC74764B51F13B0BA0F5E88DE4F* __this, String_t* ___messageTemplate0, String_t* ___level1, String_t* ___callerPath2, int64_t ___callerLine3, String_t* ___callerMember4, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.IO.TextWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter_Dispose_m5B2CA4D250335AB11031AFC7F202AA5B7A70C4D7 (TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* __this, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.Directory::GetCurrentDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Directory_GetCurrentDirectory_m7EA69F721BEEC05DC0FBF8E9189990BF9F856363 (const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.DirectoryNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryNotFoundException__ctor_m3E7AD60F0D1A82ED671568427050835C56704361 (DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF* __this, const RuntimeMethod* method) ;
// System.String[] System.IO.Directory::GetDirectories(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetDirectories_m94C31CB11C7AFC316D40DC06C122C2A45F42EC51 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String[] System.IO.Directory::GetFiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetFiles_m4B12F04FB52DA5311463669EBB83321CB0CF284B (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.DirectoriesManager::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoriesManager_Create_mA0243125F916BE52DF84B3B70DD58EE839B018DD (String_t* ___path0, const RuntimeMethod* method) ;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String,System.IO.SearchOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetFiles_mAD2C2FCFE204E9D7A8933C93A813E77573CD141B (String_t* ___path0, String_t* ___searchPattern1, int32_t ___searchOption2, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m68CDF30174466285011A5E8B320CAE02D7EF432C (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.DirectoriesManager::Clean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoriesManager_Clean_mF9C2069A014B250E9A98FE199DC645383617AA68 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.Directory::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Directory_Delete_m42524D3C40B0B3F8E0B510ED228462221777BB53 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.GC::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m083F9AEA26680FD7E28C627D30E43DD672ADF53D (const RuntimeMethod* method) ;
// System.Void System.GC::WaitForPendingFinalizers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_WaitForPendingFinalizers_m0FA950AA1D612E4DEBBCF1C9C632D0EEFB59E80B (const RuntimeMethod* method) ;
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* DirectoryInfo_GetFiles_m998040748717954CDDCE273F61EEC0625069543F (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.IO.FileAttributes System.IO.FileSystemInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileSystemInfo_get_Attributes_m38971A5B147214C5EE193CE9F60628EA834EF6DA (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.Void System.IO.FileSystemInfo::set_Attributes(System.IO.FileAttributes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemInfo_set_Attributes_m510C45C0B09B8E2BB21DD00B193CC279CAD806EE (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo[] System.IO.DirectoryInfo::GetDirectories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.DirectoriesManager::DeleteRecursiveFolder(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoriesManager_DeleteRecursiveFolder_m1BB27E533D8A72BA59285CB66C103721AB188FFB (String_t* ___pFolderPath0, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___fileName0, const RuntimeMethod* method) ;
// System.Void System.IO.File::SetAttributes(System.String,System.IO.FileAttributes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_SetAttributes_m61620C95541E700F19541D8D9D179CCA9F480578 (String_t* ___path0, int32_t ___fileAttributes1, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184 (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1 (RuntimeObject* ___source0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.String[] MHLab.Patch.Core.IO.FilesManager::GetFiles(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* FilesManager_GetFiles_mD4A091EFB6CF9598E108D8490B5724AD636FB7FB (String_t* ___path0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.LocalFileInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileInfo__ctor_m36AA187E307EFC0C24EDB7440D05B894BF456175 (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) ;
// System.Int64 System.IO.FileInfo::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.LocalFileInfo::set_Size(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalFileInfo_set_Size_m7F31BACB01284535334BAF7E417AD1509AB8F9AD_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.DateTime System.IO.FileSystemInfo::get_LastWriteTimeUtc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D FileSystemInfo_get_LastWriteTimeUtc_mD88B2540B4766584A90C45018C6EDBFEC9C80BA8 (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.LocalFileInfo::set_LastWriting(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalFileInfo_set_LastWriting_m08ED5420684C7B8DC6143A17343A45219D611BFF_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.LocalFileInfo::set_Attributes(System.IO.FileAttributes)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalFileInfo_set_Attributes_m1A95A06307EA4DAD9CB52D07220C164E69653B9B_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String MHLab.Patch.Core.IO.FilesManager::SanitizeToRelativePath(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilesManager_SanitizeToRelativePath_m938A03B3083A1AF199E218CC682CD0BA306969FD (String_t* ___rootPath0, String_t* ___fullPath1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.LocalFileInfo::set_RelativePath(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalFileInfo_set_RelativePath_mC6B17F4C1049F0835EC352189A24EA910DEFE851_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,MHLab.Patch.Core.IO.LocalFileInfo>::.ctor()
inline void Dictionary_2__ctor_m9535CF4AC5A3BEB408ADD69811DFF46B7EAD2FBA (Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.DateTime System.IO.FileSystemInfo::get_LastWriteTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D FileSystemInfo_get_LastWriteTime_m5009457B3D837E929AF4FBC9E2738F15BB6476C5 (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.String MHLab.Patch.Core.IO.LocalFileInfo::get_RelativePath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LocalFileInfo_get_RelativePath_m8C08DEC7A4C19F8FBF931E68264A4108776AF586_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,MHLab.Patch.Core.IO.LocalFileInfo>::Add(TKey,TValue)
inline void Dictionary_2_Add_m193C16C96D29E88313D6CACCE2E34B71167420A8 (Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07* __this, String_t* ___key0, LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07*, String_t*, LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.String MHLab.Patch.Core.IO.PathsManager::GetDirectoryPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_GetDirectoryPath_mB2802217BE08BD18B770B7519DAEF491A9F274FC (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B (String_t* ___value0, const RuntimeMethod* method) ;
// System.String MHLab.Patch.Core.IO.FilesManager::SanitizePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilesManager_SanitizePath_m3B8097CCDA19BBD4505D1857EB95F8FBB1743AB9 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Boolean MHLab.Patch.Core.IO.FilesManager::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilesManager_Exists_m7A87D7B2B35BFDF19C16307561F109581FB55DD1 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String MHLab.Patch.Core.IO.FilesManager::GetTemporaryDeletingFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilesManager_GetTemporaryDeletingFileName_mE713047852C2C23A45E488568BC6842A68317059 (String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FilesManager::Rename(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_Rename_m7D03DCE606C5A15CB0C4967BDE459E4693F1BCB2 (String_t* ___path0, String_t* ___newPath1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FilesManager::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_Delete_m5E2179E78D03CF813277423435CCBD2D9682ED67 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Move_mF906DE37D2EF2E47B2DF79FA50C765859AFB9ECF (String_t* ___sourceFileName0, String_t* ___destFileName1, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m68957393F932BED668C5725704E5DA9B71925395 (String_t* ___sourceFileName0, String_t* ___destFileName1, bool ___overwrite2, const RuntimeMethod* method) ;
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetFolderPath_m6294B29BDF0AC7CBB12EE2BB109D6DAA3FE9AF4B (int32_t ___folder0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FilesManager::CreateShortcut(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_CreateShortcut_mE24E05A6714B1D2E9E364B44C0043667A380C9EA (String_t* ___targetFile0, String_t* ___shortcutFile1, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetRandomFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetRandomFileName_m1B9709A07450C49E3426D856A244A2F9900AB171 (const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Create(System.String,System.Int32,System.IO.FileOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Create_m8EDF23576D83DCC1736A7F80E8DE07A85EEB6EA1 (String_t* ___path0, int32_t ___bufferSize1, int32_t ___options2, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Open_m9C6D5876B037A5A8341D216B767D4C8BE7084326 (String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Int32 System.Exception::get_HResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.Int32 MHLab.Patch.Core.IO.FilesManager::DeleteMultiple(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FilesManager_DeleteMultiple_mDCD2A3E19DBED7B17C1D4BEFAC84AFD513E84BDD (String_t* ___directory0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.IO.DriveInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DriveInfo__ctor_mE1877A0260E9F53EB5E14E37D4FA35DF5727BAAB (DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6* __this, String_t* ___driveName0, const RuntimeMethod* method) ;
// System.Boolean System.IO.DriveInfo::get_IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DriveInfo_get_IsReady_m2D5873746241FBEF62F5B69BDCEBDF955E1900EB (DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6* __this, const RuntimeMethod* method) ;
// System.Int64 System.IO.DriveInfo::get_AvailableFreeSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DriveInfo_get_AvailableFreeSpace_m3C757F8CFDF826CD3412362A54DCCF166EF1C87E (DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6* __this, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FilesManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9372BB9E72533C9D367D7C48ED865E566746C3B7 (U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01* __this, const RuntimeMethod* method) ;
// System.Boolean MHLab.Patch.Core.IO.FilesManager::IsFileOsRelated(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilesManager_IsFileOsRelated_mDFCA10C0007325473B245DA419107E05E61B52C4 (String_t* ___filePath0, const RuntimeMethod* method) ;
// System.Boolean MHLab.Patch.Core.IO.DirectoriesManager::IsEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DirectoriesManager_IsEmpty_m86BF3B190FEAC84EF39C628970368FEE7D2A086B (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean MHLab.Patch.Core.IO.DirectoriesManager::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DirectoriesManager_Delete_m04E4E87F840D6A6674EEADF221BFA20757212251 (String_t* ___directory0, const RuntimeMethod* method) ;
// System.String MHLab.Patch.Core.IO.PathsManager::GetSpecialPath(System.Environment/SpecialFolder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_GetSpecialPath_mB216C607EA909159B386B954EE6C3CB587D81949 (int32_t ___specialFolder0, const RuntimeMethod* method) ;
// System.String MHLab.Patch.Core.IO.PathsManager::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_Combine_mE72FA64A56E726AD1D400F89BBBA283A6553773A (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.String MHLab.Patch.Core.IO.PathsManager::Combine(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_Combine_mFD17C3F71155F133E7E4140053C9567478C9A083 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) ;
// System.String MHLab.Patch.Core.IO.PathsManager::UriCombine(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_UriCombine_m0B190BF4FB39E841ABA3236DBABCE9DE5692C3C4 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___uriParts0, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Create_m1CEFB773993DCC259CC20C29818B754726A25E89 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String MHLab.Patch.Core.IO.PathsManager::GetFilename(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_GetFilename_mE02AF8DECD9D0E1F3585D3D13610A81736F21DEA (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,MHLab.Patch.Core.IO.FilePath>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCF29AC6D4AC322EEEAB6898906FE8B3EA19875D4 (Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mC05806B1F4545FB3AEEA1C93120447874F1DED16_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.String,MHLab.Patch.Core.IO.FilePath>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m3F49E0A8F18B3D563CB76937ED85E35FE0BAEFFB (RuntimeObject* ___source0, Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_mBB6FA3995A7B63E17011CA6147352A8E67B32060_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<MHLab.Patch.Core.IO.FilePath>(System.Collections.Generic.IEnumerable`1<TSource>)
inline FilePathU5BU5D_t9693191E2004496B26B8779125BE19248467A924* Enumerable_ToArray_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m5A1DF15068006271E124D044365DF17D829E31FA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  FilePathU5BU5D_t9693191E2004496B26B8779125BE19248467A924* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m5A1DF15068006271E124D044365DF17D829E31FA_gshared)(___source0, method);
}
// MHLab.Patch.Core.IO.LocalFileInfo[] MHLab.Patch.Core.IO.FilesManager::GetFilesInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3* FilesManager_GetFilesInfo_mB46CF315663C260AB6A0D667FEBECE5668FFF4BE (String_t* ___rootPath0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FilesManager::GetFilesInfo(System.String,MHLab.Patch.Core.IO.LocalFileInfo[]&,System.Collections.Generic.Dictionary`2<System.String,MHLab.Patch.Core.IO.LocalFileInfo>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_GetFilesInfo_mAEF3E6DB67F8B3DB04E911834DEAF0564F12BB07 (String_t* ___rootPath0, LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3** ___fileInfoArray1, Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07** ___fileInfoMap2, const RuntimeMethod* method) ;
// MHLab.Patch.Core.IO.LocalFileInfo MHLab.Patch.Core.IO.FilesManager::GetFileInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* FilesManager_GetFileInfo_mAC4A0073C098530B6D79022F633956AB53BCF852 (String_t* ___filePath0, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mE462D8448CA65183AA5D464210706167E0EF19EB (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FilesManager::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_Copy_mD177C65490741211D429BCE2436AD0347C458B07 (String_t* ___sourcePath0, String_t* ___destinationPath1, bool ___overwrite2, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FilesManager::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_Move_m359E99D1C5B3B797E399CB175E4209058D2E8EC8 (String_t* ___source0, String_t* ___dest1, const RuntimeMethod* method) ;
// System.Boolean MHLab.Patch.Core.IO.FilesManager::IsFileLocked(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilesManager_IsFileLocked_mC87BE0D9D03AFEB13AD01F12156C3D973064600F (String_t* ___targetFile0, const RuntimeMethod* method) ;
// System.Boolean MHLab.Patch.Core.IO.FileSystem::IsFileLocked(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystem_IsFileLocked_mB60607CF56FA938F4C58A1E8E7E2641F0DD94C53 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) ;
// System.String MHLab.Patch.Core.IO.FileSystem::GetTemporaryDeletingFileName(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileSystem_GetTemporaryDeletingFileName_m0B20155B1A0AAB123236A73C2D71F7324C1C8A7C (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) ;
// System.Boolean MHLab.Patch.Core.IO.FileSystem::FileExists(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystem_FileExists_m5D7A3EAD97A36A72018C714BA47612E2BDCC383A (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FileSystem::DeleteFile(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_DeleteFile_mCC5F26FA72FF55B388B9D5BE8B417FC50BAAA10A (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FileSystem::RenameFile(MHLab.Patch.Core.IO.FilePath,MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_RenameFile_m333569DFD405F6B7E40233481543382CE9145FDC (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___sourcePath0, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___destinationPath1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FileSystem::CopyFile(MHLab.Patch.Core.IO.FilePath,MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_CopyFile_mE3F70D56D2164D39C4DFB854682662901A6F3BAB (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___sourcePath0, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___destinationPath1, const RuntimeMethod* method) ;
// System.Boolean MHLab.Patch.Core.IO.FilesManager::IsDirectoryWritable(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilesManager_IsDirectoryWritable_mECA260CB4B76E4DC35D9E7CBD5C6F7DD3D9C6655 (String_t* ___directoryPath0, bool ___throwOnFail1, const RuntimeMethod* method) ;
// System.Int32 MHLab.Patch.Core.IO.FileSystem::DeleteMultipleFiles(MHLab.Patch.Core.IO.FilePath,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileSystem_DeleteMultipleFiles_m20C33D0607D36D9631565A7A9026282862EC60CE (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Int64 MHLab.Patch.Core.IO.FilesManager::GetAvailableDiskSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FilesManager_GetAvailableDiskSpace_m1F3A1556FC64B4DCD2F4F4C94EC56FA35B684345 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::SetLastWriteTime(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_SetLastWriteTime_m444C27684387AD8DC03E739B9CCAA4927C75FDBC (String_t* ___path0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lastWriteTime1, const RuntimeMethod* method) ;
// System.Void System.IO.File::SetLastWriteTimeUtc(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_SetLastWriteTimeUtc_m602D2AB1226478E5D0F79BF03765C0DCA51364DE (String_t* ___path0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lastWriteTimeUtc1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FilesManager::EnsureShortcutOnDesktop(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_EnsureShortcutOnDesktop_m79D03315D4588020E12541A7579FD9B2B1C5C27D (String_t* ___targetFile0, String_t* ___shortcutName1, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.IO.FileSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m92B8844487C5B3A7EC239E27CF3D8ED7A0A5447F (U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF* __this, const RuntimeMethod* method) ;
// System.Int64 MHLab.Patch.Core.IO.LocalFileInfo::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t LocalFileInfo_get_Size_m6933D0E9E58FEBBE4EE3DCA88316E70E94733E81_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) ;
// System.DateTime MHLab.Patch.Core.IO.LocalFileInfo::get_LastWriting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D LocalFileInfo_get_LastWriting_m1134F4F4BA3C48471C0C6965E5C70B9AE93DC5C1_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) ;
// System.IO.FileAttributes MHLab.Patch.Core.IO.LocalFileInfo::get_Attributes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocalFileInfo_get_Attributes_mB6B1BB2BC01635798D05B302E223A276CE910C36_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::GetParent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_GetParent_m2BB7C00349FB9BC0E79725723B451A7F75E941C8 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m414B2D97688304C226B1828FFCD5A3AF5824D0EF (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) ;
// System.String System.String::TrimEnd(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.String System.String::TrimStart(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimStart_m67833D80326BEA11CC3517CE03CD7B16669BCEEC (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Compressing.ZipCompressor::ZipFolder(System.String,System.String,System.String,System.Int32,System.Func`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipCompressor_ZipFolder_m487F11AC5FB441BFF5F22EA42DA48910B7C3DE4B (String_t* ___outPathname0, String_t* ___password1, String_t* ___folderName2, int32_t ___compressionLevel3, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___filesFilter4, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Compressing.ZipCompressor::ExtractZipFile(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipCompressor_ExtractZipFile_mF50D2126B1AFBBD6E63DF5D7064592DB55A1778C (String_t* ___archiveFilenameIn0, String_t* ___password1, String_t* ___outFolder2, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipConstants::set_DefaultCodePage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipConstants_set_DefaultCodePage_m35C6A7153FED341C076693246F6B371FA37CCBC0 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream__ctor_m0A3193C520D9538D6ACB806C4F9A44EFF48AC0C6 (ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseOutputStream0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::SetLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_SetLevel_m030F545E2DB5C05BE704729444518397F674D4FF (ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* __this, int32_t ___level0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::set_Password(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_set_Password_m29B5BBACBE15BCA65EC7791751FC8C0C14BC25DB (ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void MHLab.Patch.Core.Compressing.ZipCompressor::CompressFolder(System.String,ICSharpCode.SharpZipLib.Zip.ZipOutputStream,System.Int32,System.Func`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipCompressor_CompressFolder_m58DC647D3A436017A4DF4700EE9B5B627D92D57C (String_t* ___path0, ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* ___zipStream1, int32_t ___folderOffset2, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___filesFilter3, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::set_IsStreamOwner(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeflaterOutputStream_set_IsStreamOwner_mB8B0A93A4AC06B6ECD2A61CC6CA7548D09AFBECE_inline (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::CleanName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZipEntry_CleanName_mFF08255D263D3A3B321DD207D4F8DDB4B95CDC1D (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry__ctor_m7BD2DB6ACB668C934BB96470CC280D77602B3F2C (ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_DateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_set_DateTime_m9CFCF0F34CA7B71140253D9A8E9FFC6DF02358AD (ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipEntry::set_Size(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipEntry_set_Size_mE45497AB1946B859DAF71810B643F71FBE216560 (ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::PutNextEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_PutNextEntry_m56C17CC2C9E6D1BBFC315E2BA2A146265F017932 (ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* __this, ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* ___entry0, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m32C8C37542B7A02A2F643E3B816D16ABE690FF50 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Core.StreamUtils::Copy(System.IO.Stream,System.IO.Stream,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamUtils_Copy_m39E242B89E58257C6818A067122D3A08146A0F98 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___source0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::CloseEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipOutputStream_CloseEntry_m74449739588C92E9C366D2460253B2BB9834928C (ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_IsStreamOwner(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipFile_set_IsStreamOwner_mE8950E204E60677DB62D1E768EE1BA27AFE9680E_inline (ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_Close_m7E452C938FF93B09EC7121F19A6ABC57676EC363 (ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* __this, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor(System.IO.FileStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile__ctor_m811F535E6E2B0485523484A3A26CB49E21F43C1F (ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* __this, FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___file0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_Password(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_set_Password_m34C4D5BCD1A7FF98D19912667B74F99AE5436780 (ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ICSharpCode.SharpZipLib.Zip.ZipFile::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFile_GetEnumerator_m76796DA0F0D45A31AAB8A32002A013F5A7B082BA (ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* __this, const RuntimeMethod* method) ;
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipEntry::get_IsFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipEntry_get_IsFile_mD1B82A90A43FF2953ABC0C25F7CA5B67C6A0257F (ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* __this, const RuntimeMethod* method) ;
// System.String ICSharpCode.SharpZipLib.Zip.ZipEntry::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ZipEntry_get_Name_m0811DAFB11AFFE348E5CB9950CDFED26BD3A20BB_inline (ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* __this, const RuntimeMethod* method) ;
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetInputStream(ICSharpCode.SharpZipLib.Zip.ZipEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ZipFile_GetInputStream_m39CEA186797C855DCD52185FC3724BC1C1BB3270 (ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* __this, ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* ___entry0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MHLab.Patch.Core.Octodiff.DeltaFileApplier::Apply(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeltaFileApplier_Apply_m275C096F96439504F63810692A05CC788666D8D9 (String_t* ___fileBackupPath0, String_t* ___patchPath1, String_t* ___filePath2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryDeltaReader_t4E4E12680C24BC2B64B387BC76D214680A7FD31A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C* V_0 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_3 = NULL;
	{
		// var delta = new DeltaApplier
		// {
		//     SkipHashCheck = true
		// };
		DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C* L_0 = (DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C*)il2cpp_codegen_object_new(DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DeltaApplier__ctor_m854227CF81C06484FE5C65B77D9A7E245D294637(L_0, NULL);
		DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C* L_1 = L_0;
		NullCheck(L_1);
		DeltaApplier_set_SkipHashCheck_mA416D89A12A5DF21C37AFC17B79E99889359D911_inline(L_1, (bool)1, NULL);
		V_0 = L_1;
		// using (var basisStream = new FileStream(fileBackupPath, FileMode.Open, FileAccess.Read, FileShare.Read))
		String_t* L_2 = ___fileBackupPath0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_3, L_2, 3, 1, 1, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0059;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0059:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var deltaStream = new FileStream(patchPath, FileMode.Open, FileAccess.Read, FileShare.Read))
				String_t* L_6 = ___patchPath1;
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_7, L_6, 3, 1, 1, NULL);
				V_2 = L_7;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0046_1:
					{// begin finally (depth: 2)
						{
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_2;
							if (!L_8)
							{
								goto IL_004f_1;
							}
						}
						{
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_2;
							NullCheck(L_9);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
						}

IL_004f_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (var newFileStream = new FileStream(filePath, FileMode.Create, FileAccess.ReadWrite, FileShare.Read))
						String_t* L_10 = ___filePath2;
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
						NullCheck(L_11);
						FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_11, L_10, 2, 3, 1, NULL);
						V_3 = L_11;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_003c_2:
							{// begin finally (depth: 3)
								{
									FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = V_3;
									if (!L_12)
									{
										goto IL_0045_2;
									}
								}
								{
									FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_13 = V_3;
									NullCheck(L_13);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
								}

IL_0045_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// delta.Apply(basisStream, new BinaryDeltaReader(deltaStream, null), newFileStream);
							DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C* L_14 = V_0;
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_15 = V_1;
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_16 = V_2;
							BinaryDeltaReader_t4E4E12680C24BC2B64B387BC76D214680A7FD31A* L_17 = (BinaryDeltaReader_t4E4E12680C24BC2B64B387BC76D214680A7FD31A*)il2cpp_codegen_object_new(BinaryDeltaReader_t4E4E12680C24BC2B64B387BC76D214680A7FD31A_il2cpp_TypeInfo_var);
							NullCheck(L_17);
							BinaryDeltaReader__ctor_mF8F74C858FD9C9386F564BA8FCB932EEA6F5E2BD(L_17, L_16, (RuntimeObject*)NULL, NULL);
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_18 = V_3;
							NullCheck(L_14);
							DeltaApplier_Apply_m8015AF60DF686970C11D836137545A703DB31A61(L_14, L_15, L_17, L_18, NULL);
							// }
							goto IL_005a;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
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

IL_005a:
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
// System.Void MHLab.Patch.Core.Octodiff.DeltaFileBuilder::Build(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeltaFileBuilder_Build_mE8EC1A5A31E30796C4D39466C1B089717FDB82F8 (String_t* ___fromFile0, String_t* ___toFile1, String_t* ___patchFile2, String_t* ___signatureFile3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateCopyOperationsDecorator_t74B10B220FED70413E8EF41C02CE8E79C51B0772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryDeltaWriter_t42C8225139F6B74BA25651E37FD1EDE7E4851F63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignatureWriter_t5E4AD90C230598AA209C1C4B0B4230AFFE8E931F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E* V_0 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_3 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_4 = NULL;
	{
		// SignatureBuilder signatureBuilder = new SignatureBuilder();
		SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* L_0 = (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D*)il2cpp_codegen_object_new(SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SignatureBuilder__ctor_m1E30B57B3F7E30C7C4F7A3101D6FD12895699058(L_0, NULL);
		// DeltaBuilder deltaBuilder = new DeltaBuilder();
		DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E* L_1 = (DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E*)il2cpp_codegen_object_new(DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DeltaBuilder__ctor_m0A9CE07218E12C0C860AEE66D3B69F37543DF454(L_1, NULL);
		V_0 = L_1;
		// FileStream oldFile = new FileStream(fromFile, FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
		String_t* L_2 = ___fromFile0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_3, L_2, 3, 1, 3, NULL);
		V_1 = L_3;
		// FileStream newFile = new FileStream(toFile, FileMode.Open, FileAccess.ReadWrite, FileShare.ReadWrite);
		String_t* L_4 = ___toFile1;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_5, L_4, 3, 3, 3, NULL);
		V_2 = L_5;
		// FileStream patch = new FileStream(patchFile, FileMode.Create, FileAccess.Write, FileShare.ReadWrite);
		String_t* L_6 = ___patchFile2;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_7, L_6, 2, 2, 3, NULL);
		V_3 = L_7;
		// FileStream sign = new FileStream(signatureFile, FileMode.Create, FileAccess.Write, FileShare.ReadWrite);
		String_t* L_8 = ___signatureFile3;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_9, L_8, 2, 2, 3, NULL);
		V_4 = L_9;
		// signatureBuilder.Build(oldFile, new SignatureWriter(sign));
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_10 = V_1;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = V_4;
		SignatureWriter_t5E4AD90C230598AA209C1C4B0B4230AFFE8E931F* L_12 = (SignatureWriter_t5E4AD90C230598AA209C1C4B0B4230AFFE8E931F*)il2cpp_codegen_object_new(SignatureWriter_t5E4AD90C230598AA209C1C4B0B4230AFFE8E931F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		SignatureWriter__ctor_m104E90A3917730D6B0BE788777BF9FE5BD93F278(L_12, L_11, NULL);
		NullCheck(L_0);
		SignatureBuilder_Build_m7BBC654C4FC1FE4C0E758B45F7DA720753DD13CA(L_0, L_10, L_12, NULL);
		// sign.Close();
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_13 = V_4;
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Close() */, L_13);
		// sign.Dispose();
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_14 = V_4;
		NullCheck(L_14);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_14, NULL);
		// deltaBuilder.BuildDelta(newFile, new SignatureReader(sign.Name, deltaBuilder.ProgressReporter), new AggregateCopyOperationsDecorator(new BinaryDeltaWriter(patch)));
		DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E* L_15 = V_0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_16 = V_2;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_17 = V_4;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(40 /* System.String System.IO.FileStream::get_Name() */, L_17);
		DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E* L_19 = V_0;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = DeltaBuilder_get_ProgressReporter_m254D0C9020C2570F9E7689EE4B212DC8A1389B0D_inline(L_19, NULL);
		SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8* L_21 = (SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8*)il2cpp_codegen_object_new(SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		SignatureReader__ctor_m2931770F3FB202CCA3E1CE398246626F39AE22E8(L_21, L_18, L_20, NULL);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_22 = V_3;
		BinaryDeltaWriter_t42C8225139F6B74BA25651E37FD1EDE7E4851F63* L_23 = (BinaryDeltaWriter_t42C8225139F6B74BA25651E37FD1EDE7E4851F63*)il2cpp_codegen_object_new(BinaryDeltaWriter_t42C8225139F6B74BA25651E37FD1EDE7E4851F63_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		BinaryDeltaWriter__ctor_m1036F7A1C5E610758574E84F266CD288D05D56CB(L_23, L_22, NULL);
		AggregateCopyOperationsDecorator_t74B10B220FED70413E8EF41C02CE8E79C51B0772* L_24 = (AggregateCopyOperationsDecorator_t74B10B220FED70413E8EF41C02CE8E79C51B0772*)il2cpp_codegen_object_new(AggregateCopyOperationsDecorator_t74B10B220FED70413E8EF41C02CE8E79C51B0772_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		AggregateCopyOperationsDecorator__ctor_mB62E97F2B3478B9815428AAB76C3EF226DAC6CBA(L_24, L_23, NULL);
		NullCheck(L_15);
		DeltaBuilder_BuildDelta_m1C7B0EB6A01AFA76789C5998221E0ABB2F159144(L_15, L_16, L_21, L_24, NULL);
		// oldFile.Close();
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_25 = V_1;
		NullCheck(L_25);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Close() */, L_25);
		// oldFile.Dispose();
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_26 = V_1;
		NullCheck(L_26);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_26, NULL);
		// newFile.Close();
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_27 = V_2;
		NullCheck(L_27);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Close() */, L_27);
		// newFile.Dispose();
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_28 = V_2;
		NullCheck(L_28);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_28, NULL);
		// patch.Close();
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_29 = V_3;
		NullCheck(L_29);
		VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Close() */, L_29);
		// patch.Dispose();
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_30 = V_3;
		NullCheck(L_30);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_30, NULL);
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
// System.Void MHLab.Patch.Core.Octodiff.DeltaStatistics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeltaStatistics__ctor_m7E95209F4D7F82012495FBC4F5D5A544EAF30921 (DeltaStatistics_t023F79C3CB7338661CD8072144ECAC72D84E6A03* __this, const RuntimeMethod* method) 
{
	{
		// public DeltaStatistics()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Int32 MHLab.Patch.Core.Octodiff.DeltaStatistics::get_ChunksCopied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeltaStatistics_get_ChunksCopied_mE27D0EA7816ADA4C4099B6FB22315F5B8FD7AA99 (DeltaStatistics_t023F79C3CB7338661CD8072144ECAC72D84E6A03* __this, const RuntimeMethod* method) 
{
	{
		// public int ChunksCopied { get; set; }
		int32_t L_0 = __this->___U3CChunksCopiedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.DeltaStatistics::set_ChunksCopied(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeltaStatistics_set_ChunksCopied_m91F191FFA125A9723334C27CBCEA287EE381F08E (DeltaStatistics_t023F79C3CB7338661CD8072144ECAC72D84E6A03* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int ChunksCopied { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CChunksCopiedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int64 MHLab.Patch.Core.Octodiff.DeltaStatistics::get_BytesCopied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeltaStatistics_get_BytesCopied_mD10D52DFE33E6FFEFF76F1500CF41CB337B94742 (DeltaStatistics_t023F79C3CB7338661CD8072144ECAC72D84E6A03* __this, const RuntimeMethod* method) 
{
	{
		// public long BytesCopied { get; set; }
		int64_t L_0 = __this->___U3CBytesCopiedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.DeltaStatistics::set_BytesCopied(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeltaStatistics_set_BytesCopied_mCC0FBFA04E9C74205E8A6B671F501439B144DBE7 (DeltaStatistics_t023F79C3CB7338661CD8072144ECAC72D84E6A03* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public long BytesCopied { get; set; }
		int64_t L_0 = ___value0;
		__this->___U3CBytesCopiedU3Ek__BackingField_1 = L_0;
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
// System.Void MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper::.ctor(System.String,System.Security.Cryptography.HashAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashAlgorithmWrapper__ctor_m810B42F0AD13644BC0271F5068376892D0F3BE9B (HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276* __this, String_t* ___name0, HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___algorithm1, const RuntimeMethod* method) 
{
	{
		// public HashAlgorithmWrapper(string name, HashAlgorithm algorithm)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Name = name;
		String_t* L_0 = ___name0;
		HashAlgorithmWrapper_set_Name_m55FDB958D8C7764DA474DDFC0B1BB7F62ABE19C2_inline(__this, L_0, NULL);
		// this.algorithm = algorithm;
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_1 = ___algorithm1;
		__this->___algorithm_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___algorithm_0), (void*)L_1);
		// }
		return;
	}
}
// System.String MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HashAlgorithmWrapper_get_Name_mA981DF2776F5330C96871761712E35B8D2E340B8 (HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashAlgorithmWrapper_set_Name_m55FDB958D8C7764DA474DDFC0B1BB7F62ABE19C2 (HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper::get_HashLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashAlgorithmWrapper_get_HashLength_m16C280C5CCD4ACEC1CD4B936B5803821AFDCDA07 (HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276* __this, const RuntimeMethod* method) 
{
	{
		// public int HashLength { get { return algorithm.HashSize / 8; } }
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_0 = __this->___algorithm_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize() */, L_0);
		return ((int32_t)(L_1/8));
	}
}
// System.Byte[] MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper::ComputeHash(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithmWrapper_ComputeHash_m8CE0D2C7A312D641B2C6D14439C72265ECB4165A (HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	{
		// return algorithm.ComputeHash(stream);
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_0 = __this->___algorithm_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Byte[] MHLab.Patch.Core.Octodiff.HashAlgorithmWrapper::ComputeHash(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithmWrapper_ComputeHash_m16CB2772587E703AEBB2FBC0DFF17318D4292C90 (HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		// return algorithm.ComputeHash(buffer, offset, length);
		HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* L_0 = __this->___algorithm_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___length2;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = HashAlgorithm_ComputeHash_mFAB8CADA69B3BE03B1C974250EEC30ADF8805710(L_0, L_1, L_2, L_3, NULL);
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
// System.Void MHLab.Patch.Core.Octodiff.SignatureWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureWriter__ctor_m104E90A3917730D6B0BE788777BF9FE5BD93F278 (SignatureWriter_t5E4AD90C230598AA209C1C4B0B4230AFFE8E931F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___signatureStream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SignatureWriter(Stream signatureStream)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.signatureStream = new BinaryWriter(signatureStream);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___signatureStream0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_1, L_0, NULL);
		__this->___signatureStream_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___signatureStream_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.SignatureWriter::WriteMetadata(MHLab.Patch.Core.Octodiff.IHashAlgorithm,MHLab.Patch.Core.Octodiff.IRollingChecksum,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureWriter_WriteMetadata_mA610237543F9867FFE094F668904CEDF9D5795A8 (SignatureWriter_t5E4AD90C230598AA209C1C4B0B4230AFFE8E931F* __this, RuntimeObject* ___hashAlgorithm0, RuntimeObject* ___rollingChecksumAlgorithm1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hash2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashAlgorithm_tA8CBF0EE04BF54E101D8C322BE0B5838F82AFAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRollingChecksum_t26CD8FC9B98DC2967B4D3DB11E0D184E8E626999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// signatureStream.Write(BinaryFormat.SignatureHeader);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = __this->___signatureStream_0;
		il2cpp_codegen_runtime_class_init_inline(BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_StaticFields*)il2cpp_codegen_static_fields_for(BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var))->___SignatureHeader_0;
		NullCheck(L_0);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_0, L_1);
		// signatureStream.Write(BinaryFormat.Version);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = __this->___signatureStream_0;
		NullCheck(L_2);
		VirtualActionInvoker1< uint8_t >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_2, (uint8_t)1);
		// signatureStream.Write(hashAlgorithm.Name);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_3 = __this->___signatureStream_0;
		RuntimeObject* L_4 = ___hashAlgorithm0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String MHLab.Patch.Core.Octodiff.IHashAlgorithm::get_Name() */, IHashAlgorithm_tA8CBF0EE04BF54E101D8C322BE0B5838F82AFAFB_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_3, L_5);
		// signatureStream.Write(rollingChecksumAlgorithm.Name);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = __this->___signatureStream_0;
		RuntimeObject* L_7 = ___rollingChecksumAlgorithm1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String MHLab.Patch.Core.Octodiff.IRollingChecksum::get_Name() */, IRollingChecksum_t26CD8FC9B98DC2967B4D3DB11E0D184E8E626999_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(22 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_6, L_8);
		// signatureStream.Write(BinaryFormat.EndOfMetadata);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_9 = __this->___signatureStream_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_StaticFields*)il2cpp_codegen_static_fields_for(BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var))->___EndOfMetadata_2;
		NullCheck(L_9);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_9, L_10);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.SignatureWriter::WriteChunk(MHLab.Patch.Core.Octodiff.ChunkSignature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureWriter_WriteChunk_mC5C30C420258335F54027B72AC367C613FEF1B4C (SignatureWriter_t5E4AD90C230598AA209C1C4B0B4230AFFE8E931F* __this, ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* ___signature0, const RuntimeMethod* method) 
{
	{
		// signatureStream.Write(signature.Length);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = __this->___signatureStream_0;
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_1 = ___signature0;
		NullCheck(L_1);
		int16_t L_2 = L_1->___Length_1;
		NullCheck(L_0);
		VirtualActionInvoker1< int16_t >::Invoke(15 /* System.Void System.IO.BinaryWriter::Write(System.Int16) */, L_0, L_2);
		// signatureStream.Write(signature.RollingChecksum);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_3 = __this->___signatureStream_0;
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_4 = ___signature0;
		NullCheck(L_4);
		uint32_t L_5 = L_4->___RollingChecksum_3;
		NullCheck(L_3);
		VirtualActionInvoker1< uint32_t >::Invoke(18 /* System.Void System.IO.BinaryWriter::Write(System.UInt32) */, L_3, L_5);
		// signatureStream.Write(signature.Hash);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = __this->___signatureStream_0;
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_7 = ___signature0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7->___Hash_2;
		NullCheck(L_6);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_6, L_8);
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
// System.Void MHLab.Patch.Core.Octodiff.NullProgressReporter::ReportProgress(System.String,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullProgressReporter_ReportProgress_mE064A108E738DF4B6025C50A815817839F950657 (NullProgressReporter_t49220E3809B357BB31DE6A58C06AC1EC9CE06863* __this, String_t* ___operation0, int64_t ___currentPosition1, int64_t ___total2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.NullProgressReporter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullProgressReporter__ctor_mBF992826107A57387D3E07636ACB7FA2D1CAD650 (NullProgressReporter_t49220E3809B357BB31DE6A58C06AC1EC9CE06863* __this, const RuntimeMethod* method) 
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
// System.Void MHLab.Patch.Core.Octodiff.Signature::.ctor(MHLab.Patch.Core.Octodiff.IHashAlgorithm,MHLab.Patch.Core.Octodiff.IRollingChecksum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature__ctor_m8B1195954BB2F5938DB9A737C50645EFEA3F2A16 (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, RuntimeObject* ___hashAlgorithm0, RuntimeObject* ___rollingChecksumAlgorithm1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB380D28AFF1690ED4175C96C75BC109C0DA0E220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Signature(IHashAlgorithm hashAlgorithm, IRollingChecksum rollingChecksumAlgorithm)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// HashAlgorithm = hashAlgorithm;
		RuntimeObject* L_0 = ___hashAlgorithm0;
		Signature_set_HashAlgorithm_m922F620B7FAB28E335629A4A6186B45F70B5AB13_inline(__this, L_0, NULL);
		// RollingChecksumAlgorithm = rollingChecksumAlgorithm;
		RuntimeObject* L_1 = ___rollingChecksumAlgorithm1;
		Signature_set_RollingChecksumAlgorithm_m47AC600B0DBD2F19DC2F5A59F2E234A1BBD7D3F1_inline(__this, L_1, NULL);
		// Chunks = new List<ChunkSignature>();
		List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* L_2 = (List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8*)il2cpp_codegen_object_new(List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mB380D28AFF1690ED4175C96C75BC109C0DA0E220(L_2, List_1__ctor_mB380D28AFF1690ED4175C96C75BC109C0DA0E220_RuntimeMethod_var);
		Signature_set_Chunks_mBBFC9F8174C419CED85761CA7516877570DEE4B1_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.Signature::get_HashAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Signature_get_HashAlgorithm_m61AE3A0DE16E8ED573791DB688F923AA249CFE22 (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, const RuntimeMethod* method) 
{
	{
		// public IHashAlgorithm HashAlgorithm { get; private set; }
		RuntimeObject* L_0 = __this->___U3CHashAlgorithmU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.Signature::set_HashAlgorithm(MHLab.Patch.Core.Octodiff.IHashAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature_set_HashAlgorithm_m922F620B7FAB28E335629A4A6186B45F70B5AB13 (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IHashAlgorithm HashAlgorithm { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHashAlgorithmU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHashAlgorithmU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// MHLab.Patch.Core.Octodiff.IRollingChecksum MHLab.Patch.Core.Octodiff.Signature::get_RollingChecksumAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Signature_get_RollingChecksumAlgorithm_m1AC6DAB7E795831CF0CEF1DA4B241382691E1654 (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, const RuntimeMethod* method) 
{
	{
		// public IRollingChecksum RollingChecksumAlgorithm { get; private set; }
		RuntimeObject* L_0 = __this->___U3CRollingChecksumAlgorithmU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.Signature::set_RollingChecksumAlgorithm(MHLab.Patch.Core.Octodiff.IRollingChecksum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature_set_RollingChecksumAlgorithm_m47AC600B0DBD2F19DC2F5A59F2E234A1BBD7D3F1 (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IRollingChecksum RollingChecksumAlgorithm { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRollingChecksumAlgorithmU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRollingChecksumAlgorithmU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<MHLab.Patch.Core.Octodiff.ChunkSignature> MHLab.Patch.Core.Octodiff.Signature::get_Chunks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* Signature_get_Chunks_m701AE007E0D519447ACC0C9C0E39EA0C38352B52 (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, const RuntimeMethod* method) 
{
	{
		// public List<ChunkSignature> Chunks { get; private set; }
		List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* L_0 = __this->___U3CChunksU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.Signature::set_Chunks(System.Collections.Generic.List`1<MHLab.Patch.Core.Octodiff.ChunkSignature>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Signature_set_Chunks_mBBFC9F8174C419CED85761CA7516877570DEE4B1 (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<ChunkSignature> Chunks { get; private set; }
		List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* L_0 = ___value0;
		__this->___U3CChunksU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChunksU3Ek__BackingField_2), (void*)L_0);
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
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder__ctor_m1E30B57B3F7E30C7C4F7A3101D6FD12895699058 (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullProgressReporter_t49220E3809B357BB31DE6A58C06AC1EC9CE06863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SignatureBuilder()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ChunkSize = DefaultChunkSize;
		il2cpp_codegen_runtime_class_init_inline(SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var);
		int16_t L_0 = ((SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_StaticFields*)il2cpp_codegen_static_fields_for(SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var))->___DefaultChunkSize_1;
		SignatureBuilder_set_ChunkSize_mB80C824E33C1105621C54740DE3688570D1E322D(__this, L_0, NULL);
		// HashAlgorithm = SupportedAlgorithms.Hashing.Default();
		RuntimeObject* L_1;
		L_1 = Hashing_Default_m64446187BA7AC2C637C49DD3DCB3596E1DB45822(NULL);
		SignatureBuilder_set_HashAlgorithm_m4039EA2ECBAD8E38930D786000C5FE0C06D9DD8A_inline(__this, L_1, NULL);
		// RollingChecksumAlgorithm = SupportedAlgorithms.Checksum.Default();
		RuntimeObject* L_2;
		L_2 = Checksum_Default_m1D720DBC52633ADE1ACA787C9A37C66231EA3BFA(NULL);
		SignatureBuilder_set_RollingChecksumAlgorithm_mE02D0E1918990685714252C591D7FF3C3D5A5CCF_inline(__this, L_2, NULL);
		// ProgressReporter = new NullProgressReporter();
		NullProgressReporter_t49220E3809B357BB31DE6A58C06AC1EC9CE06863* L_3 = (NullProgressReporter_t49220E3809B357BB31DE6A58C06AC1EC9CE06863*)il2cpp_codegen_object_new(NullProgressReporter_t49220E3809B357BB31DE6A58C06AC1EC9CE06863_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		NullProgressReporter__ctor_mBF992826107A57387D3E07636ACB7FA2D1CAD650(L_3, NULL);
		SignatureBuilder_set_ProgressReporter_m6B662E2058A95F66D47909405B05CDAE285D93D3_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// MHLab.Patch.Core.Octodiff.IProgressReporter MHLab.Patch.Core.Octodiff.SignatureBuilder::get_ProgressReporter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignatureBuilder_get_ProgressReporter_m039F63F3A8C5C8D68E91DB6E406F636F8E1C9562 (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) 
{
	{
		// public IProgressReporter ProgressReporter { get; set; }
		RuntimeObject* L_0 = __this->___U3CProgressReporterU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::set_ProgressReporter(MHLab.Patch.Core.Octodiff.IProgressReporter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder_set_ProgressReporter_m6B662E2058A95F66D47909405B05CDAE285D93D3 (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IProgressReporter ProgressReporter { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CProgressReporterU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProgressReporterU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.SignatureBuilder::get_HashAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignatureBuilder_get_HashAlgorithm_mF8510A30E923F756D682D2559E2E5BF7F633D16D (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) 
{
	{
		// public IHashAlgorithm HashAlgorithm { get; set; }
		RuntimeObject* L_0 = __this->___U3CHashAlgorithmU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::set_HashAlgorithm(MHLab.Patch.Core.Octodiff.IHashAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder_set_HashAlgorithm_m4039EA2ECBAD8E38930D786000C5FE0C06D9DD8A (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IHashAlgorithm HashAlgorithm { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHashAlgorithmU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHashAlgorithmU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// MHLab.Patch.Core.Octodiff.IRollingChecksum MHLab.Patch.Core.Octodiff.SignatureBuilder::get_RollingChecksumAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SignatureBuilder_get_RollingChecksumAlgorithm_mE3C0C30516597145DB2B62671B67D33E25451FA6 (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) 
{
	{
		// public IRollingChecksum RollingChecksumAlgorithm { get; set; }
		RuntimeObject* L_0 = __this->___U3CRollingChecksumAlgorithmU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::set_RollingChecksumAlgorithm(MHLab.Patch.Core.Octodiff.IRollingChecksum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder_set_RollingChecksumAlgorithm_mE02D0E1918990685714252C591D7FF3C3D5A5CCF (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IRollingChecksum RollingChecksumAlgorithm { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRollingChecksumAlgorithmU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRollingChecksumAlgorithmU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Int16 MHLab.Patch.Core.Octodiff.SignatureBuilder::get_ChunkSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t SignatureBuilder_get_ChunkSize_m465C941647B4F76C8E35AFBD7F07068A81BCB70D (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) 
{
	{
		// get { return chunkSize; }
		int16_t L_0 = __this->___chunkSize_3;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::set_ChunkSize(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder_set_ChunkSize_mB80C824E33C1105621C54740DE3688570D1E322D (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value < MinimumChunkSize)
		int16_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var);
		int16_t L_1 = ((SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_StaticFields*)il2cpp_codegen_static_fields_for(SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var))->___MinimumChunkSize_0;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0022;
		}
	}
	{
		// throw new UsageException(string.Format("Chunk size cannot be less than {0}", MinimumChunkSize));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var)));
		int16_t L_2 = ((SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var))))->___MinimumChunkSize_0;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE95D9F65398F7FDD420D6306CF1E9DE41AB8FE48)), L_4, NULL);
		UsageException_t5765EEC5528206A2D84C5EA7C334C3DD9943EBC4* L_6 = (UsageException_t5765EEC5528206A2D84C5EA7C334C3DD9943EBC4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UsageException_t5765EEC5528206A2D84C5EA7C334C3DD9943EBC4_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		UsageException__ctor_m02FBEB510B96FAC7D67AC269443768C45910A2BA(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureBuilder_set_ChunkSize_mB80C824E33C1105621C54740DE3688570D1E322D_RuntimeMethod_var)));
	}

IL_0022:
	{
		// if (value > MaximumChunkSize)
		int16_t L_7 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var);
		int16_t L_8 = ((SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_StaticFields*)il2cpp_codegen_static_fields_for(SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var))->___MaximumChunkSize_2;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		// throw new UsageException(string.Format("Chunk size cannot be exceed {0}", MaximumChunkSize));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var)));
		int16_t L_9 = ((SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var))))->___MaximumChunkSize_2;
		int16_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral397AD22306FCCF42A9A8414AE74403693037DB02)), L_11, NULL);
		UsageException_t5765EEC5528206A2D84C5EA7C334C3DD9943EBC4* L_13 = (UsageException_t5765EEC5528206A2D84C5EA7C334C3DD9943EBC4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UsageException_t5765EEC5528206A2D84C5EA7C334C3DD9943EBC4_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		UsageException__ctor_m02FBEB510B96FAC7D67AC269443768C45910A2BA(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureBuilder_set_ChunkSize_mB80C824E33C1105621C54740DE3688570D1E322D_RuntimeMethod_var)));
	}

IL_0044:
	{
		// chunkSize = value;
		int16_t L_14 = ___value0;
		__this->___chunkSize_3 = L_14;
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::Build(System.IO.Stream,MHLab.Patch.Core.Octodiff.ISignatureWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder_Build_m7BBC654C4FC1FE4C0E758B45F7DA720753DD13CA (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___signatureWriter1, const RuntimeMethod* method) 
{
	{
		// WriteMetadata(stream, signatureWriter);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		RuntimeObject* L_1 = ___signatureWriter1;
		SignatureBuilder_WriteMetadata_mC0D8B1FD28DAD986B77086B3B62A9043E07BCFB0(__this, L_0, L_1, NULL);
		// WriteChunkSignatures(stream, signatureWriter);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		RuntimeObject* L_3 = ___signatureWriter1;
		SignatureBuilder_WriteChunkSignatures_m37E1731ED54DA4B7687677FE11923655300D6FE8(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::WriteMetadata(System.IO.Stream,MHLab.Patch.Core.Octodiff.ISignatureWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder_WriteMetadata_mC0D8B1FD28DAD986B77086B3B62A9043E07BCFB0 (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___signatureWriter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashAlgorithm_tA8CBF0EE04BF54E101D8C322BE0B5838F82AFAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignatureWriter_tA5E8820AF6C8AB184B0BB76588E270EDC72EEBE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// stream.Seek(0, SeekOrigin.Begin);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, ((int64_t)0), 0);
		// var hash = HashAlgorithm.ComputeHash(stream);
		RuntimeObject* L_2;
		L_2 = SignatureBuilder_get_HashAlgorithm_mF8510A30E923F756D682D2559E2E5BF7F633D16D_inline(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___stream0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(2 /* System.Byte[] MHLab.Patch.Core.Octodiff.IHashAlgorithm::ComputeHash(System.IO.Stream) */, IHashAlgorithm_tA8CBF0EE04BF54E101D8C322BE0B5838F82AFAFB_il2cpp_TypeInfo_var, L_2, L_3);
		V_0 = L_4;
		// signatureWriter.WriteMetadata(HashAlgorithm, RollingChecksumAlgorithm, hash);
		RuntimeObject* L_5 = ___signatureWriter1;
		RuntimeObject* L_6;
		L_6 = SignatureBuilder_get_HashAlgorithm_mF8510A30E923F756D682D2559E2E5BF7F633D16D_inline(__this, NULL);
		RuntimeObject* L_7;
		L_7 = SignatureBuilder_get_RollingChecksumAlgorithm_mE3C0C30516597145DB2B62671B67D33E25451FA6_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Void MHLab.Patch.Core.Octodiff.ISignatureWriter::WriteMetadata(MHLab.Patch.Core.Octodiff.IHashAlgorithm,MHLab.Patch.Core.Octodiff.IRollingChecksum,System.Byte[]) */, ISignatureWriter_tA5E8820AF6C8AB184B0BB76588E270EDC72EEBE8_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::WriteChunkSignatures(System.IO.Stream,MHLab.Patch.Core.Octodiff.ISignatureWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder_WriteChunkSignatures_m37E1731ED54DA4B7687677FE11923655300D6FE8 (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___signatureWriter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashAlgorithm_tA8CBF0EE04BF54E101D8C322BE0B5838F82AFAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressReporter_t00CFCEED6169C90F076DEA60514A2AC92A6F7849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRollingChecksum_t26CD8FC9B98DC2967B4D3DB11E0D184E8E626999_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignatureWriter_tA5E8820AF6C8AB184B0BB76588E270EDC72EEBE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47129985C61D06083C044EB99BD79ED1E440F149);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		// var checksumAlgorithm = RollingChecksumAlgorithm;
		RuntimeObject* L_0;
		L_0 = SignatureBuilder_get_RollingChecksumAlgorithm_mE3C0C30516597145DB2B62671B67D33E25451FA6_inline(__this, NULL);
		V_0 = L_0;
		// var hashAlgorithm = HashAlgorithm;
		RuntimeObject* L_1;
		L_1 = SignatureBuilder_get_HashAlgorithm_mF8510A30E923F756D682D2559E2E5BF7F633D16D_inline(__this, NULL);
		V_1 = L_1;
		// stream.Seek(0, SeekOrigin.Begin);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_2, ((int64_t)0), 0);
		// long start = 0;
		V_2 = ((int64_t)0);
		// var block = new byte[ChunkSize];
		int16_t L_4;
		L_4 = SignatureBuilder_get_ChunkSize_m465C941647B4F76C8E35AFBD7F07068A81BCB70D_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_4 = L_5;
		goto IL_0080;
	}

IL_002a:
	{
		// signatureWriter.WriteChunk(new ChunkSignature
		// {
		//     StartOffset = start,
		//     Length = (short)read,
		//     Hash = hashAlgorithm.ComputeHash(block, 0, read),
		//     RollingChecksum = checksumAlgorithm.Calculate(block, 0, read)
		// });
		RuntimeObject* L_6 = ___signatureWriter1;
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_7 = (ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010*)il2cpp_codegen_object_new(ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ChunkSignature__ctor_m8174B81E7E57CA4E9C5F01803FEE0C2E0E3E04E4(L_7, NULL);
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_8 = L_7;
		int64_t L_9 = V_2;
		NullCheck(L_8);
		L_8->___StartOffset_0 = L_9;
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_10 = L_8;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		L_10->___Length_1 = ((int16_t)L_11);
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_12 = L_10;
		RuntimeObject* L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_4;
		int32_t L_15 = V_3;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(3 /* System.Byte[] MHLab.Patch.Core.Octodiff.IHashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32) */, IHashAlgorithm_tA8CBF0EE04BF54E101D8C322BE0B5838F82AFAFB_il2cpp_TypeInfo_var, L_13, L_14, 0, L_15);
		NullCheck(L_12);
		L_12->___Hash_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___Hash_2), (void*)L_16);
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_17 = L_12;
		RuntimeObject* L_18 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_4;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		uint32_t L_21;
		L_21 = InterfaceFuncInvoker3< uint32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(1 /* System.UInt32 MHLab.Patch.Core.Octodiff.IRollingChecksum::Calculate(System.Byte[],System.Int32,System.Int32) */, IRollingChecksum_t26CD8FC9B98DC2967B4D3DB11E0D184E8E626999_il2cpp_TypeInfo_var, L_18, L_19, 0, L_20);
		NullCheck(L_17);
		L_17->___RollingChecksum_3 = L_21;
		NullCheck(L_6);
		InterfaceActionInvoker1< ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* >::Invoke(1 /* System.Void MHLab.Patch.Core.Octodiff.ISignatureWriter::WriteChunk(MHLab.Patch.Core.Octodiff.ChunkSignature) */, ISignatureWriter_tA5E8820AF6C8AB184B0BB76588E270EDC72EEBE8_il2cpp_TypeInfo_var, L_6, L_17);
		// start += read;
		int64_t L_22 = V_2;
		int32_t L_23 = V_3;
		V_2 = ((int64_t)il2cpp_codegen_add(L_22, ((int64_t)L_23)));
		// ProgressReporter.ReportProgress("Building signatures", start, stream.Length);
		RuntimeObject* L_24;
		L_24 = SignatureBuilder_get_ProgressReporter_m039F63F3A8C5C8D68E91DB6E406F636F8E1C9562_inline(__this, NULL);
		int64_t L_25 = V_2;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_26 = ___stream0;
		NullCheck(L_26);
		int64_t L_27;
		L_27 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_26);
		NullCheck(L_24);
		InterfaceActionInvoker3< String_t*, int64_t, int64_t >::Invoke(0 /* System.Void MHLab.Patch.Core.Octodiff.IProgressReporter::ReportProgress(System.String,System.Int64,System.Int64) */, IProgressReporter_t00CFCEED6169C90F076DEA60514A2AC92A6F7849_il2cpp_TypeInfo_var, L_24, _stringLiteral47129985C61D06083C044EB99BD79ED1E440F149, L_25, L_27);
	}

IL_0080:
	{
		// while ((read = stream.Read(block, 0, block.Length)) > 0)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_4;
		NullCheck(L_30);
		NullCheck(L_28);
		int32_t L_31;
		L_31 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, ((int32_t)(((RuntimeArray*)L_30)->max_length)));
		int32_t L_32 = L_31;
		V_3 = L_32;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.SignatureBuilder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureBuilder__cctor_m9FF22D2931D0453654E57F033F7C923FF8C402AE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly short MinimumChunkSize = 128;
		((SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_StaticFields*)il2cpp_codegen_static_fields_for(SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var))->___MinimumChunkSize_0 = (int16_t)((int32_t)128);
		// public static readonly short DefaultChunkSize = 2048;
		((SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_StaticFields*)il2cpp_codegen_static_fields_for(SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var))->___DefaultChunkSize_1 = (int16_t)((int32_t)2048);
		// public static readonly short MaximumChunkSize = 31 * 1024;
		((SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_StaticFields*)il2cpp_codegen_static_fields_for(SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D_il2cpp_TypeInfo_var))->___MaximumChunkSize_2 = (int16_t)((int32_t)31744);
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
// System.Void MHLab.Patch.Core.Octodiff.SignatureReader::.ctor(System.String,MHLab.Patch.Core.Octodiff.IProgressReporter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureReader__ctor_m2931770F3FB202CCA3E1CE398246626F39AE22E8 (SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8* __this, String_t* ___signatureFileName0, RuntimeObject* ___reporter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SignatureReader(string signatureFileName, IProgressReporter reporter)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.reporter = reporter;
		RuntimeObject* L_0 = ___reporter1;
		__this->___reporter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reporter_0), (void*)L_0);
		// this.reader = new BinaryReader(new FileStream(signatureFileName, FileMode.Open, FileAccess.Read));
		String_t* L_1 = ___signatureFileName0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9(L_2, L_1, 3, 1, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_3, L_2, NULL);
		__this->___reader_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_1), (void*)L_3);
		// }
		return;
	}
}
// MHLab.Patch.Core.Octodiff.Signature MHLab.Patch.Core.Octodiff.SignatureReader::ReadSignature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* SignatureReader_ReadSignature_m8EA654619F508BB8DB200F339C476AC1D5943279 (SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashAlgorithm_tA8CBF0EE04BF54E101D8C322BE0B5838F82AFAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB405206D3E60FD48F1F4596F78D215CEF498F80A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* V_3 = NULL;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	uint32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// Progress();
		SignatureReader_Progress_mE31BEE915BB5731CD964101393A82AC9F039742A(__this, NULL);
		// var header = reader.ReadBytes(BinaryFormat.SignatureHeader.Length);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = __this->___reader_1;
		il2cpp_codegen_runtime_class_init_inline(BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_StaticFields*)il2cpp_codegen_static_fields_for(BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var))->___SignatureHeader_0;
		NullCheck(L_1);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)));
		V_0 = L_2;
		// if (!BinaryComparer.CompareArray(BinaryFormat.SignatureHeader, header))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_StaticFields*)il2cpp_codegen_static_fields_for(BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var))->___SignatureHeader_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		bool L_5;
		L_5 = BinaryComparer_CompareArray_m9A61ACB0873BB861CFD4BC397BD67AE436F53B30(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		// throw new CorruptFileFormatException("The signature file appears to be corrupt.");
		CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58* L_6 = (CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		CorruptFileFormatException__ctor_m554F01889101CC403F66D384DD587C877EAFA3D3(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E284B545FEABA735A2C1DBD74243FC42D31BD57)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureReader_ReadSignature_m8EA654619F508BB8DB200F339C476AC1D5943279_RuntimeMethod_var)));
	}

IL_0031:
	{
		// var version = reader.ReadByte();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = __this->___reader_1;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_7);
		// if (version != BinaryFormat.Version)
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		// throw new CorruptFileFormatException("The signature file uses a newer file format than this program can handle.");
		CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58* L_9 = (CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		CorruptFileFormatException__ctor_m554F01889101CC403F66D384DD587C877EAFA3D3(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD07686D0577E76D3E0A4BBF69F33BE9DAD888D03)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureReader_ReadSignature_m8EA654619F508BB8DB200F339C476AC1D5943279_RuntimeMethod_var)));
	}

IL_004a:
	{
		// var hashAlgorithm = reader.ReadString();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = __this->___reader_1;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.IO.BinaryReader::ReadString() */, L_10);
		// var rollingChecksumAlgorithm = reader.ReadString();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = __this->___reader_1;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.IO.BinaryReader::ReadString() */, L_12);
		V_1 = L_13;
		// var endOfMeta = reader.ReadBytes(BinaryFormat.EndOfMetadata.Length);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = __this->___reader_1;
		il2cpp_codegen_runtime_class_init_inline(BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_StaticFields*)il2cpp_codegen_static_fields_for(BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var))->___EndOfMetadata_2;
		NullCheck(L_15);
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_14, ((int32_t)(((RuntimeArray*)L_15)->max_length)));
		V_2 = L_16;
		// if (!BinaryComparer.CompareArray(BinaryFormat.EndOfMetadata, endOfMeta))
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ((BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_StaticFields*)il2cpp_codegen_static_fields_for(BinaryFormat_tE76DA8A804A69648BAF7441857AE1726F1806897_il2cpp_TypeInfo_var))->___EndOfMetadata_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		bool L_19;
		L_19 = BinaryComparer_CompareArray_m9A61ACB0873BB861CFD4BC397BD67AE436F53B30(L_17, L_18, NULL);
		G_B5_0 = L_11;
		if (L_19)
		{
			G_B6_0 = L_11;
			goto IL_008c;
		}
	}
	{
		// throw new CorruptFileFormatException("The signature file appears to be corrupt.");
		CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58* L_20 = (CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		CorruptFileFormatException__ctor_m554F01889101CC403F66D384DD587C877EAFA3D3(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E284B545FEABA735A2C1DBD74243FC42D31BD57)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureReader_ReadSignature_m8EA654619F508BB8DB200F339C476AC1D5943279_RuntimeMethod_var)));
	}

IL_008c:
	{
		// Progress();
		SignatureReader_Progress_mE31BEE915BB5731CD964101393A82AC9F039742A(__this, NULL);
		// var hashAlgo = SupportedAlgorithms.Hashing.Create(hashAlgorithm);
		RuntimeObject* L_21;
		L_21 = Hashing_Create_mCAAC84D02815D40F1BFD130B6395B075D08BB1BF(G_B6_0, NULL);
		// var signature = new Signature(
		//     hashAlgo,
		//     SupportedAlgorithms.Checksum.Create(rollingChecksumAlgorithm));
		RuntimeObject* L_22 = L_21;
		String_t* L_23 = V_1;
		RuntimeObject* L_24;
		L_24 = Checksum_Create_mEF705FF70F400C74F2E7ECD1ED9E3A2F0D7A6947(L_23, NULL);
		Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* L_25 = (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256*)il2cpp_codegen_object_new(Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Signature__ctor_m8B1195954BB2F5938DB9A737C50645EFEA3F2A16(L_25, L_22, L_24, NULL);
		V_3 = L_25;
		// var expectedHashLength = hashAlgo.HashLength;
		NullCheck(L_22);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 MHLab.Patch.Core.Octodiff.IHashAlgorithm::get_HashLength() */, IHashAlgorithm_tA8CBF0EE04BF54E101D8C322BE0B5838F82AFAFB_il2cpp_TypeInfo_var, L_22);
		V_4 = L_26;
		// long start = 0;
		V_5 = ((int64_t)0);
		// var fileLength = reader.BaseStream.Length;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = __this->___reader_1;
		NullCheck(L_27);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28;
		L_28 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_27);
		NullCheck(L_28);
		int64_t L_29;
		L_29 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_28);
		V_6 = L_29;
		// var remainingBytes = fileLength - reader.BaseStream.Position;
		int64_t L_30 = V_6;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_31 = __this->___reader_1;
		NullCheck(L_31);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_32;
		L_32 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_31);
		NullCheck(L_32);
		int64_t L_33;
		L_33 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_32);
		// var signatureSize = sizeof (ushort) + sizeof (uint) + expectedHashLength;
		int32_t L_34 = V_4;
		V_7 = ((int32_t)il2cpp_codegen_add(6, L_34));
		// if (remainingBytes % signatureSize != 0)
		int32_t L_35 = V_7;
		if (!((int64_t)(((int64_t)il2cpp_codegen_subtract(L_30, L_33))%((int64_t)L_35))))
		{
			goto IL_0152;
		}
	}
	{
		// throw new CorruptFileFormatException("The signature file appears to be corrupt; at least one chunk has data missing.");
		CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58* L_36 = (CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CorruptFileFormatException_tE53CC383B2D7BA7BBE100924217E21397F594E58_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		CorruptFileFormatException__ctor_m554F01889101CC403F66D384DD587C877EAFA3D3(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral71CE889ED625DFF7D8ECF98C3BC553C976079455)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SignatureReader_ReadSignature_m8EA654619F508BB8DB200F339C476AC1D5943279_RuntimeMethod_var)));
	}

IL_00eb:
	{
		// var length = reader.ReadInt16();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_37 = __this->___reader_1;
		NullCheck(L_37);
		int16_t L_38;
		L_38 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_37);
		V_8 = L_38;
		// var checksum = reader.ReadUInt32();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_39 = __this->___reader_1;
		NullCheck(L_39);
		uint32_t L_40;
		L_40 = VirtualFuncInvoker0< uint32_t >::Invoke(17 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_39);
		V_9 = L_40;
		// var chunkHash = reader.ReadBytes(expectedHashLength);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_41 = __this->___reader_1;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43;
		L_43 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(26 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_41, L_42);
		V_10 = L_43;
		// signature.Chunks.Add(new ChunkSignature
		// {
		//     StartOffset = start,
		//     Length = length,
		//     RollingChecksum = checksum,
		//     Hash = chunkHash
		// });
		Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* L_44 = V_3;
		NullCheck(L_44);
		List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* L_45;
		L_45 = Signature_get_Chunks_m701AE007E0D519447ACC0C9C0E39EA0C38352B52_inline(L_44, NULL);
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_46 = (ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010*)il2cpp_codegen_object_new(ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		ChunkSignature__ctor_m8174B81E7E57CA4E9C5F01803FEE0C2E0E3E04E4(L_46, NULL);
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_47 = L_46;
		int64_t L_48 = V_5;
		NullCheck(L_47);
		L_47->___StartOffset_0 = L_48;
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_49 = L_47;
		int16_t L_50 = V_8;
		NullCheck(L_49);
		L_49->___Length_1 = L_50;
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_51 = L_49;
		uint32_t L_52 = V_9;
		NullCheck(L_51);
		L_51->___RollingChecksum_3 = L_52;
		ChunkSignature_t99D2C91FFA650DD29710BFFF292682F05447D010* L_53 = L_51;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_10;
		NullCheck(L_53);
		L_53->___Hash_2 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&L_53->___Hash_2), (void*)L_54);
		NullCheck(L_45);
		List_1_Add_mB405206D3E60FD48F1F4596F78D215CEF498F80A_inline(L_45, L_53, List_1_Add_mB405206D3E60FD48F1F4596F78D215CEF498F80A_RuntimeMethod_var);
		// start += length;
		int64_t L_55 = V_5;
		int16_t L_56 = V_8;
		V_5 = ((int64_t)il2cpp_codegen_add(L_55, ((int64_t)L_56)));
		// Progress();
		SignatureReader_Progress_mE31BEE915BB5731CD964101393A82AC9F039742A(__this, NULL);
	}

IL_0152:
	{
		// while (reader.BaseStream.Position < fileLength - 1)
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_57 = __this->___reader_1;
		NullCheck(L_57);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_58;
		L_58 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_57);
		NullCheck(L_58);
		int64_t L_59;
		L_59 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_58);
		int64_t L_60 = V_6;
		if ((((int64_t)L_59) < ((int64_t)((int64_t)il2cpp_codegen_subtract(L_60, ((int64_t)1))))))
		{
			goto IL_00eb;
		}
	}
	{
		// return signature;
		Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* L_61 = V_3;
		return L_61;
	}
}
// System.Void MHLab.Patch.Core.Octodiff.SignatureReader::Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignatureReader_Progress_mE31BEE915BB5731CD964101393A82AC9F039742A (SignatureReader_t98AA8C7B48CCC2DBA8F08C134E6E428F2E6B4EF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressReporter_t00CFCEED6169C90F076DEA60514A2AC92A6F7849_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C11E7AB783DD1B3DB090FBD3F5FFB3DACC06BB1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reporter.ReportProgress("Reading signature", reader.BaseStream.Position, reader.BaseStream.Length);
		RuntimeObject* L_0 = __this->___reporter_0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = __this->___reader_1;
		NullCheck(L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2;
		L_2 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_1);
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = __this->___reader_1;
		NullCheck(L_4);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5;
		L_5 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_4);
		NullCheck(L_5);
		int64_t L_6;
		L_6 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_5);
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, int64_t, int64_t >::Invoke(0 /* System.Void MHLab.Patch.Core.Octodiff.IProgressReporter::ReportProgress(System.String,System.Int64,System.Int64) */, IProgressReporter_t00CFCEED6169C90F076DEA60514A2AC92A6F7849_il2cpp_TypeInfo_var, L_0, _stringLiteral8C11E7AB783DD1B3DB090FBD3F5FFB3DACC06BB1, L_3, L_6);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Hashing::Sha1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashing_Sha1_m247195B2653F06E097FD4FD220AEFD4A93A9CD16 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new HashAlgorithmWrapper("SHA1", SHA1.Create());
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_0;
		L_0 = SHA1_Create_m6F713539D55576456BDF91B7BFC7103ED8CB766C(NULL);
		HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276* L_1 = (HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276*)il2cpp_codegen_object_new(HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashAlgorithmWrapper__ctor_m810B42F0AD13644BC0271F5068376892D0F3BE9B(L_1, _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B, L_0, NULL);
		return L_1;
	}
}
// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Hashing::Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashing_Default_m64446187BA7AC2C637C49DD3DCB3596E1DB45822 (const RuntimeMethod* method) 
{
	{
		// return Sha1();
		RuntimeObject* L_0;
		L_0 = Hashing_Sha1_m247195B2653F06E097FD4FD220AEFD4A93A9CD16(NULL);
		return L_0;
	}
}
// MHLab.Patch.Core.Octodiff.IHashAlgorithm MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Hashing::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashing_Create_mCAAC84D02815D40F1BFD130B6395B075D08BB1BF (String_t* ___algorithm0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (algorithm == "SHA1")
		String_t* L_0 = ___algorithm0;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral52BDFA54A164366A4CCA7F4E8E9D4CC3289B914B, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return Sha1();
		RuntimeObject* L_2;
		L_2 = Hashing_Sha1_m247195B2653F06E097FD4FD220AEFD4A93A9CD16(NULL);
		return L_2;
	}

IL_0013:
	{
		// throw new CompatibilityException(string.Format("The hash algorithm '{0}' is not supported in this version of Octodiff", algorithm));
		String_t* L_3 = ___algorithm0;
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5DFA3405132DA45AB225A47DFDE77887E87FA66)), L_3, NULL);
		CompatibilityException_t909D280FEC66B482A145F63F7F752206302A8765* L_5 = (CompatibilityException_t909D280FEC66B482A145F63F7F752206302A8765*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompatibilityException_t909D280FEC66B482A145F63F7F752206302A8765_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		CompatibilityException__ctor_m0ACB4C3E420FFF50203F2367A8781800F4E8E61A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashing_Create_mCAAC84D02815D40F1BFD130B6395B075D08BB1BF_RuntimeMethod_var)));
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
// MHLab.Patch.Core.Octodiff.IRollingChecksum MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Checksum::Adler32Rolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Checksum_Adler32Rolling_m92B591EB328686EADA8F987E8DA9BF24EB686DD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler32RollingChecksum_t706C2DD9268408FF198FBFA22DEFCF780382D035_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IRollingChecksum Adler32Rolling() { return new Adler32RollingChecksum();  }
		Adler32RollingChecksum_t706C2DD9268408FF198FBFA22DEFCF780382D035* L_0 = (Adler32RollingChecksum_t706C2DD9268408FF198FBFA22DEFCF780382D035*)il2cpp_codegen_object_new(Adler32RollingChecksum_t706C2DD9268408FF198FBFA22DEFCF780382D035_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Adler32RollingChecksum__ctor_m56A2842908FD7BA4BA7BB50677C300A8317FE8F3(L_0, NULL);
		return L_0;
	}
}
// MHLab.Patch.Core.Octodiff.IRollingChecksum MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Checksum::Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Checksum_Default_m1D720DBC52633ADE1ACA787C9A37C66231EA3BFA (const RuntimeMethod* method) 
{
	{
		// return Adler32Rolling();
		RuntimeObject* L_0;
		L_0 = Checksum_Adler32Rolling_m92B591EB328686EADA8F987E8DA9BF24EB686DD0(NULL);
		return L_0;
	}
}
// MHLab.Patch.Core.Octodiff.IRollingChecksum MHLab.Patch.Core.Octodiff.SupportedAlgorithms/Checksum::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Checksum_Create_mEF705FF70F400C74F2E7ECD1ED9E3A2F0D7A6947 (String_t* ___algorithm0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E22E510891DAB00B168113003C6A37CE8F2AA6A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (algorithm == "Adler32")
		String_t* L_0 = ___algorithm0;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral9E22E510891DAB00B168113003C6A37CE8F2AA6A, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return Adler32Rolling();
		RuntimeObject* L_2;
		L_2 = Checksum_Adler32Rolling_m92B591EB328686EADA8F987E8DA9BF24EB686DD0(NULL);
		return L_2;
	}

IL_0013:
	{
		// throw new CompatibilityException(string.Format("The rolling checksum algorithm '{0}' is not supported in this version of Octodiff", algorithm));
		String_t* L_3 = ___algorithm0;
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE7ABB94FD0FC1728AA3706CAD7761D082FAF188)), L_3, NULL);
		CompatibilityException_t909D280FEC66B482A145F63F7F752206302A8765* L_5 = (CompatibilityException_t909D280FEC66B482A145F63F7F752206302A8765*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompatibilityException_t909D280FEC66B482A145F63F7F752206302A8765_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		CompatibilityException__ctor_m0ACB4C3E420FFF50203F2367A8781800F4E8E61A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Checksum_Create_mEF705FF70F400C74F2E7ECD1ED9E3A2F0D7A6947_RuntimeMethod_var)));
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
// System.Void MHLab.Patch.Core.Octodiff.UsageException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UsageException__ctor_m02FBEB510B96FAC7D67AC269443768C45910A2BA (UsageException_t5765EEC5528206A2D84C5EA7C334C3DD9943EBC4* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UsageException(string message) : base(message)
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
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
// System.Void MHLab.Patch.Core.Logging.SimpleLogger::.ctor(MHLab.Patch.Core.IO.IFileSystem,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLogger__ctor_mCA91F3682E9BE4971B5567EB48C4E7C8DA6E0C5D (SimpleLogger_t078F01C7C6458CC74764B51F13B0BA0F5E88DE4F* __this, RuntimeObject* ___fileSystem0, String_t* ___logfilePath1, bool ___isDebug2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFileSystem_t1113B7B3A20C19DB92F5D866E5A26730EFC8F1E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public SimpleLogger(IFileSystem fileSystem, string logfilePath, bool isDebug)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _isDebug    = isDebug;
		bool L_0 = ___isDebug2;
		__this->____isDebug_0 = L_0;
		// _fileSystem = fileSystem;
		RuntimeObject* L_1 = ___fileSystem0;
		__this->____fileSystem_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fileSystem_2), (void*)L_1);
		// var filePath = new FilePath(_fileSystem.GetDirectoryPath((FilePath)logfilePath).FullPath, logfilePath);
		RuntimeObject* L_2 = __this->____fileSystem_2;
		String_t* L_3 = ___logfilePath1;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_4;
		L_4 = FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4(L_3, NULL);
		NullCheck(L_2);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_5;
		L_5 = InterfaceFuncInvoker1< FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 >::Invoke(1 /* MHLab.Patch.Core.IO.FilePath MHLab.Patch.Core.IO.IFileSystem::GetDirectoryPath(MHLab.Patch.Core.IO.FilePath) */, IFileSystem_t1113B7B3A20C19DB92F5D866E5A26730EFC8F1E8_il2cpp_TypeInfo_var, L_2, L_4);
		String_t* L_6 = L_5.___FullPath_1;
		String_t* L_7 = ___logfilePath1;
		FilePath__ctor_m745E953E5FF3004F480828DB2FF0FA10859F25D9((&V_0), L_6, L_7, NULL);
		// _fileSystem.CreateDirectory((FilePath)filePath.BasePath);
		RuntimeObject* L_8 = __this->____fileSystem_2;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_9 = V_0;
		String_t* L_10 = L_9.___BasePath_0;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_11;
		L_11 = FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4(L_10, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 >::Invoke(0 /* System.Void MHLab.Patch.Core.IO.IFileSystem::CreateDirectory(MHLab.Patch.Core.IO.FilePath) */, IFileSystem_t1113B7B3A20C19DB92F5D866E5A26730EFC8F1E8_il2cpp_TypeInfo_var, L_8, L_11);
		// _streamWriter           = new StreamWriter(_fileSystem.GetFileStream(filePath, FileMode.Append, FileAccess.Write, FileShare.ReadWrite));
		RuntimeObject* L_12 = __this->____fileSystem_2;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_13 = V_0;
		NullCheck(L_12);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14;
		L_14 = InterfaceFuncInvoker4< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0, int32_t, int32_t, int32_t >::Invoke(16 /* System.IO.Stream MHLab.Patch.Core.IO.IFileSystem::GetFileStream(MHLab.Patch.Core.IO.FilePath,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare) */, IFileSystem_t1113B7B3A20C19DB92F5D866E5A26730EFC8F1E8_il2cpp_TypeInfo_var, L_12, L_13, 6, 2, 3);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_15 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B(L_15, L_14, NULL);
		__this->____streamWriter_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____streamWriter_1), (void*)L_15);
		// _streamWriter.AutoFlush = true;
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_16 = __this->____streamWriter_1;
		NullCheck(L_16);
		VirtualActionInvoker1< bool >::Invoke(28 /* System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean) */, L_16, (bool)1);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Logging.SimpleLogger::Debug(System.String,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLogger_Debug_m8BC9332F21BF658143F7197C9AEBEF1D2E32E896 (SimpleLogger_t078F01C7C6458CC74764B51F13B0BA0F5E88DE4F* __this, String_t* ___messageTemplate0, String_t* ___callerPath1, int64_t ___callerLine2, String_t* ___callerMember3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71526C5D34999CFA5E9AAF00653DBD0DD542E84F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_isDebug) return;
		bool L_0 = __this->____isDebug_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_isDebug) return;
		return;
	}

IL_0009:
	{
		// _streamWriter.WriteLine(BuildMessage(messageTemplate, "DBG", callerPath, callerLine, callerMember));
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_1 = __this->____streamWriter_1;
		String_t* L_2 = ___messageTemplate0;
		String_t* L_3 = ___callerPath1;
		int64_t L_4 = ___callerLine2;
		String_t* L_5 = ___callerMember3;
		String_t* L_6;
		L_6 = SimpleLogger_BuildMessage_m7AD1C7E8A5224D3AF43600BF3F7EBBAB37B54B51(__this, L_2, _stringLiteral71526C5D34999CFA5E9AAF00653DBD0DD542E84F, L_3, L_4, L_5, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_1, L_6);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Logging.SimpleLogger::Info(System.String,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLogger_Info_m13438509A1BC059F5DF4466147B8629506B5F35C (SimpleLogger_t078F01C7C6458CC74764B51F13B0BA0F5E88DE4F* __this, String_t* ___messageTemplate0, String_t* ___callerPath1, int64_t ___callerLine2, String_t* ___callerMember3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA13C967E585F33FC40DF14B485AC69E7C90855E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _streamWriter.WriteLine(BuildMessage(messageTemplate, "INF", callerPath, callerLine, callerMember));
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->____streamWriter_1;
		String_t* L_1 = ___messageTemplate0;
		String_t* L_2 = ___callerPath1;
		int64_t L_3 = ___callerLine2;
		String_t* L_4 = ___callerMember3;
		String_t* L_5;
		L_5 = SimpleLogger_BuildMessage_m7AD1C7E8A5224D3AF43600BF3F7EBBAB37B54B51(__this, L_1, _stringLiteralFA13C967E585F33FC40DF14B485AC69E7C90855E, L_2, L_3, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Logging.SimpleLogger::Warning(System.String,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLogger_Warning_m7EF3611BCFB850E6A30EE5E036CC3B3F61C60420 (SimpleLogger_t078F01C7C6458CC74764B51F13B0BA0F5E88DE4F* __this, String_t* ___messageTemplate0, String_t* ___callerPath1, int64_t ___callerLine2, String_t* ___callerMember3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579FCA2DAB445A1C3F967C09D5DBC981EF4680EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _streamWriter.WriteLine(BuildMessage(messageTemplate, "WRN", callerPath, callerLine, callerMember));
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->____streamWriter_1;
		String_t* L_1 = ___messageTemplate0;
		String_t* L_2 = ___callerPath1;
		int64_t L_3 = ___callerLine2;
		String_t* L_4 = ___callerMember3;
		String_t* L_5;
		L_5 = SimpleLogger_BuildMessage_m7AD1C7E8A5224D3AF43600BF3F7EBBAB37B54B51(__this, L_1, _stringLiteral579FCA2DAB445A1C3F967C09D5DBC981EF4680EC, L_2, L_3, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Logging.SimpleLogger::Error(System.Exception,System.String,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLogger_Error_m1D49684660CB43E89C99EE238C3AFD96C4A3FB05 (SimpleLogger_t078F01C7C6458CC74764B51F13B0BA0F5E88DE4F* __this, Exception_t* ___exception0, String_t* ___messageTemplate1, String_t* ___callerPath2, int64_t ___callerLine3, String_t* ___callerMember4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA76D5B769D4CA0D02CE3E8E2C5F414631717B251);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _streamWriter.WriteLine(BuildMessage(messageTemplate, "ERR", callerPath, callerLine, callerMember));
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->____streamWriter_1;
		String_t* L_1 = ___messageTemplate1;
		String_t* L_2 = ___callerPath2;
		int64_t L_3 = ___callerLine3;
		String_t* L_4 = ___callerMember4;
		String_t* L_5;
		L_5 = SimpleLogger_BuildMessage_m7AD1C7E8A5224D3AF43600BF3F7EBBAB37B54B51(__this, L_1, _stringLiteralA76D5B769D4CA0D02CE3E8E2C5F414631717B251, L_2, L_3, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_0, L_5);
		// if (exception != null)
		Exception_t* L_6 = ___exception0;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// _streamWriter.WriteLine(exception.Message);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_7 = __this->____streamWriter_1;
		Exception_t* L_8 = ___exception0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_8);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_7, L_9);
		// _streamWriter.WriteLine(exception.StackTrace);
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_10 = __this->____streamWriter_1;
		Exception_t* L_11 = ___exception0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Exception::get_StackTrace() */, L_11);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_10, L_12);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.String MHLab.Patch.Core.Logging.SimpleLogger::BuildMessage(System.String,System.String,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleLogger_BuildMessage_m7AD1C7E8A5224D3AF43600BF3F7EBBAB37B54B51 (SimpleLogger_t078F01C7C6458CC74764B51F13B0BA0F5E88DE4F* __this, String_t* ___messageTemplate0, String_t* ___level1, String_t* ___callerPath2, int64_t ___callerLine3, String_t* ___callerMember4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD63EA1D36E774A7D28A6699C6CA4DFA6379BC624);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (_isDebug)
		bool L_0 = __this->____isDebug_0;
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		// var caller = Path.GetFileName(callerPath);
		String_t* L_1 = ___callerPath2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5(L_1, NULL);
		V_0 = L_2;
		// messageTemplate = $"[{DateTime.UtcNow}] [{level}] [{caller}::{callerMember}@{callerLine}] {messageTemplate}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5;
		RuntimeObject* L_7 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		String_t* L_9 = ___level1;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		String_t* L_13 = ___callerMember4;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		int64_t L_15 = ___callerLine3;
		int64_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
		String_t* L_19 = ___messageTemplate0;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_19);
		String_t* L_20;
		L_20 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralD63EA1D36E774A7D28A6699C6CA4DFA6379BC624, L_18, NULL);
		___messageTemplate0 = L_20;
	}

IL_0049:
	{
		// return messageTemplate;
		String_t* L_21 = ___messageTemplate0;
		return L_21;
	}
}
// System.Void MHLab.Patch.Core.Logging.SimpleLogger::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLogger_Dispose_m1B87950BB15C20EAFD802A824A95CF81D38C1575 (SimpleLogger_t078F01C7C6458CC74764B51F13B0BA0F5E88DE4F* __this, const RuntimeMethod* method) 
{
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* G_B2_0 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* G_B1_0 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* G_B5_0 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* G_B4_0 = NULL;
	{
		// _streamWriter?.Flush();
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_0 = __this->____streamWriter_1;
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		VirtualActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, G_B2_0);
	}

IL_0011:
	{
		// _streamWriter?.Dispose();
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_2 = __this->____streamWriter_1;
		StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		NullCheck(G_B5_0);
		TextWriter_Dispose_m5B2CA4D250335AB11031AFC7F202AA5B7A70C4D7(G_B5_0, NULL);
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
// System.Void MHLab.Patch.Core.IO.DirectoriesManager::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoriesManager_Create_mA0243125F916BE52DF84B3B70DD58EE839B018DD (String_t* ___path0, const RuntimeMethod* method) 
{
	{
		// Directory.CreateDirectory(path);
		String_t* L_0 = ___path0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_1;
		L_1 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_0, NULL);
		// }
		return;
	}
}
// System.String MHLab.Patch.Core.IO.DirectoriesManager::GetCurrentDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DirectoriesManager_GetCurrentDirectory_mAC093C9FC6E59181963557249207ED230BA7C033 (const RuntimeMethod* method) 
{
	{
		// return Directory.GetCurrentDirectory();
		String_t* L_0;
		L_0 = Directory_GetCurrentDirectory_m7EA69F721BEEC05DC0FBF8E9189990BF9F856363(NULL);
		return L_0;
	}
}
// System.Boolean MHLab.Patch.Core.IO.DirectoriesManager::IsEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DirectoriesManager_IsEmpty_m86BF3B190FEAC84EF39C628970368FEE7D2A086B (String_t* ___path0, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// if (!Directory.Exists(path)) throw new DirectoryNotFoundException();
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!Directory.Exists(path)) throw new DirectoryNotFoundException();
		DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF* L_2 = (DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		DirectoryNotFoundException__ctor_m3E7AD60F0D1A82ED671568427050835C56704361(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DirectoriesManager_IsEmpty_m86BF3B190FEAC84EF39C628970368FEE7D2A086B_RuntimeMethod_var)));
	}

IL_000e:
	{
		// string[] dirs = Directory.GetDirectories(path);
		String_t* L_3 = ___path0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Directory_GetDirectories_m94C31CB11C7AFC316D40DC06C122C2A45F42EC51(L_3, NULL);
		// string[] files = Directory.GetFiles(path);
		String_t* L_5 = ___path0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = Directory_GetFiles_m4B12F04FB52DA5311463669EBB83321CB0CF284B(L_5, NULL);
		V_0 = L_6;
		// if (dirs.Length == 0 && files.Length == 0) return true;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_7);
		if ((((RuntimeArray*)L_7)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		// if (dirs.Length == 0 && files.Length == 0) return true;
		return (bool)1;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void MHLab.Patch.Core.IO.DirectoriesManager::Copy(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoriesManager_Copy_m1CCD10EB37A6873E5CFF5F353251D82546164ADC (String_t* ___sourceFolder0, String_t* ___destFolder1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// Create(destFolder);
		String_t* L_0 = ___destFolder1;
		DirectoriesManager_Create_mA0243125F916BE52DF84B3B70DD58EE839B018DD(L_0, NULL);
		// var files = Directory.GetFiles(sourceFolder, "*", SearchOption.AllDirectories);
		String_t* L_1 = ___sourceFolder0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = Directory_GetFiles_mAD2C2FCFE204E9D7A8933C93A813E77573CD141B(L_1, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, 1, NULL);
		// foreach (string file in files)
		V_0 = L_2;
		V_1 = 0;
		goto IL_0038;
	}

IL_0017:
	{
		// foreach (string file in files)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// string newFile = file.Replace(sourceFolder, destFolder);
		String_t* L_7 = L_6;
		String_t* L_8 = ___sourceFolder0;
		String_t* L_9 = ___destFolder1;
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_7, L_8, L_9, NULL);
		V_2 = L_10;
		// Create(Path.GetDirectoryName(newFile));
		String_t* L_11 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_11, NULL);
		DirectoriesManager_Create_mA0243125F916BE52DF84B3B70DD58EE839B018DD(L_12, NULL);
		// File.Copy(file, newFile);
		String_t* L_13 = V_2;
		File_Copy_m68CDF30174466285011A5E8B320CAE02D7EF432C(L_7, L_13, NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0038:
	{
		// foreach (string file in files)
		int32_t L_15 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean MHLab.Patch.Core.IO.DirectoriesManager::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DirectoriesManager_Delete_m04E4E87F840D6A6674EEADF221BFA20757212251 (String_t* ___directory0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// Clean(directory);
		String_t* L_0 = ___directory0;
		DirectoriesManager_Clean_mF9C2069A014B250E9A98FE199DC645383617AA68(L_0, NULL);
		// Directory.Delete(directory);
		String_t* L_1 = ___directory0;
		Directory_Delete_m42524D3C40B0B3F8E0B510ED228462221777BB53(L_1, NULL);
		// return true;
		V_0 = (bool)1;
		goto IL_0011;
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
		// throw ex;
		IL2CPP_RAISE_MANAGED_EXCEPTION(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DirectoriesManager_Delete_m04E4E87F840D6A6674EEADF221BFA20757212251_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0011:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void MHLab.Patch.Core.IO.DirectoriesManager::Clean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoriesManager_Clean_mF9C2069A014B250E9A98FE199DC645383617AA68 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* V_0 = NULL;
	FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* V_1 = NULL;
	int32_t V_2 = 0;
	DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// GC.Collect();
			il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
			GC_Collect_m083F9AEA26680FD7E28C627D30E43DD672ADF53D(NULL);
			// GC.WaitForPendingFinalizers();
			GC_WaitForPendingFinalizers_m0FA950AA1D612E4DEBBCF1C9C632D0EEFB59E80B(NULL);
			// DirectoryInfo dir = new DirectoryInfo(path);
			String_t* L_0 = ___path0;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_1 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
			NullCheck(L_1);
			DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_1, L_0, NULL);
			V_0 = L_1;
			// foreach (FileInfo file in dir.GetFiles())
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_2 = V_0;
			NullCheck(L_2);
			FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_3;
			L_3 = DirectoryInfo_GetFiles_m998040748717954CDDCE273F61EEC0625069543F(L_2, NULL);
			V_1 = L_3;
			V_2 = 0;
			goto IL_0037_1;
		}

IL_001c_1:
		{
			// foreach (FileInfo file in dir.GetFiles())
			FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_4 = V_1;
			int32_t L_5 = V_2;
			NullCheck(L_4);
			int32_t L_6 = L_5;
			FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			// file.Attributes &= ~FileAttributes.ReadOnly;
			FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_8 = L_7;
			FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_9 = L_8;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = FileSystemInfo_get_Attributes_m38971A5B147214C5EE193CE9F60628EA834EF6DA(L_9, NULL);
			NullCheck(L_9);
			FileSystemInfo_set_Attributes_m510C45C0B09B8E2BB21DD00B193CC279CAD806EE(L_9, ((int32_t)((int32_t)L_10&((int32_t)-2))), NULL);
			// file.Delete();
			NullCheck(L_8);
			VirtualActionInvoker0::Invoke(11 /* System.Void System.IO.FileSystemInfo::Delete() */, L_8);
			int32_t L_11 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		}

IL_0037_1:
		{
			// foreach (FileInfo file in dir.GetFiles())
			int32_t L_12 = V_2;
			FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_13 = V_1;
			NullCheck(L_13);
			if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
			{
				goto IL_001c_1;
			}
		}
		{
			// foreach (DirectoryInfo subDirectory in dir.GetDirectories())
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_14 = V_0;
			NullCheck(L_14);
			DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_15;
			L_15 = DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901(L_14, NULL);
			V_3 = L_15;
			V_2 = 0;
			goto IL_0059_1;
		}

IL_0048_1:
		{
			// foreach (DirectoryInfo subDirectory in dir.GetDirectories())
			DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_16 = V_3;
			int32_t L_17 = V_2;
			NullCheck(L_16);
			int32_t L_18 = L_17;
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			// DeleteRecursiveFolder(subDirectory.FullName);
			NullCheck(L_19);
			String_t* L_20;
			L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_19);
			DirectoriesManager_DeleteRecursiveFolder_m1BB27E533D8A72BA59285CB66C103721AB188FFB(L_20, NULL);
			int32_t L_21 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		}

IL_0059_1:
		{
			// foreach (DirectoryInfo subDirectory in dir.GetDirectories())
			int32_t L_22 = V_2;
			DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_23 = V_3;
			NullCheck(L_23);
			if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
			{
				goto IL_0048_1;
			}
		}
		{
			// GC.Collect();
			il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
			GC_Collect_m083F9AEA26680FD7E28C627D30E43DD672ADF53D(NULL);
			// GC.WaitForPendingFinalizers();
			GC_WaitForPendingFinalizers_m0FA950AA1D612E4DEBBCF1C9C632D0EEFB59E80B(NULL);
			// }
			goto IL_006c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006b;
		}
		throw e;
	}

CATCH_006b:
	{// begin catch(System.Exception)
		// throw ex;
		IL2CPP_RAISE_MANAGED_EXCEPTION(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DirectoriesManager_Clean_mF9C2069A014B250E9A98FE199DC645383617AA68_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_006c:
	{
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.DirectoriesManager::DeleteRecursiveFolder(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoriesManager_DeleteRecursiveFolder_m1BB27E533D8A72BA59285CB66C103721AB188FFB (String_t* ___pFolderPath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (string Folder in Directory.GetDirectories(pFolderPath))
		String_t* L_0 = ___pFolderPath0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = Directory_GetDirectories_m94C31CB11C7AFC316D40DC06C122C2A45F42EC51(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (string Folder in Directory.GetDirectories(pFolderPath))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// DeleteRecursiveFolder(Folder);
		DirectoriesManager_DeleteRecursiveFolder_m1BB27E533D8A72BA59285CB66C103721AB188FFB(L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0017:
	{
		// foreach (string Folder in Directory.GetDirectories(pFolderPath))
		int32_t L_7 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// foreach (string file in Directory.GetFiles(pFolderPath))
		String_t* L_9 = ___pFolderPath0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = Directory_GetFiles_m4B12F04FB52DA5311463669EBB83321CB0CF284B(L_9, NULL);
		V_0 = L_10;
		V_1 = 0;
		goto IL_0056;
	}

IL_0028:
	{
		// foreach (string file in Directory.GetFiles(pFolderPath))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// var pPath = Path.Combine(pFolderPath, file);
		String_t* L_15 = ___pFolderPath0;
		String_t* L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_15, L_16, NULL);
		// FileInfo fi = new FileInfo(pPath);
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_18 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_18, L_17, NULL);
		// File.SetAttributes(fi.FullName, FileAttributes.Normal);
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_19 = L_18;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_19);
		File_SetAttributes_m61620C95541E700F19541D8D9D179CCA9F480578(L_20, ((int32_t)128), NULL);
		// File.Delete(fi.FullName);
		NullCheck(L_19);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_19);
		File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_21, NULL);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0056:
	{
		// foreach (string file in Directory.GetFiles(pFolderPath))
		int32_t L_23 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		// Directory.Delete(pFolderPath);
		String_t* L_25 = ___pFolderPath0;
		Directory_Delete_m42524D3C40B0B3F8E0B510ED228462221777BB53(L_25, NULL);
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
// Conversion methods for marshalling of: MHLab.Patch.Core.IO.FilePath
IL2CPP_EXTERN_C void FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshal_pinvoke(const FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0& unmarshaled, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshaled_pinvoke& marshaled)
{
	marshaled.___BasePath_0 = il2cpp_codegen_marshal_string(unmarshaled.___BasePath_0);
	marshaled.___FullPath_1 = il2cpp_codegen_marshal_string(unmarshaled.___FullPath_1);
}
IL2CPP_EXTERN_C void FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshal_pinvoke_back(const FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshaled_pinvoke& marshaled, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0& unmarshaled)
{
	unmarshaled.___BasePath_0 = il2cpp_codegen_marshal_string_result(marshaled.___BasePath_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___BasePath_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___BasePath_0));
	unmarshaled.___FullPath_1 = il2cpp_codegen_marshal_string_result(marshaled.___FullPath_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FullPath_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___FullPath_1));
}
// Conversion method for clean up from marshalling of: MHLab.Patch.Core.IO.FilePath
IL2CPP_EXTERN_C void FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshal_pinvoke_cleanup(FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___BasePath_0);
	marshaled.___BasePath_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___FullPath_1);
	marshaled.___FullPath_1 = NULL;
}
// Conversion methods for marshalling of: MHLab.Patch.Core.IO.FilePath
IL2CPP_EXTERN_C void FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshal_com(const FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0& unmarshaled, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshaled_com& marshaled)
{
	marshaled.___BasePath_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___BasePath_0);
	marshaled.___FullPath_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___FullPath_1);
}
IL2CPP_EXTERN_C void FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshal_com_back(const FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshaled_com& marshaled, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0& unmarshaled)
{
	unmarshaled.___BasePath_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___BasePath_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___BasePath_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___BasePath_0));
	unmarshaled.___FullPath_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___FullPath_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FullPath_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___FullPath_1));
}
// Conversion method for clean up from marshalling of: MHLab.Patch.Core.IO.FilePath
IL2CPP_EXTERN_C void FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshal_com_cleanup(FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___BasePath_0);
	marshaled.___BasePath_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___FullPath_1);
	marshaled.___FullPath_1 = NULL;
}
// System.Void MHLab.Patch.Core.IO.FilePath::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilePath__ctor_m745E953E5FF3004F480828DB2FF0FA10859F25D9 (FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0* __this, String_t* ___basePath0, String_t* ___fullPath1, const RuntimeMethod* method) 
{
	{
		// BasePath = basePath;
		String_t* L_0 = ___basePath0;
		__this->___BasePath_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BasePath_0), (void*)L_0);
		// FullPath = fullPath;
		String_t* L_1 = ___fullPath1;
		__this->___FullPath_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FullPath_1), (void*)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FilePath__ctor_m745E953E5FF3004F480828DB2FF0FA10859F25D9_AdjustorThunk (RuntimeObject* __this, String_t* ___basePath0, String_t* ___fullPath1, const RuntimeMethod* method)
{
	FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0*>(__this + _offset);
	FilePath__ctor_m745E953E5FF3004F480828DB2FF0FA10859F25D9(_thisAdjusted, ___basePath0, ___fullPath1, method);
}
// MHLab.Patch.Core.IO.FilePath MHLab.Patch.Core.IO.FilePath::op_Explicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4 (String_t* ___path0, const RuntimeMethod* method) 
{
	{
		// public static explicit operator FilePath(string path) => new FilePath(path, path);
		String_t* L_0 = ___path0;
		String_t* L_1 = ___path0;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		FilePath__ctor_m745E953E5FF3004F480828DB2FF0FA10859F25D9((&L_2), L_0, L_1, /*hidden argument*/NULL);
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
// System.Boolean MHLab.Patch.Core.IO.FilesManager::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilesManager_Exists_m7A87D7B2B35BFDF19C16307561F109581FB55DD1 (String_t* ___path0, const RuntimeMethod* method) 
{
	{
		// return File.Exists(path);
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		return L_1;
	}
}
// System.String[] MHLab.Patch.Core.IO.FilesManager::GetFiles(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* FilesManager_GetFiles_mD4A091EFB6CF9598E108D8490B5724AD636FB7FB (String_t* ___path0, String_t* ___pattern1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetFilesU3Eb__1_0_m619DA3D812F580AA9BAFD73B132FAC2ECB545023_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B2_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* G_B1_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_1 = NULL;
	{
		// return Directory.GetFiles(path, pattern, SearchOption.AllDirectories).Where(f => !IsFileOsRelated(f)).ToArray();
		String_t* L_0 = ___path0;
		String_t* L_1 = ___pattern1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = Directory_GetFiles_mAD2C2FCFE204E9D7A8933C93A813E77573CD141B(L_0, L_1, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_3 = ((U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var);
		U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01* L_5 = ((U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_6 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CGetFilesU3Eb__1_0_m619DA3D812F580AA9BAFD73B132FAC2ECB545023_RuntimeMethod_var), NULL);
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_7 = L_6;
		((U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_8, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		return L_9;
	}
}
// System.Boolean MHLab.Patch.Core.IO.FilesManager::IsFileOsRelated(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilesManager_IsFileOsRelated_mDFCA10C0007325473B245DA419107E05E61B52C4 (String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455008E9CF44D99D9F83F9B797FF155910BDD761);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9C605EE5F0D52EE5F7E261342F33626CE1F5B79);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var fileName = Path.GetFileName(filePath);
		String_t* L_0 = ___filePath0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5(L_0, NULL);
		V_0 = L_1;
		// return fileName == ".DS_Store" ||
		//        fileName == "desktop.ini";
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral455008E9CF44D99D9F83F9B797FF155910BDD761, NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralA9C605EE5F0D52EE5F7E261342F33626CE1F5B79, NULL);
		return L_5;
	}

IL_0020:
	{
		return (bool)1;
	}
}
// MHLab.Patch.Core.IO.LocalFileInfo[] MHLab.Patch.Core.IO.FilesManager::GetFilesInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3* FilesManager_GetFilesInfo_mB46CF315663C260AB6A0D667FEBECE5668FFF4BE (String_t* ___rootPath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* V_4 = NULL;
	LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* V_5 = NULL;
	{
		// var files = GetFiles(rootPath);
		String_t* L_0 = ___rootPath0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = FilesManager_GetFiles_mD4A091EFB6CF9598E108D8490B5724AD636FB7FB(L_0, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		V_0 = L_1;
		// var infos = new LocalFileInfo[files.Length];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		NullCheck(L_2);
		LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3* L_3 = (LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3*)(LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3*)SZArrayNew(LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		// for (int i = 0; i < files.Length; i++)
		V_2 = 0;
		goto IL_006d;
	}

IL_0019:
	{
		// var currentPath = files[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// var info = new FileInfo(currentPath);
		String_t* L_8 = V_3;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_9 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_9, L_8, NULL);
		V_4 = L_9;
		// var localInfo = new LocalFileInfo();
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_10 = (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0*)il2cpp_codegen_object_new(LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		LocalFileInfo__ctor_m36AA187E307EFC0C24EDB7440D05B894BF456175(L_10, NULL);
		V_5 = L_10;
		// localInfo.Size = info.Length;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_11 = V_5;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_12 = V_4;
		NullCheck(L_12);
		int64_t L_13;
		L_13 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_12, NULL);
		NullCheck(L_11);
		LocalFileInfo_set_Size_m7F31BACB01284535334BAF7E417AD1509AB8F9AD_inline(L_11, L_13, NULL);
		// localInfo.LastWriting = info.LastWriteTimeUtc;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_14 = V_5;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_15 = V_4;
		NullCheck(L_15);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16;
		L_16 = FileSystemInfo_get_LastWriteTimeUtc_mD88B2540B4766584A90C45018C6EDBFEC9C80BA8(L_15, NULL);
		NullCheck(L_14);
		LocalFileInfo_set_LastWriting_m08ED5420684C7B8DC6143A17343A45219D611BFF_inline(L_14, L_16, NULL);
		// localInfo.Attributes = info.Attributes;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_17 = V_5;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_18 = V_4;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = FileSystemInfo_get_Attributes_m38971A5B147214C5EE193CE9F60628EA834EF6DA(L_18, NULL);
		NullCheck(L_17);
		LocalFileInfo_set_Attributes_m1A95A06307EA4DAD9CB52D07220C164E69653B9B_inline(L_17, L_19, NULL);
		// localInfo.RelativePath = SanitizeToRelativePath(rootPath, currentPath);
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_20 = V_5;
		String_t* L_21 = ___rootPath0;
		String_t* L_22 = V_3;
		String_t* L_23;
		L_23 = FilesManager_SanitizeToRelativePath_m938A03B3083A1AF199E218CC682CD0BA306969FD(L_21, L_22, NULL);
		NullCheck(L_20);
		LocalFileInfo_set_RelativePath_mC6B17F4C1049F0835EC352189A24EA910DEFE851_inline(L_20, L_23, NULL);
		// infos[i] = localInfo;
		LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3* L_24 = V_1;
		int32_t L_25 = V_2;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_26 = V_5;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0*)L_26);
		// for (int i = 0; i < files.Length; i++)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < files.Length; i++)
		int32_t L_28 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// return infos;
		LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3* L_30 = V_1;
		return L_30;
	}
}
// System.Void MHLab.Patch.Core.IO.FilesManager::GetFilesInfo(System.String,MHLab.Patch.Core.IO.LocalFileInfo[]&,System.Collections.Generic.Dictionary`2<System.String,MHLab.Patch.Core.IO.LocalFileInfo>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_GetFilesInfo_mAEF3E6DB67F8B3DB04E911834DEAF0564F12BB07 (String_t* ___rootPath0, LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3** ___fileInfoArray1, Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07** ___fileInfoMap2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m193C16C96D29E88313D6CACCE2E34B71167420A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9535CF4AC5A3BEB408ADD69811DFF46B7EAD2FBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* V_3 = NULL;
	LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* V_4 = NULL;
	{
		// var files = GetFiles(rootPath);
		String_t* L_0 = ___rootPath0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = FilesManager_GetFiles_mD4A091EFB6CF9598E108D8490B5724AD636FB7FB(L_0, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		V_0 = L_1;
		// fileInfoArray = new LocalFileInfo[files.Length];
		LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3** L_2 = ___fileInfoArray1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3* L_4 = (LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3*)(LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3*)SZArrayNew(LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		// fileInfoMap = new Dictionary<string, LocalFileInfo>();
		Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07** L_5 = ___fileInfoMap2;
		Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07* L_6 = (Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07*)il2cpp_codegen_object_new(Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m9535CF4AC5A3BEB408ADD69811DFF46B7EAD2FBA(L_6, Dictionary_2__ctor_m9535CF4AC5A3BEB408ADD69811DFF46B7EAD2FBA_RuntimeMethod_var);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		// for (int i = 0; i < files.Length; i++)
		V_1 = 0;
		goto IL_0082;
	}

IL_0021:
	{
		// var currentPath = files[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// var info        = new FileInfo(currentPath);
		String_t* L_11 = V_2;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_12 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_12, L_11, NULL);
		V_3 = L_12;
		// var localInfo = new LocalFileInfo();
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_13 = (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0*)il2cpp_codegen_object_new(LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		LocalFileInfo__ctor_m36AA187E307EFC0C24EDB7440D05B894BF456175(L_13, NULL);
		V_4 = L_13;
		// localInfo.Size         = info.Length;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_14 = V_4;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_15 = V_3;
		NullCheck(L_15);
		int64_t L_16;
		L_16 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_15, NULL);
		NullCheck(L_14);
		LocalFileInfo_set_Size_m7F31BACB01284535334BAF7E417AD1509AB8F9AD_inline(L_14, L_16, NULL);
		// localInfo.LastWriting  = info.LastWriteTime;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_17 = V_4;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_18 = V_3;
		NullCheck(L_18);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19;
		L_19 = FileSystemInfo_get_LastWriteTime_m5009457B3D837E929AF4FBC9E2738F15BB6476C5(L_18, NULL);
		NullCheck(L_17);
		LocalFileInfo_set_LastWriting_m08ED5420684C7B8DC6143A17343A45219D611BFF_inline(L_17, L_19, NULL);
		// localInfo.Attributes   = info.Attributes;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_20 = V_4;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = FileSystemInfo_get_Attributes_m38971A5B147214C5EE193CE9F60628EA834EF6DA(L_21, NULL);
		NullCheck(L_20);
		LocalFileInfo_set_Attributes_m1A95A06307EA4DAD9CB52D07220C164E69653B9B_inline(L_20, L_22, NULL);
		// localInfo.RelativePath = SanitizeToRelativePath(rootPath, currentPath);
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_23 = V_4;
		String_t* L_24 = ___rootPath0;
		String_t* L_25 = V_2;
		String_t* L_26;
		L_26 = FilesManager_SanitizeToRelativePath_m938A03B3083A1AF199E218CC682CD0BA306969FD(L_24, L_25, NULL);
		NullCheck(L_23);
		LocalFileInfo_set_RelativePath_mC6B17F4C1049F0835EC352189A24EA910DEFE851_inline(L_23, L_26, NULL);
		// fileInfoArray[i] = localInfo;
		LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3** L_27 = ___fileInfoArray1;
		LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3* L_28 = *((LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3**)L_27);
		int32_t L_29 = V_1;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_30 = V_4;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0*)L_30);
		// fileInfoMap.Add(localInfo.RelativePath, localInfo);
		Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07** L_31 = ___fileInfoMap2;
		Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07* L_32 = *((Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07**)L_31);
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_33 = V_4;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = LocalFileInfo_get_RelativePath_m8C08DEC7A4C19F8FBF931E68264A4108776AF586_inline(L_33, NULL);
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_35 = V_4;
		NullCheck(L_32);
		Dictionary_2_Add_m193C16C96D29E88313D6CACCE2E34B71167420A8(L_32, L_34, L_35, Dictionary_2_Add_m193C16C96D29E88313D6CACCE2E34B71167420A8_RuntimeMethod_var);
		// for (int i = 0; i < files.Length; i++)
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0082:
	{
		// for (int i = 0; i < files.Length; i++)
		int32_t L_37 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = V_0;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// MHLab.Patch.Core.IO.LocalFileInfo MHLab.Patch.Core.IO.FilesManager::GetFileInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* FilesManager_GetFileInfo_mAC4A0073C098530B6D79022F633956AB53BCF852 (String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* V_0 = NULL;
	{
		// var info = new FileInfo(filePath);
		String_t* L_0 = ___filePath0;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_1 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_1, L_0, NULL);
		V_0 = L_1;
		// var localInfo = new LocalFileInfo();
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_2 = (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0*)il2cpp_codegen_object_new(LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LocalFileInfo__ctor_m36AA187E307EFC0C24EDB7440D05B894BF456175(L_2, NULL);
		// localInfo.Size = info.Length;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_3 = L_2;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_4, NULL);
		NullCheck(L_3);
		LocalFileInfo_set_Size_m7F31BACB01284535334BAF7E417AD1509AB8F9AD_inline(L_3, L_5, NULL);
		// localInfo.LastWriting = info.LastWriteTimeUtc;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_6 = L_3;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_7 = V_0;
		NullCheck(L_7);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = FileSystemInfo_get_LastWriteTimeUtc_mD88B2540B4766584A90C45018C6EDBFEC9C80BA8(L_7, NULL);
		NullCheck(L_6);
		LocalFileInfo_set_LastWriting_m08ED5420684C7B8DC6143A17343A45219D611BFF_inline(L_6, L_8, NULL);
		// localInfo.Attributes = info.Attributes;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_9 = L_6;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = FileSystemInfo_get_Attributes_m38971A5B147214C5EE193CE9F60628EA834EF6DA(L_10, NULL);
		NullCheck(L_9);
		LocalFileInfo_set_Attributes_m1A95A06307EA4DAD9CB52D07220C164E69653B9B_inline(L_9, L_11, NULL);
		// localInfo.RelativePath = SanitizeToRelativePath(PathsManager.GetDirectoryPath(filePath), filePath);
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_12 = L_9;
		String_t* L_13 = ___filePath0;
		String_t* L_14;
		L_14 = PathsManager_GetDirectoryPath_mB2802217BE08BD18B770B7519DAEF491A9F274FC(L_13, NULL);
		String_t* L_15 = ___filePath0;
		String_t* L_16;
		L_16 = FilesManager_SanitizeToRelativePath_m938A03B3083A1AF199E218CC682CD0BA306969FD(L_14, L_15, NULL);
		NullCheck(L_12);
		LocalFileInfo_set_RelativePath_mC6B17F4C1049F0835EC352189A24EA910DEFE851_inline(L_12, L_16, NULL);
		// return localInfo;
		return L_12;
	}
}
// System.String MHLab.Patch.Core.IO.FilesManager::SanitizeToRelativePath(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilesManager_SanitizeToRelativePath_m938A03B3083A1AF199E218CC682CD0BA306969FD (String_t* ___rootPath0, String_t* ___fullPath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (string.IsNullOrWhiteSpace(rootPath)) return fullPath;
		String_t* L_0 = ___rootPath0;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (string.IsNullOrWhiteSpace(rootPath)) return fullPath;
		String_t* L_2 = ___fullPath1;
		return L_2;
	}

IL_000a:
	{
		// fullPath = SanitizePath(fullPath);
		String_t* L_3 = ___fullPath1;
		String_t* L_4;
		L_4 = FilesManager_SanitizePath_m3B8097CCDA19BBD4505D1857EB95F8FBB1743AB9(L_3, NULL);
		___fullPath1 = L_4;
		// rootPath = SanitizePath(rootPath);
		String_t* L_5 = ___rootPath0;
		String_t* L_6;
		L_6 = FilesManager_SanitizePath_m3B8097CCDA19BBD4505D1857EB95F8FBB1743AB9(L_5, NULL);
		___rootPath0 = L_6;
		// var relativePath = SanitizePath(fullPath.Replace(rootPath, string.Empty));
		String_t* L_7 = ___fullPath1;
		String_t* L_8 = ___rootPath0;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_7, L_8, L_9, NULL);
		String_t* L_11;
		L_11 = FilesManager_SanitizePath_m3B8097CCDA19BBD4505D1857EB95F8FBB1743AB9(L_10, NULL);
		V_0 = L_11;
		// if (relativePath.StartsWith("/"))
		String_t* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_12, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		if (!L_13)
		{
			goto IL_0041;
		}
	}
	{
		// relativePath = relativePath.Substring(1);
		String_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_14, 1, NULL);
		V_0 = L_15;
	}

IL_0041:
	{
		// return relativePath;
		String_t* L_16 = V_0;
		return L_16;
	}
}
// System.String MHLab.Patch.Core.IO.FilesManager::SanitizePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilesManager_SanitizePath_m3B8097CCDA19BBD4505D1857EB95F8FBB1743AB9 (String_t* ___path0, const RuntimeMethod* method) 
{
	{
		// return path.Replace('\\', '/');
		String_t* L_0 = ___path0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_0, ((int32_t)92), ((int32_t)47), NULL);
		return L_1;
	}
}
// System.Void MHLab.Patch.Core.IO.FilesManager::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_Delete_m5E2179E78D03CF813277423435CCBD2D9682ED67 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Exception_t* G_B8_0 = NULL;
	Exception_t* G_B7_0 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// if (!Exists(path)) return;
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = FilesManager_Exists_m7A87D7B2B35BFDF19C16307561F109581FB55DD1(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Exists(path)) return;
		return;
	}

IL_0009:
	{
	}
	try
	{// begin try (depth: 1)
		try
		{// begin try (depth: 2)
			// GC.Collect();
			il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
			GC_Collect_m083F9AEA26680FD7E28C627D30E43DD672ADF53D(NULL);
			// GC.WaitForPendingFinalizers();
			GC_WaitForPendingFinalizers_m0FA950AA1D612E4DEBBCF1C9C632D0EEFB59E80B(NULL);
			// File.Delete(path);
			String_t* L_2 = ___path0;
			File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_2, NULL);
			// }
			goto IL_0061;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DirectoryNotFoundException_tBE92A20AAC24C3B22DE38973ABE6886FA97419BF_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_001c_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_001f_1;
			}
			throw e;
		}

CATCH_001c_1:
		{// begin catch(System.IO.DirectoryNotFoundException)
			// catch (DirectoryNotFoundException)
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0061;
		}// end catch (depth: 2)

CATCH_001f_1:
		{// begin catch(System.IO.FileNotFoundException)
			// catch (FileNotFoundException)
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0061;
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
	}
	{// begin filter(depth: 1)
		bool __filter_local = false;
		try
		{// begin implicit try block
			{
				Exception_t* L_3 = ((Exception_t*)IsInstClass((RuntimeObject*)((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var))));
				G_B7_0 = L_3;
				if (L_3)
				{
					G_B8_0 = L_3;
					goto IL_002e;
				}
			}
			{
				G_B12_0 = 0;
				goto IL_0046;
			}

IL_002e:
			{
				V_0 = G_B8_0;
				// catch (Exception e) when (e is IOException || e is UnauthorizedAccessException)
				Exception_t* L_4 = V_0;
				if (((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IsInstClass((RuntimeObject*)L_4, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)))))
				{
					goto IL_0042;
				}
			}
			{
				Exception_t* L_5 = V_0;
				G_B11_0 = ((!(((RuntimeObject*)(UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791*)((UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791*)IsInstClass((RuntimeObject*)L_5, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				goto IL_0043;
			}

IL_0042:
			{
				G_B11_0 = 1;
			}

IL_0043:
			{
				G_B12_0 = ((!(((uint32_t)G_B11_0) <= ((uint32_t)0)))? 1 : 0);
			}

IL_0046:
			{
				__filter_local = (G_B12_0) ? true : false;
			}
		}// end implicit try block
		catch(Il2CppExceptionWrapper&)
		{// begin implicit catch block
			__filter_local = false;
		}// end implicit catch block
		if (__filter_local)
		{
			goto FILTER_0048;
		}
		else
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FilesManager_Delete_m5E2179E78D03CF813277423435CCBD2D9682ED67_RuntimeMethod_var)));
		}
	}// end filter (depth: 1)

FILTER_0048:
	{// begin catch(filter)
		// GC.Collect();
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var)));
		GC_Collect_m083F9AEA26680FD7E28C627D30E43DD672ADF53D(NULL);
		// GC.WaitForPendingFinalizers();
		GC_WaitForPendingFinalizers_m0FA950AA1D612E4DEBBCF1C9C632D0EEFB59E80B(NULL);
		// Rename(path, GetTemporaryDeletingFileName(path));
		String_t* L_6 = ___path0;
		String_t* L_7 = ___path0;
		String_t* L_8;
		L_8 = FilesManager_GetTemporaryDeletingFileName_mE713047852C2C23A45E488568BC6842A68317059(L_7, NULL);
		FilesManager_Rename_m7D03DCE606C5A15CB0C4967BDE459E4693F1BCB2(L_6, L_8, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0061;
	}// end catch (depth: 1)

IL_0061:
	{
		// }
		return;
	}
}
// System.Int32 MHLab.Patch.Core.IO.FilesManager::DeleteMultiple(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FilesManager_DeleteMultiple_mDCD2A3E19DBED7B17C1D4BEFAC84AFD513E84BDD (String_t* ___directory0, String_t* ___pattern1, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (Directory.Exists(directory) == false) return 0;
		String_t* L_0 = ___directory0;
		bool L_1;
		L_1 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (Directory.Exists(directory) == false) return 0;
		return 0;
	}

IL_000a:
	{
		// var files = GetFiles(directory, pattern);
		String_t* L_2 = ___directory0;
		String_t* L_3 = ___pattern1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = FilesManager_GetFiles_mD4A091EFB6CF9598E108D8490B5724AD636FB7FB(L_2, L_3, NULL);
		V_0 = L_4;
		// foreach (string file in files) Delete(file);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		V_1 = L_5;
		V_2 = 0;
		goto IL_0024;
	}

IL_0018:
	{
		// foreach (string file in files) Delete(file);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		// foreach (string file in files) Delete(file);
		FilesManager_Delete_m5E2179E78D03CF813277423435CCBD2D9682ED67(L_9, NULL);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0024:
	{
		// foreach (string file in files) Delete(file);
		int32_t L_11 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		// return files.Length;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_0;
		NullCheck(L_13);
		return ((int32_t)(((RuntimeArray*)L_13)->max_length));
	}
}
// System.Void MHLab.Patch.Core.IO.FilesManager::Rename(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_Rename_m7D03DCE606C5A15CB0C4967BDE459E4693F1BCB2 (String_t* ___path0, String_t* ___newPath1, const RuntimeMethod* method) 
{
	{
		// File.Move(path, newPath);
		String_t* L_0 = ___path0;
		String_t* L_1 = ___newPath1;
		File_Move_mF906DE37D2EF2E47B2DF79FA50C765859AFB9ECF(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.FilesManager::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_Copy_mD177C65490741211D429BCE2436AD0347C458B07 (String_t* ___sourcePath0, String_t* ___destinationPath1, bool ___overwrite2, const RuntimeMethod* method) 
{
	{
		// DirectoriesManager.Create(PathsManager.GetDirectoryPath(destinationPath));
		String_t* L_0 = ___destinationPath1;
		String_t* L_1;
		L_1 = PathsManager_GetDirectoryPath_mB2802217BE08BD18B770B7519DAEF491A9F274FC(L_0, NULL);
		DirectoriesManager_Create_mA0243125F916BE52DF84B3B70DD58EE839B018DD(L_1, NULL);
		// File.Copy(sourcePath, destinationPath, overwrite);
		String_t* L_2 = ___sourcePath0;
		String_t* L_3 = ___destinationPath1;
		bool L_4 = ___overwrite2;
		File_Copy_m68957393F932BED668C5725704E5DA9B71925395(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.FilesManager::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_Move_m359E99D1C5B3B797E399CB175E4209058D2E8EC8 (String_t* ___source0, String_t* ___dest1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// DirectoriesManager.Create(Path.GetDirectoryName(dest));
		String_t* L_0 = ___dest1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_0, NULL);
		DirectoriesManager_Create_mA0243125F916BE52DF84B3B70DD58EE839B018DD(L_1, NULL);
		// File.Move(source, dest);
		String_t* L_2 = ___source0;
		String_t* L_3 = ___dest1;
		File_Move_mF906DE37D2EF2E47B2DF79FA50C765859AFB9ECF(L_2, L_3, NULL);
		// }
		goto IL_0015;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0014;
		}
		throw e;
	}

CATCH_0014:
	{// begin catch(System.Exception)
		// throw ex;
		IL2CPP_RAISE_MANAGED_EXCEPTION(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FilesManager_Move_m359E99D1C5B3B797E399CB175E4209058D2E8EC8_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0015:
	{
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.FilesManager::EnsureShortcutOnDesktop(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_EnsureShortcutOnDesktop_m79D03315D4588020E12541A7579FD9B2B1C5C27D (String_t* ___targetFile0, String_t* ___shortcutName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral632DC47F192F65D158748DF69E4CB047E6341370);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var shortcutFile = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.DesktopDirectory), shortcutName + ".url");
		String_t* L_0;
		L_0 = Environment_GetFolderPath_m6294B29BDF0AC7CBB12EE2BB109D6DAA3FE9AF4B(((int32_t)16), NULL);
		String_t* L_1 = ___shortcutName1;
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteral632DC47F192F65D158748DF69E4CB047E6341370, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_0, L_2, NULL);
		V_0 = L_3;
		// if(!Exists(shortcutFile)) CreateShortcut(targetFile, shortcutFile);
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = FilesManager_Exists_m7A87D7B2B35BFDF19C16307561F109581FB55DD1(L_4, NULL);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		// if(!Exists(shortcutFile)) CreateShortcut(targetFile, shortcutFile);
		String_t* L_6 = ___targetFile0;
		String_t* L_7 = V_0;
		FilesManager_CreateShortcut_mE24E05A6714B1D2E9E364B44C0043667A380C9EA(L_6, L_7, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.FilesManager::CreateShortcut(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilesManager_CreateShortcut_mE24E05A6714B1D2E9E364B44C0043667A380C9EA (String_t* ___targetFile0, String_t* ___shortcutFile1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26BEBDCD7A2CC9156DEFBA9B12675987312B7DF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BB0F47A7EDB0F1FABDEF6B92139815C2F81B895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AEDC655AB9D6CF2A4EB87F93F7958BCF670FD06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB76F327BE61A95B5759913BE2C94FCCC9A205FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE234B9B3008F7AF74090CF31173BA7029F3120A3);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_1 = NULL;
	{
		// File.Delete(shortcutFile);
		String_t* L_0 = ___shortcutFile1;
		File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_0, NULL);
		// using (var fs = new FileStream(shortcutFile, FileMode.Create, FileAccess.ReadWrite))
		String_t* L_1 = ___shortcutFile1;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9(L_2, L_1, 2, 3, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007f:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0088;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0088:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var writer = new StreamWriter(fs))
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = V_0;
				StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_6 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B(L_6, L_5, NULL);
				V_1 = L_6;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0075_1:
					{// begin finally (depth: 2)
						{
							StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_7 = V_1;
							if (!L_7)
							{
								goto IL_007e_1;
							}
						}
						{
							StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_8 = V_1;
							NullCheck(L_8);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
						}

IL_007e_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// writer.WriteLine("[InternetShortcut]");
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_9 = V_1;
					NullCheck(L_9);
					VirtualActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_9, _stringLiteralE234B9B3008F7AF74090CF31173BA7029F3120A3);
					// writer.WriteLine("URL=file:///" + targetFile);
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_10 = V_1;
					String_t* L_11 = ___targetFile0;
					String_t* L_12;
					L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9AEDC655AB9D6CF2A4EB87F93F7958BCF670FD06, L_11, NULL);
					NullCheck(L_10);
					VirtualActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_10, L_12);
					// writer.WriteLine("IconIndex=0");
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_13 = V_1;
					NullCheck(L_13);
					VirtualActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_13, _stringLiteral4BB0F47A7EDB0F1FABDEF6B92139815C2F81B895);
					// writer.WriteLine("WorkingDirectory=" + PathsManager.GetDirectoryPath(targetFile));
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_14 = V_1;
					String_t* L_15 = ___targetFile0;
					String_t* L_16;
					L_16 = PathsManager_GetDirectoryPath_mB2802217BE08BD18B770B7519DAEF491A9F274FC(L_15, NULL);
					String_t* L_17;
					L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCB76F327BE61A95B5759913BE2C94FCCC9A205FE, L_16, NULL);
					NullCheck(L_14);
					VirtualActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_14, L_17);
					// writer.WriteLine("IconFile=" + targetFile.Replace('\\', '/'));
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_18 = V_1;
					String_t* L_19 = ___targetFile0;
					NullCheck(L_19);
					String_t* L_20;
					L_20 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_19, ((int32_t)92), ((int32_t)47), NULL);
					String_t* L_21;
					L_21 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral26BEBDCD7A2CC9156DEFBA9B12675987312B7DF6, L_20, NULL);
					NullCheck(L_18);
					VirtualActionInvoker1< String_t* >::Invoke(24 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_18, L_21);
					// writer.Flush();
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_22 = V_1;
					NullCheck(L_22);
					VirtualActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, L_22);
					// }
					goto IL_0089;
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

IL_0089:
	{
		// }
		return;
	}
}
// System.Boolean MHLab.Patch.Core.IO.FilesManager::IsDirectoryWritable(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilesManager_IsDirectoryWritable_mECA260CB4B76E4DC35D9E7CBD5C6F7DD3D9C6655 (String_t* ___directoryPath0, bool ___throwOnFail1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// DirectoriesManager.Create(directoryPath);
			String_t* L_0 = ___directoryPath0;
			DirectoriesManager_Create_mA0243125F916BE52DF84B3B70DD58EE839B018DD(L_0, NULL);
			// var path = Path.Combine(directoryPath, Path.GetRandomFileName());
			String_t* L_1 = ___directoryPath0;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_2;
			L_2 = Path_GetRandomFileName_m1B9709A07450C49E3426D856A244A2F9900AB171(NULL);
			String_t* L_3;
			L_3 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_1, L_2, NULL);
			// using (var fileStream = File.Create(path, 1, FileOptions.DeleteOnClose))
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4;
			L_4 = File_Create_m8EDF23576D83DCC1736A7F80E8DE07A85EEB6EA1(L_3, 1, ((int32_t)67108864), NULL);
			V_0 = L_4;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_001f_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = V_0;
						if (!L_5)
						{
							goto IL_0028_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = V_0;
						NullCheck(L_6);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
					}

IL_0028_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// }
				goto IL_0029_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0029_1:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_0037;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002d;
		}
		throw e;
	}

CATCH_002d:
	{// begin catch(System.UnauthorizedAccessException)
		{
			// catch (UnauthorizedAccessException)
			// if (throwOnFail) throw;
			bool L_7 = ___throwOnFail1;
			if (!L_7)
			{
				goto IL_0033;
			}
		}
		{
			// if (throwOnFail) throw;
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}

IL_0033:
		{
			// return false;
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0037;
		}
	}// end catch (depth: 1)

IL_0037:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean MHLab.Patch.Core.IO.FilesManager::IsFileLocked(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilesManager_IsFileLocked_mC87BE0D9D03AFEB13AD01F12156C3D973064600F (String_t* ___targetFile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B10_0 = 0;
	try
	{// begin try (depth: 1)
		{
			// using (File.Open(targetFile, FileMode.Open))
			String_t* L_0 = ___targetFile0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
			L_1 = File_Open_m9C6D5876B037A5A8341D216B767D4C8BE7084326(L_0, 3, NULL);
			V_0 = L_1;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_000a_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
						if (!L_2)
						{
							goto IL_0013_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
						NullCheck(L_3);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
					}

IL_0013_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// }
				goto IL_0014_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0014_1:
		{
			// }
			goto IL_003c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.IO.FileNotFoundException)
		// catch (FileNotFoundException)
		// GC.WaitForPendingFinalizers();
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var)));
		GC_WaitForPendingFinalizers_m0FA950AA1D612E4DEBBCF1C9C632D0EEFB59E80B(NULL);
		// return false;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0043;
	}// end catch (depth: 1)

CATCH_0020:
	{// begin catch(System.IO.IOException)
		{
			// int errorCode = e.HResult & 0x0000FFFF;
			NullCheck(((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)));
			int32_t L_4;
			L_4 = Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline(((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)), NULL);
			V_2 = ((int32_t)(L_4&((int32_t)65535)));
			// return errorCode == ERROR_SHARING_VIOLATION || errorCode == ERROR_LOCK_VIOLATION;
			int32_t L_5 = V_2;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
			{
				goto IL_0038;
			}
		}
		{
			int32_t L_6 = V_2;
			G_B10_0 = ((((int32_t)L_6) == ((int32_t)((int32_t)33)))? 1 : 0);
			goto IL_0039;
		}

IL_0038:
		{
			G_B10_0 = 1;
		}

IL_0039:
		{
			V_1 = (bool)G_B10_0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0043;
		}
	}// end catch (depth: 1)

IL_003c:
	{
		// GC.WaitForPendingFinalizers();
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_WaitForPendingFinalizers_m0FA950AA1D612E4DEBBCF1C9C632D0EEFB59E80B(NULL);
		// return false;
		return (bool)0;
	}

IL_0043:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.String MHLab.Patch.Core.IO.FilesManager::GetTemporaryDeletingFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FilesManager_GetTemporaryDeletingFileName_mE713047852C2C23A45E488568BC6842A68317059 (String_t* ___filePath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE6EE2A778951B8B845B4C1A19A89D210C0C603);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return filePath + ".temp.delete_me";
		String_t* L_0 = ___filePath0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral6BE6EE2A778951B8B845B4C1A19A89D210C0C603, NULL);
		return L_1;
	}
}
// System.Int32 MHLab.Patch.Core.IO.FilesManager::DeleteTemporaryDeletingFiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FilesManager_DeleteTemporaryDeletingFiles_mBB073C445790572BCE6C1B447B7EFB951B6A8B0A (String_t* ___folderPath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BAC2607E4DC5E7F0229DD7CA4BDEF951A39A6CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DeleteMultiple(folderPath, "*.temp.delete_me");
		String_t* L_0 = ___folderPath0;
		int32_t L_1;
		L_1 = FilesManager_DeleteMultiple_mDCD2A3E19DBED7B17C1D4BEFAC84AFD513E84BDD(L_0, _stringLiteral3BAC2607E4DC5E7F0229DD7CA4BDEF951A39A6CC, NULL);
		return L_1;
	}
}
// System.Int64 MHLab.Patch.Core.IO.FilesManager::GetAvailableDiskSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FilesManager_GetAvailableDiskSpace_m1F3A1556FC64B4DCD2F4F4C94EC56FA35B684345 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6* V_0 = NULL;
	int64_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (string.IsNullOrWhiteSpace(path))
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = String_IsNullOrWhiteSpace_m360E06F52DEE3AD60832FAE8D32E499B6F9B386B(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException(nameof(path));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FilesManager_GetAvailableDiskSpace_m1F3A1556FC64B4DCD2F4F4C94EC56FA35B684345_RuntimeMethod_var)));
	}

IL_0013:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// var driveInfo = new DriveInfo(path);
			String_t* L_3 = ___path0;
			DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6* L_4 = (DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6*)il2cpp_codegen_object_new(DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			DriveInfo__ctor_mE1877A0260E9F53EB5E14E37D4FA35DF5727BAAB(L_4, L_3, NULL);
			V_0 = L_4;
			// if (driveInfo.IsReady)
			DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6* L_5 = V_0;
			NullCheck(L_5);
			bool L_6;
			L_6 = DriveInfo_get_IsReady_m2D5873746241FBEF62F5B69BDCEBDF955E1900EB(L_5, NULL);
			if (!L_6)
			{
				goto IL_002c_1;
			}
		}
		{
			// return driveInfo.AvailableFreeSpace;
			DriveInfo_t773D9D28E8D388659B6EFD12B2BF752A751043D6* L_7 = V_0;
			NullCheck(L_7);
			int64_t L_8;
			L_8 = DriveInfo_get_AvailableFreeSpace_m3C757F8CFDF826CD3412362A54DCCF166EF1C87E(L_7, NULL);
			V_1 = L_8;
			goto IL_0037;
		}

IL_002c_1:
		{
			// }
			goto IL_0034;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002e;
		}
		throw e;
	}

CATCH_002e:
	{// begin catch(System.Object)
		// catch
		// return -1;
		V_1 = ((int64_t)(-1));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0037;
	}// end catch (depth: 1)

IL_0034:
	{
		// return -1;
		return ((int64_t)(-1));
	}

IL_0037:
	{
		// }
		int64_t L_9 = V_1;
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
// System.Void MHLab.Patch.Core.IO.FilesManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6C3E024D3AC9ED018F1E39ABE72F3A7703F3BD4E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01* L_0 = (U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01*)il2cpp_codegen_object_new(U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9372BB9E72533C9D367D7C48ED865E566746C3B7(L_0, NULL);
		((U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.FilesManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9372BB9E72533C9D367D7C48ED865E566746C3B7 (U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean MHLab.Patch.Core.IO.FilesManager/<>c::<GetFiles>b__1_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetFilesU3Eb__1_0_m619DA3D812F580AA9BAFD73B132FAC2ECB545023 (U3CU3Ec_tEBAC1C6CF298BDAC5E0F40129984A13828591C01* __this, String_t* ___f0, const RuntimeMethod* method) 
{
	{
		// return Directory.GetFiles(path, pattern, SearchOption.AllDirectories).Where(f => !IsFileOsRelated(f)).ToArray();
		String_t* L_0 = ___f0;
		bool L_1;
		L_1 = FilesManager_IsFileOsRelated_mDFCA10C0007325473B245DA419107E05E61B52C4(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void MHLab.Patch.Core.IO.FileSystem::CreateDirectory(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_CreateDirectory_m805ADBFDB317FB7FEB3F08F40B9289C3D3BADCF4 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// DirectoriesManager.Create(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		DirectoriesManager_Create_mA0243125F916BE52DF84B3B70DD58EE839B018DD(L_1, NULL);
		// }
		return;
	}
}
// MHLab.Patch.Core.IO.FilePath MHLab.Patch.Core.IO.FileSystem::GetDirectoryPath(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 FileSystem_GetDirectoryPath_m823BB2FAFD9E13A59E3EFECA585B7BF5ED3BB01D (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return (FilePath)PathsManager.GetDirectoryPath(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		String_t* L_2;
		L_2 = PathsManager_GetDirectoryPath_mB2802217BE08BD18B770B7519DAEF491A9F274FC(L_1, NULL);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_3;
		L_3 = FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4(L_2, NULL);
		return L_3;
	}
}
// MHLab.Patch.Core.IO.FilePath MHLab.Patch.Core.IO.FileSystem::GetCurrentDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 FileSystem_GetCurrentDirectory_m0D54419E495A8B0A77D6AF53006DD607512F22F3 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, const RuntimeMethod* method) 
{
	{
		// return (FilePath)FilesManager.SanitizePath(Directory.GetCurrentDirectory());
		String_t* L_0;
		L_0 = Directory_GetCurrentDirectory_m7EA69F721BEEC05DC0FBF8E9189990BF9F856363(NULL);
		String_t* L_1;
		L_1 = FilesManager_SanitizePath_m3B8097CCDA19BBD4505D1857EB95F8FBB1743AB9(L_0, NULL);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_2;
		L_2 = FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4(L_1, NULL);
		return L_2;
	}
}
// System.Boolean MHLab.Patch.Core.IO.FileSystem::IsDirectoryEmpty(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystem_IsDirectoryEmpty_m34ACB9024ACF7158C78FC8E0934495FDFFC5B763 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return DirectoriesManager.IsEmpty(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		bool L_2;
		L_2 = DirectoriesManager_IsEmpty_m86BF3B190FEAC84EF39C628970368FEE7D2A086B(L_1, NULL);
		return L_2;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::DeleteDirectory(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_DeleteDirectory_mC1B034FAA202703CB9C1270077041CF96B5F2301 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// DirectoriesManager.Delete(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		bool L_2;
		L_2 = DirectoriesManager_Delete_m04E4E87F840D6A6674EEADF221BFA20757212251(L_1, NULL);
		// }
		return;
	}
}
// MHLab.Patch.Core.IO.FilePath MHLab.Patch.Core.IO.FileSystem::GetApplicationDataPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 FileSystem_GetApplicationDataPath_mDA95BF8D47E7751E41C031478582A00D5B9F73AF (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, String_t* ___folderName0, const RuntimeMethod* method) 
{
	{
		// return (FilePath)FilesManager.SanitizePath(
		//     PathsManager.Combine(
		//         PathsManager.GetSpecialPath(Environment.SpecialFolder.ApplicationData),
		//         folderName
		//     )
		// );
		String_t* L_0;
		L_0 = PathsManager_GetSpecialPath_mB216C607EA909159B386B954EE6C3CB587D81949(((int32_t)26), NULL);
		String_t* L_1 = ___folderName0;
		String_t* L_2;
		L_2 = PathsManager_Combine_mE72FA64A56E726AD1D400F89BBBA283A6553773A(L_0, L_1, NULL);
		String_t* L_3;
		L_3 = FilesManager_SanitizePath_m3B8097CCDA19BBD4505D1857EB95F8FBB1743AB9(L_2, NULL);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_4;
		L_4 = FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4(L_3, NULL);
		return L_4;
	}
}
// MHLab.Patch.Core.IO.FilePath MHLab.Patch.Core.IO.FileSystem::CombinePaths(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 FileSystem_CombinePaths_m3F3925511C05681357B814D1A52988A6D7D86910 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) 
{
	{
		// return (FilePath)PathsManager.Combine(paths);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___paths0;
		String_t* L_1;
		L_1 = PathsManager_Combine_mFD17C3F71155F133E7E4140053C9567478C9A083(L_0, NULL);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_2;
		L_2 = FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4(L_1, NULL);
		return L_2;
	}
}
// MHLab.Patch.Core.IO.FilePath MHLab.Patch.Core.IO.FileSystem::CombinePaths(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 FileSystem_CombinePaths_m033DF7FCFBAB5B13469D8827B2FCF4E8E9946A41 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) 
{
	{
		// return (FilePath)PathsManager.Combine(path1, path2);
		String_t* L_0 = ___path10;
		String_t* L_1 = ___path21;
		String_t* L_2;
		L_2 = PathsManager_Combine_mE72FA64A56E726AD1D400F89BBBA283A6553773A(L_0, L_1, NULL);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_3;
		L_3 = FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4(L_2, NULL);
		return L_3;
	}
}
// MHLab.Patch.Core.IO.FilePath MHLab.Patch.Core.IO.FileSystem::CombineUri(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 FileSystem_CombineUri_m86861194BE6281B1E87AFC3E462762150EA16218 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___uris0, const RuntimeMethod* method) 
{
	{
		// return (FilePath)PathsManager.UriCombine(uris);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___uris0;
		String_t* L_1;
		L_1 = PathsManager_UriCombine_m0B190BF4FB39E841ABA3236DBABCE9DE5692C3C4(L_0, NULL);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_2;
		L_2 = FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4(L_1, NULL);
		return L_2;
	}
}
// MHLab.Patch.Core.IO.FilePath MHLab.Patch.Core.IO.FileSystem::SanitizePath(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 FileSystem_SanitizePath_m066F926C3B160F98E1FE3E2F852EBBA9BE5C9E7F (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return (FilePath)FilesManager.SanitizePath(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		String_t* L_2;
		L_2 = FilesManager_SanitizePath_m3B8097CCDA19BBD4505D1857EB95F8FBB1743AB9(L_1, NULL);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_3;
		L_3 = FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4(L_2, NULL);
		return L_3;
	}
}
// System.IO.Stream MHLab.Patch.Core.IO.FileSystem::CreateFile(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* FileSystem_CreateFile_m379E6145FA51439D2AE60035C14D3EEBD3502744 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return File.Create(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2;
		L_2 = File_Create_m1CEFB773993DCC259CC20C29818B754726A25E89(L_1, NULL);
		return L_2;
	}
}
// System.String MHLab.Patch.Core.IO.FileSystem::GetFilename(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileSystem_GetFilename_mF4B3B447C3DCD3FC980AF89EB53381E85106BC8A (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return PathsManager.GetFilename(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		String_t* L_2;
		L_2 = PathsManager_GetFilename_mE02AF8DECD9D0E1F3585D3D13610A81736F21DEA(L_1, NULL);
		return L_2;
	}
}
// MHLab.Patch.Core.IO.FilePath[] MHLab.Patch.Core.IO.FileSystem::GetFilesList(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePathU5BU5D_t9693191E2004496B26B8779125BE19248467A924* FileSystem_GetFilesList_mDE6519979B12353A14A7CCAA170569C1973B8FF5 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m3F49E0A8F18B3D563CB76937ED85E35FE0BAEFFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m5A1DF15068006271E124D044365DF17D829E31FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetFilesListU3Eb__12_0_m330DAA70A5774259B14F9FF93B2C37E22BD62B81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF* G_B2_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF* G_B1_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_1 = NULL;
	{
		// return FilesManager.GetFiles(path.FullPath).Select(stringPath => (FilePath)stringPath).ToArray();
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = FilesManager_GetFiles_mD4A091EFB6CF9598E108D8490B5724AD636FB7FB(L_1, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var);
		Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF* L_3 = ((U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1;
		Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var);
		U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF* L_5 = ((U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF* L_6 = (Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF*)il2cpp_codegen_object_new(Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mCF29AC6D4AC322EEEAB6898906FE8B3EA19875D4(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CGetFilesListU3Eb__12_0_m330DAA70A5774259B14F9FF93B2C37E22BD62B81_RuntimeMethod_var), NULL);
		Func_2_t936D50985B0153265233BD6B5048A69361BA8EFF* L_7 = L_6;
		((U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var))->___U3CU3E9__12_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisString_t_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m3F49E0A8F18B3D563CB76937ED85E35FE0BAEFFB((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisString_t_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m3F49E0A8F18B3D563CB76937ED85E35FE0BAEFFB_RuntimeMethod_var);
		FilePathU5BU5D_t9693191E2004496B26B8779125BE19248467A924* L_9;
		L_9 = Enumerable_ToArray_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m5A1DF15068006271E124D044365DF17D829E31FA(L_8, Enumerable_ToArray_TisFilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0_m5A1DF15068006271E124D044365DF17D829E31FA_RuntimeMethod_var);
		return L_9;
	}
}
// MHLab.Patch.Core.IO.LocalFileInfo[] MHLab.Patch.Core.IO.FileSystem::GetFilesInfo(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3* FileSystem_GetFilesInfo_m5B9B1DCC7FF5DAAF469070FEE8CE7CBBC2570823 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return FilesManager.GetFilesInfo(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3* L_2;
		L_2 = FilesManager_GetFilesInfo_mB46CF315663C260AB6A0D667FEBECE5668FFF4BE(L_1, NULL);
		return L_2;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::GetFilesInfo(MHLab.Patch.Core.IO.FilePath,MHLab.Patch.Core.IO.LocalFileInfo[]&,System.Collections.Generic.Dictionary`2<System.String,MHLab.Patch.Core.IO.LocalFileInfo>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_GetFilesInfo_m49E25F045B9E56D97A89284FB14FC887F0EA2939 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3** ___fileInfo1, Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07** ___fileInfoMap2, const RuntimeMethod* method) 
{
	{
		// FilesManager.GetFilesInfo(path.FullPath, out fileInfo, out fileInfoMap);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		LocalFileInfoU5BU5D_t13BE093C5546837295B64AFAB2A041E382065FE3** L_2 = ___fileInfo1;
		Dictionary_2_t9C48661A94C7674D3C269E71BC11216C2E092E07** L_3 = ___fileInfoMap2;
		FilesManager_GetFilesInfo_mAEF3E6DB67F8B3DB04E911834DEAF0564F12BB07(L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// MHLab.Patch.Core.IO.LocalFileInfo MHLab.Patch.Core.IO.FileSystem::GetFileInfo(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* FileSystem_GetFileInfo_mE079BFE07ED5910751D79CD7636017312E227BAC (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return FilesManager.GetFileInfo(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_2;
		L_2 = FilesManager_GetFileInfo_mAC4A0073C098530B6D79022F633956AB53BCF852(L_1, NULL);
		return L_2;
	}
}
// System.IO.Stream MHLab.Patch.Core.IO.FileSystem::GetFileStream(MHLab.Patch.Core.IO.FilePath,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* FileSystem_GetFileStream_mEB72F68038640FEE70E3CC872D81AF5229627D05 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, int32_t ___fileMode1, int32_t ___fileAccess2, int32_t ___fileShare3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var stream = new FileStream(path.FullPath, fileMode, fileAccess, fileShare);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		int32_t L_2 = ___fileMode1;
		int32_t L_3 = ___fileAccess2;
		int32_t L_4 = ___fileShare3;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FileStream__ctor_mA39506EF7A1F33FCA0199B880BE1D82217E33EEC(L_5, L_1, L_2, L_3, L_4, NULL);
		// return stream;
		return L_5;
	}
}
// System.String MHLab.Patch.Core.IO.FileSystem::ReadAllTextFromFile(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileSystem_ReadAllTextFromFile_m03C6C10876933C9CABD43513306C570B5721ECE0 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return File.ReadAllText(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		String_t* L_2;
		L_2 = File_ReadAllText_m5635BE83C14358AB1721547180F43103F777CEB5(L_1, NULL);
		return L_2;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::WriteAllTextToFile(MHLab.Patch.Core.IO.FilePath,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_WriteAllTextToFile_m3300A5D1BC47D28E8CFC7CD186B461DD1F372C98 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, String_t* ___content1, const RuntimeMethod* method) 
{
	{
		// File.WriteAllText(path.FullPath, content);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		String_t* L_2 = ___content1;
		File_WriteAllText_mE462D8448CA65183AA5D464210706167E0EF19EB(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Byte[] MHLab.Patch.Core.IO.FileSystem::ReadAllBytesFromFile(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FileSystem_ReadAllBytesFromFile_m38255BC2F831E0415970A243602B461D3F5733F8 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return File.ReadAllBytes(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = File_ReadAllBytes_mE0C2C5A0270CD40C496E85B1D8BA15C607E7011E(L_1, NULL);
		return L_2;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::WriteAllBytesToFile(MHLab.Patch.Core.IO.FilePath,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_WriteAllBytesToFile_m443258B45BDC711D46A16EC32445A4EB461A9D0A (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___content1, const RuntimeMethod* method) 
{
	{
		// File.WriteAllBytes(path.FullPath, content);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___content1;
		File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean MHLab.Patch.Core.IO.FileSystem::FileExists(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystem_FileExists_m5D7A3EAD97A36A72018C714BA47612E2BDCC383A (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return FilesManager.Exists(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		bool L_2;
		L_2 = FilesManager_Exists_m7A87D7B2B35BFDF19C16307561F109581FB55DD1(L_1, NULL);
		return L_2;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::CopyFile(MHLab.Patch.Core.IO.FilePath,MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_CopyFile_mE3F70D56D2164D39C4DFB854682662901A6F3BAB (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___sourcePath0, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___destinationPath1, const RuntimeMethod* method) 
{
	{
		// FilesManager.Copy(sourcePath.FullPath, destinationPath.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___sourcePath0;
		String_t* L_1 = L_0.___FullPath_1;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_2 = ___destinationPath1;
		String_t* L_3 = L_2.___FullPath_1;
		FilesManager_Copy_mD177C65490741211D429BCE2436AD0347C458B07(L_1, L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::MoveFile(MHLab.Patch.Core.IO.FilePath,MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_MoveFile_m1E3E64A1C53B4AD441317ED31BAF00347326F398 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___sourcePath0, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___destinationPath1, const RuntimeMethod* method) 
{
	{
		// FilesManager.Move(sourcePath.FullPath, destinationPath.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___sourcePath0;
		String_t* L_1 = L_0.___FullPath_1;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_2 = ___destinationPath1;
		String_t* L_3 = L_2.___FullPath_1;
		FilesManager_Move_m359E99D1C5B3B797E399CB175E4209058D2E8EC8(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::RenameFile(MHLab.Patch.Core.IO.FilePath,MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_RenameFile_m333569DFD405F6B7E40233481543382CE9145FDC (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___sourcePath0, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___destinationPath1, const RuntimeMethod* method) 
{
	{
		// FilesManager.Rename(sourcePath.FullPath, destinationPath.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___sourcePath0;
		String_t* L_1 = L_0.___FullPath_1;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_2 = ___destinationPath1;
		String_t* L_3 = L_2.___FullPath_1;
		FilesManager_Rename_m7D03DCE606C5A15CB0C4967BDE459E4693F1BCB2(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Boolean MHLab.Patch.Core.IO.FileSystem::IsFileLocked(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystem_IsFileLocked_mB60607CF56FA938F4C58A1E8E7E2641F0DD94C53 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return FilesManager.IsFileLocked(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		bool L_2;
		L_2 = FilesManager_IsFileLocked_mC87BE0D9D03AFEB13AD01F12156C3D973064600F(L_1, NULL);
		return L_2;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::UnlockFile(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_UnlockFile_m61B377F252865B7F1395E0CF58E7700BFA4D13CA (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (IsFileLocked(path) == false) return;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		bool L_1;
		L_1 = FileSystem_IsFileLocked_mB60607CF56FA938F4C58A1E8E7E2641F0DD94C53(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (IsFileLocked(path) == false) return;
		return;
	}

IL_000a:
	{
		// var renamedPath = (FilePath)GetTemporaryDeletingFileName(path);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_2 = ___path0;
		String_t* L_3;
		L_3 = FileSystem_GetTemporaryDeletingFileName_m0B20155B1A0AAB123236A73C2D71F7324C1C8A7C(__this, L_2, NULL);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_4;
		L_4 = FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4(L_3, NULL);
		V_0 = L_4;
		// if (FileExists(renamedPath)) DeleteFile(renamedPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_5 = V_0;
		bool L_6;
		L_6 = FileSystem_FileExists_m5D7A3EAD97A36A72018C714BA47612E2BDCC383A(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		// if (FileExists(renamedPath)) DeleteFile(renamedPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_7 = V_0;
		FileSystem_DeleteFile_mCC5F26FA72FF55B388B9D5BE8B417FC50BAAA10A(__this, L_7, NULL);
	}

IL_0027:
	{
		// RenameFile(path, renamedPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_8 = ___path0;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_9 = V_0;
		FileSystem_RenameFile_m333569DFD405F6B7E40233481543382CE9145FDC(__this, L_8, L_9, NULL);
		// CopyFile(renamedPath, path);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_10 = V_0;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_11 = ___path0;
		FileSystem_CopyFile_mE3F70D56D2164D39C4DFB854682662901A6F3BAB(__this, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Boolean MHLab.Patch.Core.IO.FileSystem::IsDirectoryWritable(MHLab.Patch.Core.IO.FilePath,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileSystem_IsDirectoryWritable_mD45630A37EBF16AC161C2007C4D327AD50A6A490 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, bool ___throwOnFail1, const RuntimeMethod* method) 
{
	{
		// return FilesManager.IsDirectoryWritable(path.FullPath, throwOnFail);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		bool L_2 = ___throwOnFail1;
		bool L_3;
		L_3 = FilesManager_IsDirectoryWritable_mECA260CB4B76E4DC35D9E7CBD5C6F7DD3D9C6655(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 MHLab.Patch.Core.IO.FileSystem::DeleteMultipleFiles(MHLab.Patch.Core.IO.FilePath,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileSystem_DeleteMultipleFiles_m20C33D0607D36D9631565A7A9026282862EC60CE (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, String_t* ___pattern1, const RuntimeMethod* method) 
{
	{
		// return FilesManager.DeleteMultiple(path.FullPath, pattern);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		String_t* L_2 = ___pattern1;
		int32_t L_3;
		L_3 = FilesManager_DeleteMultiple_mDCD2A3E19DBED7B17C1D4BEFAC84AFD513E84BDD(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 MHLab.Patch.Core.IO.FileSystem::DeleteTemporaryDeletingFiles(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileSystem_DeleteTemporaryDeletingFiles_m770A801024D4B5EE0D0FB58BA28499A97A9224FC (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___folderPath0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BAC2607E4DC5E7F0229DD7CA4BDEF951A39A6CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DeleteMultipleFiles(folderPath, "*.temp.delete_me");
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___folderPath0;
		int32_t L_1;
		L_1 = FileSystem_DeleteMultipleFiles_m20C33D0607D36D9631565A7A9026282862EC60CE(__this, L_0, _stringLiteral3BAC2607E4DC5E7F0229DD7CA4BDEF951A39A6CC, NULL);
		return L_1;
	}
}
// System.String MHLab.Patch.Core.IO.FileSystem::GetTemporaryDeletingFileName(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileSystem_GetTemporaryDeletingFileName_m0B20155B1A0AAB123236A73C2D71F7324C1C8A7C (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return FilesManager.GetTemporaryDeletingFileName(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		String_t* L_2;
		L_2 = FilesManager_GetTemporaryDeletingFileName_mE713047852C2C23A45E488568BC6842A68317059(L_1, NULL);
		return L_2;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::DeleteFile(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_DeleteFile_mCC5F26FA72FF55B388B9D5BE8B417FC50BAAA10A (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// FilesManager.Delete(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		FilesManager_Delete_m5E2179E78D03CF813277423435CCBD2D9682ED67(L_1, NULL);
		// }
		return;
	}
}
// System.Int64 MHLab.Patch.Core.IO.FileSystem::GetAvailableDiskSpace(MHLab.Patch.Core.IO.FilePath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileSystem_GetAvailableDiskSpace_m7C91065B4C4204B5CFC1DF9963BB40952EDA35A4 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, const RuntimeMethod* method) 
{
	{
		// return FilesManager.GetAvailableDiskSpace(path.FullPath);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		int64_t L_2;
		L_2 = FilesManager_GetAvailableDiskSpace_m1F3A1556FC64B4DCD2F4F4C94EC56FA35B684345(L_1, NULL);
		return L_2;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::SetFileAttributes(MHLab.Patch.Core.IO.FilePath,System.IO.FileAttributes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_SetFileAttributes_mA31BB7172C7B9556312369B20BEFF955F101D6EC (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, int32_t ___attributes1, const RuntimeMethod* method) 
{
	{
		// File.SetAttributes(path.FullPath, attributes);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		int32_t L_2 = ___attributes1;
		File_SetAttributes_m61620C95541E700F19541D8D9D179CCA9F480578(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::SetLastWriteTime(MHLab.Patch.Core.IO.FilePath,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_SetLastWriteTime_m4E2CF4F2979AD04FBD0B45DD880A5DE059A581C1 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___date1, const RuntimeMethod* method) 
{
	{
		// File.SetLastWriteTime(path.FullPath, date);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___date1;
		File_SetLastWriteTime_m444C27684387AD8DC03E739B9CCAA4927C75FDBC(L_1, L_2, NULL);
		// File.SetLastWriteTimeUtc(path.FullPath, date);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_3 = ___path0;
		String_t* L_4 = L_3.___FullPath_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ___date1;
		File_SetLastWriteTimeUtc_m602D2AB1226478E5D0F79BF03765C0DCA51364DE(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::EnsureShortcutOnDesktop(MHLab.Patch.Core.IO.FilePath,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem_EnsureShortcutOnDesktop_mDADBAA46CDAD72D3F3B3F6C56E4988D63CD43B22 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 ___path0, String_t* ___shortcutName1, const RuntimeMethod* method) 
{
	{
		// FilesManager.EnsureShortcutOnDesktop(path.FullPath, shortcutName);
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_0 = ___path0;
		String_t* L_1 = L_0.___FullPath_1;
		String_t* L_2 = ___shortcutName1;
		FilesManager_EnsureShortcutOnDesktop_m79D03315D4588020E12541A7579FD9B2B1C5C27D(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystem__ctor_m9F37EA561C7FD2D5DB8AC8B8DA9BE17292157724 (FileSystem_tFDC7AE0CDD5520B96322449FF082117706616463* __this, const RuntimeMethod* method) 
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
// System.Void MHLab.Patch.Core.IO.FileSystem/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB185EB9C39CB2EC16B8870B105C7A7F0F14A23C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF* L_0 = (U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF*)il2cpp_codegen_object_new(U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m92B8844487C5B3A7EC239E27CF3D8ED7A0A5447F(L_0, NULL);
		((U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.FileSystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m92B8844487C5B3A7EC239E27CF3D8ED7A0A5447F (U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// MHLab.Patch.Core.IO.FilePath MHLab.Patch.Core.IO.FileSystem/<>c::<GetFilesList>b__12_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 U3CU3Ec_U3CGetFilesListU3Eb__12_0_m330DAA70A5774259B14F9FF93B2C37E22BD62B81 (U3CU3Ec_t2BC50DDB7C042AB9122B1333F0699FDF691567FF* __this, String_t* ___stringPath0, const RuntimeMethod* method) 
{
	{
		// return FilesManager.GetFiles(path.FullPath).Select(stringPath => (FilePath)stringPath).ToArray();
		String_t* L_0 = ___stringPath0;
		FilePath_t892AEE40E5F720EE418E78D9C959EFE6129F52C0 L_1;
		L_1 = FilePath_op_Explicit_m34C283C55C544AA86927DD258BD8AE6BCC4B7EC4(L_0, NULL);
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
// System.String MHLab.Patch.Core.IO.LocalFileInfo::get_RelativePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalFileInfo_get_RelativePath_m8C08DEC7A4C19F8FBF931E68264A4108776AF586 (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) 
{
	{
		// public string RelativePath { get; set; }
		String_t* L_0 = __this->___U3CRelativePathU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.IO.LocalFileInfo::set_RelativePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileInfo_set_RelativePath_mC6B17F4C1049F0835EC352189A24EA910DEFE851 (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string RelativePath { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CRelativePathU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRelativePathU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int64 MHLab.Patch.Core.IO.LocalFileInfo::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LocalFileInfo_get_Size_m6933D0E9E58FEBBE4EE3DCA88316E70E94733E81 (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) 
{
	{
		// public long Size { get; set; }
		int64_t L_0 = __this->___U3CSizeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.IO.LocalFileInfo::set_Size(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileInfo_set_Size_m7F31BACB01284535334BAF7E417AD1509AB8F9AD (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public long Size { get; set; }
		int64_t L_0 = ___value0;
		__this->___U3CSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.DateTime MHLab.Patch.Core.IO.LocalFileInfo::get_LastWriting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D LocalFileInfo_get_LastWriting_m1134F4F4BA3C48471C0C6965E5C70B9AE93DC5C1 (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime LastWriting { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CLastWritingU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.IO.LocalFileInfo::set_LastWriting(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileInfo_set_LastWriting_m08ED5420684C7B8DC6143A17343A45219D611BFF (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	{
		// public DateTime LastWriting { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		__this->___U3CLastWritingU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.IO.FileAttributes MHLab.Patch.Core.IO.LocalFileInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocalFileInfo_get_Attributes_mB6B1BB2BC01635798D05B302E223A276CE910C36 (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) 
{
	{
		// public FileAttributes Attributes { get; set; }
		int32_t L_0 = __this->___U3CAttributesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void MHLab.Patch.Core.IO.LocalFileInfo::set_Attributes(System.IO.FileAttributes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileInfo_set_Attributes_m1A95A06307EA4DAD9CB52D07220C164E69653B9B (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public FileAttributes Attributes { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CAttributesU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.LocalFileInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileInfo__ctor_m36AA187E307EFC0C24EDB7440D05B894BF456175 (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) 
{
	{
		// public LocalFileInfo()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.IO.LocalFileInfo::.ctor(MHLab.Patch.Core.IO.LocalFileInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalFileInfo__ctor_m3FF5796509B6AEF6B27E09D51B2B17FE6800C733 (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* ___source0, const RuntimeMethod* method) 
{
	{
		// public LocalFileInfo(LocalFileInfo source)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// RelativePath = source.RelativePath;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_0 = ___source0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = LocalFileInfo_get_RelativePath_m8C08DEC7A4C19F8FBF931E68264A4108776AF586_inline(L_0, NULL);
		LocalFileInfo_set_RelativePath_mC6B17F4C1049F0835EC352189A24EA910DEFE851_inline(__this, L_1, NULL);
		// Size         = source.Size;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_2 = ___source0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = LocalFileInfo_get_Size_m6933D0E9E58FEBBE4EE3DCA88316E70E94733E81_inline(L_2, NULL);
		LocalFileInfo_set_Size_m7F31BACB01284535334BAF7E417AD1509AB8F9AD_inline(__this, L_3, NULL);
		// LastWriting  = source.LastWriting;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_4 = ___source0;
		NullCheck(L_4);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = LocalFileInfo_get_LastWriting_m1134F4F4BA3C48471C0C6965E5C70B9AE93DC5C1_inline(L_4, NULL);
		LocalFileInfo_set_LastWriting_m08ED5420684C7B8DC6143A17343A45219D611BFF_inline(__this, L_5, NULL);
		// Attributes   = source.Attributes;
		LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* L_6 = ___source0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = LocalFileInfo_get_Attributes_mB6B1BB2BC01635798D05B302E223A276CE910C36_inline(L_6, NULL);
		LocalFileInfo_set_Attributes_m1A95A06307EA4DAD9CB52D07220C164E69653B9B_inline(__this, L_7, NULL);
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
// System.String MHLab.Patch.Core.IO.PathsManager::GetDirectoryPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_GetDirectoryPath_mB2802217BE08BD18B770B7519DAEF491A9F274FC (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.GetDirectoryName(path);
		String_t* L_0 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_0, NULL);
		return L_1;
	}
}
// System.String MHLab.Patch.Core.IO.PathsManager::GetDirectoryParent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_GetDirectoryParent_m7A5656070F625FA5BFF03942768D5E2B5E41E0CD (String_t* ___path0, const RuntimeMethod* method) 
{
	{
		// return Directory.GetParent(path).FullName;
		String_t* L_0 = ___path0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_1;
		L_1 = Directory_GetParent_m2BB7C00349FB9BC0E79725723B451A7F75E941C8(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_1);
		return L_2;
	}
}
// System.String MHLab.Patch.Core.IO.PathsManager::GetFilename(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_GetFilename_mE02AF8DECD9D0E1F3585D3D13610A81736F21DEA (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.GetFileName(path);
		String_t* L_0 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetFileName_mEBC73E0C8D8C56214D1DA4BA8409C5B5F00457A5(L_0, NULL);
		return L_1;
	}
}
// System.String MHLab.Patch.Core.IO.PathsManager::Combine(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_Combine_mFD17C3F71155F133E7E4140053C9567478C9A083 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___paths0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.Combine(paths);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___paths0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m414B2D97688304C226B1828FFCD5A3AF5824D0EF(L_0, NULL);
		return L_1;
	}
}
// System.String MHLab.Patch.Core.IO.PathsManager::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_Combine_mE72FA64A56E726AD1D400F89BBBA283A6553773A (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.Combine(path1, path2);
		String_t* L_0 = ___path10;
		String_t* L_1 = ___path21;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String MHLab.Patch.Core.IO.PathsManager::UriCombine(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_UriCombine_m0B190BF4FB39E841ABA3236DBABCE9DE5692C3C4 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___uriParts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	{
		// string uri = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		// if (uriParts != null && uriParts.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___uriParts0;
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ___uriParts0;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0063;
		}
	}
	{
		// char[] trims = new char[] { '\\', '/' };
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)47));
		V_1 = L_5;
		// uri = (uriParts[0] ?? string.Empty).TrimEnd(trims);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ___uriParts0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		String_t* L_9 = L_8;
		G_B3_0 = L_9;
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_002a;
		}
	}
	{
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B4_0 = L_10;
	}

IL_002a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = V_1;
		NullCheck(G_B4_0);
		String_t* L_12;
		L_12 = String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529(G_B4_0, L_11, NULL);
		V_0 = L_12;
		// for (int i = 1; i < uriParts.Length; i++)
		V_2 = 1;
		goto IL_005d;
	}

IL_0035:
	{
		// uri = string.Format("{0}/{1}", uri.TrimEnd(trims), (uriParts[i] ?? string.Empty).TrimStart(trims));
		String_t* L_13 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = V_1;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = String_TrimEnd_mD7CFB0999EEEE20E3A869516EBCE07E8AB5BD529(L_13, L_14, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ___uriParts0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20 = L_19;
		G_B6_0 = L_20;
		G_B6_1 = L_15;
		G_B6_2 = _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
		if (L_20)
		{
			G_B7_0 = L_20;
			G_B7_1 = L_15;
			G_B7_2 = _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
			goto IL_004d;
		}
	}
	{
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B7_0 = L_21;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
	}

IL_004d:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = V_1;
		NullCheck(G_B7_0);
		String_t* L_23;
		L_23 = String_TrimStart_m67833D80326BEA11CC3517CE03CD7B16669BCEEC(G_B7_0, L_22, NULL);
		String_t* L_24;
		L_24 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(G_B7_2, G_B7_1, L_23, NULL);
		V_0 = L_24;
		// for (int i = 1; i < uriParts.Length; i++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005d:
	{
		// for (int i = 1; i < uriParts.Length; i++)
		int32_t L_26 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = ___uriParts0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0035;
		}
	}

IL_0063:
	{
		// return uri;
		String_t* L_28 = V_0;
		return L_28;
	}
}
// System.String MHLab.Patch.Core.IO.PathsManager::GetSpecialPath(System.Environment/SpecialFolder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathsManager_GetSpecialPath_mB216C607EA909159B386B954EE6C3CB587D81949 (int32_t ___specialFolder0, const RuntimeMethod* method) 
{
	{
		// return Environment.GetFolderPath(specialFolder);
		int32_t L_0 = ___specialFolder0;
		String_t* L_1;
		L_1 = Environment_GetFolderPath_m6294B29BDF0AC7CBB12EE2BB109D6DAA3FE9AF4B(L_0, NULL);
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
// System.Void MHLab.Patch.Core.Compressing.Compressor::Compress(System.String,System.String,System.String,System.Int32,System.Func`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compressor_Compress_mF2F6A7000AD92D8B5769662DE579E60C72F7FAF4 (String_t* ___folderToCompress0, String_t* ___outputFile1, String_t* ___password2, int32_t ___compressionLevel3, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___filesFilter4, const RuntimeMethod* method) 
{
	{
		// ZipCompressor.ZipFolder(outputFile, password, folderToCompress, compressionLevel, filesFilter);
		String_t* L_0 = ___outputFile1;
		String_t* L_1 = ___password2;
		String_t* L_2 = ___folderToCompress0;
		int32_t L_3 = ___compressionLevel3;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_4 = ___filesFilter4;
		ZipCompressor_ZipFolder_m487F11AC5FB441BFF5F22EA42DA48910B7C3DE4B(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Compressing.Compressor::Decompress(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compressor_Decompress_mD98C583A6149C63251BF7B52E3E0EE74A7AB5A22 (String_t* ___folderWhereDecompress0, String_t* ___inputFile1, String_t* ___password2, const RuntimeMethod* method) 
{
	{
		// ZipCompressor.ExtractZipFile(inputFile, password, folderWhereDecompress);
		String_t* L_0 = ___inputFile1;
		String_t* L_1 = ___password2;
		String_t* L_2 = ___folderWhereDecompress0;
		ZipCompressor_ExtractZipFile_mF50D2126B1AFBBD6E63DF5D7064592DB55A1778C(L_0, L_1, L_2, NULL);
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
// System.Void MHLab.Patch.Core.Compressing.ZipCompressor::ZipFolder(System.String,System.String,System.String,System.Int32,System.Func`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipCompressor_ZipFolder_m487F11AC5FB441BFF5F22EA42DA48910B7C3DE4B (String_t* ___outPathname0, String_t* ___password1, String_t* ___folderName2, int32_t ___compressionLevel3, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___filesFilter4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		// ZipConstants.DefaultCodePage = 0;
		ZipConstants_set_DefaultCodePage_m35C6A7153FED341C076693246F6B371FA37CCBC0(0, NULL);
		// using (var fsOut = File.Create(outPathname))
		String_t* L_0 = ___outPathname0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
		L_1 = File_Create_m1CEFB773993DCC259CC20C29818B754726A25E89(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
					if (!L_2)
					{
						goto IL_006f;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var zipStream = new ZipOutputStream(fsOut))
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
				ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_5 = (ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7*)il2cpp_codegen_object_new(ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ZipOutputStream__ctor_m0A3193C520D9538D6ACB806C4F9A44EFF48AC0C6(L_5, L_4, NULL);
				V_1 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_005c_1:
					{// begin finally (depth: 2)
						{
							ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_6 = V_1;
							if (!L_6)
							{
								goto IL_0065_1;
							}
						}
						{
							ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_7 = V_1;
							NullCheck(L_7);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
						}

IL_0065_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// zipStream.SetLevel(compressionLevel); //0-9, 9 being the highest level of compression
						ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_8 = V_1;
						int32_t L_9 = ___compressionLevel3;
						NullCheck(L_8);
						ZipOutputStream_SetLevel_m030F545E2DB5C05BE704729444518397F674D4FF(L_8, L_9, NULL);
						// zipStream.Password = password;  // optional. Null is the same as not setting. Required if using AES.
						ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_10 = V_1;
						String_t* L_11 = ___password1;
						NullCheck(L_10);
						ZipOutputStream_set_Password_m29B5BBACBE15BCA65EC7791751FC8C0C14BC25DB(L_10, L_11, NULL);
						// var folderOffset = folderName.Length + (folderName.EndsWith(Path.DirectorySeparatorChar.ToString()) ? 0 : 1);
						String_t* L_12 = ___folderName2;
						NullCheck(L_12);
						int32_t L_13;
						L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
						String_t* L_14 = ___folderName2;
						il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
						Il2CppChar L_15 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
						V_3 = L_15;
						String_t* L_16;
						L_16 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
						NullCheck(L_14);
						bool L_17;
						L_17 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_14, L_16, NULL);
						G_B3_0 = L_13;
						if (L_17)
						{
							G_B4_0 = L_13;
							goto IL_0040_2;
						}
					}
					{
						G_B5_0 = 1;
						G_B5_1 = G_B3_0;
						goto IL_0041_2;
					}

IL_0040_2:
					{
						G_B5_0 = 0;
						G_B5_1 = G_B4_0;
					}

IL_0041_2:
					{
						V_2 = ((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0));
						// CompressFolder(folderName, zipStream, folderOffset, filesFilter);
						String_t* L_18 = ___folderName2;
						ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_19 = V_1;
						int32_t L_20 = V_2;
						Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_21 = ___filesFilter4;
						ZipCompressor_CompressFolder_m58DC647D3A436017A4DF4700EE9B5B627D92D57C(L_18, L_19, L_20, L_21, NULL);
						// zipStream.IsStreamOwner = true; // Makes the Close also Close the underlying stream
						ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_22 = V_1;
						NullCheck(L_22);
						DeflaterOutputStream_set_IsStreamOwner_mB8B0A93A4AC06B6ECD2A61CC6CA7548D09AFBECE_inline(L_22, (bool)1, NULL);
						// zipStream.Close();
						ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_23 = V_1;
						NullCheck(L_23);
						VirtualActionInvoker0::Invoke(20 /* System.Void System.IO.Stream::Close() */, L_23);
						// }
						goto IL_0070;
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

IL_0070:
	{
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Compressing.ZipCompressor::CompressFolder(System.String,ICSharpCode.SharpZipLib.Zip.ZipOutputStream,System.Int32,System.Func`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipCompressor_CompressFolder_m58DC647D3A436017A4DF4700EE9B5B627D92D57C (String_t* ___path0, ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* ___zipStream1, int32_t ___folderOffset2, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___filesFilter3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* V_3 = NULL;
	ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_6 = NULL;
	{
		// var files = Directory.GetFiles(path);
		String_t* L_0 = ___path0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = Directory_GetFiles_m4B12F04FB52DA5311463669EBB83321CB0CF284B(L_0, NULL);
		V_0 = L_1;
		// if (filesFilter != null) files = files.Where(filesFilter).ToArray();
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_2 = ___filesFilter3;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if (filesFilter != null) files = files.Where(filesFilter).ToArray();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_4 = ___filesFilter3;
		RuntimeObject* L_5;
		L_5 = Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1((RuntimeObject*)L_3, L_4, Enumerable_Where_TisString_t_m3AC8838FF43F171EDE6F84319C3CA82832F1D6A1_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_5, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0017:
	{
		// foreach (var filename in files)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0091;
	}

IL_001d:
	{
		// foreach (var filename in files)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		// var fi = new FileInfo(filename);
		String_t* L_12 = L_11;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_13 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_13, L_12, NULL);
		V_3 = L_13;
		// var entryName = filename.Substring(folderOffset); // Makes the name in zip based on the folder
		String_t* L_14 = L_12;
		int32_t L_15 = ___folderOffset2;
		NullCheck(L_14);
		String_t* L_16;
		L_16 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_14, L_15, NULL);
		// entryName = ZipEntry.CleanName(entryName); // Removes drive from name and fixes slash direction
		String_t* L_17;
		L_17 = ZipEntry_CleanName_mFF08255D263D3A3B321DD207D4F8DDB4B95CDC1D(L_16, NULL);
		// var newEntry = new ZipEntry(entryName);
		ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* L_18 = (ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC*)il2cpp_codegen_object_new(ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ZipEntry__ctor_m7BD2DB6ACB668C934BB96470CC280D77602B3F2C(L_18, L_17, NULL);
		V_4 = L_18;
		// newEntry.DateTime = fi.LastWriteTime; // Note the zip format stores 2 second granularity
		ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* L_19 = V_4;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_20 = V_3;
		NullCheck(L_20);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_21;
		L_21 = FileSystemInfo_get_LastWriteTime_m5009457B3D837E929AF4FBC9E2738F15BB6476C5(L_20, NULL);
		NullCheck(L_19);
		ZipEntry_set_DateTime_m9CFCF0F34CA7B71140253D9A8E9FFC6DF02358AD(L_19, L_21, NULL);
		// newEntry.Size = fi.Length;
		ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* L_22 = V_4;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_23 = V_3;
		NullCheck(L_23);
		int64_t L_24;
		L_24 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_23, NULL);
		NullCheck(L_22);
		ZipEntry_set_Size_mE45497AB1946B859DAF71810B643F71FBE216560(L_22, L_24, NULL);
		// zipStream.PutNextEntry(newEntry);
		ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_25 = ___zipStream1;
		ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* L_26 = V_4;
		NullCheck(L_25);
		ZipOutputStream_PutNextEntry_m56C17CC2C9E6D1BBFC315E2BA2A146265F017932(L_25, L_26, NULL);
		// var buffer = new byte[4096];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		V_5 = L_27;
		// using (var streamReader = File.OpenRead(filename))
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_28;
		L_28 = File_OpenRead_m32C8C37542B7A02A2F643E3B816D16ABE690FF50(L_14, NULL);
		V_6 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_29 = V_6;
					if (!L_29)
					{
						goto IL_0086;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_30 = V_6;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
				}

IL_0086:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// StreamUtils.Copy(streamReader, zipStream, buffer);
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_31 = V_6;
			ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_32 = ___zipStream1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_5;
			StreamUtils_Copy_m39E242B89E58257C6818A067122D3A08146A0F98(L_31, L_32, L_33, NULL);
			// }
			goto IL_0087;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// zipStream.CloseEntry();
		ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_34 = ___zipStream1;
		NullCheck(L_34);
		ZipOutputStream_CloseEntry_m74449739588C92E9C366D2460253B2BB9834928C(L_34, NULL);
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0091:
	{
		// foreach (var filename in files)
		int32_t L_36 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_1;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// var folders = Directory.GetDirectories(path);
		String_t* L_38 = ___path0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39;
		L_39 = Directory_GetDirectories_m94C31CB11C7AFC316D40DC06C122C2A45F42EC51(L_38, NULL);
		// foreach (var folder in folders)
		V_1 = L_39;
		V_2 = 0;
		goto IL_00b1;
	}

IL_00a2:
	{
		// foreach (var folder in folders)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = V_1;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		String_t* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		// CompressFolder(folder, zipStream, folderOffset, filesFilter);
		ZipOutputStream_t72373D271802A21FE40589791BFB62A19ABA50A7* L_44 = ___zipStream1;
		int32_t L_45 = ___folderOffset2;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_46 = ___filesFilter3;
		ZipCompressor_CompressFolder_m58DC647D3A436017A4DF4700EE9B5B627D92D57C(L_43, L_44, L_45, L_46, NULL);
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00b1:
	{
		// foreach (var folder in folders)
		int32_t L_48 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = V_1;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_00a2;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Compressing.ZipCompressor::ExtractZipFile(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipCompressor_ExtractZipFile_mF50D2126B1AFBBD6E63DF5D7064592DB55A1778C (String_t* ___archiveFilenameIn0, String_t* ___password1, String_t* ___outFolder2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* V_2 = NULL;
	String_t* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_5 = NULL;
	String_t* V_6 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	{
		// ZipConstants.DefaultCodePage = 0;
		ZipConstants_set_DefaultCodePage_m35C6A7153FED341C076693246F6B371FA37CCBC0(0, NULL);
		// ZipFile zf = null;
		V_0 = (ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ba:
			{// begin finally (depth: 1)
				{
					// if (zf != null)
					ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* L_0 = V_0;
					if (!L_0)
					{
						goto IL_00ca;
					}
				}
				{
					// zf.IsStreamOwner = true; // Makes close also shut the underlying stream
					ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* L_1 = V_0;
					NullCheck(L_1);
					ZipFile_set_IsStreamOwner_mE8950E204E60677DB62D1E768EE1BA27AFE9680E_inline(L_1, (bool)1, NULL);
					// zf.Close(); // Ensure we release resources
					ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* L_2 = V_0;
					NullCheck(L_2);
					ZipFile_Close_m7E452C938FF93B09EC7121F19A6ABC57676EC363(L_2, NULL);
				}

IL_00ca:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var fs = File.OpenRead(archiveFilenameIn);
				String_t* L_3 = ___archiveFilenameIn0;
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4;
				L_4 = File_OpenRead_m32C8C37542B7A02A2F643E3B816D16ABE690FF50(L_3, NULL);
				// zf = new ZipFile(fs);
				ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* L_5 = (ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B*)il2cpp_codegen_object_new(ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B_il2cpp_TypeInfo_var);
				NullCheck(L_5);
				ZipFile__ctor_m811F535E6E2B0485523484A3A26CB49E21F43C1F(L_5, L_4, NULL);
				V_0 = L_5;
				// if (!string.IsNullOrEmpty(password))
				String_t* L_6 = ___password1;
				bool L_7;
				L_7 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_6, NULL);
				if (L_7)
				{
					goto IL_0023_1;
				}
			}
			{
				// zf.Password = password;     // AES encrypted entries are handled automatically
				ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* L_8 = V_0;
				String_t* L_9 = ___password1;
				NullCheck(L_8);
				ZipFile_set_Password_m34C4D5BCD1A7FF98D19912667B74F99AE5436780(L_8, L_9, NULL);
			}

IL_0023_1:
			{
				// foreach (ZipEntry zipEntry in zf)
				ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* L_10 = V_0;
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = ZipFile_GetEnumerator_m76796DA0F0D45A31AAB8A32002A013F5A7B082BA(L_10, NULL);
				V_1 = L_11;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a6_1:
					{// begin finally (depth: 2)
						{
							RuntimeObject* L_12 = V_1;
							V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							RuntimeObject* L_13 = V_8;
							if (!L_13)
							{
								goto IL_00b9_1;
							}
						}
						{
							RuntimeObject* L_14 = V_8;
							NullCheck(L_14);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
						}

IL_00b9_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_009c_2;
					}

IL_002c_2:
					{
						// foreach (ZipEntry zipEntry in zf)
						RuntimeObject* L_15 = V_1;
						NullCheck(L_15);
						RuntimeObject* L_16;
						L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
						V_2 = ((ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC*)CastclassClass((RuntimeObject*)L_16, ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC_il2cpp_TypeInfo_var));
						// if (!zipEntry.IsFile)
						ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* L_17 = V_2;
						NullCheck(L_17);
						bool L_18;
						L_18 = ZipEntry_get_IsFile_mD1B82A90A43FF2953ABC0C25F7CA5B67C6A0257F(L_17, NULL);
						if (!L_18)
						{
							goto IL_009c_2;
						}
					}
					{
						// var entryFileName = zipEntry.Name;
						ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* L_19 = V_2;
						NullCheck(L_19);
						String_t* L_20;
						L_20 = ZipEntry_get_Name_m0811DAFB11AFFE348E5CB9950CDFED26BD3A20BB_inline(L_19, NULL);
						V_3 = L_20;
						// var buffer = new byte[4096];     // 4K is optimum
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
						V_4 = L_21;
						// var zipStream = zf.GetInputStream(zipEntry);
						ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* L_22 = V_0;
						ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* L_23 = V_2;
						NullCheck(L_22);
						Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24;
						L_24 = ZipFile_GetInputStream_m39CEA186797C855DCD52185FC3724BC1C1BB3270(L_22, L_23, NULL);
						V_5 = L_24;
						// var fullZipToPath = Path.Combine(outFolder, entryFileName);
						String_t* L_25 = ___outFolder2;
						String_t* L_26 = V_3;
						il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
						String_t* L_27;
						L_27 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_25, L_26, NULL);
						// var directoryName = Path.GetDirectoryName(fullZipToPath);
						String_t* L_28 = L_27;
						String_t* L_29;
						L_29 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_28, NULL);
						V_6 = L_29;
						// if (!string.IsNullOrEmpty(directoryName))
						String_t* L_30 = V_6;
						bool L_31;
						L_31 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_30, NULL);
						G_B7_0 = L_28;
						if (L_31)
						{
							G_B8_0 = L_28;
							goto IL_007c_2;
						}
					}
					{
						// Directory.CreateDirectory(directoryName);
						String_t* L_32 = V_6;
						DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_33;
						L_33 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_32, NULL);
						G_B8_0 = G_B7_0;
					}

IL_007c_2:
					{
						// using (var streamWriter = File.Create(fullZipToPath))
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_34;
						L_34 = File_Create_m1CEFB773993DCC259CC20C29818B754726A25E89(G_B8_0, NULL);
						V_7 = L_34;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0090_2:
							{// begin finally (depth: 3)
								{
									FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_35 = V_7;
									if (!L_35)
									{
										goto IL_009b_2;
									}
								}
								{
									FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_36 = V_7;
									NullCheck(L_36);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_36);
								}

IL_009b_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// StreamUtils.Copy(zipStream, streamWriter, buffer);
							Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_37 = V_5;
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_38 = V_7;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_4;
							StreamUtils_Copy_m39E242B89E58257C6818A067122D3A08146A0F98(L_37, L_38, L_39, NULL);
							// }
							goto IL_009c_2;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_009c_2:
					{
						// foreach (ZipEntry zipEntry in zf)
						RuntimeObject* L_40 = V_1;
						NullCheck(L_40);
						bool L_41;
						L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_40);
						if (L_41)
						{
							goto IL_002c_2;
						}
					}
					{
						goto IL_00cb;
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

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void MHLab.Patch.Core.Compressing.ZipCompressor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipCompressor__ctor_m828422507797EB50C50BB5E2E0F2B335E5AF700C (ZipCompressor_t83FE90A3175F1A2E718E1B01E688B4CAA132799A* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeltaApplier_set_SkipHashCheck_mA416D89A12A5DF21C37AFC17B79E99889359D911_inline (DeltaApplier_t7A848E8F611AE72599D045EBA7BA290E66144C7C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SkipHashCheck { get; set; }
		bool L_0 = ___value0;
		__this->___U3CSkipHashCheckU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DeltaBuilder_get_ProgressReporter_m254D0C9020C2570F9E7689EE4B212DC8A1389B0D_inline (DeltaBuilder_tDBA36466E79F886EB0140E7492CF35EE51D7013E* __this, const RuntimeMethod* method) 
{
	{
		// public IProgressReporter ProgressReporter { get; set; }
		RuntimeObject* L_0 = __this->___U3CProgressReporterU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HashAlgorithmWrapper_set_Name_m55FDB958D8C7764DA474DDFC0B1BB7F62ABE19C2_inline (HashAlgorithmWrapper_t19183F43E269334A2E9E32F123820EE6D1632276* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_HashAlgorithm_m922F620B7FAB28E335629A4A6186B45F70B5AB13_inline (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IHashAlgorithm HashAlgorithm { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHashAlgorithmU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHashAlgorithmU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_RollingChecksumAlgorithm_m47AC600B0DBD2F19DC2F5A59F2E234A1BBD7D3F1_inline (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IRollingChecksum RollingChecksumAlgorithm { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRollingChecksumAlgorithmU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRollingChecksumAlgorithmU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Signature_set_Chunks_mBBFC9F8174C419CED85761CA7516877570DEE4B1_inline (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<ChunkSignature> Chunks { get; private set; }
		List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* L_0 = ___value0;
		__this->___U3CChunksU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChunksU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignatureBuilder_set_HashAlgorithm_m4039EA2ECBAD8E38930D786000C5FE0C06D9DD8A_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IHashAlgorithm HashAlgorithm { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CHashAlgorithmU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHashAlgorithmU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignatureBuilder_set_RollingChecksumAlgorithm_mE02D0E1918990685714252C591D7FF3C3D5A5CCF_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IRollingChecksum RollingChecksumAlgorithm { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRollingChecksumAlgorithmU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRollingChecksumAlgorithmU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignatureBuilder_set_ProgressReporter_m6B662E2058A95F66D47909405B05CDAE285D93D3_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IProgressReporter ProgressReporter { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CProgressReporterU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProgressReporterU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SignatureBuilder_get_HashAlgorithm_mF8510A30E923F756D682D2559E2E5BF7F633D16D_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) 
{
	{
		// public IHashAlgorithm HashAlgorithm { get; set; }
		RuntimeObject* L_0 = __this->___U3CHashAlgorithmU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SignatureBuilder_get_RollingChecksumAlgorithm_mE3C0C30516597145DB2B62671B67D33E25451FA6_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) 
{
	{
		// public IRollingChecksum RollingChecksumAlgorithm { get; set; }
		RuntimeObject* L_0 = __this->___U3CRollingChecksumAlgorithmU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t SignatureBuilder_get_ChunkSize_m465C941647B4F76C8E35AFBD7F07068A81BCB70D_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) 
{
	{
		// get { return chunkSize; }
		int16_t L_0 = __this->___chunkSize_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SignatureBuilder_get_ProgressReporter_m039F63F3A8C5C8D68E91DB6E406F636F8E1C9562_inline (SignatureBuilder_tB75D16567D68BB1FE715ABDD8B2F0675A7D92D4D* __this, const RuntimeMethod* method) 
{
	{
		// public IProgressReporter ProgressReporter { get; set; }
		RuntimeObject* L_0 = __this->___U3CProgressReporterU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* Signature_get_Chunks_m701AE007E0D519447ACC0C9C0E39EA0C38352B52_inline (Signature_t896272286324FA4D7D11F8635C1D5B50E2EFF256* __this, const RuntimeMethod* method) 
{
	{
		// public List<ChunkSignature> Chunks { get; private set; }
		List_1_t1DCC265DFC21380BF11BE0B98B1DC695B65097A8* L_0 = __this->___U3CChunksU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalFileInfo_set_Size_m7F31BACB01284535334BAF7E417AD1509AB8F9AD_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// public long Size { get; set; }
		int64_t L_0 = ___value0;
		__this->___U3CSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalFileInfo_set_LastWriting_m08ED5420684C7B8DC6143A17343A45219D611BFF_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	{
		// public DateTime LastWriting { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		__this->___U3CLastWritingU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalFileInfo_set_Attributes_m1A95A06307EA4DAD9CB52D07220C164E69653B9B_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public FileAttributes Attributes { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CAttributesU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LocalFileInfo_set_RelativePath_mC6B17F4C1049F0835EC352189A24EA910DEFE851_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string RelativePath { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CRelativePathU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRelativePathU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LocalFileInfo_get_RelativePath_m8C08DEC7A4C19F8FBF931E68264A4108776AF586_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) 
{
	{
		// public string RelativePath { get; set; }
		String_t* L_0 = __this->___U3CRelativePathU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Exception_get_HResult_mBA9CD3C01C2F0C68DFA6ED7824F7371D7E1A4163_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____HResult_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t LocalFileInfo_get_Size_m6933D0E9E58FEBBE4EE3DCA88316E70E94733E81_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) 
{
	{
		// public long Size { get; set; }
		int64_t L_0 = __this->___U3CSizeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D LocalFileInfo_get_LastWriting_m1134F4F4BA3C48471C0C6965E5C70B9AE93DC5C1_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime LastWriting { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CLastWritingU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LocalFileInfo_get_Attributes_mB6B1BB2BC01635798D05B302E223A276CE910C36_inline (LocalFileInfo_tC63338C1140E2D564B481FFE6DA5FB3C1183E2F0* __this, const RuntimeMethod* method) 
{
	{
		// public FileAttributes Attributes { get; set; }
		int32_t L_0 = __this->___U3CAttributesU3Ek__BackingField_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeflaterOutputStream_set_IsStreamOwner_mB8B0A93A4AC06B6ECD2A61CC6CA7548D09AFBECE_inline (DeflaterOutputStream_t1A33D4BC42D9AF34A523563436A1C6A1136CE259* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsStreamOwnerU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ZipFile_set_IsStreamOwner_mE8950E204E60677DB62D1E768EE1BA27AFE9680E_inline (ZipFile_t8623A6B24F047EE8218B35FA81651F841B83974B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___isStreamOwner_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ZipEntry_get_Name_m0811DAFB11AFFE348E5CB9950CDFED26BD3A20BB_inline (ZipEntry_t483CBFA9890036FAA5A865C33732D292A8F06BCC* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_3;
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
