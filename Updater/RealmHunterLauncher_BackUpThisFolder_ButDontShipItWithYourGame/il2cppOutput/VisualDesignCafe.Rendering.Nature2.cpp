#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Action`1<System.Int32[]>
struct Action_1_tECA2B8FF5963F782A051DC83DA2E1DAC980E27D2;
// System.Action`1<System.Int32[,]>
struct Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87;
// System.Action`1<System.Single[,]>
struct Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879;
// System.Action`1<System.Single[,,]>
struct Action_1_t0241D6630458FB8256BF63E9B9F522C80568350B;
// System.Action`1<VisualDesignCafe.Rendering.Nature.Cell>
struct Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Rect>
struct Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203;
// System.Action`1<VisualDesignCafe.Rendering.Nature.TerrainRect>
struct Action_1_t0E703B63899DA25B799B0D3495FBAB3A030CD3F5;
// System.Action`1<VisualDesignCafe.Rendering.Nature.CameraCollection/Entry>
struct Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>
struct Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96;
// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Int32[]>
struct Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A;
// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Int32[,]>
struct Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF;
// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Single[,]>
struct Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE;
// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Single[,,]>
struct Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69;
// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Object>
struct Func_4_t43F80E1386F9341342B24A8A1042D33A41C62C88;
// System.Func`4<System.Object,System.Int32,UnityEngine.Rect,System.Object>
struct Func_4_tA5A5D9CCC40F7704E0BF95C4AEED457C934BE318;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>
struct KeyCollection_t53A37B56FEFCA55992ED3B76263A384258008C24;
// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[]>>
struct List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020;
// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[,]>>
struct List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9;
// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,]>>
struct List_1_tF6C9D180FB862469CC481462DE748286F6195098;
// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,,]>>
struct List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3;
// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Object>>
struct List_1_tA566AA2738F7D45927E2B99DF0BD2469CFA2CF25;
// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.BuildTask>
struct List_1_tCF67ECDF243A57CC13F078F1385EE751C66E7966;
// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Cell>
struct List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.CameraCollection/Entry>
struct List_1_tFDC3EDDA43F330F86F69AF9AA8FC60334DC1522C;
// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>
struct List_1_t44A25F3C59962F4750C12ACC843610740D56B163;
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Int32[]>
struct ResultHandler_t71A2F87ACAFA86E24028B27C5F766A5294E1169F;
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Int32[,]>
struct ResultHandler_tAD30F88871E43E98145B755A9399E056E344E01B;
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Single[,]>
struct ResultHandler_tB23FE6432CF71DA57AE5DB8901AE59E8086D616C;
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Single[,,]>
struct ResultHandler_tE47E75919F76941CB5556B16967FF3AF9E2E7B55;
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Object>
struct ResultHandler_t2104E3775493E44F2708F1B913B72B30154A1525;
// VisualDesignCafe.Memory.UnmanagedArray`1<System.Int32>
struct UnmanagedArray_1_t2F4DADEB9E59377158C5B0F8AA8ED69B6D696758;
// VisualDesignCafe.Memory.UnmanagedArray`1<System.Single>
struct UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>
struct ValueCollection_t62AF5B675BAEE7BC18480BA5399376799DC3D123;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>[]
struct EntryU5BU5D_t2ECC62934BAB17F7D3C0711A402509787865E312;
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[]>[]
struct LoadRequest_1U5BU5D_t43D44CD61799A9BC17C60CCFDDBDCC70CC100562;
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[,]>[]
struct LoadRequest_1U5BU5D_t2BCEA046005BF62E3BAF38BB5A4C0C92F6FF8227;
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,]>[]
struct LoadRequest_1U5BU5D_t1863ABB9E5312EB67B0C354FCFB4341C0589DCE3;
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,,]>[]
struct LoadRequest_1U5BU5D_tBB92B1B3DB9ADF31AF0E0EB61AC199F7828B2B8A;
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Object>[]
struct LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633;
// VisualDesignCafe.Rendering.Nature.Cell[]
struct CellU5BU5D_tC0BE402D4B1C61ACCE4708A343A3F29D34907B05;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// VisualDesignCafe.Rendering.Nature.DetailLayer[]
struct DetailLayerU5BU5D_tEC21481B71FC528B38FD96DB6422178DA8D886D9;
// VisualDesignCafe.Rendering.Nature.DetailProperty[]
struct DetailPropertyU5BU5D_tB3F099A20804008CD68E636B9E2CE7D9AA427204;
// UnityEngine.DetailPrototype[]
struct DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7;
// VisualDesignCafe.Rendering.Nature.Detailmap[]
struct DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// VisualDesignCafe.Rendering.Nature.TerrainDetail[]
struct TerrainDetailU5BU5D_t5C9DD2B0816C44055C25401FE31966A24EB8EE35;
// VisualDesignCafe.Rendering.Nature.TerrainDetailLod[]
struct TerrainDetailLodU5BU5D_t9254804ACABD3B9758ED7FBFE73613952D99F751;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus[]
struct CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B;
// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData[]
struct CachedDataU5BU5D_tA8C7FEC85A66447A71461984E18D5ED85B372C95;
// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/Quad[]
struct QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC;
// VisualDesignCafe.Rendering.Nature.Cell[,]
struct CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2;
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
// System.Single[,,]
struct SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// VisualDesignCafe.Rendering.Nature.BuildQueue
struct BuildQueue_tDCA45FD878E5BFED3EADA86EB44458210F56A393;
// VisualDesignCafe.Rendering.Nature.BuildScheduler
struct BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// VisualDesignCafe.Rendering.Nature.CameraCollection
struct CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F;
// VisualDesignCafe.Rendering.Nature.Cell
struct Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45;
// VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer
struct CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// VisualDesignCafe.Rendering.Nature.DetailNoiseSpread
struct DetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB;
// UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B;
// VisualDesignCafe.Rendering.Nature.DetailSize
struct DetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142;
// VisualDesignCafe.Rendering.Nature.DetailTransform
struct DetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825;
// VisualDesignCafe.Rendering.Nature.Detailmap
struct Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// VisualDesignCafe.Rendering.Nature.Grid
struct Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// VisualDesignCafe.Rendering.Nature.Spawning.ISpawnSettings
struct ISpawnSettings_t9C0E228689B39ED0EB87B6D0E3DFBCAE812DC4D3;
// VisualDesignCafe.Rendering.Nature.Spawning.ISpawner
struct ISpawner_tA0EE89C840D4DBB518D75009E328E1CB89F4B683;
// VisualDesignCafe.Rendering.Nature.ITerrainData
struct ITerrainData_t123B2F610DF9D37C9DDC8EF1782A5C448270A643;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// VisualDesignCafe.Rendering.Nature.MeshGenerator
struct MeshGenerator_t4D6B1128749F5DA694FDC50A028DAD982BA4193A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout
struct QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// VisualDesignCafe.Threading.ScopedRegistry
struct ScopedRegistry_tB8C3165C703ACA093866D9D0BC0C141B224F438B;
// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
// VisualDesignCafe.Rendering.Nature.Spawning.Spawner
struct Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D;
// System.String
struct String_t;
// VisualDesignCafe.Threading.TaskScheduler
struct TaskScheduler_t25D0CDBC4764C060E5970D35D7B1A7568A926879;
// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667;
// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24;
// VisualDesignCafe.Rendering.Nature.TerrainData
struct TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A;
// VisualDesignCafe.Rendering.Nature.TerrainDataDisposedException
struct TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD;
// VisualDesignCafe.Rendering.Nature.TerrainDataProvider
struct TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94;
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer
struct TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72;
// VisualDesignCafe.Rendering.Nature.TerrainDetail
struct TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4;
// VisualDesignCafe.Rendering.Nature.TerrainModificationHistory
struct TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C;
// VisualDesignCafe.Rendering.Nature.TerrainSurface
struct TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_0
struct U3CU3Ec__DisplayClass110_0_t2D89D27DB086E872351B8BF48FED4C1025454468;
// VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_1
struct U3CU3Ec__DisplayClass110_1_t99CF7DF6FC0773531CA15376F89082023513A4FC;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISpawnSettings_t9C0E228689B39ED0EB87B6D0E3DFBCAE812DC4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITerrainData_t123B2F610DF9D37C9DDC8EF1782A5C448270A643_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t44A25F3C59962F4750C12ACC843610740D56B163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF6C9D180FB862469CC481462DE748286F6195098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral070F217C7B060DCDBEF425BCD632B06C765CA317;
IL2CPP_EXTERN_C String_t* _stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04;
IL2CPP_EXTERN_C String_t* _stringLiteral1262BBA446B495C97EDCC403B73F785171FA8C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral22F5E43E91785E8512482CFDFEDB91910D005E84;
IL2CPP_EXTERN_C String_t* _stringLiteral25552E2E2393351BBF21C6991AA98E485DEE1172;
IL2CPP_EXTERN_C String_t* _stringLiteral2A150505A4E6BC554381059ED0E1EDF3957AC188;
IL2CPP_EXTERN_C String_t* _stringLiteral45045578780FD0B9DC1862175DE1C8476691896A;
IL2CPP_EXTERN_C String_t* _stringLiteral5AD7BBE6589366EAE2CCFD738CBEC6A1B043822D;
IL2CPP_EXTERN_C String_t* _stringLiteral61124E05876F55849671445E7D092F0E427871E3;
IL2CPP_EXTERN_C String_t* _stringLiteral74A11707EEAFDE1957C12B656A0118A1E3D5D40F;
IL2CPP_EXTERN_C String_t* _stringLiteral7C4C7D32A55E2D5C7C5B9240873D2742C484A075;
IL2CPP_EXTERN_C String_t* _stringLiteral9442D52AFC1957FF13A815BC7795B4AAEBF52982;
IL2CPP_EXTERN_C String_t* _stringLiteral9A7F9DE0C8F3D56FCC7CD55AC4B41D661174ABE2;
IL2CPP_EXTERN_C String_t* _stringLiteral9B8418D3D638399304072A5F92555FAAA7ADE53A;
IL2CPP_EXTERN_C String_t* _stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36;
IL2CPP_EXTERN_C String_t* _stringLiteralABA2DC431CAFBB027FE00F1228FA7AA3F6239E81;
IL2CPP_EXTERN_C String_t* _stringLiteralBE92E090410AD5D93D0E420AB1DD45224759D90F;
IL2CPP_EXTERN_C String_t* _stringLiteralD37CEBBC2FF8319BBACA69FB4FDCF77DCBABE5EA;
IL2CPP_EXTERN_C String_t* _stringLiteralD90348CE9BDE9F3CE8DC222D3D4EE1C8468911A4;
IL2CPP_EXTERN_C String_t* _stringLiteralE85CC8D828CCD417269DF24E077B527A7B625322;
IL2CPP_EXTERN_C String_t* _stringLiteralFF50A0FAE06D530EF82D18679277E3BDF79F4641;
IL2CPP_EXTERN_C const RuntimeMethod* CellStreamer_OnBuildSkipped_mBE0191C59B6158259AC5650B73FFF76FA19A97ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CellStreamer__ctor_m065A5D65B01C34E37CD08CF0A460FB9874DF4503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFD47F677AE07F0A79B2FAD238B391813CF1E28B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m1389F57362558475ABA4690615274770EAE735A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mDBF1037C5AB2897E573406A676D61330A9E0B5A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD8D35D02626DFF43BB92F9E022547747BB41364F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA47982C8460FFFC5B0117F6177F9CF672D8A74B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m3E4E724B8C57CEBA089C8B787F7C769BF95EC77A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m145D862E5992A05767DD0D16530E23B0D6580560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4F8FE8890EC528ECF4C11CC61DA080FC02635922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m64ED9FFF4F6918F8164F90295D4A13845EAAB2C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m738C779C2F3B6DC809C76EDD2E5E0C7A4593ED00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE7C5B40535077C06CF0A97C2B0E9C383AB2E677C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0F15760AECB3C60197BDB71DBAF4F81D310D8A91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4385CE7AA897C72F6A87805A53BBA9E53F09E7EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m91C856B1496C3AA7D21B3B9590D3C5996999EE69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA7A8F22A8129C1975C26B68BA98705CF93E6D2D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m10969407186E28ED52B22F4F78AE007BA3F1E64C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m117CF41360F2B315E71DEC3D87B67B391F670016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4284794A77331E6983123FE0BC185AB264A68A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7A979ABE57FAA89D6008C9AC9AA829E7BCA39A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA8B6727F803E55A09AD195A5328B5EE710AD7F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBDCF463092D49A3A848EAF0C7744D5ADF2A51199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFC7FA619A612520DBED8C3A70B81B77A7052ED95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD95E5FD0ED83B11B437BD1C15DE38B3F6F75C9FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mC6C56F90B8EC08F746129D8D1FCED0C9BEF1B0E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadRequest_1__ctor_m2E31240D241EAD32D7A7BA181A8B205559F4D5DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadRequest_1__ctor_m36D87C78271A8D38B7E413FD31405710767914FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadRequest_1__ctor_mE1AB933229262230DBA9BE3978544396E962B14D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mD1C08FEB8E37DA6FB32E18E7F25ACEF8DFE3E015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB049156BFF8B2D26CF127F7BEDB142EB05D20B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuadSpatialLayout_OnCameraRemoved_m823BFCC0771E4802AC4E954C0D662FE0047E5DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Spawner_GetCapacity_m4CB42D15F1F2BF40C22FDF5CF5562F6A9650783D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Spawner_GetTerrainHeight_mF55D6409BB4C40B50A8AF206CC9C2FA5235FD560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Spawner_GetTerrainNormal_m6627844DF6088C211F9182A9400E9C66D23C31D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Spawner_Spawn_m75A9F6EEBA231174751A00258EB02435310AC9B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Spawner__ctor_mE3D025ACE2622FD17C5127F882D5F7DBB4DE8176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataProvider__ctor_m3E564C6ADD203FDB5B15A00924B409E7F7DDF620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_GetAlphamaps_m3092FF9343DAB61724A1927996044154ED30F0EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_GetDetailLayer_m18E40AEB557E7805B2BA06084099A86DDE0D685A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_GetHeightmap_m354D037072381F95F681C9CA3850FB307C27C2A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_GetSupportedLayers_m20CDC9C9325AEA7410A0E51BD975FC8C7EB1C7C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_m9B79C3F455E1B302695750EC1B4272AA2CC64BBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_mC9AE755750C0E4B17FABB311EAB450E898E356A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m51D39B134DA149070BE994003CA03027A010C205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mC66E5A8C85F933CA94210FD8FE15E2854BA1C76E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_m55F4D4F9DB5415A785DE9CB164520983D792FCB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_mE1471C963AAEA26B412647BD578361E6AF2A3773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_m8EC7EBDFBD3ABACD8D2561001F1565813096D916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_mEA559CE7AFB5E0D2E266E517315A0C976D0F3FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDetail_GetProperty_TisDetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB_m2107EC6273B735C2C3D133B1DC387A2E7F76D4E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDetail_GetProperty_TisDetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142_mEF0657CAA40B989F00FBA07292E2BD8B4E504BC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainDetail_GetProperty_TisDetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825_m9A84C071075EC3A1CC02A9A10FEA227178811C04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainModificationHistory__ctor_mC2E5A3EE13C6715348BAA19E37C47E3F149D4711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TerrainSurface__ctor_m0231870D266283B51634CD786D2F41D5151EBFEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedArray_1_GetUnsafePtr_m8ADD8AE336449FEBCD806BDA6537E12C23CEAF88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedArray_1_get_IsDisposed_mDD25ABE1E521872DB5D53AE53576208C4FDA10D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedArray_1_get_Item_m1BA5FB1ADF681B7D71BECC8F5794BB2AAF0C4322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnmanagedArray_1_get_Item_mC32746706EA0EBE8B30F3C48C630984BC7B80B4E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633;
struct DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7;
struct DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B;
struct CachedDataU5BU5D_tA8C7FEC85A66447A71461984E18D5ED85B372C95;
struct QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC;
struct CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2;
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F;
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4;
struct SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>
struct Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2ECC62934BAB17F7D3C0711A402509787865E312* ____entries_1;
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
	KeyCollection_t53A37B56FEFCA55992ED3B76263A384258008C24* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t62AF5B675BAEE7BC18480BA5399376799DC3D123* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[]>>
struct List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LoadRequest_1U5BU5D_t43D44CD61799A9BC17C60CCFDDBDCC70CC100562* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LoadRequest_1U5BU5D_t43D44CD61799A9BC17C60CCFDDBDCC70CC100562* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[,]>>
struct List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LoadRequest_1U5BU5D_t2BCEA046005BF62E3BAF38BB5A4C0C92F6FF8227* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LoadRequest_1U5BU5D_t2BCEA046005BF62E3BAF38BB5A4C0C92F6FF8227* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,]>>
struct List_1_tF6C9D180FB862469CC481462DE748286F6195098  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LoadRequest_1U5BU5D_t1863ABB9E5312EB67B0C354FCFB4341C0589DCE3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF6C9D180FB862469CC481462DE748286F6195098_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LoadRequest_1U5BU5D_t1863ABB9E5312EB67B0C354FCFB4341C0589DCE3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,,]>>
struct List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LoadRequest_1U5BU5D_tBB92B1B3DB9ADF31AF0E0EB61AC199F7828B2B8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LoadRequest_1U5BU5D_tBB92B1B3DB9ADF31AF0E0EB61AC199F7828B2B8A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Object>>
struct List_1_tA566AA2738F7D45927E2B99DF0BD2469CFA2CF25  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA566AA2738F7D45927E2B99DF0BD2469CFA2CF25_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Cell>
struct List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CellU5BU5D_tC0BE402D4B1C61ACCE4708A343A3F29D34907B05* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CellU5BU5D_tC0BE402D4B1C61ACCE4708A343A3F29D34907B05* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>
struct List_1_t44A25F3C59962F4750C12ACC843610740D56B163  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CachedDataU5BU5D_tA8C7FEC85A66447A71461984E18D5ED85B372C95* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t44A25F3C59962F4750C12ACC843610740D56B163_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CachedDataU5BU5D_tA8C7FEC85A66447A71461984E18D5ED85B372C95* ___s_emptyArray_5;
};

// VisualDesignCafe.Memory.UnmanagedArray`1<System.Single>
struct UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA  : public RuntimeObject
{
	// System.Int32 VisualDesignCafe.Memory.UnmanagedArray`1::_dimensions
	int32_t ____dimensions_0;
	// System.Int32 VisualDesignCafe.Memory.UnmanagedArray`1::_length
	int32_t ____length_1;
	// System.Int32 VisualDesignCafe.Memory.UnmanagedArray`1::_lengthX
	int32_t ____lengthX_2;
	// System.Int32 VisualDesignCafe.Memory.UnmanagedArray`1::_lengthY
	int32_t ____lengthY_3;
	// System.Int32 VisualDesignCafe.Memory.UnmanagedArray`1::_lengthZ
	int32_t ____lengthZ_4;
	// System.Int32 VisualDesignCafe.Memory.UnmanagedArray`1::_stride
	int32_t ____stride_5;
	// T* VisualDesignCafe.Memory.UnmanagedArray`1::_bufferPtr
	float* ____bufferPtr_6;
	// System.Boolean VisualDesignCafe.Memory.UnmanagedArray`1::_isDisposed
	bool ____isDisposed_7;
};
struct Il2CppArrayBounds;

// VisualDesignCafe.Rendering.Nature.BuildScheduler
struct BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B  : public RuntimeObject
{
	// System.Action`1<VisualDesignCafe.Rendering.Nature.Cell> VisualDesignCafe.Rendering.Nature.BuildScheduler::OnBuilt
	Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99* ___OnBuilt_1;
	// System.Action`1<VisualDesignCafe.Rendering.Nature.Cell> VisualDesignCafe.Rendering.Nature.BuildScheduler::OnSkipped
	Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99* ___OnSkipped_2;
	// System.Boolean VisualDesignCafe.Rendering.Nature.BuildScheduler::<PrioritizeView>k__BackingField
	bool ___U3CPrioritizeViewU3Ek__BackingField_3;
	// System.Boolean VisualDesignCafe.Rendering.Nature.BuildScheduler::_enableThreads
	bool ____enableThreads_4;
	// VisualDesignCafe.Threading.TaskScheduler VisualDesignCafe.Rendering.Nature.BuildScheduler::_taskScheduler
	TaskScheduler_t25D0CDBC4764C060E5970D35D7B1A7568A926879* ____taskScheduler_5;
};

struct BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B_StaticFields
{
	// VisualDesignCafe.Threading.ScopedRegistry VisualDesignCafe.Rendering.Nature.BuildScheduler::BuildScope
	ScopedRegistry_tB8C3165C703ACA093866D9D0BC0C141B224F438B* ___BuildScope_0;
};

// VisualDesignCafe.Rendering.Nature.CameraCollection
struct CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F  : public RuntimeObject
{
	// System.Action`1<VisualDesignCafe.Rendering.Nature.CameraCollection/Entry> VisualDesignCafe.Rendering.Nature.CameraCollection::Added
	Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA* ___Added_0;
	// System.Action`1<VisualDesignCafe.Rendering.Nature.CameraCollection/Entry> VisualDesignCafe.Rendering.Nature.CameraCollection::Removed
	Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA* ___Removed_1;
	// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.CameraCollection/Entry> VisualDesignCafe.Rendering.Nature.CameraCollection::_cameras
	List_1_tFDC3EDDA43F330F86F69AF9AA8FC60334DC1522C* ____cameras_2;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// VisualDesignCafe.Rendering.Nature.DetailProperty
struct DetailProperty_t0135EAD3E84B2453A37D05C9BEAB95EBF51AD101  : public RuntimeObject
{
	// System.Boolean VisualDesignCafe.Rendering.Nature.DetailProperty::<IsDirty>k__BackingField
	bool ___U3CIsDirtyU3Ek__BackingField_0;
};

// VisualDesignCafe.Rendering.Nature.Detailmap
struct Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E  : public RuntimeObject
{
	// System.Int32 VisualDesignCafe.Rendering.Nature.Detailmap::Resolution
	int32_t ___Resolution_0;
	// VisualDesignCafe.Memory.UnmanagedArray`1<System.Int32> VisualDesignCafe.Rendering.Nature.Detailmap::_data
	UnmanagedArray_1_t2F4DADEB9E59377158C5B0F8AA8ED69B6D696758* ____data_1;
};

// VisualDesignCafe.Rendering.Nature.Profiling.ProfilerSampleScope
struct ProfilerSampleScope_t809B61AED516626B733D3AA50334E7B9FDF54BAC  : public RuntimeObject
{
};

// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout
struct QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977  : public RuntimeObject
{
	// VisualDesignCafe.Rendering.Nature.CameraCollection VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::_cameraCollection
	CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* ____cameraCollection_0;
	// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/Quad[] VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::Quads
	QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* ___Quads_1;
	// System.Int32 VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::QuadsX
	int32_t ___QuadsX_2;
	// System.Int32 VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::QuadsY
	int32_t ___QuadsY_3;
	// System.Double VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::QuadSize
	double ___QuadSize_4;
	// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData> VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::_cachedData
	List_1_t44A25F3C59962F4750C12ACC843610740D56B163* ____cachedData_5;
	// System.Double[] VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::_closestDistanceToCamera
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____closestDistanceToCamera_6;
	// System.Double[] VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::_closestDirectionToCamera
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____closestDirectionToCamera_7;
};

struct QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields
{
	// System.Double[] VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::_floatMinValue
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____floatMinValue_8;
	// System.Double[] VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::_floatMaxValue
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____floatMaxValue_9;
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

// VisualDesignCafe.Rendering.Nature.TerrainDataProvider
struct TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94  : public RuntimeObject
{
	// UnityEngine.Terrain VisualDesignCafe.Rendering.Nature.TerrainDataProvider::_unityTerrain
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ____unityTerrain_0;
	// UnityEngine.TerrainData VisualDesignCafe.Rendering.Nature.TerrainDataProvider::_unityTerrainData
	TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* ____unityTerrainData_1;
};

// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer
struct TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::LoadedHeightmapData
	Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___LoadedHeightmapData_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::LoadedDetailMapData
	Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___LoadedDetailMapData_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::LoadedAlphaMapData
	Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___LoadedAlphaMapData_2;
	// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,]>> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::_heightmapRequests
	List_1_tF6C9D180FB862469CC481462DE748286F6195098* ____heightmapRequests_3;
	// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[,]>> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::_detailmapRequests
	List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* ____detailmapRequests_4;
	// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,,]>> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::_alphamapRequests
	List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3* ____alphamapRequests_5;
	// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[]>> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::_supportedLayerRequests
	List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* ____supportedLayerRequests_6;
	// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Int32[,]> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::_getDetailLayer
	Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF* ____getDetailLayer_7;
	// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Single[,]> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::_getHeightmap
	Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE* ____getHeightmap_8;
	// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Single[,,]> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::_getAlphamaps
	Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69* ____getAlphamaps_9;
	// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Int32[]> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::_getSupportedLayers
	Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A* ____getSupportedLayers_10;
};

// VisualDesignCafe.Rendering.Nature.TerrainDetail
struct TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4  : public RuntimeObject
{
	// UnityEngine.GameObject VisualDesignCafe.Rendering.Nature.TerrainDetail::<Prototype>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CPrototypeU3Ek__BackingField_0;
	// VisualDesignCafe.Rendering.Nature.TerrainDetailLod[] VisualDesignCafe.Rendering.Nature.TerrainDetail::<Lods>k__BackingField
	TerrainDetailLodU5BU5D_t9254804ACABD3B9758ED7FBFE73613952D99F751* ___U3CLodsU3Ek__BackingField_1;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainDetail::<HasLodGroup>k__BackingField
	bool ___U3CHasLodGroupU3Ek__BackingField_2;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainDetail::<IsDirty>k__BackingField
	bool ___U3CIsDirtyU3Ek__BackingField_3;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainDetail::<RequiresRebuild>k__BackingField
	bool ___U3CRequiresRebuildU3Ek__BackingField_4;
	// System.String VisualDesignCafe.Rendering.Nature.TerrainDetail::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_5;
	// System.Exception[] VisualDesignCafe.Rendering.Nature.TerrainDetail::<Exceptions>k__BackingField
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___U3CExceptionsU3Ek__BackingField_6;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDetail::Index
	int32_t ___Index_7;
	// VisualDesignCafe.Rendering.Nature.Spawning.ISpawner VisualDesignCafe.Rendering.Nature.TerrainDetail::<Spawner>k__BackingField
	RuntimeObject* ___U3CSpawnerU3Ek__BackingField_8;
	// VisualDesignCafe.Rendering.Nature.TerrainData VisualDesignCafe.Rendering.Nature.TerrainDetail::_terrainData
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ____terrainData_9;
	// VisualDesignCafe.Rendering.Nature.DetailProperty[] VisualDesignCafe.Rendering.Nature.TerrainDetail::_properties
	DetailPropertyU5BU5D_tB3F099A20804008CD68E636B9E2CE7D9AA427204* ____properties_10;
	// VisualDesignCafe.Rendering.Nature.MeshGenerator VisualDesignCafe.Rendering.Nature.TerrainDetail::_meshGenerator
	MeshGenerator_t4D6B1128749F5DA694FDC50A028DAD982BA4193A* ____meshGenerator_11;
	// UnityEngine.GameObject VisualDesignCafe.Rendering.Nature.TerrainDetail::_generatedPrototype
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____generatedPrototype_12;
	// UnityEngine.Material VisualDesignCafe.Rendering.Nature.TerrainDetail::_generatedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____generatedMaterial_13;
	// UnityEngine.Texture2D VisualDesignCafe.Rendering.Nature.TerrainDetail::_grassTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____grassTexture_14;
	// UnityEngine.Material VisualDesignCafe.Rendering.Nature.TerrainDetail::_grassTextureMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____grassTextureMaterial_15;
	// VisualDesignCafe.Rendering.Nature.TerrainDetail/MeshNormalMode VisualDesignCafe.Rendering.Nature.TerrainDetail::_meshNormalMode
	int32_t ____meshNormalMode_16;
	// UnityEngine.Rendering.ShadowCastingMode VisualDesignCafe.Rendering.Nature.TerrainDetail::_shadowCastingMode
	int32_t ____shadowCastingMode_17;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainDetail::_specularHighlights
	bool ____specularHighlights_18;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainDetail::_translucency
	bool ____translucency_19;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainDetail::_supportsProceduralInstancing
	bool ____supportsProceduralInstancing_20;
	// System.Collections.Generic.List`1<System.Exception> VisualDesignCafe.Rendering.Nature.TerrainDetail::_exceptions
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ____exceptions_21;
};

// VisualDesignCafe.Rendering.Nature.TerrainModificationHistory
struct TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C  : public RuntimeObject
{
	// VisualDesignCafe.Rendering.Nature.TerrainData VisualDesignCafe.Rendering.Nature.TerrainModificationHistory::_terrain
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ____terrain_0;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainModificationHistory::_multiThreaded
	bool ____multiThreaded_1;
};

// VisualDesignCafe.Rendering.Nature.TerrainSurface
struct TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1  : public RuntimeObject
{
	// VisualDesignCafe.Rendering.Nature.TerrainData VisualDesignCafe.Rendering.Nature.TerrainSurface::_terrain
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ____terrain_0;
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

// VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_0
struct U3CU3Ec__DisplayClass110_0_t2D89D27DB086E872351B8BF48FED4C1025454468  : public RuntimeObject
{
	// System.Single[,,] VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_0::alpha
	SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* ___alpha_0;
};

// VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_1
struct U3CU3Ec__DisplayClass110_1_t99CF7DF6FC0773531CA15376F89082023513A4FC  : public RuntimeObject
{
	// VisualDesignCafe.Memory.UnmanagedArray`1<System.Single> VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_1::alphamaps
	UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* ___alphamaps_0;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_1::y
	int32_t ___y_1;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_1::x
	int32_t ___x_2;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_1::height
	int32_t ___height_3;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_1::width
	int32_t ___width_4;
	// VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_0 VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass110_0_t2D89D27DB086E872351B8BF48FED4C1025454468* ___CSU24U3CU3E8__locals1_5;
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

// VisualDesignCafe.Rendering.Nature.AlphamapRect
struct AlphamapRect_tD180EBB602558AC1028C107746723E2312831B9B 
{
	// System.Int32 VisualDesignCafe.Rendering.Nature.AlphamapRect::X
	int32_t ___X_0;
	// System.Int32 VisualDesignCafe.Rendering.Nature.AlphamapRect::Y
	int32_t ___Y_1;
	// System.Int32 VisualDesignCafe.Rendering.Nature.AlphamapRect::Width
	int32_t ___Width_2;
	// System.Int32 VisualDesignCafe.Rendering.Nature.AlphamapRect::Height
	int32_t ___Height_3;
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

// VisualDesignCafe.Rendering.Nature.DetailNoiseSpread
struct DetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB  : public DetailProperty_t0135EAD3E84B2453A37D05C9BEAB95EBF51AD101
{
	// System.Single VisualDesignCafe.Rendering.Nature.DetailNoiseSpread::_noiseSpread
	float ____noiseSpread_1;
};

// VisualDesignCafe.Rendering.Nature.DetailmapRect
struct DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 
{
	// System.Int32 VisualDesignCafe.Rendering.Nature.DetailmapRect::X
	int32_t ___X_0;
	// System.Int32 VisualDesignCafe.Rendering.Nature.DetailmapRect::Y
	int32_t ___Y_1;
	// System.Int32 VisualDesignCafe.Rendering.Nature.DetailmapRect::Width
	int32_t ___Width_2;
	// System.Int32 VisualDesignCafe.Rendering.Nature.DetailmapRect::Height
	int32_t ___Height_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// VisualDesignCafe.Rendering.Nature.HeightmapRect
struct HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E 
{
	// System.Int32 VisualDesignCafe.Rendering.Nature.HeightmapRect::X
	int32_t ___X_0;
	// System.Int32 VisualDesignCafe.Rendering.Nature.HeightmapRect::Y
	int32_t ___Y_1;
	// System.Int32 VisualDesignCafe.Rendering.Nature.HeightmapRect::Width
	int32_t ___Width_2;
	// System.Int32 VisualDesignCafe.Rendering.Nature.HeightmapRect::Height
	int32_t ___Height_3;
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

// VisualDesignCafe.Rendering.Nature.RandomHash
struct RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 
{
	// System.Int32 VisualDesignCafe.Rendering.Nature.RandomHash::Value
	int32_t ___Value_1;
};

struct RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640_StaticFields
{
	// System.Int32[] VisualDesignCafe.Rendering.Nature.RandomHash::_primeNumbers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____primeNumbers_0;
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

// VisualDesignCafe.Rendering.Nature.TerrainRect
struct TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 
{
	// System.Single VisualDesignCafe.Rendering.Nature.TerrainRect::X
	float ___X_0;
	// System.Single VisualDesignCafe.Rendering.Nature.TerrainRect::Y
	float ___Y_1;
	// System.Single VisualDesignCafe.Rendering.Nature.TerrainRect::Width
	float ___Width_2;
	// System.Single VisualDesignCafe.Rendering.Nature.TerrainRect::Height
	float ___Height_3;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=800
struct __StaticArrayInitTypeSizeU3D800_t1BAE64F9EEBC5984BB1E492D69A58C68A499E839 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D800_t1BAE64F9EEBC5984BB1E492D69A58C68A499E839__padding[800];
	};
};

// VisualDesignCafe.Rendering.Nature.CameraCollection/Entry
struct Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98 
{
	// System.Int32 VisualDesignCafe.Rendering.Nature.CameraCollection/Entry::Id
	int32_t ___Id_0;
	// UnityEngine.Camera VisualDesignCafe.Rendering.Nature.CameraCollection/Entry::Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_1;
};
// Native definition for P/Invoke marshalling of VisualDesignCafe.Rendering.Nature.CameraCollection/Entry
struct Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98_marshaled_pinvoke
{
	int32_t ___Id_0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_1;
};
// Native definition for COM marshalling of VisualDesignCafe.Rendering.Nature.CameraCollection/Entry
struct Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98_marshaled_com
{
	int32_t ___Id_0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera_1;
};

// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData
struct CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 
{
	// System.Int32 VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData::Id
	int32_t ___Id_0;
	// System.Double[] VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData::Distance
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___Distance_1;
	// System.Double[] VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData::Direction
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___Direction_2;
};
// Native definition for P/Invoke marshalling of VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData
struct CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshaled_pinvoke
{
	int32_t ___Id_0;
	Il2CppSafeArray/*NONE*/* ___Distance_1;
	Il2CppSafeArray/*NONE*/* ___Direction_2;
};
// Native definition for COM marshalling of VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData
struct CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshaled_com
{
	int32_t ___Id_0;
	Il2CppSafeArray/*NONE*/* ___Distance_1;
	Il2CppSafeArray/*NONE*/* ___Direction_2;
};

// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/Quad
struct Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6 
{
	// System.Double VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/Quad::CenterX
	double ___CenterX_0;
	// System.Double VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/Quad::CenterY
	double ___CenterY_1;
};

// VisualDesignCafe.Rendering.Nature.TerrainDetail/Settings
struct Settings_t5E9808D8E6681AFD77E579B7BA240FAA4BA772E8 
{
	// UnityEngine.Material VisualDesignCafe.Rendering.Nature.TerrainDetail/Settings::MaterialOverride
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___MaterialOverride_0;
	// VisualDesignCafe.Rendering.Nature.TerrainDetail/MeshNormalMode VisualDesignCafe.Rendering.Nature.TerrainDetail/Settings::MeshNormals
	int32_t ___MeshNormals_1;
	// UnityEngine.Rendering.ShadowCastingMode VisualDesignCafe.Rendering.Nature.TerrainDetail/Settings::ShadowCasting
	int32_t ___ShadowCasting_2;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainDetail/Settings::OverrideRenderQueue
	bool ___OverrideRenderQueue_3;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainDetail/Settings::SpecularHighlights
	bool ___SpecularHighlights_4;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainDetail/Settings::Translucency
	bool ___Translucency_5;
};
// Native definition for P/Invoke marshalling of VisualDesignCafe.Rendering.Nature.TerrainDetail/Settings
struct Settings_t5E9808D8E6681AFD77E579B7BA240FAA4BA772E8_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___MaterialOverride_0;
	int32_t ___MeshNormals_1;
	int32_t ___ShadowCasting_2;
	int32_t ___OverrideRenderQueue_3;
	int32_t ___SpecularHighlights_4;
	int32_t ___Translucency_5;
};
// Native definition for COM marshalling of VisualDesignCafe.Rendering.Nature.TerrainDetail/Settings
struct Settings_t5E9808D8E6681AFD77E579B7BA240FAA4BA772E8_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___MaterialOverride_0;
	int32_t ___MeshNormals_1;
	int32_t ___ShadowCasting_2;
	int32_t ___OverrideRenderQueue_3;
	int32_t ___SpecularHighlights_4;
	int32_t ___Translucency_5;
};

// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[]>
struct LoadRequest_1_t45360F5EE363F4D7C749B7FD64903E93A5087EC7 
{
	// VisualDesignCafe.Rendering.Nature.ITerrainData VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::TerrainData
	RuntimeObject* ___TerrainData_0;
	// System.UInt32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Version
	uint32_t ___Version_1;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Layer
	int32_t ___Layer_2;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::CellHash
	int32_t ___CellHash_3;
	// UnityEngine.Rect VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___Rect_4;
	// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<Tdata> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::HandleResult
	ResultHandler_t71A2F87ACAFA86E24028B27C5F766A5294E1169F* ___HandleResult_5;
	// System.Action`1<Tdata> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Callback
	Action_1_tECA2B8FF5963F782A051DC83DA2E1DAC980E27D2* ___Callback_6;
};

// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[,]>
struct LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F 
{
	// VisualDesignCafe.Rendering.Nature.ITerrainData VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::TerrainData
	RuntimeObject* ___TerrainData_0;
	// System.UInt32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Version
	uint32_t ___Version_1;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Layer
	int32_t ___Layer_2;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::CellHash
	int32_t ___CellHash_3;
	// UnityEngine.Rect VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___Rect_4;
	// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<Tdata> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::HandleResult
	ResultHandler_tAD30F88871E43E98145B755A9399E056E344E01B* ___HandleResult_5;
	// System.Action`1<Tdata> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Callback
	Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87* ___Callback_6;
};

// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,]>
struct LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C 
{
	// VisualDesignCafe.Rendering.Nature.ITerrainData VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::TerrainData
	RuntimeObject* ___TerrainData_0;
	// System.UInt32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Version
	uint32_t ___Version_1;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Layer
	int32_t ___Layer_2;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::CellHash
	int32_t ___CellHash_3;
	// UnityEngine.Rect VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___Rect_4;
	// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<Tdata> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::HandleResult
	ResultHandler_tB23FE6432CF71DA57AE5DB8901AE59E8086D616C* ___HandleResult_5;
	// System.Action`1<Tdata> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Callback
	Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879* ___Callback_6;
};

// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,,]>
struct LoadRequest_1_tEA80F21DA524A8160E44F72E6763EE8A4501923D 
{
	// VisualDesignCafe.Rendering.Nature.ITerrainData VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::TerrainData
	RuntimeObject* ___TerrainData_0;
	// System.UInt32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Version
	uint32_t ___Version_1;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Layer
	int32_t ___Layer_2;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::CellHash
	int32_t ___CellHash_3;
	// UnityEngine.Rect VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___Rect_4;
	// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<Tdata> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::HandleResult
	ResultHandler_tE47E75919F76941CB5556B16967FF3AF9E2E7B55* ___HandleResult_5;
	// System.Action`1<Tdata> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Callback
	Action_1_t0241D6630458FB8256BF63E9B9F522C80568350B* ___Callback_6;
};

// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Object>
struct LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396 
{
	// VisualDesignCafe.Rendering.Nature.ITerrainData VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::TerrainData
	RuntimeObject* ___TerrainData_0;
	// System.UInt32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Version
	uint32_t ___Version_1;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Layer
	int32_t ___Layer_2;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::CellHash
	int32_t ___CellHash_3;
	// UnityEngine.Rect VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___Rect_4;
	// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<Tdata> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::HandleResult
	ResultHandler_t2104E3775493E44F2708F1B913B72B30154A1525* ___HandleResult_5;
	// System.Action`1<Tdata> VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1::Callback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Callback_6;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tADA1091CB674DDEAD592EA2CB5ABB49F7868016B  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tADA1091CB674DDEAD592EA2CB5ABB49F7868016B_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=800 <PrivateImplementationDetails>::53DDB01F142003A55C2957F41EC966C4A5482C0F
	__StaticArrayInitTypeSizeU3D800_t1BAE64F9EEBC5984BB1E492D69A58C68A499E839 ___53DDB01F142003A55C2957F41EC966C4A5482C0F_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// VisualDesignCafe.Rendering.Nature.BuildSettings
struct BuildSettings_tE7394746E5900966836523B367829DE01151D69D 
{
	// System.Boolean VisualDesignCafe.Rendering.Nature.BuildSettings::Compress
	bool ___Compress_0;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.BuildSettings::CompressionRange
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CompressionRange_1;
};
// Native definition for P/Invoke marshalling of VisualDesignCafe.Rendering.Nature.BuildSettings
struct BuildSettings_tE7394746E5900966836523B367829DE01151D69D_marshaled_pinvoke
{
	int32_t ___Compress_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CompressionRange_1;
};
// Native definition for COM marshalling of VisualDesignCafe.Rendering.Nature.BuildSettings
struct BuildSettings_tE7394746E5900966836523B367829DE01151D69D_marshaled_com
{
	int32_t ___Compress_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CompressionRange_1;
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

// UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.DetailPrototype::m_Prototype
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prototype_2;
	// UnityEngine.Texture2D UnityEngine.DetailPrototype::m_PrototypeTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_PrototypeTexture_3;
	// UnityEngine.Color UnityEngine.DetailPrototype::m_HealthyColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HealthyColor_4;
	// UnityEngine.Color UnityEngine.DetailPrototype::m_DryColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DryColor_5;
	// System.Single UnityEngine.DetailPrototype::m_MinWidth
	float ___m_MinWidth_6;
	// System.Single UnityEngine.DetailPrototype::m_MaxWidth
	float ___m_MaxWidth_7;
	// System.Single UnityEngine.DetailPrototype::m_MinHeight
	float ___m_MinHeight_8;
	// System.Single UnityEngine.DetailPrototype::m_MaxHeight
	float ___m_MaxHeight_9;
	// System.Int32 UnityEngine.DetailPrototype::m_NoiseSeed
	int32_t ___m_NoiseSeed_10;
	// System.Single UnityEngine.DetailPrototype::m_NoiseSpread
	float ___m_NoiseSpread_11;
	// System.Single UnityEngine.DetailPrototype::m_HoleEdgePadding
	float ___m_HoleEdgePadding_12;
	// System.Int32 UnityEngine.DetailPrototype::m_RenderMode
	int32_t ___m_RenderMode_13;
	// System.Int32 UnityEngine.DetailPrototype::m_UsePrototypeMesh
	int32_t ___m_UsePrototypeMesh_14;
	// System.Int32 UnityEngine.DetailPrototype::m_UseInstancing
	int32_t ___m_UseInstancing_15;
};

struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_StaticFields
{
	// UnityEngine.Color UnityEngine.DetailPrototype::DefaultHealthColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DefaultHealthColor_0;
	// UnityEngine.Color UnityEngine.DetailPrototype::DefaultDryColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DefaultDryColor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prototype_2;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_PrototypeTexture_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HealthyColor_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DryColor_5;
	float ___m_MinWidth_6;
	float ___m_MaxWidth_7;
	float ___m_MinHeight_8;
	float ___m_MaxHeight_9;
	int32_t ___m_NoiseSeed_10;
	float ___m_NoiseSpread_11;
	float ___m_HoleEdgePadding_12;
	int32_t ___m_RenderMode_13;
	int32_t ___m_UsePrototypeMesh_14;
	int32_t ___m_UseInstancing_15;
};
// Native definition for COM marshalling of UnityEngine.DetailPrototype
struct DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Prototype_2;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_PrototypeTexture_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HealthyColor_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DryColor_5;
	float ___m_MinWidth_6;
	float ___m_MaxWidth_7;
	float ___m_MinHeight_8;
	float ___m_MaxHeight_9;
	int32_t ___m_NoiseSeed_10;
	float ___m_NoiseSpread_11;
	float ___m_HoleEdgePadding_12;
	int32_t ___m_RenderMode_13;
	int32_t ___m_UsePrototypeMesh_14;
	int32_t ___m_UseInstancing_15;
};

// VisualDesignCafe.Rendering.Nature.DetailSize
struct DetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142  : public DetailProperty_t0135EAD3E84B2453A37D05C9BEAB95EBF51AD101
{
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.DetailSize::_minScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____minScale_1;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.DetailSize::_maxScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____maxScale_2;
};

// VisualDesignCafe.Rendering.Nature.DetailTransform
struct DetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825  : public DetailProperty_t0135EAD3E84B2453A37D05C9BEAB95EBF51AD101
{
	// UnityEngine.Quaternion VisualDesignCafe.Rendering.Nature.DetailTransform::_orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____orientation_1;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.DetailTransform::_offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____offset_2;
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

// VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings
struct SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F 
{
	// System.Single VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings::NoiseSpread
	float ___NoiseSpread_0;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings::ScaleMin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ScaleMin_1;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings::ScaleMax
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ScaleMax_2;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings::Offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Offset_3;
	// UnityEngine.Quaternion VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings::Orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Orientation_4;
};

// VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings
struct StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A 
{
	// System.Boolean VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings::Stream
	bool ___Stream_0;
	// UnityEngine.Vector2 VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings::ReferencePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ReferencePosition_1;
	// System.Single VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings::StreamInDistance
	float ___StreamInDistance_2;
	// System.Single VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings::StreamOutDistance
	float ___StreamOutDistance_3;
	// System.Single VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings::ProcessorLimit
	float ___ProcessorLimit_4;
	// System.Boolean VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings::PrioritizeView
	bool ___PrioritizeView_5;
};
// Native definition for P/Invoke marshalling of VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings
struct StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshaled_pinvoke
{
	int32_t ___Stream_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ReferencePosition_1;
	float ___StreamInDistance_2;
	float ___StreamOutDistance_3;
	float ___ProcessorLimit_4;
	int32_t ___PrioritizeView_5;
};
// Native definition for COM marshalling of VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings
struct StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshaled_com
{
	int32_t ___Stream_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ReferencePosition_1;
	float ___StreamInDistance_2;
	float ___StreamOutDistance_3;
	float ___ProcessorLimit_4;
	int32_t ___PrioritizeView_5;
};

// VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus
struct CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880 
{
	// VisualDesignCafe.Rendering.Nature.TerrainRect VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus::RelativeBounds
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___RelativeBounds_0;
	// System.Boolean VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus::IsBuilt
	bool ___IsBuilt_1;
};
// Native definition for P/Invoke marshalling of VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus
struct CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshaled_pinvoke
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___RelativeBounds_0;
	int32_t ___IsBuilt_1;
};
// Native definition for COM marshalling of VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus
struct CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshaled_com
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___RelativeBounds_0;
	int32_t ___IsBuilt_1;
};

// VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance
struct Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081 
{
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	// UnityEngine.Quaternion VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance::Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_1;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance::Scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale_2;
};

// VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Random
struct Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623 
{
	// VisualDesignCafe.Rendering.Nature.RandomHash VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Random::Seed
	RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 ___Seed_0;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Random::Value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Value_1;
	// System.Single VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Random::PerlinNoise
	float ___PerlinNoise_2;
};

// VisualDesignCafe.Rendering.Nature.Spawning.Spawner/SpawnRect
struct SpawnRect_t697D9DDF1846BD14EB9ED69C06AC9EA13072DB27 
{
	// VisualDesignCafe.Rendering.Nature.TerrainRect VisualDesignCafe.Rendering.Nature.Spawning.Spawner/SpawnRect::TerrainRect
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___TerrainRect_0;
	// VisualDesignCafe.Rendering.Nature.DetailmapRect VisualDesignCafe.Rendering.Nature.Spawning.Spawner/SpawnRect::DetailmapRect
	DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 ___DetailmapRect_1;
};

// VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Texel
struct Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402 
{
	// System.Int32 VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Texel::X
	int32_t ___X_0;
	// System.Int32 VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Texel::Y
	int32_t ___Y_1;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Texel::Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Center_2;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Texel::Size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Size_3;
	// VisualDesignCafe.Rendering.Nature.RandomHash VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Texel::Seed
	RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 ___Seed_4;
};

// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData
struct LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB 
{
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData::CellHash
	int32_t ___CellHash_0;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData::Layer
	int32_t ___Layer_1;
	// UnityEngine.Rect VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData::Rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___Rect_2;
	// System.UInt32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData::Version
	uint32_t ___Version_3;
};

// VisualDesignCafe.Rendering.Nature.Cell
struct Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45  : public RuntimeObject
{
	// System.Boolean VisualDesignCafe.Rendering.Nature.Cell::<IsBuilding>k__BackingField
	bool ___U3CIsBuildingU3Ek__BackingField_0;
	// UnityEngine.Bounds VisualDesignCafe.Rendering.Nature.Cell::<WorldBounds>k__BackingField
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CWorldBoundsU3Ek__BackingField_1;
	// System.Single VisualDesignCafe.Rendering.Nature.Cell::<WorldBoundsExtends>k__BackingField
	float ___U3CWorldBoundsExtendsU3Ek__BackingField_2;
	// VisualDesignCafe.Rendering.Nature.TerrainRect VisualDesignCafe.Rendering.Nature.Cell::LocalBounds
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___LocalBounds_3;
	// VisualDesignCafe.Rendering.Nature.DetailLayer[] VisualDesignCafe.Rendering.Nature.Cell::<DetailLayers>k__BackingField
	DetailLayerU5BU5D_tEC21481B71FC528B38FD96DB6422178DA8D886D9* ___U3CDetailLayersU3Ek__BackingField_4;
	// System.Object VisualDesignCafe.Rendering.Nature.Cell::DetailLayersLock
	RuntimeObject* ___DetailLayersLock_5;
	// System.Int32 VisualDesignCafe.Rendering.Nature.Cell::DetailLayersLockOwner
	int32_t ___DetailLayersLockOwner_6;
	// System.Int32 VisualDesignCafe.Rendering.Nature.Cell::X
	int32_t ___X_7;
	// System.Int32 VisualDesignCafe.Rendering.Nature.Cell::Z
	int32_t ___Z_8;
	// VisualDesignCafe.Rendering.Nature.TerrainData VisualDesignCafe.Rendering.Nature.Cell::TerrainData
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___TerrainData_9;
	// System.Single[,] VisualDesignCafe.Rendering.Nature.Cell::_cachedDistances
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ____cachedDistances_10;
	// System.Single VisualDesignCafe.Rendering.Nature.Cell::_cachedDistanceToCenter
	float ____cachedDistanceToCenter_11;
	// System.Boolean VisualDesignCafe.Rendering.Nature.Cell::_isDisposed
	bool ____isDisposed_12;
};

// VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer
struct CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24  : public RuntimeObject
{
	// System.Action`1<VisualDesignCafe.Rendering.Nature.TerrainRect> VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::Cleared
	Action_1_t0E703B63899DA25B799B0D3495FBAB3A030CD3F5* ___Cleared_0;
	// VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::Settings
	StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A ___Settings_1;
	// VisualDesignCafe.Rendering.Nature.BuildSettings VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::BuildSettings
	BuildSettings_tE7394746E5900966836523B367829DE01151D69D ___BuildSettings_2;
	// VisualDesignCafe.Rendering.Nature.Grid VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_grid
	Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* ____grid_3;
	// VisualDesignCafe.Rendering.Nature.TerrainData VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_terrainData
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ____terrainData_4;
	// VisualDesignCafe.Rendering.Nature.CameraCollection VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_cameraCollection
	CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* ____cameraCollection_5;
	// System.Object VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_cellBuildStatusLock
	RuntimeObject* ____cellBuildStatusLock_6;
	// VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus[] VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_cellBuildStatus
	CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* ____cellBuildStatus_7;
	// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_quadLayout
	QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* ____quadLayout_8;
	// System.Int32 VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_cellsX
	int32_t ____cellsX_9;
	// System.Int32 VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_cellsY
	int32_t ____cellsY_10;
	// System.Boolean VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_clearedRect
	bool ____clearedRect_11;
	// System.Int32 VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_totalCellsInRange
	int32_t ____totalCellsInRange_12;
	// System.Int32 VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_totalCellsBuilt
	int32_t ____totalCellsBuilt_13;
	// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Cell> VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_cellsToStream
	List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* ____cellsToStream_14;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::_terrainPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____terrainPosition_15;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// VisualDesignCafe.Rendering.Nature.Grid
struct Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5  : public RuntimeObject
{
	// System.Action`1<UnityEngine.Rect> VisualDesignCafe.Rendering.Nature.Grid::Modified
	Action_1_tBB5B88E2934647511032E1D6FE99B65BF9BE5203* ___Modified_1;
	// VisualDesignCafe.Rendering.Nature.ITerrainData VisualDesignCafe.Rendering.Nature.Grid::Terrain
	RuntimeObject* ___Terrain_2;
	// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer VisualDesignCafe.Rendering.Nature.Grid::Streamer
	TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* ___Streamer_3;
	// System.Boolean VisualDesignCafe.Rendering.Nature.Grid::<IsBuilding>k__BackingField
	bool ___U3CIsBuildingU3Ek__BackingField_4;
	// UnityEngine.TerrainChangedFlags VisualDesignCafe.Rendering.Nature.Grid::<CurrentBuildFlags>k__BackingField
	int32_t ___U3CCurrentBuildFlagsU3Ek__BackingField_5;
	// VisualDesignCafe.Rendering.Nature.TerrainData VisualDesignCafe.Rendering.Nature.Grid::<TerrainData>k__BackingField
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___U3CTerrainDataU3Ek__BackingField_6;
	// VisualDesignCafe.Rendering.Nature.Cell[,] VisualDesignCafe.Rendering.Nature.Grid::<Cells>k__BackingField
	CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* ___U3CCellsU3Ek__BackingField_7;
	// System.Single VisualDesignCafe.Rendering.Nature.Grid::_cellSize
	float ____cellSize_8;
	// UnityEngine.Camera VisualDesignCafe.Rendering.Nature.Grid::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_9;
	// VisualDesignCafe.Rendering.Nature.BuildQueue VisualDesignCafe.Rendering.Nature.Grid::_buildQueue
	BuildQueue_tDCA45FD878E5BFED3EADA86EB44458210F56A393* ____buildQueue_10;
	// VisualDesignCafe.Rendering.Nature.BuildScheduler VisualDesignCafe.Rendering.Nature.Grid::_builder
	BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* ____builder_11;
	// VisualDesignCafe.Rendering.Nature.BuildSettings VisualDesignCafe.Rendering.Nature.Grid::_buildSettings
	BuildSettings_tE7394746E5900966836523B367829DE01151D69D ____buildSettings_12;
	// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.BuildTask> VisualDesignCafe.Rendering.Nature.Grid::_buildList
	List_1_tCF67ECDF243A57CC13F078F1385EE751C66E7966* ____buildList_13;
	// System.Boolean VisualDesignCafe.Rendering.Nature.Grid::_enableThreads
	bool ____enableThreads_14;
	// System.Boolean VisualDesignCafe.Rendering.Nature.Grid::_isDisposed
	bool ____isDisposed_15;
};

struct Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5_ThreadStaticFields
{
	// System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.BuildTask> VisualDesignCafe.Rendering.Nature.Grid::_tmpTasks
	List_1_tCF67ECDF243A57CC13F078F1385EE751C66E7966* ____tmpTasks_0;
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

// VisualDesignCafe.Rendering.Nature.Spawning.SpawnResult
struct SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Matrix4x4> VisualDesignCafe.Rendering.Nature.Spawning.SpawnResult::Instances
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___Instances_0;
	// System.Int32 VisualDesignCafe.Rendering.Nature.Spawning.SpawnResult::Count
	int32_t ___Count_1;
	// UnityEngine.Bounds VisualDesignCafe.Rendering.Nature.Spawning.SpawnResult::Bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___Bounds_2;
};

// VisualDesignCafe.Rendering.Nature.Spawning.Spawner
struct Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D  : public RuntimeObject
{
	// VisualDesignCafe.Rendering.Nature.TerrainDetail VisualDesignCafe.Rendering.Nature.Spawning.Spawner::Detail
	TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* ___Detail_2;
	// VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings VisualDesignCafe.Rendering.Nature.Spawning.Spawner::Settings
	SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F ___Settings_3;
};

struct Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D_StaticFields
{
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Spawning.Spawner::_zero
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____zero_1;
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

// VisualDesignCafe.Rendering.Nature.TerrainData
struct TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A  : public RuntimeObject
{
	// System.Single VisualDesignCafe.Rendering.Nature.TerrainData::<Density>k__BackingField
	float ___U3CDensityU3Ek__BackingField_0;
	// UnityEngine.Bounds VisualDesignCafe.Rendering.Nature.TerrainData::<LocalBounds>k__BackingField
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CLocalBoundsU3Ek__BackingField_1;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainData::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_2;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainData::<Size>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CSizeU3Ek__BackingField_3;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainData::<DetailResolution>k__BackingField
	int32_t ___U3CDetailResolutionU3Ek__BackingField_4;
	// VisualDesignCafe.Rendering.Nature.TerrainDetail[] VisualDesignCafe.Rendering.Nature.TerrainData::<DetailPrototypes>k__BackingField
	TerrainDetailU5BU5D_t5C9DD2B0816C44055C25401FE31966A24EB8EE35* ___U3CDetailPrototypesU3Ek__BackingField_5;
	// VisualDesignCafe.Rendering.Nature.Detailmap[] VisualDesignCafe.Rendering.Nature.TerrainData::<Detailmaps>k__BackingField
	DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* ___U3CDetailmapsU3Ek__BackingField_6;
	// VisualDesignCafe.Rendering.Nature.Detailmap[] VisualDesignCafe.Rendering.Nature.TerrainData::<PreviousDetailmaps>k__BackingField
	DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* ___U3CPreviousDetailmapsU3Ek__BackingField_7;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainData::<HeightmapResolution>k__BackingField
	int32_t ___U3CHeightmapResolutionU3Ek__BackingField_8;
	// VisualDesignCafe.Memory.UnmanagedArray`1<System.Single> VisualDesignCafe.Rendering.Nature.TerrainData::<Heights>k__BackingField
	UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* ___U3CHeightsU3Ek__BackingField_9;
	// VisualDesignCafe.Memory.UnmanagedArray`1<System.Single> VisualDesignCafe.Rendering.Nature.TerrainData::<PreviousHeights>k__BackingField
	UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* ___U3CPreviousHeightsU3Ek__BackingField_10;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainData::<HeightmapScale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CHeightmapScaleU3Ek__BackingField_11;
	// UnityEngine.Material VisualDesignCafe.Rendering.Nature.TerrainData::<GrassBillboardMaterial>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CGrassBillboardMaterialU3Ek__BackingField_12;
	// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainData::<AlphamapResolution>k__BackingField
	int32_t ___U3CAlphamapResolutionU3Ek__BackingField_13;
	// VisualDesignCafe.Memory.UnmanagedArray`1<System.Single> VisualDesignCafe.Rendering.Nature.TerrainData::<Alphamaps>k__BackingField
	UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* ___U3CAlphamapsU3Ek__BackingField_14;
	// VisualDesignCafe.Memory.UnmanagedArray`1<System.Single> VisualDesignCafe.Rendering.Nature.TerrainData::<PreviousAlphamaps>k__BackingField
	UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* ___U3CPreviousAlphamapsU3Ek__BackingField_15;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainData::<RequiresRebuild>k__BackingField
	bool ___U3CRequiresRebuildU3Ek__BackingField_16;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainData::<PrototypesChanged>k__BackingField
	bool ___U3CPrototypesChangedU3Ek__BackingField_17;
	// System.UInt32 VisualDesignCafe.Rendering.Nature.TerrainData::<AlphamapsVersion>k__BackingField
	uint32_t ___U3CAlphamapsVersionU3Ek__BackingField_18;
	// System.UInt32 VisualDesignCafe.Rendering.Nature.TerrainData::<HeightmapVersion>k__BackingField
	uint32_t ___U3CHeightmapVersionU3Ek__BackingField_19;
	// System.UInt32 VisualDesignCafe.Rendering.Nature.TerrainData::<DetailmapsVersion>k__BackingField
	uint32_t ___U3CDetailmapsVersionU3Ek__BackingField_20;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainData::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_21;
	// VisualDesignCafe.Rendering.Nature.ITerrainData VisualDesignCafe.Rendering.Nature.TerrainData::Terrain
	RuntimeObject* ___Terrain_22;
	// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer VisualDesignCafe.Rendering.Nature.TerrainData::Streamer
	TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* ___Streamer_23;
	// VisualDesignCafe.Rendering.Nature.TerrainSurface VisualDesignCafe.Rendering.Nature.TerrainData::Surface
	TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* ___Surface_24;
	// VisualDesignCafe.Rendering.Nature.TerrainModificationHistory VisualDesignCafe.Rendering.Nature.TerrainData::Modifications
	TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C* ___Modifications_25;
	// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainData::HeightmapTexelSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HeightmapTexelSize_26;
	// System.UInt32[] VisualDesignCafe.Rendering.Nature.TerrainData::_alphamapsHashes
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____alphamapsHashes_27;
	// System.Object VisualDesignCafe.Rendering.Nature.TerrainData::_alphamapsLock
	RuntimeObject* ____alphamapsLock_28;
	// System.Object VisualDesignCafe.Rendering.Nature.TerrainData::_heightsLock
	RuntimeObject* ____heightsLock_29;
	// System.Object VisualDesignCafe.Rendering.Nature.TerrainData::_detailTexturesLock
	RuntimeObject* ____detailTexturesLock_30;
	// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainData::_multiThreaded
	bool ____multiThreaded_31;
	// VisualDesignCafe.Rendering.Nature.TerrainDetail/Settings VisualDesignCafe.Rendering.Nature.TerrainData::_settings
	Settings_t5E9808D8E6681AFD77E579B7BA240FAA4BA772E8 ____settings_32;
	// System.Int32[] VisualDesignCafe.Rendering.Nature.TerrainData::_allLayers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____allLayers_33;
	// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Int32[,]> VisualDesignCafe.Rendering.Nature.TerrainData::_onReceivedDetailmap
	ResultHandler_tAD30F88871E43E98145B755A9399E056E344E01B* ____onReceivedDetailmap_34;
	// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Single[,]> VisualDesignCafe.Rendering.Nature.TerrainData::_onReceivedHeightmap
	ResultHandler_tB23FE6432CF71DA57AE5DB8901AE59E8086D616C* ____onReceivedHeightmap_35;
	// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Single[,,]> VisualDesignCafe.Rendering.Nature.TerrainData::_onReceivedAlphamap
	ResultHandler_tE47E75919F76941CB5556B16967FF3AF9E2E7B55* ____onReceivedAlphamap_36;
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

// System.Action`1<System.Int32[,]>
struct Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single[,]>
struct Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879  : public MulticastDelegate_t
{
};

// System.Action`1<System.Single[,,]>
struct Action_1_t0241D6630458FB8256BF63E9B9F522C80568350B  : public MulticastDelegate_t
{
};

// System.Action`1<VisualDesignCafe.Rendering.Nature.Cell>
struct Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<VisualDesignCafe.Rendering.Nature.TerrainRect>
struct Action_1_t0E703B63899DA25B799B0D3495FBAB3A030CD3F5  : public MulticastDelegate_t
{
};

// System.Action`1<VisualDesignCafe.Rendering.Nature.CameraCollection/Entry>
struct Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA  : public MulticastDelegate_t
{
};

// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Int32[]>
struct Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A  : public MulticastDelegate_t
{
};

// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Int32[,]>
struct Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF  : public MulticastDelegate_t
{
};

// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Single[,]>
struct Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE  : public MulticastDelegate_t
{
};

// System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Single[,,]>
struct Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69  : public MulticastDelegate_t
{
};

// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Int32[,]>
struct ResultHandler_tAD30F88871E43E98145B755A9399E056E344E01B  : public MulticastDelegate_t
{
};

// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Single[,]>
struct ResultHandler_tB23FE6432CF71DA57AE5DB8901AE59E8086D616C  : public MulticastDelegate_t
{
};

// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Single[,,]>
struct ResultHandler_tE47E75919F76941CB5556B16967FF3AF9E2E7B55  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
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

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// VisualDesignCafe.Rendering.Nature.TerrainDataDisposedException
struct TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[,,]
struct SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488  : public RuntimeArray
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
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);
		il2cpp_array_size_t kBound = bounds[2].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(k, kBound);

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, il2cpp_array_size_t k, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;
		il2cpp_array_size_t kBound = bounds[2].length;

		il2cpp_array_size_t index = (i * jBound + j) * kBound + k;
		m_Items[index] = value;
	}
};
// UnityEngine.DetailPrototype[]
struct DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7  : public RuntimeArray
{
	ALIGN_FIELD (8) DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* m_Items[1];

	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DetailPrototype_t131E17755ED167435F60BA3F70869DA3876E254B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[,]
struct SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4  : public RuntimeArray
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
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
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
// System.Int32[,]
struct Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F  : public RuntimeArray
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// VisualDesignCafe.Rendering.Nature.Detailmap[]
struct DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886  : public RuntimeArray
{
	ALIGN_FIELD (8) Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* m_Items[1];

	inline Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* value)
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
// VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus[]
struct CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B  : public RuntimeArray
{
	ALIGN_FIELD (8) CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880 m_Items[1];

	inline CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880 value)
	{
		m_Items[index] = value;
	}
};
// VisualDesignCafe.Rendering.Nature.Cell[,]
struct CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2  : public RuntimeArray
{
	ALIGN_FIELD (8) Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* m_Items[1];

	inline Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/Quad[]
struct QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC  : public RuntimeArray
{
	ALIGN_FIELD (8) Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6 m_Items[1];

	inline Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6 value)
	{
		m_Items[index] = value;
	}
};
// VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Object>[]
struct LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633  : public RuntimeArray
{
	ALIGN_FIELD (8) LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396 m_Items[1];

	inline LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___TerrainData_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___HandleResult_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Callback_6), (void*)NULL);
		#endif
	}
	inline LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___TerrainData_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___HandleResult_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Callback_6), (void*)NULL);
		#endif
	}
};
// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData[]
struct CachedDataU5BU5D_tA8C7FEC85A66447A71461984E18D5ED85B372C95  : public RuntimeArray
{
	ALIGN_FIELD (8) CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 m_Items[1];

	inline CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Distance_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Direction_2), (void*)NULL);
		#endif
	}
	inline CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Distance_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Direction_2), (void*)NULL);
		#endif
	}
};


// T& VisualDesignCafe.Memory.UnmanagedArray`1<System.Single>::get_Item(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* UnmanagedArray_1_get_Item_mC32746706EA0EBE8B30F3C48C630984BC7B80B4E_gshared (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA47982C8460FFFC5B0117F6177F9CF672D8A74B6_gshared (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Object>>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACF725DD24ED2D466734A47E7FA3E28FF3CA7337_gshared (List_1_tA566AA2738F7D45927E2B99DF0BD2469CFA2CF25* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Func`4<System.Object,System.Int32,UnityEngine.Rect,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_4__ctor_m7931600ABF041B4570A0FAB2533C8675D855C732_gshared (Func_4_tA5A5D9CCC40F7704E0BF95C4AEED457C934BE318* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1389F57362558475ABA4690615274770EAE735A7_gshared (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Object>>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m022E83B470595E4E63515BFCE655618C856DB5DC_gshared_inline (List_1_tA566AA2738F7D45927E2B99DF0BD2469CFA2CF25* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mDBF1037C5AB2897E573406A676D61330A9E0B5A1_gshared (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Object>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4A39C99F6733217E7A8A199622CCE211BA8D9D7A_gshared_inline (List_1_tA566AA2738F7D45927E2B99DF0BD2469CFA2CF25* __this, LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396 ___item0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Request<System.Object>(VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<Tdata>&,System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,Tdata>,System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_Request_TisRuntimeObject_mAD0BC7A9761DB57F721E87C9E0D535560387262E_gshared (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396* ___request0, Func_4_t43F80E1386F9341342B24A8A1042D33A41C62C88* ___getData1, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___loadedData2, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Object>::.ctor(VisualDesignCafe.Rendering.Nature.ITerrainData,System.UInt32,System.Int32,System.Int32,UnityEngine.Rect,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<Tdata>,System.Action`1<Tdata>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadRequest_1__ctor_mA49C52F5A21B02096CA076C8AF1725266FA193D5_gshared (LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396* __this, RuntimeObject* ___terrain0, uint32_t ___version1, int32_t ___layer2, int32_t ___cellHash3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect4, ResultHandler_t2104E3775493E44F2708F1B913B72B30154A1525* ___handleResult5, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback6, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD8D35D02626DFF43BB92F9E022547747BB41364F_gshared (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, int32_t ___key0, LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3E4E724B8C57CEBA089C8B787F7C769BF95EC77A_gshared (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, int32_t ___key0, LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFD47F677AE07F0A79B2FAD238B391813CF1E28B9_gshared (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, int32_t ___key0, LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB ___value1, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Request<System.Object>(System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<Tdata>>,System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,Tdata>,System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_Request_TisRuntimeObject_m66BA206B6956EB04B3CFB09ACBDB494AFDBF6D18_gshared (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, List_1_tA566AA2738F7D45927E2B99DF0BD2469CFA2CF25* ___requests0, Func_4_t43F80E1386F9341342B24A8A1042D33A41C62C88* ___getData1, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___loadedData2, bool ___invokeCallbacks3, const RuntimeMethod* method) ;
// System.Void* VisualDesignCafe.Memory.UnmanagedArray`1<System.Single>::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnmanagedArray_1_GetUnsafePtr_m8ADD8AE336449FEBCD806BDA6537E12C23CEAF88_gshared (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* __this, const RuntimeMethod* method) ;
// T& VisualDesignCafe.Memory.UnmanagedArray`1<System.Single>::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* UnmanagedArray_1_get_Item_m1BA5FB1ADF681B7D71BECC8F5794BB2AAF0C4322_gshared (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<VisualDesignCafe.Rendering.Nature.TerrainRect>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m61AE232F927B8CCA5E86FAB9BE92C259B93C7937_gshared_inline (Action_1_t0E703B63899DA25B799B0D3495FBAB3A030CD3F5* __this, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA8B6727F803E55A09AD195A5328B5EE710AD7F90_gshared (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Action`1<VisualDesignCafe.Rendering.Nature.CameraCollection/Entry>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mF2E73935C8EBAE62E8544E11513B1D568C32F569_gshared (Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::FillArray<System.Double>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB049156BFF8B2D26CF127F7BEDB142EB05D20B77_gshared (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___array0, double ___value1, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::FillArray<System.Double>(T[],T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_gshared (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___array0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___source1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_gshared_inline (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_gshared (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m10969407186E28ED52B22F4F78AE007BA3F1E64C_gshared (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mC6C56F90B8EC08F746129D8D1FCED0C9BEF1B0E8_gshared (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, int32_t ___index0, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m145D862E5992A05767DD0D16530E23B0D6580560_gshared_inline (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 ___item0, const RuntimeMethod* method) ;
// T VisualDesignCafe.Rendering.Nature.TerrainDetail::GetProperty<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TerrainDetail_GetProperty_TisRuntimeObject_m0FD36776DF6962FE2BE8AA536A16D8927492741A_gshared (TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Matrix4x4>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD1C08FEB8E37DA6FB32E18E7F25ACEF8DFE3E015_gshared (NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0* __this, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Memory.UnmanagedArray`1<System.Single>::get_IsDisposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnmanagedArray_1_get_IsDisposed_mDD25ABE1E521872DB5D53AE53576208C4FDA10D0_gshared_inline (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T& VisualDesignCafe.Memory.UnmanagedArray`1<System.Single>::get_Item(System.Int32,System.Int32,System.Int32)
inline float* UnmanagedArray_1_get_Item_mC32746706EA0EBE8B30F3C48C630984BC7B80B4E (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	return ((  float* (*) (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA*, int32_t, int32_t, int32_t, const RuntimeMethod*))UnmanagedArray_1_get_Item_mC32746706EA0EBE8B30F3C48C630984BC7B80B4E_gshared)(__this, ___x0, ___y1, ___z2, method);
}
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___objectName0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Terrain::get_detailObjectDensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Terrain_get_detailObjectDensity_m2FEBE42D389A14F98A38888A423B21FD91E605E9 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.TerrainData::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TerrainData_get_bounds_m9CE9B3BF067EA06A837AB98B5BC6C0C4669B5A32 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.TerrainData::get_heightmapScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_heightmapScale_m4B6AB6495384109BA54955CA52B883A118015188 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_heightmapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_detailResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_detailResolution_m999CE72D34D858E7D35182FA8DA05CE3C92F8D72 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_alphamapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapResolution_mC5D1C8FF4A5AFFCCFCF1382FED0D1AD46563D6F8 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.TerrainData::get_alphamapLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapLayers_mF8A0A4F157F7C56354C5A6E3FABF9F230F410F69 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// UnityEngine.DetailPrototype[] UnityEngine.TerrainData::get_detailPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Single[,] UnityEngine.TerrainData::GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* TerrainData_GetHeights_m3E5C109E98E72A23E39B92F7DF48D87888B2D488 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.TerrainData::GetSupportedLayers(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TerrainData_GetSupportedLayers_m207D3CF276D6D6CC2F2E6BEF2271245C1DB99BD5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___totalWidth2, int32_t ___totalHeight3, const RuntimeMethod* method) ;
// System.Int32[,] UnityEngine.TerrainData::GetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* TerrainData_GetDetailLayer_m8EB9B85C8CE8836E10D4D54B3A43BFE9AF888591 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___width2, int32_t ___height3, int32_t ___layer4, const RuntimeMethod* method) ;
// System.Single[,,] UnityEngine.TerrainData::GetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* TerrainData_GetAlphamaps_m2DEF5D2068D54BDAE78661483C1FC4936B06EA01 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.TerrainData::GetAlphamapTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mA47982C8460FFFC5B0117F6177F9CF672D8A74B6 (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mA47982C8460FFFC5B0117F6177F9CF672D8A74B6_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,]>>::.ctor(System.Int32)
inline void List_1__ctor_mBDCF463092D49A3A848EAF0C7744D5ADF2A51199 (List_1_tF6C9D180FB862469CC481462DE748286F6195098* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6C9D180FB862469CC481462DE748286F6195098*, int32_t, const RuntimeMethod*))List_1__ctor_mACF725DD24ED2D466734A47E7FA3E28FF3CA7337_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[,]>>::.ctor(System.Int32)
inline void List_1__ctor_m4284794A77331E6983123FE0BC185AB264A68A2E (List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9*, int32_t, const RuntimeMethod*))List_1__ctor_mACF725DD24ED2D466734A47E7FA3E28FF3CA7337_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,,]>>::.ctor(System.Int32)
inline void List_1__ctor_m117CF41360F2B315E71DEC3D87B67B391F670016 (List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3*, int32_t, const RuntimeMethod*))List_1__ctor_mACF725DD24ED2D466734A47E7FA3E28FF3CA7337_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[]>>::.ctor(System.Int32)
inline void List_1__ctor_mFC7FA619A612520DBED8C3A70B81B77A7052ED95 (List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020*, int32_t, const RuntimeMethod*))List_1__ctor_mACF725DD24ED2D466734A47E7FA3E28FF3CA7337_gshared)(__this, ___capacity0, method);
}
// System.Void System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Int32[,]>::.ctor(System.Object,System.IntPtr)
inline void Func_4__ctor_m05A8F728785CE40DA72A4C05F6FA6B488D21CE51 (Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_4__ctor_m7931600ABF041B4570A0FAB2533C8675D855C732_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Single[,]>::.ctor(System.Object,System.IntPtr)
inline void Func_4__ctor_m520DBC13FE68086F0C23DD4746202C397FE0FA0C (Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_4__ctor_m7931600ABF041B4570A0FAB2533C8675D855C732_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Single[,,]>::.ctor(System.Object,System.IntPtr)
inline void Func_4__ctor_m0DA038FF41465CBAB1F124027A79CF832918991A (Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_4__ctor_m7931600ABF041B4570A0FAB2533C8675D855C732_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,System.Int32[]>::.ctor(System.Object,System.IntPtr)
inline void Func_4__ctor_mD6611E21350E70629B97EF1B74F9904B5A027285 (Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_4__ctor_m7931600ABF041B4570A0FAB2533C8675D855C732_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::Clear()
inline void Dictionary_2_Clear_m1389F57362558475ABA4690615274770EAE735A7 (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, const RuntimeMethod*))Dictionary_2_Clear_m1389F57362558475ABA4690615274770EAE735A7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,]>>::Clear()
inline void List_1_Clear_m91C856B1496C3AA7D21B3B9590D3C5996999EE69_inline (List_1_tF6C9D180FB862469CC481462DE748286F6195098* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6C9D180FB862469CC481462DE748286F6195098*, const RuntimeMethod*))List_1_Clear_m022E83B470595E4E63515BFCE655618C856DB5DC_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[,]>>::Clear()
inline void List_1_Clear_m4385CE7AA897C72F6A87805A53BBA9E53F09E7EF_inline (List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9*, const RuntimeMethod*))List_1_Clear_m022E83B470595E4E63515BFCE655618C856DB5DC_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,,]>>::Clear()
inline void List_1_Clear_mA7A8F22A8129C1975C26B68BA98705CF93E6D2D8_inline (List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3*, const RuntimeMethod*))List_1_Clear_m022E83B470595E4E63515BFCE655618C856DB5DC_gshared_inline)(__this, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData::.ctor(System.Int32,System.Int32,UnityEngine.Rect,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadedData__ctor_mC7AA151AD79E41EF7F7AC4EDC98971817A13E5BA (LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* __this, int32_t ___cellHash0, int32_t ___layer1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect2, uint32_t ___version3, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadedData_GetHashCode_m5D55C6746D1F86DDAAB89D5BD56587E398835325 (LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::Remove(TKey)
inline bool Dictionary_2_Remove_mDBF1037C5AB2897E573406A676D61330A9E0B5A1 (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mDBF1037C5AB2897E573406A676D61330A9E0B5A1_gshared)(__this, ___key0, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB (const RuntimeMethod* method) ;
// System.Boolean System.Threading.Thread::get_IsBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thread_get_IsBackground_m08C25D0147A8EEDFDA3927F293664509520DA269 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Thread::get_IsThreadPoolThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thread_get_IsThreadPoolThread_m73019FFF8E168CCCA6094E5C88F594CB015684E9 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[]>>::Add(T)
inline void List_1_Add_m4F8FE8890EC528ECF4C11CC61DA080FC02635922_inline (List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* __this, LoadRequest_1_t45360F5EE363F4D7C749B7FD64903E93A5087EC7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020*, LoadRequest_1_t45360F5EE363F4D7C749B7FD64903E93A5087EC7, const RuntimeMethod*))List_1_Add_m4A39C99F6733217E7A8A199622CCE211BA8D9D7A_gshared_inline)(__this, ___item0, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Request<System.Int32[]>(VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<Tdata>&,System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,Tdata>,System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>)
inline void TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m51D39B134DA149070BE994003CA03027A010C205 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, LoadRequest_1_t45360F5EE363F4D7C749B7FD64903E93A5087EC7* ___request0, Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A* ___getData1, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___loadedData2, const RuntimeMethod* method)
{
	((  void (*) (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72*, LoadRequest_1_t45360F5EE363F4D7C749B7FD64903E93A5087EC7*, Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A*, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, const RuntimeMethod*))TerrainDataStreamer_Request_TisRuntimeObject_mAD0BC7A9761DB57F721E87C9E0D535560387262E_gshared)(__this, ___request0, ___getData1, ___loadedData2, method);
}
// UnityEngine.Rect VisualDesignCafe.Rendering.Nature.DetailmapRect::op_Explicit(VisualDesignCafe.Rendering.Nature.DetailmapRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D DetailmapRect_op_Explicit_mBFD0DA471DC25B5AEC3846FBA31CC509B19ABD83 (DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 ___detailmapRect0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[,]>::.ctor(VisualDesignCafe.Rendering.Nature.ITerrainData,System.UInt32,System.Int32,System.Int32,UnityEngine.Rect,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<Tdata>,System.Action`1<Tdata>)
inline void LoadRequest_1__ctor_mE1AB933229262230DBA9BE3978544396E962B14D (LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F* __this, RuntimeObject* ___terrain0, uint32_t ___version1, int32_t ___layer2, int32_t ___cellHash3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect4, ResultHandler_tAD30F88871E43E98145B755A9399E056E344E01B* ___handleResult5, Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87* ___callback6, const RuntimeMethod* method)
{
	((  void (*) (LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F*, RuntimeObject*, uint32_t, int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, ResultHandler_tAD30F88871E43E98145B755A9399E056E344E01B*, Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87*, const RuntimeMethod*))LoadRequest_1__ctor_mA49C52F5A21B02096CA076C8AF1725266FA193D5_gshared)(__this, ___terrain0, ___version1, ___layer2, ___cellHash3, ___rect4, ___handleResult5, ___callback6, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Request<System.Int32[,]>(VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<Tdata>&,System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,Tdata>,System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>)
inline void TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_mC9AE755750C0E4B17FABB311EAB450E898E356A1 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F* ___request0, Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF* ___getData1, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___loadedData2, const RuntimeMethod* method)
{
	((  void (*) (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72*, LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F*, Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF*, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, const RuntimeMethod*))TerrainDataStreamer_Request_TisRuntimeObject_mAD0BC7A9761DB57F721E87C9E0D535560387262E_gshared)(__this, ___request0, ___getData1, ___loadedData2, method);
}
// UnityEngine.Rect VisualDesignCafe.Rendering.Nature.HeightmapRect::op_Explicit(VisualDesignCafe.Rendering.Nature.HeightmapRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D HeightmapRect_op_Explicit_m728ECE9B2179BE3BB44B5AB54188233FC8DA2BD3 (HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E ___heightmapRect0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,]>::.ctor(VisualDesignCafe.Rendering.Nature.ITerrainData,System.UInt32,System.Int32,System.Int32,UnityEngine.Rect,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<Tdata>,System.Action`1<Tdata>)
inline void LoadRequest_1__ctor_m36D87C78271A8D38B7E413FD31405710767914FC (LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C* __this, RuntimeObject* ___terrain0, uint32_t ___version1, int32_t ___layer2, int32_t ___cellHash3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect4, ResultHandler_tB23FE6432CF71DA57AE5DB8901AE59E8086D616C* ___handleResult5, Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879* ___callback6, const RuntimeMethod* method)
{
	((  void (*) (LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C*, RuntimeObject*, uint32_t, int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, ResultHandler_tB23FE6432CF71DA57AE5DB8901AE59E8086D616C*, Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879*, const RuntimeMethod*))LoadRequest_1__ctor_mA49C52F5A21B02096CA076C8AF1725266FA193D5_gshared)(__this, ___terrain0, ___version1, ___layer2, ___cellHash3, ___rect4, ___handleResult5, ___callback6, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Request<System.Single[,]>(VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<Tdata>&,System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,Tdata>,System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>)
inline void TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_mEA559CE7AFB5E0D2E266E517315A0C976D0F3FCC (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C* ___request0, Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE* ___getData1, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___loadedData2, const RuntimeMethod* method)
{
	((  void (*) (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72*, LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C*, Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE*, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, const RuntimeMethod*))TerrainDataStreamer_Request_TisRuntimeObject_mAD0BC7A9761DB57F721E87C9E0D535560387262E_gshared)(__this, ___request0, ___getData1, ___loadedData2, method);
}
// UnityEngine.Rect VisualDesignCafe.Rendering.Nature.AlphamapRect::op_Explicit(VisualDesignCafe.Rendering.Nature.AlphamapRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D AlphamapRect_op_Explicit_m78E35769E59F837EEF6596C729F357C2AECE2D8B (AlphamapRect_tD180EBB602558AC1028C107746723E2312831B9B ___alphamapRect0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,,]>::.ctor(VisualDesignCafe.Rendering.Nature.ITerrainData,System.UInt32,System.Int32,System.Int32,UnityEngine.Rect,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<Tdata>,System.Action`1<Tdata>)
inline void LoadRequest_1__ctor_m2E31240D241EAD32D7A7BA181A8B205559F4D5DE (LoadRequest_1_tEA80F21DA524A8160E44F72E6763EE8A4501923D* __this, RuntimeObject* ___terrain0, uint32_t ___version1, int32_t ___layer2, int32_t ___cellHash3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect4, ResultHandler_tE47E75919F76941CB5556B16967FF3AF9E2E7B55* ___handleResult5, Action_1_t0241D6630458FB8256BF63E9B9F522C80568350B* ___callback6, const RuntimeMethod* method)
{
	((  void (*) (LoadRequest_1_tEA80F21DA524A8160E44F72E6763EE8A4501923D*, RuntimeObject*, uint32_t, int32_t, int32_t, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, ResultHandler_tE47E75919F76941CB5556B16967FF3AF9E2E7B55*, Action_1_t0241D6630458FB8256BF63E9B9F522C80568350B*, const RuntimeMethod*))LoadRequest_1__ctor_mA49C52F5A21B02096CA076C8AF1725266FA193D5_gshared)(__this, ___terrain0, ___version1, ___layer2, ___cellHash3, ___rect4, ___handleResult5, ___callback6, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Request<System.Single[,,]>(VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<Tdata>&,System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,Tdata>,System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>)
inline void TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_m55F4D4F9DB5415A785DE9CB164520983D792FCB9 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, LoadRequest_1_tEA80F21DA524A8160E44F72E6763EE8A4501923D* ___request0, Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69* ___getData1, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___loadedData2, const RuntimeMethod* method)
{
	((  void (*) (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72*, LoadRequest_1_tEA80F21DA524A8160E44F72E6763EE8A4501923D*, Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69*, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, const RuntimeMethod*))TerrainDataStreamer_Request_TisRuntimeObject_mAD0BC7A9761DB57F721E87C9E0D535560387262E_gshared)(__this, ___request0, ___getData1, ___loadedData2, method);
}
// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::IsLoaded(System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>,System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainDataStreamer_IsLoaded_m45A9DB4A5864B4EE167CA44C99DC987740B084DD (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___hashset0, int32_t ___cellHash1, int32_t ___layer2, uint32_t ___version3, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32[,]>::Invoke(T)
inline void Action_1_Invoke_mA2000ACAFBB2BD5DE563589613C892DC934E5E6E_inline (Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87* __this, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87*, Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[,]>>::Add(T)
inline void List_1_Add_mE7C5B40535077C06CF0A97C2B0E9C383AB2E677C_inline (List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* __this, LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9*, LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F, const RuntimeMethod*))List_1_Add_m4A39C99F6733217E7A8A199622CCE211BA8D9D7A_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Action`1<System.Single[,]>::Invoke(T)
inline void Action_1_Invoke_m50907D5E1F6649D5931A08570E3D22BFDB52FB61_inline (Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879* __this, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879*, SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,]>>::Add(T)
inline void List_1_Add_m64ED9FFF4F6918F8164F90295D4A13845EAAB2C1_inline (List_1_tF6C9D180FB862469CC481462DE748286F6195098* __this, LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6C9D180FB862469CC481462DE748286F6195098*, LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C, const RuntimeMethod*))List_1_Add_m4A39C99F6733217E7A8A199622CCE211BA8D9D7A_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD8D35D02626DFF43BB92F9E022547747BB41364F (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, int32_t ___key0, LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, int32_t, LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB*, const RuntimeMethod*))Dictionary_2_TryGetValue_mD8D35D02626DFF43BB92F9E022547747BB41364F_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m3E4E724B8C57CEBA089C8B787F7C769BF95EC77A (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, int32_t ___key0, LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, int32_t, LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB, const RuntimeMethod*))Dictionary_2_set_Item_m3E4E724B8C57CEBA089C8B787F7C769BF95EC77A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFD47F677AE07F0A79B2FAD238B391813CF1E28B9 (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* __this, int32_t ___key0, LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, int32_t, LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB, const RuntimeMethod*))Dictionary_2_Add_mFD47F677AE07F0A79B2FAD238B391813CF1E28B9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.Profiling.ProfilerSampleScope::Begin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543 (String_t* ___sampleName0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Request<System.Int32[]>(System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<Tdata>>,System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,Tdata>,System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>,System.Boolean)
inline void TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mC66E5A8C85F933CA94210FD8FE15E2854BA1C76E (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* ___requests0, Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A* ___getData1, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___loadedData2, bool ___invokeCallbacks3, const RuntimeMethod* method)
{
	((  void (*) (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72*, List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020*, Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A*, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, bool, const RuntimeMethod*))TerrainDataStreamer_Request_TisRuntimeObject_m66BA206B6956EB04B3CFB09ACBDB494AFDBF6D18_gshared)(__this, ___requests0, ___getData1, ___loadedData2, ___invokeCallbacks3, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.Profiling.ProfilerSampleScope::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5 (const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Request<System.Single[,]>(System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<Tdata>>,System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,Tdata>,System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>,System.Boolean)
inline void TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_m8EC7EBDFBD3ABACD8D2561001F1565813096D916 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, List_1_tF6C9D180FB862469CC481462DE748286F6195098* ___requests0, Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE* ___getData1, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___loadedData2, bool ___invokeCallbacks3, const RuntimeMethod* method)
{
	((  void (*) (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72*, List_1_tF6C9D180FB862469CC481462DE748286F6195098*, Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE*, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, bool, const RuntimeMethod*))TerrainDataStreamer_Request_TisRuntimeObject_m66BA206B6956EB04B3CFB09ACBDB494AFDBF6D18_gshared)(__this, ___requests0, ___getData1, ___loadedData2, ___invokeCallbacks3, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Request<System.Int32[,]>(System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<Tdata>>,System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,Tdata>,System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>,System.Boolean)
inline void TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_m9B79C3F455E1B302695750EC1B4272AA2CC64BBF (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* ___requests0, Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF* ___getData1, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___loadedData2, bool ___invokeCallbacks3, const RuntimeMethod* method)
{
	((  void (*) (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72*, List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9*, Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF*, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, bool, const RuntimeMethod*))TerrainDataStreamer_Request_TisRuntimeObject_m66BA206B6956EB04B3CFB09ACBDB494AFDBF6D18_gshared)(__this, ___requests0, ___getData1, ___loadedData2, ___invokeCallbacks3, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Request<System.Single[,,]>(System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<Tdata>>,System.Func`4<VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect,Tdata>,System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>,System.Boolean)
inline void TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_mE1471C963AAEA26B412647BD578361E6AF2A3773 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3* ___requests0, Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69* ___getData1, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___loadedData2, bool ___invokeCallbacks3, const RuntimeMethod* method)
{
	((  void (*) (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72*, List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3*, Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69*, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*, bool, const RuntimeMethod*))TerrainDataStreamer_Request_TisRuntimeObject_m66BA206B6956EB04B3CFB09ACBDB494AFDBF6D18_gshared)(__this, ___requests0, ___getData1, ___loadedData2, ___invokeCallbacks3, method);
}
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::CombineHashCodes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainDataStreamer_CombineHashCodes_m34C2B3D3E505BBBA03CB0EE93F21D0FCC3B7C1C4 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method) ;
// VisualDesignCafe.Memory.UnmanagedArray`1<System.Single> VisualDesignCafe.Rendering.Nature.TerrainData::get_Heights()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* TerrainData_get_Heights_mCEECDB7F8DADED7A77EBD77095DDA1486FBB8516_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) ;
// VisualDesignCafe.Memory.UnmanagedArray`1<System.Single> VisualDesignCafe.Rendering.Nature.TerrainData::get_PreviousHeights()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* TerrainData_get_PreviousHeights_m6488BD94E33E60D7F78986A43FF44FD0D761D4AF_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.HeightmapRect::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeightmapRect__ctor_m17B883610CA7AC97C1E70DBB041EF9B00E190F5B (HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainData::get_HeightmapResolution()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TerrainData_get_HeightmapResolution_mBADC2A7191E6438218F77EDDDC7B123991DED3E6_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) ;
// System.Void* VisualDesignCafe.Memory.UnmanagedArray`1<System.Single>::GetUnsafePtr()
inline void* UnmanagedArray_1_GetUnsafePtr_m8ADD8AE336449FEBCD806BDA6537E12C23CEAF88 (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* __this, const RuntimeMethod* method)
{
	return ((  void* (*) (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA*, const RuntimeMethod*))UnmanagedArray_1_GetUnsafePtr_m8ADD8AE336449FEBCD806BDA6537E12C23CEAF88_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// VisualDesignCafe.Rendering.Nature.DetailmapRect VisualDesignCafe.Rendering.Nature.TerrainModificationHistory::GetModifiedDetailmapRect(System.Int32,VisualDesignCafe.Rendering.Nature.DetailmapRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 TerrainModificationHistory_GetModifiedDetailmapRect_m77D5EB401FD51076ACFCEEC5817AF8E79C64E704 (TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C* __this, int32_t ___layer0, DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 ___bounds1, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.DetailmapRect::get_XMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DetailmapRect_get_XMax_m49A9BF0FC0A5DD371871FFC3BA4FD820C87058C9 (DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* __this, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.DetailmapRect::get_YMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DetailmapRect_get_YMax_mD9657481CFA4FCE5CA8B3AC404E54CFB5C7C9507 (DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* __this, const RuntimeMethod* method) ;
// VisualDesignCafe.Rendering.Nature.Detailmap[] VisualDesignCafe.Rendering.Nature.TerrainData::get_Detailmaps()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* TerrainData_get_Detailmaps_mC8C36C1DBBD4DB93007E602B3BB9D8423109858A_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.DetailmapRect::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailmapRect__ctor_mAB3BE5B2C0C7B9A9005C7877ECE1AD237F46A7DE (DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) ;
// VisualDesignCafe.Rendering.Nature.Detailmap[] VisualDesignCafe.Rendering.Nature.TerrainData::get_PreviousDetailmaps()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* TerrainData_get_PreviousDetailmaps_m05D5B502DE4F61E46878249587186379A58DF31F_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.Detailmap::Compare(VisualDesignCafe.Rendering.Nature.Detailmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detailmap_Compare_m863E4263F0D45754BEE1AF43B629EC665CDCC0ED (Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* __this, Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* ___other0, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainData::get_DetailResolution()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TerrainData_get_DetailResolution_mBB49BD0472E9E771B647B304A431ABCD99C599A4_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) ;
// System.Int32* VisualDesignCafe.Rendering.Nature.Detailmap::GetUnsafePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Detailmap_GetUnsafePtr_m847E91D18F40CCE45705F2A69537D627CCE02D62 (Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* __this, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.Detailmap::Compare(VisualDesignCafe.Rendering.Nature.Detailmap,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detailmap_Compare_mBB9830980EE6EE7A1E2AB7D3409631A1E4FA0171 (Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* __this, Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* ___other0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Rendering.Nature.TerrainRect::get_XMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainRect_get_XMax_mABEFA6F58CB5000E2CAA87D84D96A384EA1DB3E7 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainRect::set_XMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainRect_set_XMax_m072FD321C730C09ABF68A87C8BAD2E5F0A09AA83 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Rendering.Nature.TerrainRect::get_YMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainRect_get_YMax_mB71E157CAA2820A9F8DD7D3D3069041D48E2F09B (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainRect::set_YMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainRect_set_YMax_m435AF527D9EFA081DFB07316E8C37062FF4DFC46 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainRect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainRect__ctor_m1FA02DCD2DA14B80462EA66018B7940C37F6A199 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainData::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainRect::Clamp(VisualDesignCafe.Rendering.Nature.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainRect_Clamp_mE997D3C1A4D283E986F727C7FEFFDAE7F5463291 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData0, const RuntimeMethod* method) ;
// UnityEngine.Rect VisualDesignCafe.Rendering.Nature.TerrainRect::op_Explicit(VisualDesignCafe.Rendering.Nature.TerrainRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D TerrainRect_op_Explicit_m7F79E1BF14D73F50838BB36CD8BE5074E10E903A (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___detailmapRect0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Overlaps_m5A540A24DAD3327006A3A2E209CC17992173B572 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___other0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainRect::Overlaps(VisualDesignCafe.Rendering.Nature.TerrainRect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainRect_Overlaps_mADFC9D07668E34F9032CD1415D1114B9776F78BC (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* ___other0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String VisualDesignCafe.Rendering.Nature.TerrainRect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TerrainRect_ToString_mCFD40EEE7907DFB072D0B317F5ECA9B5030FF304 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// T& VisualDesignCafe.Memory.UnmanagedArray`1<System.Single>::get_Item(System.Int32,System.Int32)
inline float* UnmanagedArray_1_get_Item_m1BA5FB1ADF681B7D71BECC8F5794BB2AAF0C4322 (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	return ((  float* (*) (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA*, int32_t, int32_t, const RuntimeMethod*))UnmanagedArray_1_get_Item_m1BA5FB1ADF681B7D71BECC8F5794BB2AAF0C4322_gshared)(__this, ___x0, ___y1, method);
}
// System.Single VisualDesignCafe.Rendering.Nature.TerrainSurface::GetHeight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0 (TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainSurface::GetNormal(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainSurface_GetNormal_m10D0711C7CCA78A39CC47D2299D31C1E87FCF046 (TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Cell>::.ctor()
inline void List_1__ctor_m7A979ABE57FAA89D6008C9AC9AA829E7BCA39A76 (List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// VisualDesignCafe.Rendering.Nature.BuildScheduler VisualDesignCafe.Rendering.Nature.Grid::get_Builder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* Grid_get_Builder_mA922F9533FD555307A3184DF0819ECEBDE99BBF5_inline (Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<VisualDesignCafe.Rendering.Nature.Cell>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2A99A6CB2DAA92FD3DD405B92FD631C55FF06E2A (Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.BuildScheduler::add_OnSkipped(System.Action`1<VisualDesignCafe.Rendering.Nature.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildScheduler_add_OnSkipped_m908F3B68C39D91079EEA91C1F4A4881A0FA164CD (BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* __this, Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99* ___value0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_Prepare_m540B98B42226EDB4E80394E16E5E00BD7F420DFF (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_Dispose_m370BD509587A3696400F25EB3F11E50AA4EBD839 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.BuildScheduler::remove_OnSkipped(System.Action`1<VisualDesignCafe.Rendering.Nature.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildScheduler_remove_OnSkipped_m23C881705EB83E4C1EF5F6EDB22828AC739B28DE (BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* __this, Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99* ___value0, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::GetIndex(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CellStreamer_GetIndex_m9A1843FD7D9C5A797D2422D51EAB6BD1ED0CC027_inline (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) ;
// System.Void System.Action`1<VisualDesignCafe.Rendering.Nature.TerrainRect>::Invoke(T)
inline void Action_1_Invoke_m61AE232F927B8CCA5E86FAB9BE92C259B93C7937_inline (Action_1_t0E703B63899DA25B799B0D3495FBAB3A030CD3F5* __this, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0E703B63899DA25B799B0D3495FBAB3A030CD3F5*, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949, const RuntimeMethod*))Action_1_Invoke_m61AE232F927B8CCA5E86FAB9BE92C259B93C7937_gshared_inline)(__this, ___obj0, method);
}
// System.Double VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::GetDistanceToCamera(System.Int32,System.Int32,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double QuadSpatialLayout_GetDistanceToCamera_m763B6A99D12E6495D946B97042DC1700E0712AA5 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___x0, int32_t ___z1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___offset2, bool ___readonly3, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.CameraCollection::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCollection_Validate_m2EC18782FCFFAAF6C105A3C1FE7E3F64C6B3523C (CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::Cache(System.Double,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_Cache_mF5BA65AB5626A2C504B96B8661DCEFB5F7815908 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, double ___range0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset1, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::BuildCellsWithinRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_BuildCellsWithinRange_m274B5D5CCFB3B9FB50E886EC96009A1D0446ED44 (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, const RuntimeMethod* method) ;
// VisualDesignCafe.Rendering.Nature.Cell[,] VisualDesignCafe.Rendering.Nature.Grid::get_Cells()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* Grid_get_Cells_m22B38BE2DA51D64386CF1B025BDE7805B49754CA_inline (Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Rendering.Nature.Grid::get_CellSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Grid_get_CellSize_m0E368C11611554B068A982A685246C20F44A9C08_inline (Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::.ctor(System.Int32,System.Int32,System.Double,VisualDesignCafe.Rendering.Nature.CameraCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout__ctor_mD3F95911D39B732BF3635C5A044C98C7A653B114 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___quadsX0, int32_t ___quadsZ1, double ___quadSize2, CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* ___cameraCollection3, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::GetIndex(System.Int32,System.Int32&,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellStreamer_GetIndex_m5CDFB77F073580EA75DD5D533C3F5BB7B8022890_inline (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, int32_t ___index0, int32_t* ___x1, int32_t* ___y2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainData::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_Position_m2C0A4C02BC08F6552860A4C1DFCFA77785A192A4_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Cell>::Clear()
inline void List_1_Clear_m0F15760AECB3C60197BDB71DBAF4F81D310D8A91_inline (List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Double[] VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::GetClosestDistancesToCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* QuadSpatialLayout_GetClosestDistancesToCamera_m276F69A87D39AD3C85518103E6410310F602A8CA (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Cell>::Add(T)
inline void List_1_Add_m738C779C2F3B6DC809C76EDD2E5E0C7A4593ED00_inline (List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* __this, Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85*, Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::DiscardLoadedData(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_DiscardLoadedData_m29AD9FF858706E7F488D7920C79DBFB10EE24CED (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::SendCellsToBuilder(System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_SendCellsToBuilder_m160D0CFAB6D80D91B63841993A3DE1B0B5C1E104 (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* ___cells0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::ClearLoadedData(System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_ClearLoadedData_m2E742A2AB73441A797A01D5D939BB99B5ED1A692 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___hashset0, int32_t ___cellHash1, int32_t ___layer2, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Cell::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Clear_m0B8796EB738054CB4D23F6CF10241A8800686E9C (Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Cell>::get_Count()
inline int32_t List_1_get_Count_mD95E5FD0ED83B11B437BD1C15DE38B3F6F75C9FF_inline (List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.BuildScheduler::set_PrioritizeView(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuildScheduler_set_PrioritizeView_m07BE6641742D85494EB1B7828C4E00B2766D05B0_inline (BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Grid::Build(System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Cell>,VisualDesignCafe.Rendering.Nature.TerrainData,VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer,VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings,VisualDesignCafe.Rendering.Nature.BuildSettings,VisualDesignCafe.Threading.TaskScheduler/ScheduleOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Build_m25DE8B90E8B3FA6580503B6AB1A470A23002C962 (Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* __this, List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* ___cells0, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData1, CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* ___streamer2, StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A ___streamSettings3, BuildSettings_tE7394746E5900966836523B367829DE01151D69D ___buildSettings4, int32_t ___order5, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::.ctor(System.Int32)
inline void List_1__ctor_mA8B6727F803E55A09AD195A5328B5EE710AD7F90 (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t44A25F3C59962F4750C12ACC843610740D56B163*, int32_t, const RuntimeMethod*))List_1__ctor_mA8B6727F803E55A09AD195A5328B5EE710AD7F90_gshared)(__this, ___capacity0, method);
}
// System.Void System.Action`1<VisualDesignCafe.Rendering.Nature.CameraCollection/Entry>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mF2E73935C8EBAE62E8544E11513B1D568C32F569 (Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mF2E73935C8EBAE62E8544E11513B1D568C32F569_gshared)(__this, ___object0, ___method1, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.CameraCollection::add_Removed(System.Action`1<VisualDesignCafe.Rendering.Nature.CameraCollection/Entry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCollection_add_Removed_mAE5F0AC27B00DE4FE8C96C1554B6E12F26D6DBBF (CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* __this, Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA* ___value0, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::GetIndex(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QuadSpatialLayout_GetIndex_mC826C002A801732F54169A149A2700426807A6BB_inline (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/Quad::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quad__ctor_m3931444C10918A9136364B002AE129314C201D2E (Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* __this, double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::FillArray<System.Double>(T[],T)
inline void QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB049156BFF8B2D26CF127F7BEDB142EB05D20B77 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___array0, double ___value1, const RuntimeMethod* method)
{
	((  void (*) (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977*, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*, double, const RuntimeMethod*))QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB049156BFF8B2D26CF127F7BEDB142EB05D20B77_gshared)(__this, ___array0, ___value1, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::FillArray<System.Double>(T[],T[])
inline void QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___array0, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___source1, const RuntimeMethod* method)
{
	((  void (*) (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977*, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*, const RuntimeMethod*))QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_gshared)(__this, ___array0, ___source1, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.CameraCollection::remove_Removed(System.Action`1<VisualDesignCafe.Rendering.Nature.CameraCollection/Entry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCollection_remove_Removed_mBF79420AA67DE6A19586DC6D54E2C484842F9CC2 (CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* __this, Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA* ___value0, const RuntimeMethod* method) ;
// VisualDesignCafe.Rendering.Nature.CameraCollection/Entry VisualDesignCafe.Rendering.Nature.CameraCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98 CameraCollection_get_Item_mB5DF2172F05B9CAD94D695DC3ADAA0A3D80F2ED4 (CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Double VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::GetDistanceToCamera(System.Int32,System.Int32,System.Int32,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double QuadSpatialLayout_GetDistanceToCamera_m039271B9FD35806AECA6A13863DDA4B32A52E611 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___camera0, int32_t ___x1, int32_t ___z2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___offset3, bool ___readonly4, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.CameraCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraCollection_get_Count_mE310A46C13ED0E6C9724FA90AA0C85B015FADE67 (CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* __this, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::TryGetCachedData(System.Int32,VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuadSpatialLayout_TryGetCachedData_m5A9D0BABC53EED9B422108472460A2D9EEA67917 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___camera0, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* ___cachedData1, const RuntimeMethod* method) ;
// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::GetCachedDataForCamera(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 QuadSpatialLayout_GetCachedDataForCamera_mB0413042BE88746691A1002829F9F8FE4DEAB1C6 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___camera0, const RuntimeMethod* method) ;
// UnityEngine.Camera VisualDesignCafe.Rendering.Nature.CameraCollection::GetCameraById(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCollection_GetCameraById_m731D62AEC6BDBAD1E1E90DB35D9E65E474AAD6DF (CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* __this, int32_t ___id0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Double VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::DistanceSqr(System.Double&,System.Double&,System.Double&,System.Double&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double QuadSpatialLayout_DistanceSqr_m8B8409B05FE713978C7B39C205A7746B3E968B25_inline (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, double* ___aX0, double* ___aY1, double* ___bX2, double* ___bY3, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::ClearCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_ClearCache_mC0BE582A0B95C61C55B2225A3119F4C6D3767E8F (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::CalculateDistanceToCamera(System.Double,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_CalculateDistanceToCamera_m9E6C9E612296A2DCE86FC60D8A955AEEFA556D73 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, double ___range0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___offset1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::get_Count()
inline int32_t List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_inline (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t44A25F3C59962F4750C12ACC843610740D56B163*, const RuntimeMethod*))List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::get_Item(System.Int32)
inline CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946 (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 (*) (List_1_t44A25F3C59962F4750C12ACC843610740D56B163*, int32_t, const RuntimeMethod*))List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m10969407186E28ED52B22F4F78AE007BA3F1E64C (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t44A25F3C59962F4750C12ACC843610740D56B163*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m10969407186E28ED52B22F4F78AE007BA3F1E64C_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::set_Item(System.Int32,T)
inline void List_1_set_Item_mC6C56F90B8EC08F746129D8D1FCED0C9BEF1B0E8 (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, int32_t ___index0, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t44A25F3C59962F4750C12ACC843610740D56B163*, int32_t, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112, const RuntimeMethod*))List_1_set_Item_mC6C56F90B8EC08F746129D8D1FCED0C9BEF1B0E8_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData>::Add(T)
inline void List_1_Add_m145D862E5992A05767DD0D16530E23B0D6580560_inline (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t44A25F3C59962F4750C12ACC843610740D56B163*, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112, const RuntimeMethod*))List_1_Add_m145D862E5992A05767DD0D16530E23B0D6580560_gshared_inline)(__this, ___item0, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData__ctor_mB1417F75FD1ED13D31EAC94598032C65CD469203 (CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* __this, int32_t ___id0, int32_t ___capacity1, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::SetCachedData(System.Int32,VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_SetCachedData_mF0CE0F73BC5CDEE1CF13A8EAB8C2BE468DE4105D (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___camera0, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* ___cachedData1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Double VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::Direction(System.Double&,System.Double&,System.Double&,System.Double&,System.Double&,System.Double&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double QuadSpatialLayout_Direction_m5EBC991F14D237089E137BBCE514A3ED62FD592B_inline (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, double* ___targetX0, double* ___targetY1, double* ___currentX2, double* ___currentY3, double* ___forwardX4, double* ___forwardY5, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings::Equals(VisualDesignCafe.Rendering.Nature.Spawning.ISpawnSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnSettings_Equals_mE81C7534CED8A3B33E1AFBD2528DE9E138E0B637 (SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnSettings_Equals_mB5A238F32856F589CEFA5966FDC3A6E9DE8DC263 (SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Quaternion_GetHashCode_m5F55C34C98E437376595E722BE4EB8A70434F049_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpawnSettings_GetHashCode_m12E589316E158148B826462578A15A9B690D38C0 (SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* __this, const RuntimeMethod* method) ;
// T VisualDesignCafe.Rendering.Nature.TerrainDetail::GetProperty<VisualDesignCafe.Rendering.Nature.DetailNoiseSpread>()
inline DetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB* TerrainDetail_GetProperty_TisDetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB_m2107EC6273B735C2C3D133B1DC387A2E7F76D4E9 (TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* __this, const RuntimeMethod* method)
{
	return ((  DetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB* (*) (TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4*, const RuntimeMethod*))TerrainDetail_GetProperty_TisRuntimeObject_m0FD36776DF6962FE2BE8AA536A16D8927492741A_gshared)(__this, method);
}
// System.Single VisualDesignCafe.Rendering.Nature.DetailNoiseSpread::get_NoiseSpread()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DetailNoiseSpread_get_NoiseSpread_mB400384F184F7ED37EACAEB20C4548845B381A25_inline (DetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB* __this, const RuntimeMethod* method) ;
// T VisualDesignCafe.Rendering.Nature.TerrainDetail::GetProperty<VisualDesignCafe.Rendering.Nature.DetailTransform>()
inline DetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825* TerrainDetail_GetProperty_TisDetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825_m9A84C071075EC3A1CC02A9A10FEA227178811C04 (TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* __this, const RuntimeMethod* method)
{
	return ((  DetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825* (*) (TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4*, const RuntimeMethod*))TerrainDetail_GetProperty_TisRuntimeObject_m0FD36776DF6962FE2BE8AA536A16D8927492741A_gshared)(__this, method);
}
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.DetailTransform::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DetailTransform_get_Offset_m496544F586273ADB92DE928794AD4CBD4323E67D_inline (DetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion VisualDesignCafe.Rendering.Nature.DetailTransform::get_Orientation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 DetailTransform_get_Orientation_mBF2D47914C324C3C9A02961527894052D110B3C1_inline (DetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825* __this, const RuntimeMethod* method) ;
// T VisualDesignCafe.Rendering.Nature.TerrainDetail::GetProperty<VisualDesignCafe.Rendering.Nature.DetailSize>()
inline DetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142* TerrainDetail_GetProperty_TisDetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142_mEF0657CAA40B989F00FBA07292E2BD8B4E504BC8 (TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* __this, const RuntimeMethod* method)
{
	return ((  DetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142* (*) (TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4*, const RuntimeMethod*))TerrainDetail_GetProperty_TisRuntimeObject_m0FD36776DF6962FE2BE8AA536A16D8927492741A_gshared)(__this, method);
}
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.DetailSize::get_MaxScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DetailSize_get_MaxScale_m920EFEF6D608FC45A556BBB7AC8D2AEAB23D0094_inline (DetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.DetailSize::get_MinScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DetailSize_get_MinScale_mF44F4246BF41DB230C6944B872DC03EB6393F088_inline (DetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142* __this, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainData::get_IsDisposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TerrainData_get_IsDisposed_mDD848B72976FB21C15527E5BD8BF3B388CC9540F_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataDisposedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* __this, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.DetailmapRect::.ctor(VisualDesignCafe.Rendering.Nature.TerrainRect&,VisualDesignCafe.Rendering.Nature.TerrainData,VisualDesignCafe.Rendering.Nature.DetailmapRect/RoundingMethod,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailmapRect__ctor_m462E41EEDF44F2D90628DB9F8A1AC0385883A840 (DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* __this, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* ___rect0, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrain1, int32_t ___rounding2, int32_t ___padding3, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.Spawning.Spawner::GetCapacity(VisualDesignCafe.Rendering.Nature.DetailmapRect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Spawner_GetCapacity_m7BBC5F64344E421B5494239DDD060A25B0447CAF (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* ___detailmapRect0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Matrix4x4>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mD1C08FEB8E37DA6FB32E18E7F25ACEF8DFE3E015 (NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD1C08FEB8E37DA6FB32E18E7F25ACEF8DFE3E015_gshared)(__this, method);
}
// System.Boolean VisualDesignCafe.Rendering.Nature.Detailmap::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detailmap_get_IsDisposed_m1982E111A7787F7CD4CDF9080D74B7E6CD18D6DD (Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* __this, const RuntimeMethod* method) ;
// System.Boolean VisualDesignCafe.Memory.UnmanagedArray`1<System.Single>::get_IsDisposed()
inline bool UnmanagedArray_1_get_IsDisposed_mDD25ABE1E521872DB5D53AE53576208C4FDA10D0_inline (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA*, const RuntimeMethod*))UnmanagedArray_1_get_IsDisposed_mDD25ABE1E521872DB5D53AE53576208C4FDA10D0_gshared_inline)(__this, method);
}
// VisualDesignCafe.Rendering.Nature.TerrainRect VisualDesignCafe.Rendering.Nature.DetailmapRect::ToTerrainRect(VisualDesignCafe.Rendering.Nature.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 DetailmapRect_ToTerrainRect_m6790E5975AF490F4D59467308146A66973461C4D (DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrain0, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void VisualDesignCafe.Rendering.Nature.RandomHash::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomHash__ctor_mE1821BBEC87B6451B89FB5F0C487B3E834B1C32D (RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640* __this, int32_t ___seed0, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Rendering.Nature.TerrainData::get_Density()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TerrainData_get_Density_mC96D0CEAC551708FAF5DDCB791190D5DFF303B4A_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.DetailmapRect::get_YMin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DetailmapRect_get_YMin_m9FC15CA9FF8379D5DAE7823A842A1ABC1F5361B7_inline (DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* __this, const RuntimeMethod* method) ;
// System.Int32 VisualDesignCafe.Rendering.Nature.DetailmapRect::get_XMin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DetailmapRect_get_XMin_mEF5FC82C98B7006D1D60DC38F5235CFF00C41F38_inline (DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* __this, const RuntimeMethod* method) ;
// VisualDesignCafe.Rendering.Nature.RandomHash VisualDesignCafe.Rendering.Nature.RandomHash::Combine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 RandomHash_Combine_m7440004A70DCDFD5BD6706D882D510E154EFAD17 (RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32& VisualDesignCafe.Rendering.Nature.Detailmap::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Detailmap_get_Item_mDC51480D28D762D00723645A5292A3EA283F6AA6 (Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Rendering.Nature.RandomCache::GetRandomNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RandomCache_GetRandomNumber_m1D05D606C2C09293090D6D1CF717779ECA84A2C1 (int32_t ___seed0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4 (float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Rendering.Nature.Spawning.Spawner::GetTerrainHeight(VisualDesignCafe.Rendering.Nature.TerrainData,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spawner_GetTerrainHeight_mF55D6409BB4C40B50A8AF206CC9C2FA5235FD560 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Spawning.Spawner::GetTerrainNormal(VisualDesignCafe.Rendering.Nature.TerrainData,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Spawner_GetTerrainNormal_m6627844DF6088C211F9182A9400E9C66D23C31D5 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// System.Single VisualDesignCafe.Rendering.Nature.TerrainSurface::GetInterpolatedHeight(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSurface_GetInterpolatedHeight_m24FD221185DFB5F0B43A3FAE8DC39E55864E3D3D (TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainSurface::GetInterpolatedNormal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainSurface_GetInterpolatedNormal_m5F4EFA15EC1DB0640A6A84A5675D87552CF5603F (TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* __this, float ___normalizedX0, float ___normalizedY1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass110_0__ctor_m8D579A36E0E505DCD0D3BFC9A73887CFBAD88625 (U3CU3Ec__DisplayClass110_0_t2D89D27DB086E872351B8BF48FED4C1025454468* __this, const RuntimeMethod* method) 
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
// System.Void VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass110_1__ctor_m02DBD9916ED4D1BB04F1D034D8D4B19A71A18A1A (U3CU3Ec__DisplayClass110_1_t99CF7DF6FC0773531CA15376F89082023513A4FC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainData/<>c__DisplayClass110_1::<OnReceivedAlphamap>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass110_1_U3COnReceivedAlphamapU3Eb__0_mB5D7F300FDE1CCDBE444F6A77E77FEE5B05C5138 (U3CU3Ec__DisplayClass110_1_t99CF7DF6FC0773531CA15376F89082023513A4FC* __this, int32_t ___l0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedArray_1_get_Item_mC32746706EA0EBE8B30F3C48C630984BC7B80B4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_004e;
	}

IL_0005:
	{
		V_1 = 0;
		goto IL_003d;
	}

IL_0009:
	{
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_0 = __this->___alphamaps_0;
		int32_t L_1 = V_1;
		int32_t L_2 = __this->___y_1;
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___x_2;
		int32_t L_5 = ___l0;
		NullCheck(L_0);
		float* L_6;
		L_6 = UnmanagedArray_1_get_Item_mC32746706EA0EBE8B30F3C48C630984BC7B80B4E(L_0, ((int32_t)il2cpp_codegen_add(L_1, L_2)), ((int32_t)il2cpp_codegen_add(L_3, L_4)), L_5, UnmanagedArray_1_get_Item_mC32746706EA0EBE8B30F3C48C630984BC7B80B4E_RuntimeMethod_var);
		U3CU3Ec__DisplayClass110_0_t2D89D27DB086E872351B8BF48FED4C1025454468* L_7 = __this->___CSU24U3CU3E8__locals1_5;
		NullCheck(L_7);
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_8 = L_7->___alpha_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		int32_t L_11 = ___l0;
		NullCheck(L_8);
		float L_12;
		L_12 = (L_8)->GetAt(L_9, L_10, L_11);
		*((float*)L_6) = (float)L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___height_3;
		V_2 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004e:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = __this->___width_4;
		V_3 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_3;
		if (L_20)
		{
			goto IL_0005;
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
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataDisposedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C4C7D32A55E2D5C7C5B9240873D2742C484A075);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(__this, _stringLiteral7C4C7D32A55E2D5C7C5B9240873D2742C484A075, NULL);
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
// VisualDesignCafe.Rendering.Nature.ITerrainData VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_TerrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TerrainDataProvider_get_TerrainData_mDF9A1DD431B02BECE57222620A4CD665162629CC (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		return __this;
	}
}
// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_Layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainDataProvider_get_Layer_m5CA19D110A99B45E1C50E4D2C6CE52769ADED14F (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = __this->____unityTerrain_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainDataProvider_get_Position_mB1C49345DD8E2DAF5C5241BE9B0D29C2B0BC9628 (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = __this->____unityTerrain_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_0, NULL);
		return L_1;
	}
}
// System.Single VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_DetailObjectDensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainDataProvider_get_DetailObjectDensity_m2712170D1B075D825B4E5E41D0989AF95B2F02D4 (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = __this->____unityTerrain_0;
		NullCheck(L_0);
		float L_1;
		L_1 = Terrain_get_detailObjectDensity_m2FEBE42D389A14F98A38888A423B21FD91E605E9(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Bounds VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_LocalBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TerrainDataProvider_get_LocalBounds_mDB34E95BC0F7D6454951964395EDC05AE75CC3E3 (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = TerrainData_get_bounds_m9CE9B3BF067EA06A837AB98B5BC6C0C4669B5A32(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainDataProvider_get_Size_m2397EED80C3E52A26BA54C193615D0ACA3FC304A (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_HeightmapScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainDataProvider_get_HeightmapScale_m3D48088863E4788DA89AC16D88E54F9A01299B70 (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = TerrainData_get_heightmapScale_m4B6AB6495384109BA54955CA52B883A118015188(L_0, NULL);
		return L_1;
	}
}
// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_HeightmapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainDataProvider_get_HeightmapResolution_m13A496F25BEFEAFF4EE7F2718CF74A57D7E416BD (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836(L_0, NULL);
		return L_1;
	}
}
// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_DetailResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainDataProvider_get_DetailResolution_mE1260C12267D1C7FB797A6AD40CB46FC6ABA915E (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TerrainData_get_detailResolution_m999CE72D34D858E7D35182FA8DA05CE3C92F8D72(L_0, NULL);
		return L_1;
	}
}
// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_AlphamapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainDataProvider_get_AlphamapResolution_m8B0D08D54B284915C17E43F8797EE23318910D65 (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TerrainData_get_alphamapResolution_mC5D1C8FF4A5AFFCCFCF1382FED0D1AD46563D6F8(L_0, NULL);
		return L_1;
	}
}
// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_AlphamapCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainDataProvider_get_AlphamapCount_mD7D26335CC8D8FDDFD446DEACD822C2597ECDEF8 (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TerrainData_get_alphamapLayers_mF8A0A4F157F7C56354C5A6E3FABF9F230F410F69(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.DetailPrototype[] VisualDesignCafe.Rendering.Nature.TerrainDataProvider::get_DetailPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* TerrainDataProvider_get_DetailPrototypes_m39002192B600D0F8F6C2AD599DC6AD7EF703914F (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, const RuntimeMethod* method) 
{
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		NullCheck(L_0);
		DetailPrototypeU5BU5D_tB9391EFBDD64B38867DFB8179C6C0E8C81998AB7* L_1;
		L_1 = TerrainData_get_detailPrototypes_m057F428D22C9FCCD36C6BE6768263DE777C6B2C4(L_0, NULL);
		return L_1;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataProvider::.ctor(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataProvider__ctor_m3E564C6ADD203FDB5B15A00924B409E7F7DDF620 (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) 
{
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* G_B2_0 = NULL;
	TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* G_B2_1 = NULL;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* G_B1_0 = NULL;
	TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* G_B1_1 = NULL;
	TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* G_B4_0 = NULL;
	TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* G_B4_1 = NULL;
	TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* G_B3_0 = NULL;
	TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* G_B3_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = ___terrain0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_1 = L_0;
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
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74A11707EEAFDE1957C12B656A0118A1E3D5D40F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataProvider__ctor_m3E564C6ADD203FDB5B15A00924B409E7F7DDF620_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->____unityTerrain_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____unityTerrain_0), (void*)G_B2_0);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = ___terrain0;
		NullCheck(L_3);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_4;
		L_4 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_3, NULL);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = __this;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = __this;
			goto IL_0034;
		}
	}
	{
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_6 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C4C7D32A55E2D5C7C5B9240873D2742C484A075)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataProvider__ctor_m3E564C6ADD203FDB5B15A00924B409E7F7DDF620_RuntimeMethod_var)));
	}

IL_0034:
	{
		NullCheck(G_B4_1);
		G_B4_1->____unityTerrainData_1 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->____unityTerrainData_1), (void*)G_B4_0);
		return;
	}
}
// System.Single[,] VisualDesignCafe.Rendering.Nature.TerrainDataProvider::GetHeights(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* TerrainDataProvider_GetHeights_m0295FC6D683F8C3448B82213912F8039230E959A (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* V_0 = NULL;
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		int32_t L_3 = ___width2;
		int32_t L_4 = ___height3;
		NullCheck(L_0);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_5;
		L_5 = TerrainData_GetHeights_m3E5C109E98E72A23E39B92F7DF48D87888B2D488(L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0014;
	}

IL_0014:
	{
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_6 = V_0;
		return L_6;
	}
}
// System.Int32[] VisualDesignCafe.Rendering.Nature.TerrainDataProvider::GetSupportedLayers(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TerrainDataProvider_GetSupportedLayers_m9067040844C7A661B31715035C5C7FA7C2844A35 (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		int32_t L_3 = ___width2;
		int32_t L_4 = ___height3;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = TerrainData_GetSupportedLayers_m207D3CF276D6D6CC2F2E6BEF2271245C1DB99BD5(L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0014;
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		return L_6;
	}
}
// System.Int32[,] VisualDesignCafe.Rendering.Nature.TerrainDataProvider::GetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* TerrainDataProvider_GetDetailLayer_mA0C73967526FA1FEABFBCC66FE446E87C8A7B647 (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, int32_t ___layer0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method) 
{
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* V_0 = NULL;
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		int32_t L_1 = ___x1;
		int32_t L_2 = ___y2;
		int32_t L_3 = ___width3;
		int32_t L_4 = ___height4;
		int32_t L_5 = ___layer0;
		NullCheck(L_0);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_6;
		L_6 = TerrainData_GetDetailLayer_m8EB9B85C8CE8836E10D4D54B3A43BFE9AF888591(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_0016;
	}

IL_0016:
	{
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_7 = V_0;
		return L_7;
	}
}
// System.Single[,,] VisualDesignCafe.Rendering.Nature.TerrainDataProvider::GetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* TerrainDataProvider_GetAlphamaps_m9E0E6AEA024EB4937196B226482C86B42E5310DF (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* V_0 = NULL;
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___y1;
		int32_t L_3 = ___width2;
		int32_t L_4 = ___height3;
		NullCheck(L_0);
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_5;
		L_5 = TerrainData_GetAlphamaps_m2DEF5D2068D54BDAE78661483C1FC4936B06EA01(L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0014;
	}

IL_0014:
	{
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Texture2D VisualDesignCafe.Rendering.Nature.TerrainDataProvider::GetAlphamapTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TerrainDataProvider_GetAlphamapTexture_m8B43C69163164A5BEC8FEB30CC6539CF68BF26C6 (TerrainDataProvider_t5CE6A5C126D46ACDCF3DF50789A327C87C52EB94* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	{
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_0 = __this->____unityTerrainData_1;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2;
		L_2 = TerrainData_GetAlphamapTexture_mFA6A25F6C09FE64114F69D528046E78B1581366C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = V_0;
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
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer__ctor_mDDAFA57E89C1C4AD23431A78C6125B7880E319F0 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA47982C8460FFFC5B0117F6177F9CF672D8A74B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m117CF41360F2B315E71DEC3D87B67B391F670016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4284794A77331E6983123FE0BC185AB264A68A2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBDCF463092D49A3A848EAF0C7744D5ADF2A51199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFC7FA619A612520DBED8C3A70B81B77A7052ED95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF6C9D180FB862469CC481462DE748286F6195098_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_GetAlphamaps_m3092FF9343DAB61724A1927996044154ED30F0EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_GetDetailLayer_m18E40AEB557E7805B2BA06084099A86DDE0D685A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_GetHeightmap_m354D037072381F95F681C9CA3850FB307C27C2A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_GetSupportedLayers_m20CDC9C9325AEA7410A0E51BD975FC8C7EB1C7C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_0 = (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*)il2cpp_codegen_object_new(Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mA47982C8460FFFC5B0117F6177F9CF672D8A74B6(L_0, ((int32_t)64), Dictionary_2__ctor_mA47982C8460FFFC5B0117F6177F9CF672D8A74B6_RuntimeMethod_var);
		__this->___LoadedHeightmapData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LoadedHeightmapData_0), (void*)L_0);
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_1 = (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*)il2cpp_codegen_object_new(Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mA47982C8460FFFC5B0117F6177F9CF672D8A74B6(L_1, ((int32_t)64), Dictionary_2__ctor_mA47982C8460FFFC5B0117F6177F9CF672D8A74B6_RuntimeMethod_var);
		__this->___LoadedDetailMapData_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LoadedDetailMapData_1), (void*)L_1);
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_2 = (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*)il2cpp_codegen_object_new(Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mA47982C8460FFFC5B0117F6177F9CF672D8A74B6(L_2, ((int32_t)64), Dictionary_2__ctor_mA47982C8460FFFC5B0117F6177F9CF672D8A74B6_RuntimeMethod_var);
		__this->___LoadedAlphaMapData_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LoadedAlphaMapData_2), (void*)L_2);
		List_1_tF6C9D180FB862469CC481462DE748286F6195098* L_3 = (List_1_tF6C9D180FB862469CC481462DE748286F6195098*)il2cpp_codegen_object_new(List_1_tF6C9D180FB862469CC481462DE748286F6195098_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mBDCF463092D49A3A848EAF0C7744D5ADF2A51199(L_3, ((int32_t)32), List_1__ctor_mBDCF463092D49A3A848EAF0C7744D5ADF2A51199_RuntimeMethod_var);
		__this->____heightmapRequests_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____heightmapRequests_3), (void*)L_3);
		List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* L_4 = (List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9*)il2cpp_codegen_object_new(List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m4284794A77331E6983123FE0BC185AB264A68A2E(L_4, ((int32_t)32), List_1__ctor_m4284794A77331E6983123FE0BC185AB264A68A2E_RuntimeMethod_var);
		__this->____detailmapRequests_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____detailmapRequests_4), (void*)L_4);
		List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3* L_5 = (List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3*)il2cpp_codegen_object_new(List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m117CF41360F2B315E71DEC3D87B67B391F670016(L_5, ((int32_t)32), List_1__ctor_m117CF41360F2B315E71DEC3D87B67B391F670016_RuntimeMethod_var);
		__this->____alphamapRequests_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____alphamapRequests_5), (void*)L_5);
		List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* L_6 = (List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020*)il2cpp_codegen_object_new(List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mFC7FA619A612520DBED8C3A70B81B77A7052ED95(L_6, ((int32_t)32), List_1__ctor_mFC7FA619A612520DBED8C3A70B81B77A7052ED95_RuntimeMethod_var);
		__this->____supportedLayerRequests_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____supportedLayerRequests_6), (void*)L_6);
		Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF* L_7 = (Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF*)il2cpp_codegen_object_new(Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_4__ctor_m05A8F728785CE40DA72A4C05F6FA6B488D21CE51(L_7, __this, (intptr_t)((void*)TerrainDataStreamer_GetDetailLayer_m18E40AEB557E7805B2BA06084099A86DDE0D685A_RuntimeMethod_var), NULL);
		__this->____getDetailLayer_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____getDetailLayer_7), (void*)L_7);
		Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE* L_8 = (Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE*)il2cpp_codegen_object_new(Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_4__ctor_m520DBC13FE68086F0C23DD4746202C397FE0FA0C(L_8, __this, (intptr_t)((void*)TerrainDataStreamer_GetHeightmap_m354D037072381F95F681C9CA3850FB307C27C2A7_RuntimeMethod_var), NULL);
		__this->____getHeightmap_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____getHeightmap_8), (void*)L_8);
		Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69* L_9 = (Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69*)il2cpp_codegen_object_new(Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_4__ctor_m0DA038FF41465CBAB1F124027A79CF832918991A(L_9, __this, (intptr_t)((void*)TerrainDataStreamer_GetAlphamaps_m3092FF9343DAB61724A1927996044154ED30F0EC_RuntimeMethod_var), NULL);
		__this->____getAlphamaps_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____getAlphamaps_9), (void*)L_9);
		Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A* L_10 = (Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A*)il2cpp_codegen_object_new(Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_4__ctor_mD6611E21350E70629B97EF1B74F9904B5A027285(L_10, __this, (intptr_t)((void*)TerrainDataStreamer_GetSupportedLayers_m20CDC9C9325AEA7410A0E51BD975FC8C7EB1C7C2_RuntimeMethod_var), NULL);
		__this->____getSupportedLayers_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____getSupportedLayers_10), (void*)L_10);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_Dispose_mFBEEC403C53BDA4A398F59396C7FC67C015BE5E3 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m1389F57362558475ABA4690615274770EAE735A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4385CE7AA897C72F6A87805A53BBA9E53F09E7EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m91C856B1496C3AA7D21B3B9590D3C5996999EE69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mA7A8F22A8129C1975C26B68BA98705CF93E6D2D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_0 = __this->___LoadedHeightmapData_0;
		NullCheck(L_0);
		Dictionary_2_Clear_m1389F57362558475ABA4690615274770EAE735A7(L_0, Dictionary_2_Clear_m1389F57362558475ABA4690615274770EAE735A7_RuntimeMethod_var);
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_1 = __this->___LoadedDetailMapData_1;
		NullCheck(L_1);
		Dictionary_2_Clear_m1389F57362558475ABA4690615274770EAE735A7(L_1, Dictionary_2_Clear_m1389F57362558475ABA4690615274770EAE735A7_RuntimeMethod_var);
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_2 = __this->___LoadedAlphaMapData_2;
		NullCheck(L_2);
		Dictionary_2_Clear_m1389F57362558475ABA4690615274770EAE735A7(L_2, Dictionary_2_Clear_m1389F57362558475ABA4690615274770EAE735A7_RuntimeMethod_var);
		List_1_tF6C9D180FB862469CC481462DE748286F6195098* L_3 = __this->____heightmapRequests_3;
		NullCheck(L_3);
		List_1_Clear_m91C856B1496C3AA7D21B3B9590D3C5996999EE69_inline(L_3, List_1_Clear_m91C856B1496C3AA7D21B3B9590D3C5996999EE69_RuntimeMethod_var);
		List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* L_4 = __this->____detailmapRequests_4;
		NullCheck(L_4);
		List_1_Clear_m4385CE7AA897C72F6A87805A53BBA9E53F09E7EF_inline(L_4, List_1_Clear_m4385CE7AA897C72F6A87805A53BBA9E53F09E7EF_RuntimeMethod_var);
		List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3* L_5 = __this->____alphamapRequests_5;
		NullCheck(L_5);
		List_1_Clear_mA7A8F22A8129C1975C26B68BA98705CF93E6D2D8_inline(L_5, List_1_Clear_mA7A8F22A8129C1975C26B68BA98705CF93E6D2D8_RuntimeMethod_var);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::ClearLoadedData(System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_ClearLoadedData_m2E742A2AB73441A797A01D5D939BB99B5ED1A692 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___hashset0, int32_t ___cellHash1, int32_t ___layer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDBF1037C5AB2897E573406A676D61330A9E0B5A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___cellHash1;
		int32_t L_1 = ___layer2;
		il2cpp_codegen_initobj((&V_1), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = V_1;
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB L_3;
		memset((&L_3), 0, sizeof(L_3));
		LoadedData__ctor_mC7AA151AD79E41EF7F7AC4EDC98971817A13E5BA((&L_3), L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4;
		L_4 = LoadedData_GetHashCode_m5D55C6746D1F86DDAAB89D5BD56587E398835325((&V_2), NULL);
		V_0 = L_4;
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_5 = ___hashset0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_Remove_mDBF1037C5AB2897E573406A676D61330A9E0B5A1(L_5, L_6, Dictionary_2_Remove_mDBF1037C5AB2897E573406A676D61330A9E0B5A1_RuntimeMethod_var);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::RequestSupportedLayers(VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[]>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_RequestSupportedLayers_mEF4F646F1DCAAED7B9B3F1B076CF1BF54CCA192E (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, LoadRequest_1_t45360F5EE363F4D7C749B7FD64903E93A5087EC7* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4F8FE8890EC528ECF4C11CC61DA080FC02635922_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m51D39B134DA149070BE994003CA03027A010C205_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = Thread_get_IsBackground_m08C25D0147A8EEDFDA3927F293664509520DA269(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2;
		L_2 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Thread_get_IsThreadPoolThread_m73019FFF8E168CCCA6094E5C88F594CB015684E9(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* L_5 = __this->____supportedLayerRequests_6;
		V_1 = L_5;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_2;
					if (!L_6)
					{
						goto IL_004f;
					}
				}
				{
					List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* L_7 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_7, NULL);
				}

IL_004f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* L_8 = V_1;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_8, (&V_2), NULL);
			List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* L_9 = __this->____supportedLayerRequests_6;
			LoadRequest_1_t45360F5EE363F4D7C749B7FD64903E93A5087EC7* L_10 = ___request0;
			LoadRequest_1_t45360F5EE363F4D7C749B7FD64903E93A5087EC7 L_11 = (*(LoadRequest_1_t45360F5EE363F4D7C749B7FD64903E93A5087EC7*)L_10);
			NullCheck(L_9);
			List_1_Add_m4F8FE8890EC528ECF4C11CC61DA080FC02635922_inline(L_9, L_11, List_1_Add_m4F8FE8890EC528ECF4C11CC61DA080FC02635922_RuntimeMethod_var);
			goto IL_0050;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		goto IL_0064;
	}

IL_0053:
	{
		LoadRequest_1_t45360F5EE363F4D7C749B7FD64903E93A5087EC7* L_12 = ___request0;
		Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A* L_13 = __this->____getSupportedLayers_10;
		TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m51D39B134DA149070BE994003CA03027A010C205(__this, L_12, L_13, (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*)NULL, TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_m51D39B134DA149070BE994003CA03027A010C205_RuntimeMethod_var);
	}

IL_0064:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::ReloadDetailmap(VisualDesignCafe.Rendering.Nature.ITerrainData,VisualDesignCafe.Rendering.Nature.DetailmapRect,System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Int32[,]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_ReloadDetailmap_m327C5F50700BBE88A10C6FF2700587F1CAA106EE (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, RuntimeObject* ___terrain0, DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 ___rect1, int32_t ___layer2, ResultHandler_tAD30F88871E43E98145B755A9399E056E344E01B* ___handleResult3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadRequest_1__ctor_mE1AB933229262230DBA9BE3978544396E962B14D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_mC9AE755750C0E4B17FABB311EAB450E898E356A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___terrain0;
		int32_t L_1 = ___layer2;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_2 = ___rect1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = DetailmapRect_op_Explicit_mBFD0DA471DC25B5AEC3846FBA31CC509B19ABD83(L_2, NULL);
		ResultHandler_tAD30F88871E43E98145B755A9399E056E344E01B* L_4 = ___handleResult3;
		LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F L_5;
		memset((&L_5), 0, sizeof(L_5));
		LoadRequest_1__ctor_mE1AB933229262230DBA9BE3978544396E962B14D((&L_5), L_0, 0, L_1, (-1), L_3, L_4, (Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87*)NULL, /*hidden argument*/LoadRequest_1__ctor_mE1AB933229262230DBA9BE3978544396E962B14D_RuntimeMethod_var);
		V_0 = L_5;
		Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF* L_6 = __this->____getDetailLayer_7;
		TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_mC9AE755750C0E4B17FABB311EAB450E898E356A1(__this, (&V_0), L_6, (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*)NULL, TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_mC9AE755750C0E4B17FABB311EAB450E898E356A1_RuntimeMethod_var);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::ReloadHeightmap(VisualDesignCafe.Rendering.Nature.ITerrainData,VisualDesignCafe.Rendering.Nature.HeightmapRect,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Single[,]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_ReloadHeightmap_m4ED68277C62EDC66D18A68E9D89D03B75F47B57A (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, RuntimeObject* ___terrain0, HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E ___rect1, ResultHandler_tB23FE6432CF71DA57AE5DB8901AE59E8086D616C* ___handleResult2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadRequest_1__ctor_m36D87C78271A8D38B7E413FD31405710767914FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_mEA559CE7AFB5E0D2E266E517315A0C976D0F3FCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___terrain0;
		HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E L_1 = ___rect1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = HeightmapRect_op_Explicit_m728ECE9B2179BE3BB44B5AB54188233FC8DA2BD3(L_1, NULL);
		ResultHandler_tB23FE6432CF71DA57AE5DB8901AE59E8086D616C* L_3 = ___handleResult2;
		LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C L_4;
		memset((&L_4), 0, sizeof(L_4));
		LoadRequest_1__ctor_m36D87C78271A8D38B7E413FD31405710767914FC((&L_4), L_0, 0, (-1), (-1), L_2, L_3, (Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879*)NULL, /*hidden argument*/LoadRequest_1__ctor_m36D87C78271A8D38B7E413FD31405710767914FC_RuntimeMethod_var);
		V_0 = L_4;
		Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE* L_5 = __this->____getHeightmap_8;
		TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_mEA559CE7AFB5E0D2E266E517315A0C976D0F3FCC(__this, (&V_0), L_5, (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*)NULL, TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_mEA559CE7AFB5E0D2E266E517315A0C976D0F3FCC_RuntimeMethod_var);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::ReloadAlphamaps(VisualDesignCafe.Rendering.Nature.ITerrainData,VisualDesignCafe.Rendering.Nature.AlphamapRect,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1/ResultHandler<System.Single[,,]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_ReloadAlphamaps_mDB7D5E247EA991BDBF619748BDB76CB5B8BF7EFC (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, RuntimeObject* ___terrain0, AlphamapRect_tD180EBB602558AC1028C107746723E2312831B9B ___rect1, ResultHandler_tE47E75919F76941CB5556B16967FF3AF9E2E7B55* ___handleResult2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadRequest_1__ctor_m2E31240D241EAD32D7A7BA181A8B205559F4D5DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_m55F4D4F9DB5415A785DE9CB164520983D792FCB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadRequest_1_tEA80F21DA524A8160E44F72E6763EE8A4501923D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___terrain0;
		AlphamapRect_tD180EBB602558AC1028C107746723E2312831B9B L_1 = ___rect1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = AlphamapRect_op_Explicit_m78E35769E59F837EEF6596C729F357C2AECE2D8B(L_1, NULL);
		ResultHandler_tE47E75919F76941CB5556B16967FF3AF9E2E7B55* L_3 = ___handleResult2;
		LoadRequest_1_tEA80F21DA524A8160E44F72E6763EE8A4501923D L_4;
		memset((&L_4), 0, sizeof(L_4));
		LoadRequest_1__ctor_m2E31240D241EAD32D7A7BA181A8B205559F4D5DE((&L_4), L_0, 0, (-1), (-1), L_2, L_3, (Action_1_t0241D6630458FB8256BF63E9B9F522C80568350B*)NULL, /*hidden argument*/LoadRequest_1__ctor_m2E31240D241EAD32D7A7BA181A8B205559F4D5DE_RuntimeMethod_var);
		V_0 = L_4;
		Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69* L_5 = __this->____getAlphamaps_9;
		TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_m55F4D4F9DB5415A785DE9CB164520983D792FCB9(__this, (&V_0), L_5, (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*)NULL, TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_m55F4D4F9DB5415A785DE9CB164520983D792FCB9_RuntimeMethod_var);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::RequestDetailmap(VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Int32[,]>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_RequestDetailmap_m30909AC0D40BFEE129364B5EF480AFED36037036 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE7C5B40535077C06CF0A97C2B0E9C383AB2E677C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_mC9AE755750C0E4B17FABB311EAB450E898E356A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* V_2 = NULL;
	bool V_3 = false;
	Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87* G_B3_0 = NULL;
	Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87* G_B2_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_0 = __this->___LoadedDetailMapData_1;
		LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F* L_1 = ___request0;
		int32_t L_2 = L_1->___CellHash_3;
		LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F* L_3 = ___request0;
		int32_t L_4 = L_3->___Layer_2;
		LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F* L_5 = ___request0;
		uint32_t L_6 = L_5->___Version_1;
		bool L_7;
		L_7 = TerrainDataStreamer_IsLoaded_m45A9DB4A5864B4EE167CA44C99DC987740B084DD(__this, L_0, L_2, L_4, L_6, NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F* L_9 = ___request0;
		Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87* L_10 = L_9->___Callback_6;
		Action_1_t906D0A8029A74AD91D9511CAA07C03D7FB3E5A87* L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_002f;
		}
	}
	{
		goto IL_0036;
	}

IL_002f:
	{
		NullCheck(G_B3_0);
		Action_1_Invoke_mA2000ACAFBB2BD5DE563589613C892DC934E5E6E_inline(G_B3_0, (Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*)NULL, NULL);
	}

IL_0036:
	{
		goto IL_00a2;
	}

IL_0038:
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_12;
		L_12 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = Thread_get_IsBackground_m08C25D0147A8EEDFDA3927F293664509520DA269(L_12, NULL);
		if (L_13)
		{
			goto IL_0051;
		}
	}
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_14;
		L_14 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = Thread_get_IsThreadPoolThread_m73019FFF8E168CCCA6094E5C88F594CB015684E9(L_14, NULL);
		G_B8_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B8_0 = 1;
	}

IL_0052:
	{
		V_1 = (bool)G_B8_0;
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* L_17 = __this->____detailmapRequests_4;
		V_2 = L_17;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_18 = V_3;
					if (!L_18)
					{
						goto IL_0087;
					}
				}
				{
					List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* L_19 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_19, NULL);
				}

IL_0087:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* L_20 = V_2;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_20, (&V_3), NULL);
			List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* L_21 = __this->____detailmapRequests_4;
			LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F* L_22 = ___request0;
			LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F L_23 = (*(LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F*)L_22);
			NullCheck(L_21);
			List_1_Add_mE7C5B40535077C06CF0A97C2B0E9C383AB2E677C_inline(L_21, L_23, List_1_Add_mE7C5B40535077C06CF0A97C2B0E9C383AB2E677C_RuntimeMethod_var);
			goto IL_0088;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		goto IL_00a1;
	}

IL_008b:
	{
		LoadRequest_1_tD9AF501DE0909A45B0BACF02F9974A05196A909F* L_24 = ___request0;
		Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF* L_25 = __this->____getDetailLayer_7;
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_26 = __this->___LoadedDetailMapData_1;
		TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_mC9AE755750C0E4B17FABB311EAB450E898E356A1(__this, L_24, L_25, L_26, TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_mC9AE755750C0E4B17FABB311EAB450E898E356A1_RuntimeMethod_var);
	}

IL_00a1:
	{
	}

IL_00a2:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::RequestHeightMap(VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadRequest`1<System.Single[,]>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_RequestHeightMap_m85FFE3693C05DC1D85F921558BECE3CE3ADAFA2B (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m64ED9FFF4F6918F8164F90295D4A13845EAAB2C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_mEA559CE7AFB5E0D2E266E517315A0C976D0F3FCC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	List_1_tF6C9D180FB862469CC481462DE748286F6195098* V_2 = NULL;
	bool V_3 = false;
	Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879* G_B3_0 = NULL;
	Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879* G_B2_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_0 = __this->___LoadedHeightmapData_0;
		LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C* L_1 = ___request0;
		int32_t L_2 = L_1->___CellHash_3;
		LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C* L_3 = ___request0;
		int32_t L_4 = L_3->___Layer_2;
		LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C* L_5 = ___request0;
		uint32_t L_6 = L_5->___Version_1;
		bool L_7;
		L_7 = TerrainDataStreamer_IsLoaded_m45A9DB4A5864B4EE167CA44C99DC987740B084DD(__this, L_0, L_2, L_4, L_6, NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C* L_9 = ___request0;
		Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879* L_10 = L_9->___Callback_6;
		Action_1_t101C4F6C75F176379D357A4E24BF0F2F7A383879* L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_002f;
		}
	}
	{
		goto IL_0036;
	}

IL_002f:
	{
		NullCheck(G_B3_0);
		Action_1_Invoke_m50907D5E1F6649D5931A08570E3D22BFDB52FB61_inline(G_B3_0, (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*)NULL, NULL);
	}

IL_0036:
	{
		goto IL_00a2;
	}

IL_0038:
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_12;
		L_12 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = Thread_get_IsBackground_m08C25D0147A8EEDFDA3927F293664509520DA269(L_12, NULL);
		if (L_13)
		{
			goto IL_0051;
		}
	}
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_14;
		L_14 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = Thread_get_IsThreadPoolThread_m73019FFF8E168CCCA6094E5C88F594CB015684E9(L_14, NULL);
		G_B8_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B8_0 = 1;
	}

IL_0052:
	{
		V_1 = (bool)G_B8_0;
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		List_1_tF6C9D180FB862469CC481462DE748286F6195098* L_17 = __this->____heightmapRequests_3;
		V_2 = L_17;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					bool L_18 = V_3;
					if (!L_18)
					{
						goto IL_0087;
					}
				}
				{
					List_1_tF6C9D180FB862469CC481462DE748286F6195098* L_19 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_19, NULL);
				}

IL_0087:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tF6C9D180FB862469CC481462DE748286F6195098* L_20 = V_2;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_20, (&V_3), NULL);
			List_1_tF6C9D180FB862469CC481462DE748286F6195098* L_21 = __this->____heightmapRequests_3;
			LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C* L_22 = ___request0;
			LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C L_23 = (*(LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C*)L_22);
			NullCheck(L_21);
			List_1_Add_m64ED9FFF4F6918F8164F90295D4A13845EAAB2C1_inline(L_21, L_23, List_1_Add_m64ED9FFF4F6918F8164F90295D4A13845EAAB2C1_RuntimeMethod_var);
			goto IL_0088;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		goto IL_00a1;
	}

IL_008b:
	{
		LoadRequest_1_t2D24D2ED3B1C8E2204628DC56767B6E9C7C3B16C* L_24 = ___request0;
		Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE* L_25 = __this->____getHeightmap_8;
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_26 = __this->___LoadedHeightmapData_0;
		TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_mEA559CE7AFB5E0D2E266E517315A0C976D0F3FCC(__this, L_24, L_25, L_26, TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_mEA559CE7AFB5E0D2E266E517315A0C976D0F3FCC_RuntimeMethod_var);
	}

IL_00a1:
	{
	}

IL_00a2:
	{
		return;
	}
}
// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::IsLoaded(System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>,System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainDataStreamer_IsLoaded_m45A9DB4A5864B4EE167CA44C99DC987740B084DD (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___hashset0, int32_t ___cellHash1, int32_t ___layer2, uint32_t ___version3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD8D35D02626DFF43BB92F9E022547747BB41364F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB V_0;
	memset((&V_0), 0, sizeof(V_0));
	LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___cellHash1;
		int32_t L_1 = ___layer2;
		il2cpp_codegen_initobj((&V_2), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = V_2;
		LoadedData__ctor_mC7AA151AD79E41EF7F7AC4EDC98971817A13E5BA((&V_0), L_0, L_1, L_2, 0, NULL);
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_3 = ___hashset0;
		int32_t L_4;
		L_4 = LoadedData_GetHashCode_m5D55C6746D1F86DDAAB89D5BD56587E398835325((&V_0), NULL);
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mD8D35D02626DFF43BB92F9E022547747BB41364F(L_3, L_4, (&V_1), Dictionary_2_TryGetValue_mD8D35D02626DFF43BB92F9E022547747BB41364F_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB L_6 = V_1;
		uint32_t L_7 = L_6.___Version_3;
		uint32_t L_8 = ___version3;
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_3 = (bool)G_B3_0;
		goto IL_003b;
	}

IL_003b:
	{
		bool L_9 = V_3;
		return L_9;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::RegisterLoadedCell(System.Collections.Generic.Dictionary`2<System.Int32,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData>,VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_RegisterLoadedCell_m8C77AD252C8EB9B8F034D5C1956F9988CCC7861D (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* ___hashset0, LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFD47F677AE07F0A79B2FAD238B391813CF1E28B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD8D35D02626DFF43BB92F9E022547747BB41364F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m3E4E724B8C57CEBA089C8B787F7C769BF95EC77A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_0 = ___hashset0;
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* L_1 = ___data1;
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB L_2 = (*(LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB*)L_1);
		V_2 = L_2;
		int32_t L_3;
		L_3 = LoadedData_GetHashCode_m5D55C6746D1F86DDAAB89D5BD56587E398835325((&V_2), NULL);
		NullCheck(L_0);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mD8D35D02626DFF43BB92F9E022547747BB41364F(L_0, L_3, (&V_0), Dictionary_2_TryGetValue_mD8D35D02626DFF43BB92F9E022547747BB41364F_RuntimeMethod_var);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* L_6 = ___data1;
		uint32_t L_7 = L_6->___Version_3;
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB L_8 = V_0;
		uint32_t L_9 = L_8.___Version_3;
		V_3 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)L_9)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_11 = ___hashset0;
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* L_12 = ___data1;
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB L_13 = (*(LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB*)L_12);
		V_2 = L_13;
		int32_t L_14;
		L_14 = LoadedData_GetHashCode_m5D55C6746D1F86DDAAB89D5BD56587E398835325((&V_2), NULL);
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* L_15 = ___data1;
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB L_16 = (*(LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB*)L_15);
		NullCheck(L_11);
		Dictionary_2_set_Item_m3E4E724B8C57CEBA089C8B787F7C769BF95EC77A(L_11, L_14, L_16, Dictionary_2_set_Item_m3E4E724B8C57CEBA089C8B787F7C769BF95EC77A_RuntimeMethod_var);
	}

IL_0055:
	{
		goto IL_007b;
	}

IL_0058:
	{
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_17 = ___hashset0;
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* L_18 = ___data1;
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB L_19 = (*(LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB*)L_18);
		V_2 = L_19;
		int32_t L_20;
		L_20 = LoadedData_GetHashCode_m5D55C6746D1F86DDAAB89D5BD56587E398835325((&V_2), NULL);
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* L_21 = ___data1;
		LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB L_22 = (*(LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB*)L_21);
		NullCheck(L_17);
		Dictionary_2_Add_mFD47F677AE07F0A79B2FAD238B391813CF1E28B9(L_17, L_20, L_22, Dictionary_2_Add_mFD47F677AE07F0A79B2FAD238B391813CF1E28B9_RuntimeMethod_var);
	}

IL_007b:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_Update_mEC5D97324FD90F31234479CCB2BCE6421F0F5FDB (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_m9B79C3F455E1B302695750EC1B4272AA2CC64BBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mC66E5A8C85F933CA94210FD8FE15E2854BA1C76E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_mE1471C963AAEA26B412647BD578361E6AF2A3773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_m8EC7EBDFBD3ABACD8D2561001F1565813096D916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070F217C7B060DCDBEF425BCD632B06C765CA317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22F5E43E91785E8512482CFDFEDB91910D005E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE92E090410AD5D93D0E420AB1DD45224759D90F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE85CC8D828CCD417269DF24E077B527A7B625322);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteral070F217C7B060DCDBEF425BCD632B06C765CA317, NULL);
		List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* L_0 = __this->____supportedLayerRequests_6;
		Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A* L_1 = __this->____getSupportedLayers_10;
		TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mC66E5A8C85F933CA94210FD8FE15E2854BA1C76E(__this, L_0, L_1, (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*)NULL, (bool)1, TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mC66E5A8C85F933CA94210FD8FE15E2854BA1C76E_RuntimeMethod_var);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteral22F5E43E91785E8512482CFDFEDB91910D005E84, NULL);
		List_1_tF6C9D180FB862469CC481462DE748286F6195098* L_2 = __this->____heightmapRequests_3;
		Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE* L_3 = __this->____getHeightmap_8;
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_4 = __this->___LoadedHeightmapData_0;
		TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_m8EC7EBDFBD3ABACD8D2561001F1565813096D916(__this, L_2, L_3, L_4, (bool)1, TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_m8EC7EBDFBD3ABACD8D2561001F1565813096D916_RuntimeMethod_var);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteralE85CC8D828CCD417269DF24E077B527A7B625322, NULL);
		List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* L_5 = __this->____detailmapRequests_4;
		Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF* L_6 = __this->____getDetailLayer_7;
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_7 = __this->___LoadedDetailMapData_1;
		TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_m9B79C3F455E1B302695750EC1B4272AA2CC64BBF(__this, L_5, L_6, L_7, (bool)1, TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_m9B79C3F455E1B302695750EC1B4272AA2CC64BBF_RuntimeMethod_var);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteralBE92E090410AD5D93D0E420AB1DD45224759D90F, NULL);
		List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3* L_8 = __this->____alphamapRequests_5;
		Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69* L_9 = __this->____getAlphamaps_9;
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_10 = __this->___LoadedAlphaMapData_2;
		TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_mE1471C963AAEA26B412647BD578361E6AF2A3773(__this, L_8, L_9, L_10, (bool)1, TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_mE1471C963AAEA26B412647BD578361E6AF2A3773_RuntimeMethod_var);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::UpdateDataOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainDataStreamer_UpdateDataOnly_m2DE1F033E5E32CD5ED05E11D6692E38DC3AAC806 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_m9B79C3F455E1B302695750EC1B4272AA2CC64BBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mC66E5A8C85F933CA94210FD8FE15E2854BA1C76E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_mE1471C963AAEA26B412647BD578361E6AF2A3773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_m8EC7EBDFBD3ABACD8D2561001F1565813096D916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070F217C7B060DCDBEF425BCD632B06C765CA317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22F5E43E91785E8512482CFDFEDB91910D005E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE92E090410AD5D93D0E420AB1DD45224759D90F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE85CC8D828CCD417269DF24E077B527A7B625322);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteral070F217C7B060DCDBEF425BCD632B06C765CA317, NULL);
		List_1_tE59926334C1BE32FCDE625FEBA5D1301EE5D1020* L_0 = __this->____supportedLayerRequests_6;
		Func_4_t0955176120B7DE993EE9762E12BE0A071660FF7A* L_1 = __this->____getSupportedLayers_10;
		TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mC66E5A8C85F933CA94210FD8FE15E2854BA1C76E(__this, L_0, L_1, (Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96*)NULL, (bool)0, TerrainDataStreamer_Request_TisInt32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_mC66E5A8C85F933CA94210FD8FE15E2854BA1C76E_RuntimeMethod_var);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteral22F5E43E91785E8512482CFDFEDB91910D005E84, NULL);
		List_1_tF6C9D180FB862469CC481462DE748286F6195098* L_2 = __this->____heightmapRequests_3;
		Func_4_tD59657FC5D80CB0C5761BE557F40623ECC5C49AE* L_3 = __this->____getHeightmap_8;
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_4 = __this->___LoadedHeightmapData_0;
		TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_m8EC7EBDFBD3ABACD8D2561001F1565813096D916(__this, L_2, L_3, L_4, (bool)0, TerrainDataStreamer_Request_TisSingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4_m8EC7EBDFBD3ABACD8D2561001F1565813096D916_RuntimeMethod_var);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteralE85CC8D828CCD417269DF24E077B527A7B625322, NULL);
		List_1_t02664D9D608F275C3D2F8046EEA643D98EAC94F9* L_5 = __this->____detailmapRequests_4;
		Func_4_t7EA459D3FF01A22BE7524D9434CC9D4FA83D4AEF* L_6 = __this->____getDetailLayer_7;
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_7 = __this->___LoadedDetailMapData_1;
		TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_m9B79C3F455E1B302695750EC1B4272AA2CC64BBF(__this, L_5, L_6, L_7, (bool)0, TerrainDataStreamer_Request_TisInt32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F_m9B79C3F455E1B302695750EC1B4272AA2CC64BBF_RuntimeMethod_var);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteralBE92E090410AD5D93D0E420AB1DD45224759D90F, NULL);
		List_1_t4C59867626EA864DABCF4D3D5E64FCA224E100A3* L_8 = __this->____alphamapRequests_5;
		Func_4_t022D583330697CB82EC6899196E07C1F3CFB4B69* L_9 = __this->____getAlphamaps_9;
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_10 = __this->___LoadedAlphaMapData_2;
		TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_mE1471C963AAEA26B412647BD578361E6AF2A3773(__this, L_8, L_9, L_10, (bool)0, TerrainDataStreamer_Request_TisSingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488_mE1471C963AAEA26B412647BD578361E6AF2A3773_RuntimeMethod_var);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		return;
	}
}
// System.Int32[,] VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::GetDetailLayer(VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* TerrainDataStreamer_GetDetailLayer_m18E40AEB557E7805B2BA06084099A86DDE0D685A (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, RuntimeObject* ___terrainData0, int32_t ___layer1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITerrainData_t123B2F610DF9D37C9DDC8EF1782A5C448270A643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___terrainData0;
		int32_t L_1 = ___layer1;
		float L_2;
		L_2 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect2), NULL);
		float L_3;
		L_3 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect2), NULL);
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect2), NULL);
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect2), NULL);
		NullCheck(L_0);
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_6;
		L_6 = InterfaceFuncInvoker5< Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F*, int32_t, int32_t, int32_t, int32_t, int32_t >::Invoke(12 /* System.Int32[,] VisualDesignCafe.Rendering.Nature.ITerrainData::GetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32) */, ITerrainData_t123B2F610DF9D37C9DDC8EF1782A5C448270A643_il2cpp_TypeInfo_var, L_0, L_1, il2cpp_codegen_cast_double_to_int<int32_t>(L_2), il2cpp_codegen_cast_double_to_int<int32_t>(L_3), il2cpp_codegen_cast_double_to_int<int32_t>(L_4), il2cpp_codegen_cast_double_to_int<int32_t>(L_5));
		V_0 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		Int32U5BU2CU5D_t46F2694E7DAD7B2B05C940EC5B9DE04E40D0516F* L_7 = V_0;
		return L_7;
	}
}
// System.Single[,] VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::GetHeightmap(VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* TerrainDataStreamer_GetHeightmap_m354D037072381F95F681C9CA3850FB307C27C2A7 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, RuntimeObject* ___terrainData0, int32_t ___layer1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITerrainData_t123B2F610DF9D37C9DDC8EF1782A5C448270A643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___terrainData0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect2), NULL);
		float L_2;
		L_2 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect2), NULL);
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect2), NULL);
		float L_4;
		L_4 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect2), NULL);
		NullCheck(L_0);
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_5;
		L_5 = InterfaceFuncInvoker4< SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4*, int32_t, int32_t, int32_t, int32_t >::Invoke(11 /* System.Single[,] VisualDesignCafe.Rendering.Nature.ITerrainData::GetHeights(System.Int32,System.Int32,System.Int32,System.Int32) */, ITerrainData_t123B2F610DF9D37C9DDC8EF1782A5C448270A643_il2cpp_TypeInfo_var, L_0, il2cpp_codegen_cast_double_to_int<int32_t>(L_1), il2cpp_codegen_cast_double_to_int<int32_t>(L_2), il2cpp_codegen_cast_double_to_int<int32_t>(L_3), il2cpp_codegen_cast_double_to_int<int32_t>(L_4));
		V_0 = L_5;
		goto IL_002a;
	}

IL_002a:
	{
		SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4* L_6 = V_0;
		return L_6;
	}
}
// System.Single[,,] VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::GetAlphamaps(VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* TerrainDataStreamer_GetAlphamaps_m3092FF9343DAB61724A1927996044154ED30F0EC (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, RuntimeObject* ___terrainData0, int32_t ___layer1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITerrainData_t123B2F610DF9D37C9DDC8EF1782A5C448270A643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___terrainData0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect2), NULL);
		float L_2;
		L_2 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect2), NULL);
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect2), NULL);
		float L_4;
		L_4 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect2), NULL);
		NullCheck(L_0);
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_5;
		L_5 = InterfaceFuncInvoker4< SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488*, int32_t, int32_t, int32_t, int32_t >::Invoke(14 /* System.Single[,,] VisualDesignCafe.Rendering.Nature.ITerrainData::GetAlphamaps(System.Int32,System.Int32,System.Int32,System.Int32) */, ITerrainData_t123B2F610DF9D37C9DDC8EF1782A5C448270A643_il2cpp_TypeInfo_var, L_0, il2cpp_codegen_cast_double_to_int<int32_t>(L_1), il2cpp_codegen_cast_double_to_int<int32_t>(L_2), il2cpp_codegen_cast_double_to_int<int32_t>(L_3), il2cpp_codegen_cast_double_to_int<int32_t>(L_4));
		V_0 = L_5;
		goto IL_002a;
	}

IL_002a:
	{
		SingleU5BU2CU2CU5D_tE902E5192C7283A470AAADB477117789A9682488* L_6 = V_0;
		return L_6;
	}
}
// System.Int32[] VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::GetSupportedLayers(VisualDesignCafe.Rendering.Nature.ITerrainData,System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TerrainDataStreamer_GetSupportedLayers_m20CDC9C9325AEA7410A0E51BD975FC8C7EB1C7C2 (TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* __this, RuntimeObject* ___terrainData0, int32_t ___layer1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITerrainData_t123B2F610DF9D37C9DDC8EF1782A5C448270A643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___terrainData0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect2), NULL);
		float L_2;
		L_2 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect2), NULL);
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect2), NULL);
		float L_4;
		L_4 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect2), NULL);
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = InterfaceFuncInvoker4< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t, int32_t >::Invoke(13 /* System.Int32[] VisualDesignCafe.Rendering.Nature.ITerrainData::GetSupportedLayers(System.Int32,System.Int32,System.Int32,System.Int32) */, ITerrainData_t123B2F610DF9D37C9DDC8EF1782A5C448270A643_il2cpp_TypeInfo_var, L_0, il2cpp_codegen_cast_double_to_int<int32_t>(L_1), il2cpp_codegen_cast_double_to_int<int32_t>(L_2), il2cpp_codegen_cast_double_to_int<int32_t>(L_3), il2cpp_codegen_cast_double_to_int<int32_t>(L_4));
		V_0 = L_5;
		goto IL_002a;
	}

IL_002a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		return L_6;
	}
}
// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer::CombineHashCodes(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainDataStreamer_CombineHashCodes_m34C2B3D3E505BBBA03CB0EE93F21D0FCC3B7C1C4 (int32_t ___h10, int32_t ___h21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___h10;
		int32_t L_1 = ___h10;
		int32_t L_2 = ___h21;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_0<<5)), L_1))^L_2));
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_3 = V_0;
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
// System.Void VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData::.ctor(System.Int32,System.Int32,UnityEngine.Rect,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadedData__ctor_mC7AA151AD79E41EF7F7AC4EDC98971817A13E5BA (LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* __this, int32_t ___cellHash0, int32_t ___layer1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect2, uint32_t ___version3, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___version3;
		__this->___Version_3 = L_0;
		int32_t L_1 = ___cellHash0;
		__this->___CellHash_0 = L_1;
		int32_t L_2 = ___layer1;
		__this->___Layer_1 = L_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ___rect2;
		__this->___Rect_2 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void LoadedData__ctor_mC7AA151AD79E41EF7F7AC4EDC98971817A13E5BA_AdjustorThunk (RuntimeObject* __this, int32_t ___cellHash0, int32_t ___layer1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect2, uint32_t ___version3, const RuntimeMethod* method)
{
	LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB*>(__this + _offset);
	LoadedData__ctor_mC7AA151AD79E41EF7F7AC4EDC98971817A13E5BA(_thisAdjusted, ___cellHash0, ___layer1, ___rect2, ___version3, method);
}
// System.Int32 VisualDesignCafe.Rendering.Nature.TerrainDataStreamer/LoadedData::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadedData_GetHashCode_m5D55C6746D1F86DDAAB89D5BD56587E398835325 (LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___CellHash_0;
		int32_t L_1 = __this->___Layer_1;
		int32_t L_2;
		L_2 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_1, 0, NULL);
		int32_t L_3;
		L_3 = TerrainDataStreamer_CombineHashCodes_m34C2B3D3E505BBBA03CB0EE93F21D0FCC3B7C1C4(L_0, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t LoadedData_GetHashCode_m5D55C6746D1F86DDAAB89D5BD56587E398835325_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LoadedData_tF6A79ABE979E17B3402480454328B36E1D57CCAB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = LoadedData_GetHashCode_m5D55C6746D1F86DDAAB89D5BD56587E398835325(_thisAdjusted, method);
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
// System.Void VisualDesignCafe.Rendering.Nature.TerrainModificationHistory::.ctor(VisualDesignCafe.Rendering.Nature.TerrainData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainModificationHistory__ctor_mC2E5A3EE13C6715348BAA19E37C47E3F149D4711 (TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrain0, bool ___multiThreaded1, const RuntimeMethod* method) 
{
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* G_B2_0 = NULL;
	TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C* G_B2_1 = NULL;
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* G_B1_0 = NULL;
	TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_0 = ___terrain0;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_1 = L_0;
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
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74A11707EEAFDE1957C12B656A0118A1E3D5D40F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainModificationHistory__ctor_mC2E5A3EE13C6715348BAA19E37C47E3F149D4711_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->____terrain_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____terrain_0), (void*)G_B2_0);
		bool L_3 = ___multiThreaded1;
		__this->____multiThreaded_1 = L_3;
		return;
	}
}
// VisualDesignCafe.Rendering.Nature.HeightmapRect VisualDesignCafe.Rendering.Nature.TerrainModificationHistory::GetModifiedHeightmapRect(VisualDesignCafe.Rendering.Nature.HeightmapRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E TerrainModificationHistory_GetModifiedHeightmapRect_m7D12818596B073E2FAC805C37391D0571D38877F (TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C* __this, HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E ___bounds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedArray_1_GetUnsafePtr_m8ADD8AE336449FEBCD806BDA6537E12C23CEAF88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* V_6 = NULL;
	UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	float* V_16 = NULL;
	float* V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t G_B3_0 = 0;
	HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_0 = __this->____terrain_0;
		NullCheck(L_0);
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_1;
		L_1 = TerrainData_get_Heights_mCEECDB7F8DADED7A77EBD77095DDA1486FBB8516_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_2 = __this->____terrain_0;
		NullCheck(L_2);
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_3;
		L_3 = TerrainData_get_PreviousHeights_m6488BD94E33E60D7F78986A43FF44FD0D761D4AF_inline(L_2, NULL);
		G_B3_0 = ((((RuntimeObject*)(UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		V_13 = (bool)G_B3_0;
		bool L_4 = V_13;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E L_5;
		memset((&L_5), 0, sizeof(L_5));
		HeightmapRect__ctor_m17B883610CA7AC97C1E70DBB041EF9B00E190F5B((&L_5), (-1), (-1), 0, 0, /*hidden argument*/NULL);
		V_14 = L_5;
		goto IL_0175;
	}

IL_0035:
	{
		V_0 = (bool)0;
		V_1 = ((int32_t)2147483647LL);
		V_2 = ((int32_t)2147483647LL);
		V_3 = ((int32_t)-2147483648LL);
		V_4 = ((int32_t)-2147483648LL);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_6 = __this->____terrain_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = TerrainData_get_HeightmapResolution_mBADC2A7191E6438218F77EDDDC7B123991DED3E6_inline(L_6, NULL);
		V_5 = L_7;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_8 = __this->____terrain_0;
		NullCheck(L_8);
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_9;
		L_9 = TerrainData_get_Heights_mCEECDB7F8DADED7A77EBD77095DDA1486FBB8516_inline(L_8, NULL);
		V_6 = L_9;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_10 = __this->____terrain_0;
		NullCheck(L_10);
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_11;
		L_11 = TerrainData_get_PreviousHeights_m6488BD94E33E60D7F78986A43FF44FD0D761D4AF_inline(L_10, NULL);
		V_7 = L_11;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_12 = __this->____terrain_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = TerrainData_get_HeightmapResolution_mBADC2A7191E6438218F77EDDDC7B123991DED3E6_inline(L_12, NULL);
		V_8 = L_13;
		HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E L_14 = ___bounds0;
		int32_t L_15 = L_14.___X_0;
		V_9 = L_15;
		HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E L_16 = ___bounds0;
		int32_t L_17 = L_16.___X_0;
		HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E L_18 = ___bounds0;
		int32_t L_19 = L_18.___Width_2;
		V_10 = ((int32_t)il2cpp_codegen_add(L_17, L_19));
		HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E L_20 = ___bounds0;
		int32_t L_21 = L_20.___Y_1;
		V_11 = L_21;
		HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E L_22 = ___bounds0;
		int32_t L_23 = L_22.___Y_1;
		HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E L_24 = ___bounds0;
		int32_t L_25 = L_24.___Height_3;
		V_12 = ((int32_t)il2cpp_codegen_add(L_23, L_25));
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_26 = V_6;
		NullCheck(L_26);
		void* L_27;
		L_27 = UnmanagedArray_1_GetUnsafePtr_m8ADD8AE336449FEBCD806BDA6537E12C23CEAF88(L_26, UnmanagedArray_1_GetUnsafePtr_m8ADD8AE336449FEBCD806BDA6537E12C23CEAF88_RuntimeMethod_var);
		V_16 = (float*)L_27;
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_28 = V_7;
		NullCheck(L_28);
		void* L_29;
		L_29 = UnmanagedArray_1_GetUnsafePtr_m8ADD8AE336449FEBCD806BDA6537E12C23CEAF88(L_28, UnmanagedArray_1_GetUnsafePtr_m8ADD8AE336449FEBCD806BDA6537E12C23CEAF88_RuntimeMethod_var);
		V_17 = (float*)L_29;
		int32_t L_30 = V_9;
		V_18 = L_30;
		goto IL_013c;
	}

IL_00cb:
	{
		int32_t L_31 = V_11;
		V_19 = L_31;
		goto IL_012a;
	}

IL_00d1:
	{
		int32_t L_32 = V_18;
		int32_t L_33 = V_8;
		int32_t L_34 = V_19;
		V_15 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_32, L_33)), L_34));
		float* L_35 = V_16;
		int32_t L_36 = V_15;
		float L_37 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_36), 4)))));
		float* L_38 = V_17;
		int32_t L_39 = V_15;
		float L_40 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 4)))));
		V_20 = (bool)((((int32_t)((((float)L_37) == ((float)L_40))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_20;
		if (!L_41)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_42 = V_1;
		int32_t L_43 = V_18;
		int32_t L_44;
		L_44 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_42, L_43, NULL);
		V_1 = L_44;
		int32_t L_45 = V_2;
		int32_t L_46 = V_19;
		int32_t L_47;
		L_47 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_45, L_46, NULL);
		V_2 = L_47;
		int32_t L_48 = V_3;
		int32_t L_49 = V_18;
		int32_t L_50;
		L_50 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_48, L_49, NULL);
		V_3 = L_50;
		int32_t L_51 = V_4;
		int32_t L_52 = V_19;
		int32_t L_53;
		L_53 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_51, L_52, NULL);
		V_4 = L_53;
		V_0 = (bool)1;
	}

IL_0123:
	{
		int32_t L_54 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_012a:
	{
		int32_t L_55 = V_19;
		int32_t L_56 = V_12;
		V_21 = (bool)((((int32_t)L_55) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_21;
		if (L_57)
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_58 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_013c:
	{
		int32_t L_59 = V_18;
		int32_t L_60 = V_10;
		V_22 = (bool)((((int32_t)L_59) < ((int32_t)L_60))? 1 : 0);
		bool L_61 = V_22;
		if (L_61)
		{
			goto IL_00cb;
		}
	}
	{
		bool L_62 = V_0;
		if (L_62)
		{
			goto IL_0157;
		}
	}
	{
		HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E L_63;
		memset((&L_63), 0, sizeof(L_63));
		HeightmapRect__ctor_m17B883610CA7AC97C1E70DBB041EF9B00E190F5B((&L_63), (-1), (-1), 0, 0, /*hidden argument*/NULL);
		G_B16_0 = L_63;
		goto IL_0171;
	}

IL_0157:
	{
		int32_t L_64 = V_1;
		int32_t L_65 = V_2;
		int32_t L_66 = V_3;
		int32_t L_67 = V_1;
		int32_t L_68;
		L_68 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(((int32_t)il2cpp_codegen_subtract(L_66, L_67)), 1, NULL);
		int32_t L_69 = V_4;
		int32_t L_70 = V_2;
		int32_t L_71;
		L_71 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(((int32_t)il2cpp_codegen_subtract(L_69, L_70)), 1, NULL);
		HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E L_72;
		memset((&L_72), 0, sizeof(L_72));
		HeightmapRect__ctor_m17B883610CA7AC97C1E70DBB041EF9B00E190F5B((&L_72), L_64, L_65, L_68, L_71, /*hidden argument*/NULL);
		G_B16_0 = L_72;
	}

IL_0171:
	{
		V_14 = G_B16_0;
		goto IL_0175;
	}

IL_0175:
	{
		HeightmapRect_t3392F78224E0F22ED14B620C4658D43CB103832E L_73 = V_14;
		return L_73;
	}
}
// VisualDesignCafe.Rendering.Nature.DetailmapRect VisualDesignCafe.Rendering.Nature.TerrainModificationHistory::GetModifiedDetailmapRect(VisualDesignCafe.Rendering.Nature.DetailmapRect,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 TerrainModificationHistory_GetModifiedDetailmapRect_mE354F5BED52CB9EEBC7C8D4D5C50B4D249F26637 (TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C* __this, DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 ___bounds0, bool ___exact1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD37CEBBC2FF8319BBACA69FB4FDCF77DCBABE5EA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 V_11;
	memset((&V_11), 0, sizeof(V_11));
	DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 V_12;
	memset((&V_12), 0, sizeof(V_12));
	DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	{
		V_0 = ((int32_t)2147483647LL);
		V_1 = ((int32_t)2147483647LL);
		V_2 = ((int32_t)-2147483648LL);
		V_3 = ((int32_t)-2147483648LL);
		V_4 = (bool)0;
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteralD37CEBBC2FF8319BBACA69FB4FDCF77DCBABE5EA, NULL);
		V_5 = 0;
		goto IL_00b1;
	}

IL_0030:
	{
		int32_t L_0 = V_5;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_1 = ___bounds0;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_2;
		L_2 = TerrainModificationHistory_GetModifiedDetailmapRect_m77D5EB401FD51076ACFCEEC5817AF8E79C64E704(__this, L_0, L_1, NULL);
		V_6 = L_2;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_3 = V_6;
		int32_t L_4 = L_3.___Width_2;
		V_7 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_7;
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_00ab;
	}

IL_004e:
	{
		V_8 = __this;
		V_9 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009d:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_9;
					if (!L_6)
					{
						goto IL_00a9;
					}
				}
				{
					TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C* L_7 = V_8;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_7, NULL);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C* L_8 = V_8;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_8, (&V_9), NULL);
			DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_9 = V_6;
			int32_t L_10 = L_9.___X_0;
			int32_t L_11 = V_0;
			int32_t L_12;
			L_12 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_10, L_11, NULL);
			V_0 = L_12;
			DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_13 = V_6;
			int32_t L_14 = L_13.___Y_1;
			int32_t L_15 = V_1;
			int32_t L_16;
			L_16 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(L_14, L_15, NULL);
			V_1 = L_16;
			int32_t L_17;
			L_17 = DetailmapRect_get_XMax_m49A9BF0FC0A5DD371871FFC3BA4FD820C87058C9((&V_6), NULL);
			int32_t L_18 = V_2;
			int32_t L_19;
			L_19 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_17, L_18, NULL);
			V_2 = L_19;
			int32_t L_20;
			L_20 = DetailmapRect_get_YMax_mD9657481CFA4FCE5CA8B3AC404E54CFB5C7C9507((&V_6), NULL);
			int32_t L_21 = V_3;
			int32_t L_22;
			L_22 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_20, L_21, NULL);
			V_3 = L_22;
			V_4 = (bool)1;
			goto IL_00aa;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
	}

IL_00ab:
	{
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00b1:
	{
		int32_t L_24 = V_5;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_25 = __this->____terrain_0;
		NullCheck(L_25);
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_26;
		L_26 = TerrainData_get_Detailmaps_mC8C36C1DBBD4DB93007E602B3BB9D8423109858A_inline(L_25, NULL);
		NullCheck(L_26);
		V_10 = (bool)((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))? 1 : 0);
		bool L_27 = V_10;
		if (L_27)
		{
			goto IL_0030;
		}
	}
	{
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		bool L_28 = V_4;
		if (L_28)
		{
			goto IL_00e2;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340));
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_29 = V_11;
		G_B14_0 = L_29;
		goto IL_00fb;
	}

IL_00e2:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_2;
		int32_t L_33 = V_0;
		int32_t L_34;
		L_34 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(((int32_t)il2cpp_codegen_subtract(L_32, L_33)), 1, NULL);
		int32_t L_35 = V_3;
		int32_t L_36 = V_1;
		int32_t L_37;
		L_37 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(((int32_t)il2cpp_codegen_subtract(L_35, L_36)), 1, NULL);
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_38;
		memset((&L_38), 0, sizeof(L_38));
		DetailmapRect__ctor_mAB3BE5B2C0C7B9A9005C7877ECE1AD237F46A7DE((&L_38), L_30, L_31, L_34, L_37, /*hidden argument*/NULL);
		G_B14_0 = L_38;
	}

IL_00fb:
	{
		V_12 = G_B14_0;
		goto IL_00ff;
	}

IL_00ff:
	{
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_39 = V_12;
		return L_39;
	}
}
// VisualDesignCafe.Rendering.Nature.DetailmapRect VisualDesignCafe.Rendering.Nature.TerrainModificationHistory::GetModifiedDetailmapRect(System.Int32,VisualDesignCafe.Rendering.Nature.DetailmapRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 TerrainModificationHistory_GetModifiedDetailmapRect_m77D5EB401FD51076ACFCEEC5817AF8E79C64E704 (TerrainModificationHistory_t0028220485A05568F0AAFF98CD4830F3D0B2D77C* __this, int32_t ___layer0, DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 ___bounds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* V_0 = NULL;
	Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 V_11;
	memset((&V_11), 0, sizeof(V_11));
	DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t* V_16 = NULL;
	int32_t* V_17 = NULL;
	int32_t V_18 = 0;
	bool V_19 = false;
	int32_t V_20 = 0;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	int32_t G_B5_0 = 0;
	DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 G_B21_0;
	memset((&G_B21_0), 0, sizeof(G_B21_0));
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_0 = __this->____terrain_0;
		NullCheck(L_0);
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_1;
		L_1 = TerrainData_get_Detailmaps_mC8C36C1DBBD4DB93007E602B3BB9D8423109858A_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_2 = __this->____terrain_0;
		NullCheck(L_2);
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_3;
		L_3 = TerrainData_get_PreviousDetailmaps_m05D5B502DE4F61E46878249587186379A58DF31F_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_4 = __this->____terrain_0;
		NullCheck(L_4);
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_5;
		L_5 = TerrainData_get_Detailmaps_mC8C36C1DBBD4DB93007E602B3BB9D8423109858A_inline(L_4, NULL);
		int32_t L_6 = ___layer0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_9 = __this->____terrain_0;
		NullCheck(L_9);
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_10;
		L_10 = TerrainData_get_PreviousDetailmaps_m05D5B502DE4F61E46878249587186379A58DF31F_inline(L_9, NULL);
		int32_t L_11 = ___layer0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		G_B5_0 = ((((RuntimeObject*)(Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E*)L_13) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = 1;
	}

IL_003d:
	{
		V_10 = (bool)G_B5_0;
		bool L_14 = V_10;
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340));
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_15 = V_11;
		V_12 = L_15;
		goto IL_01d3;
	}

IL_0055:
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_16 = __this->____terrain_0;
		NullCheck(L_16);
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_17;
		L_17 = TerrainData_get_Detailmaps_mC8C36C1DBBD4DB93007E602B3BB9D8423109858A_inline(L_16, NULL);
		int32_t L_18 = ___layer0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_0 = L_20;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_21 = __this->____terrain_0;
		NullCheck(L_21);
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_22;
		L_22 = TerrainData_get_PreviousDetailmaps_m05D5B502DE4F61E46878249587186379A58DF31F_inline(L_21, NULL);
		int32_t L_23 = ___layer0;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_1 = L_25;
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_26 = V_0;
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28;
		L_28 = Detailmap_Compare_m863E4263F0D45754BEE1AF43B629EC665CDCC0ED(L_26, L_27, NULL);
		V_13 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_13;
		if (!L_29)
		{
			goto IL_0092;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340));
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_30 = V_11;
		V_12 = L_30;
		goto IL_01d3;
	}

IL_0092:
	{
		V_2 = (bool)0;
		V_3 = ((int32_t)2147483647LL);
		V_4 = ((int32_t)2147483647LL);
		V_5 = ((int32_t)-2147483648LL);
		V_6 = ((int32_t)-2147483648LL);
		int32_t L_31;
		L_31 = DetailmapRect_get_XMax_m49A9BF0FC0A5DD371871FFC3BA4FD820C87058C9((&___bounds1), NULL);
		V_7 = L_31;
		int32_t L_32;
		L_32 = DetailmapRect_get_YMax_mD9657481CFA4FCE5CA8B3AC404E54CFB5C7C9507((&___bounds1), NULL);
		V_8 = L_32;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_33 = __this->____terrain_0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = TerrainData_get_DetailResolution_mBB49BD0472E9E771B647B304A431ABCD99C599A4_inline(L_33, NULL);
		V_15 = L_34;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_35 = __this->____terrain_0;
		NullCheck(L_35);
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_36;
		L_36 = TerrainData_get_Detailmaps_mC8C36C1DBBD4DB93007E602B3BB9D8423109858A_inline(L_35, NULL);
		int32_t L_37 = ___layer0;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		int32_t* L_40;
		L_40 = Detailmap_GetUnsafePtr_m847E91D18F40CCE45705F2A69537D627CCE02D62(L_39, NULL);
		V_16 = L_40;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_41 = __this->____terrain_0;
		NullCheck(L_41);
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_42;
		L_42 = TerrainData_get_PreviousDetailmaps_m05D5B502DE4F61E46878249587186379A58DF31F_inline(L_41, NULL);
		int32_t L_43 = ___layer0;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		int32_t* L_46;
		L_46 = Detailmap_GetUnsafePtr_m847E91D18F40CCE45705F2A69537D627CCE02D62(L_45, NULL);
		V_17 = L_46;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_47 = ___bounds1;
		int32_t L_48 = L_47.___Y_1;
		V_18 = L_48;
		goto IL_018f;
	}

IL_0104:
	{
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_49 = V_0;
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_50 = V_1;
		int32_t L_51 = V_18;
		NullCheck(L_49);
		int32_t L_52;
		L_52 = Detailmap_Compare_mBB9830980EE6EE7A1E2AB7D3409631A1E4FA0171(L_49, L_50, L_51, NULL);
		V_19 = (bool)((!(((uint32_t)L_52) <= ((uint32_t)0)))? 1 : 0);
		bool L_53 = V_19;
		if (!L_53)
		{
			goto IL_0189;
		}
	}
	{
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_54 = ___bounds1;
		int32_t L_55 = L_54.___X_0;
		V_20 = L_55;
		goto IL_017d;
	}

IL_0120:
	{
		int32_t L_56 = V_18;
		int32_t L_57 = V_15;
		int32_t L_58 = V_20;
		V_14 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_56, L_57)), L_58));
		int32_t* L_59 = V_16;
		int32_t L_60 = V_14;
		int32_t L_61 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_59, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_60), 4)))));
		int32_t* L_62 = V_17;
		int32_t L_63 = V_14;
		int32_t L_64 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_62, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_63), 4)))));
		V_21 = (bool)((((int32_t)((((int32_t)L_61) == ((int32_t)L_64))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_65 = V_21;
		if (!L_65)
		{
			goto IL_0176;
		}
	}
	{
		int32_t L_66 = V_3;
		int32_t L_67 = V_20;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_68;
		L_68 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_66, L_67, NULL);
		V_3 = L_68;
		int32_t L_69 = V_4;
		int32_t L_70 = V_18;
		int32_t L_71;
		L_71 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_69, L_70, NULL);
		V_4 = L_71;
		int32_t L_72 = V_5;
		int32_t L_73 = V_20;
		int32_t L_74;
		L_74 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(L_72, L_73, NULL);
		V_5 = L_74;
		int32_t L_75 = V_6;
		int32_t L_76 = V_18;
		int32_t L_77;
		L_77 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(L_75, L_76, NULL);
		V_6 = L_77;
		V_2 = (bool)1;
	}

IL_0176:
	{
		int32_t L_78 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_017d:
	{
		int32_t L_79 = V_20;
		int32_t L_80 = V_7;
		V_22 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_22;
		if (L_81)
		{
			goto IL_0120;
		}
	}

IL_0189:
	{
		int32_t L_82 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_018f:
	{
		int32_t L_83 = V_18;
		int32_t L_84 = V_8;
		V_23 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_23;
		if (L_85)
		{
			goto IL_0104;
		}
	}
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_01ae;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340));
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_87 = V_11;
		G_B21_0 = L_87;
		goto IL_01cb;
	}

IL_01ae:
	{
		int32_t L_88 = V_3;
		int32_t L_89 = V_4;
		int32_t L_90 = V_5;
		int32_t L_91 = V_3;
		int32_t L_92;
		L_92 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(((int32_t)il2cpp_codegen_subtract(L_90, L_91)), 1, NULL);
		int32_t L_93 = V_6;
		int32_t L_94 = V_4;
		int32_t L_95;
		L_95 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(((int32_t)il2cpp_codegen_subtract(L_93, L_94)), 1, NULL);
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_96;
		memset((&L_96), 0, sizeof(L_96));
		DetailmapRect__ctor_mAB3BE5B2C0C7B9A9005C7877ECE1AD237F46A7DE((&L_96), L_88, L_89, L_92, L_95, /*hidden argument*/NULL);
		G_B21_0 = L_96;
	}

IL_01cb:
	{
		V_9 = G_B21_0;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_97 = V_9;
		V_12 = L_97;
		goto IL_01d3;
	}

IL_01d3:
	{
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_98 = V_12;
		return L_98;
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
// UnityEngine.Rect VisualDesignCafe.Rendering.Nature.TerrainRect::op_Explicit(VisualDesignCafe.Rendering.Nature.TerrainRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D TerrainRect_op_Explicit_m7F79E1BF14D73F50838BB36CD8BE5074E10E903A (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___detailmapRect0, const RuntimeMethod* method) 
{
	{
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_0 = ___detailmapRect0;
		float L_1 = L_0.___X_0;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_2 = ___detailmapRect0;
		float L_3 = L_2.___Y_1;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_4 = ___detailmapRect0;
		float L_5 = L_4.___Width_2;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_6 = ___detailmapRect0;
		float L_7 = L_6.___Height_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Bounds VisualDesignCafe.Rendering.Nature.TerrainRect::op_Explicit(VisualDesignCafe.Rendering.Nature.TerrainRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 TerrainRect_op_Explicit_m4D6F81A41CD9E6EDB72A30014358F9B1F8FCFC5B (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___detailmapRect0, const RuntimeMethod* method) 
{
	{
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_0 = ___detailmapRect0;
		float L_1 = L_0.___X_0;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_2 = ___detailmapRect0;
		float L_3 = L_2.___Width_2;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_4 = ___detailmapRect0;
		float L_5 = L_4.___Y_1;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_6 = ___detailmapRect0;
		float L_7 = L_6.___Height_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_3, (0.5f))))), (0.0f), ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_7, (0.5f))))), /*hidden argument*/NULL);
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_9 = ___detailmapRect0;
		float L_10 = L_9.___Width_2;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_11 = ___detailmapRect0;
		float L_12 = L_11.___Height_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_10, (0.0f), L_12, /*hidden argument*/NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_14), L_8, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Single VisualDesignCafe.Rendering.Nature.TerrainRect::get_XMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainRect_get_XMax_mABEFA6F58CB5000E2CAA87D84D96A384EA1DB3E7 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___X_0;
		float L_1 = __this->___Width_2;
		return ((float)il2cpp_codegen_add(L_0, L_1));
	}
}
IL2CPP_EXTERN_C  float TerrainRect_get_XMax_mABEFA6F58CB5000E2CAA87D84D96A384EA1DB3E7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949*>(__this + _offset);
	float _returnValue;
	_returnValue = TerrainRect_get_XMax_mABEFA6F58CB5000E2CAA87D84D96A384EA1DB3E7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainRect::set_XMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainRect_set_XMax_m072FD321C730C09ABF68A87C8BAD2E5F0A09AA83 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		float L_1 = __this->___X_0;
		__this->___Width_2 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		return;
	}
}
IL2CPP_EXTERN_C  void TerrainRect_set_XMax_m072FD321C730C09ABF68A87C8BAD2E5F0A09AA83_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949*>(__this + _offset);
	TerrainRect_set_XMax_m072FD321C730C09ABF68A87C8BAD2E5F0A09AA83(_thisAdjusted, ___value0, method);
}
// System.Single VisualDesignCafe.Rendering.Nature.TerrainRect::get_YMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainRect_get_YMax_mB71E157CAA2820A9F8DD7D3D3069041D48E2F09B (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___Y_1;
		float L_1 = __this->___Height_3;
		return ((float)il2cpp_codegen_add(L_0, L_1));
	}
}
IL2CPP_EXTERN_C  float TerrainRect_get_YMax_mB71E157CAA2820A9F8DD7D3D3069041D48E2F09B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949*>(__this + _offset);
	float _returnValue;
	_returnValue = TerrainRect_get_YMax_mB71E157CAA2820A9F8DD7D3D3069041D48E2F09B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainRect::set_YMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainRect_set_YMax_m435AF527D9EFA081DFB07316E8C37062FF4DFC46 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		float L_1 = __this->___Y_1;
		__this->___Height_3 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		return;
	}
}
IL2CPP_EXTERN_C  void TerrainRect_set_YMax_m435AF527D9EFA081DFB07316E8C37062FF4DFC46_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949*>(__this + _offset);
	TerrainRect_set_YMax_m435AF527D9EFA081DFB07316E8C37062FF4DFC46(_thisAdjusted, ___value0, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainRect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainRect__ctor_m1FA02DCD2DA14B80462EA66018B7940C37F6A199 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___X_0 = L_0;
		float L_1 = ___y1;
		__this->___Y_1 = L_1;
		float L_2 = ___width2;
		__this->___Width_2 = L_2;
		float L_3 = ___height3;
		__this->___Height_3 = L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void TerrainRect__ctor_m1FA02DCD2DA14B80462EA66018B7940C37F6A199_AdjustorThunk (RuntimeObject* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method)
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949*>(__this + _offset);
	TerrainRect__ctor_m1FA02DCD2DA14B80462EA66018B7940C37F6A199(_thisAdjusted, ___x0, ___y1, ___width2, ___height3, method);
}
// System.Void VisualDesignCafe.Rendering.Nature.TerrainRect::Clamp(VisualDesignCafe.Rendering.Nature.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainRect_Clamp_mE997D3C1A4D283E986F727C7FEFFDAE7F5463291 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData0, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___X_0;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_1 = ___terrainData0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4;
		L_4 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_0, (0.0f), L_3, NULL);
		__this->___X_0 = L_4;
		float L_5 = __this->___Y_1;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_6 = ___terrainData0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline(L_6, NULL);
		float L_8 = L_7.___z_4;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_5, (0.0f), L_8, NULL);
		__this->___Y_1 = L_9;
		float L_10;
		L_10 = TerrainRect_get_XMax_mABEFA6F58CB5000E2CAA87D84D96A384EA1DB3E7(__this, NULL);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_11 = ___terrainData0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline(L_11, NULL);
		float L_13 = L_12.___x_2;
		float L_14;
		L_14 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_10, (0.0f), L_13, NULL);
		TerrainRect_set_XMax_m072FD321C730C09ABF68A87C8BAD2E5F0A09AA83(__this, L_14, NULL);
		float L_15;
		L_15 = TerrainRect_get_YMax_mB71E157CAA2820A9F8DD7D3D3069041D48E2F09B(__this, NULL);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_16 = ___terrainData0;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline(L_16, NULL);
		float L_18 = L_17.___z_4;
		float L_19;
		L_19 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_15, (0.0f), L_18, NULL);
		TerrainRect_set_YMax_m435AF527D9EFA081DFB07316E8C37062FF4DFC46(__this, L_19, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TerrainRect_Clamp_mE997D3C1A4D283E986F727C7FEFFDAE7F5463291_AdjustorThunk (RuntimeObject* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData0, const RuntimeMethod* method)
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949*>(__this + _offset);
	TerrainRect_Clamp_mE997D3C1A4D283E986F727C7FEFFDAE7F5463291(_thisAdjusted, ___terrainData0, method);
}
// System.Boolean VisualDesignCafe.Rendering.Nature.TerrainRect::Overlaps(VisualDesignCafe.Rendering.Nature.TerrainRect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TerrainRect_Overlaps_mADFC9D07668E34F9032CD1415D1114B9776F78BC (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* ___other0, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_0 = (*(TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949*)__this);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = TerrainRect_op_Explicit_m7F79E1BF14D73F50838BB36CD8BE5074E10E903A(L_0, NULL);
		V_0 = L_1;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* L_2 = ___other0;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_3 = (*(TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949*)L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		L_4 = TerrainRect_op_Explicit_m7F79E1BF14D73F50838BB36CD8BE5074E10E903A(L_3, NULL);
		bool L_5;
		L_5 = Rect_Overlaps_m5A540A24DAD3327006A3A2E209CC17992173B572((&V_0), L_4, NULL);
		V_1 = L_5;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool TerrainRect_Overlaps_mADFC9D07668E34F9032CD1415D1114B9776F78BC_AdjustorThunk (RuntimeObject* __this, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* ___other0, const RuntimeMethod* method)
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949*>(__this + _offset);
	bool _returnValue;
	_returnValue = TerrainRect_Overlaps_mADFC9D07668E34F9032CD1415D1114B9776F78BC(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.String VisualDesignCafe.Rendering.Nature.TerrainRect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TerrainRect_ToString_mCFD40EEE7907DFB072D0B317F5ECA9B5030FF304 (TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25552E2E2393351BBF21C6991AA98E485DEE1172);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		float L_2 = __this->___X_0;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		float L_6 = __this->___Y_1;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		float L_10 = __this->___Width_2;
		float L_11 = L_10;
		RuntimeObject* L_12 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14 = __this->___Height_3;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral25552E2E2393351BBF21C6991AA98E485DEE1172, L_13, NULL);
		V_0 = L_17;
		goto IL_004c;
	}

IL_004c:
	{
		String_t* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* TerrainRect_ToString_mCFD40EEE7907DFB072D0B317F5ECA9B5030FF304_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TerrainRect_ToString_mCFD40EEE7907DFB072D0B317F5ECA9B5030FF304(_thisAdjusted, method);
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
// System.Void VisualDesignCafe.Rendering.Nature.TerrainSurface::.ctor(VisualDesignCafe.Rendering.Nature.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainSurface__ctor_m0231870D266283B51634CD786D2F41D5151EBFEE (TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrain0, const RuntimeMethod* method) 
{
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* G_B2_0 = NULL;
	TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* G_B2_1 = NULL;
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* G_B1_0 = NULL;
	TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_0 = ___terrain0;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_1 = L_0;
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
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74A11707EEAFDE1957C12B656A0118A1E3D5D40F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainSurface__ctor_m0231870D266283B51634CD786D2F41D5151EBFEE_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->____terrain_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____terrain_0), (void*)G_B2_0);
		return;
	}
}
// System.Single VisualDesignCafe.Rendering.Nature.TerrainSurface::GetHeight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0 (TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedArray_1_get_Item_m1BA5FB1ADF681B7D71BECC8F5794BB2AAF0C4322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___x0;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_1 = __this->____terrain_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TerrainData_get_HeightmapResolution_mBADC2A7191E6438218F77EDDDC7B123991DED3E6_inline(L_1, NULL);
		int32_t L_3;
		L_3 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		___x0 = L_3;
		int32_t L_4 = ___y1;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_5 = __this->____terrain_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TerrainData_get_HeightmapResolution_mBADC2A7191E6438218F77EDDDC7B123991DED3E6_inline(L_5, NULL);
		int32_t L_7;
		L_7 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_4, 0, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), NULL);
		___y1 = L_7;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_8 = __this->____terrain_0;
		NullCheck(L_8);
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_9;
		L_9 = TerrainData_get_Heights_mCEECDB7F8DADED7A77EBD77095DDA1486FBB8516_inline(L_8, NULL);
		int32_t L_10 = ___y1;
		int32_t L_11 = ___x0;
		NullCheck(L_9);
		float* L_12;
		L_12 = UnmanagedArray_1_get_Item_m1BA5FB1ADF681B7D71BECC8F5794BB2AAF0C4322(L_9, L_10, L_11, UnmanagedArray_1_get_Item_m1BA5FB1ADF681B7D71BECC8F5794BB2AAF0C4322_RuntimeMethod_var);
		float L_13 = *((float*)L_12);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_14 = __this->____terrain_0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline(L_14, NULL);
		float L_16 = L_15.___y_3;
		V_0 = ((float)il2cpp_codegen_multiply(L_13, L_16));
		goto IL_0054;
	}

IL_0054:
	{
		float L_17 = V_0;
		return L_17;
	}
}
// System.Single VisualDesignCafe.Rendering.Nature.TerrainSurface::GetInterpolatedHeight(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSurface_GetInterpolatedHeight_m24FD221185DFB5F0B43A3FAE8DC39E55864E3D3D (TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	{
		float L_0 = ___x0;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_1 = __this->____terrain_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TerrainData_get_HeightmapResolution_mBADC2A7191E6438218F77EDDDC7B123991DED3E6_inline(L_1, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, ((float)((int32_t)il2cpp_codegen_subtract(L_2, 1)))));
		float L_3 = ___y1;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_4 = __this->____terrain_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = TerrainData_get_HeightmapResolution_mBADC2A7191E6438218F77EDDDC7B123991DED3E6_inline(L_4, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_3, ((float)((int32_t)il2cpp_codegen_subtract(L_5, 1)))));
		float L_6 = V_0;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_6);
		float L_7 = V_1;
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(L_7);
		float L_8 = V_0;
		int32_t L_9 = V_2;
		V_4 = ((float)il2cpp_codegen_subtract(L_8, ((float)L_9)));
		float L_10 = V_1;
		int32_t L_11 = V_3;
		V_5 = ((float)il2cpp_codegen_subtract(L_10, ((float)L_11)));
		float L_12 = V_4;
		float L_13 = V_5;
		V_6 = (bool)((((float)L_12) > ((float)L_13))? 1 : 0);
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_3;
		float L_17;
		L_17 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, L_15, L_16, NULL);
		V_7 = L_17;
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		float L_20;
		L_20 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, ((int32_t)il2cpp_codegen_add(L_18, 1)), L_19, NULL);
		V_8 = L_20;
		int32_t L_21 = V_2;
		int32_t L_22 = V_3;
		float L_23;
		L_23 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, ((int32_t)il2cpp_codegen_add(L_21, 1)), ((int32_t)il2cpp_codegen_add(L_22, 1)), NULL);
		V_9 = L_23;
		float L_24 = V_7;
		float L_25 = V_8;
		float L_26 = V_7;
		float L_27 = V_4;
		float L_28 = V_9;
		float L_29 = V_8;
		float L_30 = V_5;
		V_10 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_25, L_26)), L_27)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_28, L_29)), L_30))));
		goto IL_00bb;
	}

IL_007e:
	{
		int32_t L_31 = V_2;
		int32_t L_32 = V_3;
		float L_33;
		L_33 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, L_31, L_32, NULL);
		V_11 = L_33;
		int32_t L_34 = V_2;
		int32_t L_35 = V_3;
		float L_36;
		L_36 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, L_34, ((int32_t)il2cpp_codegen_add(L_35, 1)), NULL);
		V_12 = L_36;
		int32_t L_37 = V_2;
		int32_t L_38 = V_3;
		float L_39;
		L_39 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, ((int32_t)il2cpp_codegen_add(L_37, 1)), ((int32_t)il2cpp_codegen_add(L_38, 1)), NULL);
		V_13 = L_39;
		float L_40 = V_11;
		float L_41 = V_13;
		float L_42 = V_12;
		float L_43 = V_4;
		float L_44 = V_12;
		float L_45 = V_11;
		float L_46 = V_5;
		V_10 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_40, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_41, L_42)), L_43)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_44, L_45)), L_46))));
		goto IL_00bb;
	}

IL_00bb:
	{
		float L_47 = V_10;
		return L_47;
	}
}
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainSurface::GetNormal(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainSurface_GetNormal_m10D0711C7CCA78A39CC47D2299D31C1E87FCF046 (TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		float L_2;
		L_2 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, ((int32_t)il2cpp_codegen_subtract(L_0, 1)), ((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		V_0 = L_2;
		int32_t L_3 = ___x0;
		int32_t L_4 = ___y1;
		float L_5;
		L_5 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		V_1 = L_5;
		int32_t L_6 = ___x0;
		int32_t L_7 = ___y1;
		float L_8;
		L_8 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), L_7, NULL);
		V_2 = L_8;
		int32_t L_9 = ___x0;
		int32_t L_10 = ___y1;
		float L_11;
		L_11 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		V_3 = L_11;
		int32_t L_12 = ___x0;
		int32_t L_13 = ___y1;
		float L_14;
		L_14 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, ((int32_t)il2cpp_codegen_add(L_12, 1)), L_13, NULL);
		V_4 = L_14;
		int32_t L_15 = ___x0;
		int32_t L_16 = ___y1;
		float L_17;
		L_17 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, ((int32_t)il2cpp_codegen_add(L_15, 1)), ((int32_t)il2cpp_codegen_add(L_16, 1)), NULL);
		V_5 = L_17;
		int32_t L_18 = ___x0;
		int32_t L_19 = ___y1;
		float L_20;
		L_20 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), NULL);
		V_6 = L_20;
		int32_t L_21 = ___x0;
		int32_t L_22 = ___y1;
		float L_23;
		L_23 = TerrainSurface_GetHeight_m359308283BA94E77DDE1557086418A4E6319AAA0(__this, L_21, ((int32_t)il2cpp_codegen_add(L_22, 1)), NULL);
		V_7 = L_23;
		float L_24 = V_0;
		float L_25 = V_2;
		float L_26 = V_3;
		float L_27 = V_1;
		float L_28 = V_4;
		float L_29 = V_5;
		V_8 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_24, (-1.0f))), ((float)il2cpp_codegen_multiply(L_25, (-2.0f))))), ((float)il2cpp_codegen_multiply(L_26, (-1.0f))))), ((float)il2cpp_codegen_multiply(L_27, (1.0f))))), ((float)il2cpp_codegen_multiply(L_28, (2.0f))))), ((float)il2cpp_codegen_multiply(L_29, (1.0f)))));
		float L_30 = V_0;
		float L_31 = V_6;
		float L_32 = V_1;
		float L_33 = V_3;
		float L_34 = V_7;
		float L_35 = V_5;
		V_9 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_30, (-1.0f))), ((float)il2cpp_codegen_multiply(L_31, (-2.0f))))), ((float)il2cpp_codegen_multiply(L_32, (-1.0f))))), ((float)il2cpp_codegen_multiply(L_33, (1.0f))))), ((float)il2cpp_codegen_multiply(L_34, (2.0f))))), ((float)il2cpp_codegen_multiply(L_35, (1.0f)))));
		float L_36 = V_8;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_37 = __this->____terrain_0;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&L_37->___HeightmapTexelSize_26);
		float L_39 = L_38->___x_2;
		V_8 = ((float)(L_36/L_39));
		float L_40 = V_9;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_41 = __this->____terrain_0;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = (&L_41->___HeightmapTexelSize_26);
		float L_43 = L_42->___z_4;
		V_9 = ((float)(L_40/L_43));
		float L_44 = V_8;
		float L_45 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), ((-L_44)), (8.0f), ((-L_45)), /*hidden argument*/NULL);
		V_10 = L_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_10), NULL);
		V_11 = L_47;
		goto IL_0113;
	}

IL_0113:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_11;
		return L_48;
	}
}
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.TerrainSurface::GetInterpolatedNormal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainSurface_GetInterpolatedNormal_m5F4EFA15EC1DB0640A6A84A5675D87552CF5603F (TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* __this, float ___normalizedX0, float ___normalizedY1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		float L_0 = ___normalizedX0;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_1 = __this->____terrain_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TerrainData_get_HeightmapResolution_mBADC2A7191E6438218F77EDDDC7B123991DED3E6_inline(L_1, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_0, ((float)((int32_t)il2cpp_codegen_subtract(L_2, 1)))));
		float L_3 = ___normalizedY1;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_4 = __this->____terrain_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = TerrainData_get_HeightmapResolution_mBADC2A7191E6438218F77EDDDC7B123991DED3E6_inline(L_4, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_3, ((float)((int32_t)il2cpp_codegen_subtract(L_5, 1)))));
		float L_6 = V_0;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_6);
		float L_7 = V_1;
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(L_7);
		int32_t L_8 = V_2;
		int32_t L_9 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = TerrainSurface_GetNormal_m10D0711C7CCA78A39CC47D2299D31C1E87FCF046(__this, L_8, L_9, NULL);
		V_4 = L_10;
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = TerrainSurface_GetNormal_m10D0711C7CCA78A39CC47D2299D31C1E87FCF046(__this, ((int32_t)il2cpp_codegen_add(L_11, 1)), L_12, NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = TerrainSurface_GetNormal_m10D0711C7CCA78A39CC47D2299D31C1E87FCF046(__this, L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		V_6 = L_16;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = TerrainSurface_GetNormal_m10D0711C7CCA78A39CC47D2299D31C1E87FCF046(__this, ((int32_t)il2cpp_codegen_add(L_17, 1)), ((int32_t)il2cpp_codegen_add(L_18, 1)), NULL);
		V_7 = L_19;
		float L_20 = V_0;
		int32_t L_21 = V_2;
		V_8 = ((float)il2cpp_codegen_subtract(L_20, ((float)L_21)));
		float L_22 = V_1;
		int32_t L_23 = V_3;
		V_9 = ((float)il2cpp_codegen_subtract(L_22, ((float)L_23)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_5;
		float L_26 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_24, L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_7;
		float L_30 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_28, L_29, L_30, NULL);
		float L_32 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_27, L_31, L_32, NULL);
		V_10 = L_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_10), NULL);
		V_11 = L_34;
		goto IL_008f;
	}

IL_008f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_11;
		return L_35;
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
// Conversion methods for marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings
IL2CPP_EXTERN_C void StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshal_pinvoke(const StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A& unmarshaled, StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshaled_pinvoke& marshaled)
{
	marshaled.___Stream_0 = static_cast<int32_t>(unmarshaled.___Stream_0);
	marshaled.___ReferencePosition_1 = unmarshaled.___ReferencePosition_1;
	marshaled.___StreamInDistance_2 = unmarshaled.___StreamInDistance_2;
	marshaled.___StreamOutDistance_3 = unmarshaled.___StreamOutDistance_3;
	marshaled.___ProcessorLimit_4 = unmarshaled.___ProcessorLimit_4;
	marshaled.___PrioritizeView_5 = static_cast<int32_t>(unmarshaled.___PrioritizeView_5);
}
IL2CPP_EXTERN_C void StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshal_pinvoke_back(const StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshaled_pinvoke& marshaled, StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A& unmarshaled)
{
	bool unmarshaledStream_temp_0 = false;
	unmarshaledStream_temp_0 = static_cast<bool>(marshaled.___Stream_0);
	unmarshaled.___Stream_0 = unmarshaledStream_temp_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledReferencePosition_temp_1;
	memset((&unmarshaledReferencePosition_temp_1), 0, sizeof(unmarshaledReferencePosition_temp_1));
	unmarshaledReferencePosition_temp_1 = marshaled.___ReferencePosition_1;
	unmarshaled.___ReferencePosition_1 = unmarshaledReferencePosition_temp_1;
	float unmarshaledStreamInDistance_temp_2 = 0.0f;
	unmarshaledStreamInDistance_temp_2 = marshaled.___StreamInDistance_2;
	unmarshaled.___StreamInDistance_2 = unmarshaledStreamInDistance_temp_2;
	float unmarshaledStreamOutDistance_temp_3 = 0.0f;
	unmarshaledStreamOutDistance_temp_3 = marshaled.___StreamOutDistance_3;
	unmarshaled.___StreamOutDistance_3 = unmarshaledStreamOutDistance_temp_3;
	float unmarshaledProcessorLimit_temp_4 = 0.0f;
	unmarshaledProcessorLimit_temp_4 = marshaled.___ProcessorLimit_4;
	unmarshaled.___ProcessorLimit_4 = unmarshaledProcessorLimit_temp_4;
	bool unmarshaledPrioritizeView_temp_5 = false;
	unmarshaledPrioritizeView_temp_5 = static_cast<bool>(marshaled.___PrioritizeView_5);
	unmarshaled.___PrioritizeView_5 = unmarshaledPrioritizeView_temp_5;
}
// Conversion method for clean up from marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings
IL2CPP_EXTERN_C void StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshal_pinvoke_cleanup(StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings
IL2CPP_EXTERN_C void StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshal_com(const StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A& unmarshaled, StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshaled_com& marshaled)
{
	marshaled.___Stream_0 = static_cast<int32_t>(unmarshaled.___Stream_0);
	marshaled.___ReferencePosition_1 = unmarshaled.___ReferencePosition_1;
	marshaled.___StreamInDistance_2 = unmarshaled.___StreamInDistance_2;
	marshaled.___StreamOutDistance_3 = unmarshaled.___StreamOutDistance_3;
	marshaled.___ProcessorLimit_4 = unmarshaled.___ProcessorLimit_4;
	marshaled.___PrioritizeView_5 = static_cast<int32_t>(unmarshaled.___PrioritizeView_5);
}
IL2CPP_EXTERN_C void StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshal_com_back(const StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshaled_com& marshaled, StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A& unmarshaled)
{
	bool unmarshaledStream_temp_0 = false;
	unmarshaledStream_temp_0 = static_cast<bool>(marshaled.___Stream_0);
	unmarshaled.___Stream_0 = unmarshaledStream_temp_0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 unmarshaledReferencePosition_temp_1;
	memset((&unmarshaledReferencePosition_temp_1), 0, sizeof(unmarshaledReferencePosition_temp_1));
	unmarshaledReferencePosition_temp_1 = marshaled.___ReferencePosition_1;
	unmarshaled.___ReferencePosition_1 = unmarshaledReferencePosition_temp_1;
	float unmarshaledStreamInDistance_temp_2 = 0.0f;
	unmarshaledStreamInDistance_temp_2 = marshaled.___StreamInDistance_2;
	unmarshaled.___StreamInDistance_2 = unmarshaledStreamInDistance_temp_2;
	float unmarshaledStreamOutDistance_temp_3 = 0.0f;
	unmarshaledStreamOutDistance_temp_3 = marshaled.___StreamOutDistance_3;
	unmarshaled.___StreamOutDistance_3 = unmarshaledStreamOutDistance_temp_3;
	float unmarshaledProcessorLimit_temp_4 = 0.0f;
	unmarshaledProcessorLimit_temp_4 = marshaled.___ProcessorLimit_4;
	unmarshaled.___ProcessorLimit_4 = unmarshaledProcessorLimit_temp_4;
	bool unmarshaledPrioritizeView_temp_5 = false;
	unmarshaledPrioritizeView_temp_5 = static_cast<bool>(marshaled.___PrioritizeView_5);
	unmarshaled.___PrioritizeView_5 = unmarshaledPrioritizeView_temp_5;
}
// Conversion method for clean up from marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.StreamSettings
IL2CPP_EXTERN_C void StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshal_com_cleanup(StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::.ctor(VisualDesignCafe.Rendering.Nature.Grid,VisualDesignCafe.Rendering.Nature.TerrainData,VisualDesignCafe.Rendering.Nature.CameraCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer__ctor_m065A5D65B01C34E37CD08CF0A460FB9874DF4503 (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* ___grid0, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData1, CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* ___cameras2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellStreamer_OnBuildSkipped_mBE0191C59B6158259AC5650B73FFF76FA19A97ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7A979ABE57FAA89D6008C9AC9AA829E7BCA39A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* G_B2_0 = NULL;
	CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* G_B2_1 = NULL;
	CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* G_B1_0 = NULL;
	CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* G_B1_1 = NULL;
	Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* G_B4_0 = NULL;
	CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* G_B4_1 = NULL;
	Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* G_B3_0 = NULL;
	CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* G_B3_1 = NULL;
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* G_B6_0 = NULL;
	CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* G_B6_1 = NULL;
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* G_B5_0 = NULL;
	CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* G_B5_1 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____cellBuildStatusLock_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cellBuildStatusLock_6), (void*)L_0);
		__this->____totalCellsInRange_12 = 0;
		__this->____totalCellsBuilt_13 = 0;
		List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* L_1 = (List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85*)il2cpp_codegen_object_new(List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7A979ABE57FAA89D6008C9AC9AA829E7BCA39A76(L_1, List_1__ctor_m7A979ABE57FAA89D6008C9AC9AA829E7BCA39A76_RuntimeMethod_var);
		__this->____cellsToStream_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cellsToStream_14), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_2 = ___cameras2;
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_003d;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD90348CE9BDE9F3CE8DC222D3D4EE1C8468911A4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CellStreamer__ctor_m065A5D65B01C34E37CD08CF0A460FB9874DF4503_RuntimeMethod_var)));
	}

IL_003d:
	{
		NullCheck(G_B2_1);
		G_B2_1->____cameraCollection_5 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____cameraCollection_5), (void*)G_B2_0);
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_5 = ___grid0;
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = __this;
			goto IL_0053;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A7F9DE0C8F3D56FCC7CD55AC4B41D661174ABE2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CellStreamer__ctor_m065A5D65B01C34E37CD08CF0A460FB9874DF4503_RuntimeMethod_var)));
	}

IL_0053:
	{
		NullCheck(G_B4_1);
		G_B4_1->____grid_3 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->____grid_3), (void*)G_B4_0);
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_8 = __this->____grid_3;
		NullCheck(L_8);
		BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* L_9;
		L_9 = Grid_get_Builder_mA922F9533FD555307A3184DF0819ECEBDE99BBF5_inline(L_8, NULL);
		Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99* L_10 = (Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99*)il2cpp_codegen_object_new(Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m2A99A6CB2DAA92FD3DD405B92FD631C55FF06E2A(L_10, __this, (intptr_t)((void*)CellStreamer_OnBuildSkipped_mBE0191C59B6158259AC5650B73FFF76FA19A97ED_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		BuildScheduler_add_OnSkipped_m908F3B68C39D91079EEA91C1F4A4881A0FA164CD(L_9, L_10, NULL);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_11 = ___terrainData1;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_12 = L_11;
		G_B5_0 = L_12;
		G_B5_1 = __this;
		if (L_12)
		{
			G_B6_0 = L_12;
			G_B6_1 = __this;
			goto IL_0086;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_13 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralABA2DC431CAFBB027FE00F1228FA7AA3F6239E81)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CellStreamer__ctor_m065A5D65B01C34E37CD08CF0A460FB9874DF4503_RuntimeMethod_var)));
	}

IL_0086:
	{
		NullCheck(G_B6_1);
		G_B6_1->____terrainData_4 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->____terrainData_4), (void*)G_B6_0);
		CellStreamer_Prepare_m540B98B42226EDB4E80394E16E5E00BD7F420DFF(__this, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_Dispose_mCB7CD8D28B048BD89C8462718521692C7D9FF0BB (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellStreamer_OnBuildSkipped_mBE0191C59B6158259AC5650B73FFF76FA19A97ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* G_B2_0 = NULL;
	QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* G_B1_0 = NULL;
	Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* G_B5_0 = NULL;
	Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* G_B4_0 = NULL;
	BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* G_B6_0 = NULL;
	{
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_0 = __this->____quadLayout_8;
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_1 = L_0;
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
		QuadSpatialLayout_Dispose_m370BD509587A3696400F25EB3F11E50AA4EBD839(G_B2_0, NULL);
	}

IL_0013:
	{
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_2 = __this->____grid_3;
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0020;
		}
	}
	{
		G_B6_0 = ((BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B*)(NULL));
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B5_0);
		BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* L_4;
		L_4 = Grid_get_Builder_mA922F9533FD555307A3184DF0819ECEBDE99BBF5_inline(G_B5_0, NULL);
		G_B6_0 = L_4;
	}

IL_0025:
	{
		V_0 = (bool)((!(((RuntimeObject*)(BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B*)G_B6_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_6 = __this->____grid_3;
		NullCheck(L_6);
		BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* L_7;
		L_7 = Grid_get_Builder_mA922F9533FD555307A3184DF0819ECEBDE99BBF5_inline(L_6, NULL);
		Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99* L_8 = (Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99*)il2cpp_codegen_object_new(Action_1_t016301C4D98D48258ED65074AB8A23372FF97C99_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m2A99A6CB2DAA92FD3DD405B92FD631C55FF06E2A(L_8, __this, (intptr_t)((void*)CellStreamer_OnBuildSkipped_mBE0191C59B6158259AC5650B73FFF76FA19A97ED_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		BuildScheduler_remove_OnSkipped_m23C881705EB83E4C1EF5F6EDB22828AC739B28DE(L_7, L_8, NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::OnBuildSkipped(VisualDesignCafe.Rendering.Nature.Cell)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_OnBuildSkipped_mBE0191C59B6158259AC5650B73FFF76FA19A97ED (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* ___cell0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->____cellBuildStatusLock_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0042;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_4 = __this->____cellBuildStatus_7;
			Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* L_5 = ___cell0;
			NullCheck(L_5);
			int32_t L_6 = L_5->___X_7;
			Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* L_7 = ___cell0;
			NullCheck(L_7);
			int32_t L_8 = L_7->___Z_8;
			int32_t L_9;
			L_9 = CellStreamer_GetIndex_m9A1843FD7D9C5A797D2422D51EAB6BD1ED0CC027_inline(__this, L_6, L_8, NULL);
			NullCheck(L_4);
			((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___IsBuilt_1 = (bool)0;
			goto IL_0043;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		return;
	}
}
// System.Single VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::GetVisibleCellBuildProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CellStreamer_GetVisibleCellBuildProgress_m478A854B9B664671CD808083E8A647B996CD9772 (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->____totalCellsInRange_12;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_0028;
	}

IL_0016:
	{
		int32_t L_2 = __this->____totalCellsBuilt_13;
		int32_t L_3 = __this->____totalCellsInRange_12;
		V_1 = ((float)(((float)L_2)/((float)L_3)));
		goto IL_0028;
	}

IL_0028:
	{
		float L_4 = V_1;
		return L_4;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::Clear(VisualDesignCafe.Rendering.Nature.TerrainRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_Clear_m9CE538BDF3F6D3B5FC4F4EC91915F252B467B1BA (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___relativeBounds0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	Action_1_t0E703B63899DA25B799B0D3495FBAB3A030CD3F5* G_B12_0 = NULL;
	Action_1_t0E703B63899DA25B799B0D3495FBAB3A030CD3F5* G_B11_0 = NULL;
	{
		__this->____clearedRect_11 = (bool)1;
		RuntimeObject* L_0 = __this->____cellBuildStatusLock_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0073;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0073:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_4 = __this->____cellBuildStatus_7;
				NullCheck(L_4);
				V_2 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
				V_3 = 0;
				goto IL_005c_1;
			}

IL_0028_1:
			{
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_5 = __this->____cellBuildStatus_7;
				int32_t L_6 = V_3;
				NullCheck(L_5);
				TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* L_7 = (&((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___RelativeBounds_0);
				bool L_8;
				L_8 = TerrainRect_Overlaps_mADFC9D07668E34F9032CD1415D1114B9776F78BC(L_7, (&___relativeBounds0), NULL);
				V_4 = L_8;
				bool L_9 = V_4;
				if (!L_9)
				{
					goto IL_0058_1;
				}
			}
			{
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_10 = __this->____cellBuildStatus_7;
				int32_t L_11 = V_3;
				NullCheck(L_10);
				((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___IsBuilt_1 = (bool)0;
			}

IL_0058_1:
			{
				int32_t L_12 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_005c_1:
			{
				int32_t L_13 = V_3;
				int32_t L_14 = V_2;
				V_5 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
				bool L_15 = V_5;
				if (L_15)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_0074;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		Action_1_t0E703B63899DA25B799B0D3495FBAB3A030CD3F5* L_16 = __this->___Cleared_0;
		Action_1_t0E703B63899DA25B799B0D3495FBAB3A030CD3F5* L_17 = L_16;
		G_B11_0 = L_17;
		if (L_17)
		{
			G_B12_0 = L_17;
			goto IL_0080;
		}
	}
	{
		goto IL_0087;
	}

IL_0080:
	{
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_18 = ___relativeBounds0;
		NullCheck(G_B12_0);
		Action_1_Invoke_m61AE232F927B8CCA5E86FAB9BE92C259B93C7937_inline(G_B12_0, L_18, NULL);
	}

IL_0087:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_Clear_m5D8C96D8D3690E8E1A5CB6240270F597F79479FB (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		RuntimeObject* L_0 = __this->____cellBuildStatusLock_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_4 = __this->____cellBuildStatus_7;
				NullCheck(L_4);
				V_2 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
				V_3 = 0;
				goto IL_0037_1;
			}

IL_0021_1:
			{
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_5 = __this->____cellBuildStatus_7;
				int32_t L_6 = V_3;
				NullCheck(L_5);
				((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___IsBuilt_1 = (bool)0;
				int32_t L_7 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
			}

IL_0037_1:
			{
				int32_t L_8 = V_3;
				int32_t L_9 = V_2;
				V_4 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
				bool L_10 = V_4;
				if (L_10)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		return;
	}
}
// System.Double VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::GetDistanceToCamera(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CellStreamer_GetDistanceToCamera_m5922C91B853C789BCB60439AB31BC69F0D907467 (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, int32_t ___x0, int32_t ___z1, bool ___readonly2, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_0 = __this->____quadLayout_8;
		int32_t L_1 = ___x0;
		int32_t L_2 = ___z1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->____terrainPosition_15);
		bool L_4 = ___readonly2;
		NullCheck(L_0);
		double L_5;
		L_5 = QuadSpatialLayout_GetDistanceToCamera_m763B6A99D12E6495D946B97042DC1700E0712AA5(L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0018;
	}

IL_0018:
	{
		double L_6 = V_0;
		return L_6;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_Stream_mA2E750AF9469E06C9E21DA5CE6C91495B26AC809 (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AD7BBE6589366EAE2CCFD738CBEC6A1B043822D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9442D52AFC1957FF13A815BC7795B4AAEBF52982);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF50A0FAE06D530EF82D18679277E3BDF79F4641);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteralFF50A0FAE06D530EF82D18679277E3BDF79F4641, NULL);
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_0 = __this->____cameraCollection_5;
		NullCheck(L_0);
		CameraCollection_Validate_m2EC18782FCFFAAF6C105A3C1FE7E3F64C6B3523C(L_0, NULL);
		CellStreamer_Prepare_m540B98B42226EDB4E80394E16E5E00BD7F420DFF(__this, NULL);
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteral5AD7BBE6589366EAE2CCFD738CBEC6A1B043822D, NULL);
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_1 = __this->____quadLayout_8;
		StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A* L_2 = (&__this->___Settings_1);
		float L_3 = L_2->___StreamOutDistance_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->____terrainPosition_15;
		NullCheck(L_1);
		QuadSpatialLayout_Cache_mF5BA65AB5626A2C504B96B8661DCEFB5F7815908(L_1, ((double)L_3), L_4, NULL);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteral9442D52AFC1957FF13A815BC7795B4AAEBF52982, NULL);
		CellStreamer_BuildCellsWithinRange_m274B5D5CCFB3B9FB50E886EC96009A1D0446ED44(__this, NULL);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_Prepare_m540B98B42226EDB4E80394E16E5E00BD7F420DFF (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* G_B8_0 = NULL;
	QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* G_B7_0 = NULL;
	int32_t G_B14_0 = 0;
	{
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_0 = __this->____quadLayout_8;
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_1 = __this->____grid_3;
		NullCheck(L_1);
		CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* L_2;
		L_2 = Grid_get_Cells_m22B38BE2DA51D64386CF1B025BDE7805B49754CA_inline(L_1, NULL);
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 0, NULL);
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_4 = __this->____quadLayout_8;
		NullCheck(L_4);
		int32_t L_5 = L_4->___QuadsX_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0063;
		}
	}
	{
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_6 = __this->____grid_3;
		NullCheck(L_6);
		CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* L_7;
		L_7 = Grid_get_Cells_m22B38BE2DA51D64386CF1B025BDE7805B49754CA_inline(L_6, NULL);
		NullCheck((RuntimeArray*)L_7);
		int32_t L_8;
		L_8 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_7, 1, NULL);
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_9 = __this->____quadLayout_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->___QuadsY_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0063;
		}
	}
	{
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_11 = __this->____grid_3;
		NullCheck(L_11);
		float L_12;
		L_12 = Grid_get_CellSize_m0E368C11611554B068A982A685246C20F44A9C08_inline(L_11, NULL);
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_13 = __this->____quadLayout_8;
		NullCheck(L_13);
		double L_14 = L_13->___QuadSize_4;
		G_B5_0 = ((((int32_t)((((double)((double)L_12)) == ((double)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0064;
	}

IL_0063:
	{
		G_B5_0 = 1;
	}

IL_0064:
	{
		V_0 = (bool)G_B5_0;
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_00d3;
		}
	}
	{
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_16 = __this->____grid_3;
		NullCheck(L_16);
		CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* L_17;
		L_17 = Grid_get_Cells_m22B38BE2DA51D64386CF1B025BDE7805B49754CA_inline(L_16, NULL);
		NullCheck((RuntimeArray*)L_17);
		int32_t L_18;
		L_18 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_17, 0, NULL);
		__this->____cellsX_9 = L_18;
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_19 = __this->____grid_3;
		NullCheck(L_19);
		CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* L_20;
		L_20 = Grid_get_Cells_m22B38BE2DA51D64386CF1B025BDE7805B49754CA_inline(L_19, NULL);
		NullCheck((RuntimeArray*)L_20);
		int32_t L_21;
		L_21 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_20, 1, NULL);
		__this->____cellsY_10 = L_21;
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_22 = __this->____quadLayout_8;
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_23 = L_22;
		G_B7_0 = L_23;
		if (L_23)
		{
			G_B8_0 = L_23;
			goto IL_00a3;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a3:
	{
		NullCheck(G_B8_0);
		QuadSpatialLayout_Dispose_m370BD509587A3696400F25EB3F11E50AA4EBD839(G_B8_0, NULL);
	}

IL_00a9:
	{
		int32_t L_24 = __this->____cellsX_9;
		int32_t L_25 = __this->____cellsY_10;
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_26 = __this->____grid_3;
		NullCheck(L_26);
		float L_27;
		L_27 = Grid_get_CellSize_m0E368C11611554B068A982A685246C20F44A9C08_inline(L_26, NULL);
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_28 = __this->____cameraCollection_5;
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_29 = (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977*)il2cpp_codegen_object_new(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		QuadSpatialLayout__ctor_mD3F95911D39B732BF3635C5A044C98C7A653B114(L_29, L_24, L_25, ((double)L_27), L_28, NULL);
		__this->____quadLayout_8 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____quadLayout_8), (void*)L_29);
	}

IL_00d3:
	{
		RuntimeObject* L_30 = __this->____cellBuildStatusLock_6;
		V_1 = L_30;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0187:
			{// begin finally (depth: 1)
				{
					bool L_31 = V_2;
					if (!L_31)
					{
						goto IL_0191;
					}
				}
				{
					RuntimeObject* L_32 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_32, NULL);
				}

IL_0191:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_33 = V_1;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_33, (&V_2), NULL);
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_34 = __this->____cellBuildStatus_7;
				if (!L_34)
				{
					goto IL_010c_1;
				}
			}
			{
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_35 = __this->____cellBuildStatus_7;
				NullCheck(L_35);
				Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_36 = __this->____grid_3;
				NullCheck(L_36);
				CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* L_37;
				L_37 = Grid_get_Cells_m22B38BE2DA51D64386CF1B025BDE7805B49754CA_inline(L_36, NULL);
				NullCheck((RuntimeArray*)L_37);
				int32_t L_38;
				L_38 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_37, NULL);
				G_B14_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))) == ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_010d_1;
			}

IL_010c_1:
			{
				G_B14_0 = 1;
			}

IL_010d_1:
			{
				V_3 = (bool)G_B14_0;
				bool L_39 = V_3;
				if (!L_39)
				{
					goto IL_0185_1;
				}
			}
			{
				Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_40 = __this->____grid_3;
				NullCheck(L_40);
				CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* L_41;
				L_41 = Grid_get_Cells_m22B38BE2DA51D64386CF1B025BDE7805B49754CA_inline(L_40, NULL);
				NullCheck((RuntimeArray*)L_41);
				int32_t L_42;
				L_42 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57((RuntimeArray*)L_41, NULL);
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_43 = (CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B*)(CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B*)SZArrayNew(CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B_il2cpp_TypeInfo_var, (uint32_t)L_42);
				__this->____cellBuildStatus_7 = L_43;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____cellBuildStatus_7), (void*)L_43);
				V_4 = 0;
				goto IL_0172_1;
			}

IL_0132_1:
			{
				int32_t L_44 = V_4;
				CellStreamer_GetIndex_m5CDFB77F073580EA75DD5D533C3F5BB7B8022890_inline(__this, L_44, (&V_5), (&V_6), NULL);
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_45 = __this->____cellBuildStatus_7;
				int32_t L_46 = V_4;
				NullCheck(L_45);
				Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_47 = __this->____grid_3;
				NullCheck(L_47);
				CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* L_48;
				L_48 = Grid_get_Cells_m22B38BE2DA51D64386CF1B025BDE7805B49754CA_inline(L_47, NULL);
				int32_t L_49 = V_5;
				int32_t L_50 = V_6;
				NullCheck(L_48);
				Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* L_51;
				L_51 = (L_48)->GetAt(L_49, L_50);
				NullCheck(L_51);
				TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_52 = L_51->___LocalBounds_3;
				((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___RelativeBounds_0 = L_52;
				int32_t L_53 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
			}

IL_0172_1:
			{
				int32_t L_54 = V_4;
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_55 = __this->____cellBuildStatus_7;
				NullCheck(L_55);
				V_7 = (bool)((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))))? 1 : 0);
				bool L_56 = V_7;
				if (L_56)
				{
					goto IL_0132_1;
				}
			}
			{
			}

IL_0185_1:
			{
				goto IL_0192;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0192:
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_57 = __this->____terrainData_4;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = TerrainData_get_Position_m2C0A4C02BC08F6552860A4C1DFCFA77785A192A4_inline(L_57, NULL);
		__this->____terrainPosition_15 = L_58;
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::BuildCellsWithinRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_BuildCellsWithinRange_m274B5D5CCFB3B9FB50E886EC96009A1D0446ED44 (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m738C779C2F3B6DC809C76EDD2E5E0C7A4593ED00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m0F15760AECB3C60197BDB71DBAF4F81D310D8A91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	int32_t V_3 = 0;
	double V_4 = 0.0;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	double* V_7 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_8 = NULL;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	bool V_17 = false;
	int32_t G_B13_0 = 0;
	{
		StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A* L_0 = (&__this->___Settings_1);
		float L_1 = L_0->___StreamInDistance_2;
		V_0 = ((double)L_1);
		double L_2 = V_0;
		double L_3 = V_0;
		V_0 = ((double)il2cpp_codegen_multiply(L_2, L_3));
		StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A* L_4 = (&__this->___Settings_1);
		float L_5 = L_4->___StreamOutDistance_3;
		V_1 = ((double)L_5);
		double L_6 = V_1;
		double L_7 = V_1;
		V_1 = ((double)il2cpp_codegen_multiply(L_6, L_7));
		__this->____totalCellsInRange_12 = 0;
		__this->____totalCellsBuilt_13 = 0;
		List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* L_8 = __this->____cellsToStream_14;
		NullCheck(L_8);
		List_1_Clear_m0F15760AECB3C60197BDB71DBAF4F81D310D8A91_inline(L_8, List_1_Clear_m0F15760AECB3C60197BDB71DBAF4F81D310D8A91_RuntimeMethod_var);
		QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* L_9 = __this->____quadLayout_8;
		NullCheck(L_9);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10;
		L_10 = QuadSpatialLayout_GetClosestDistancesToCamera_m276F69A87D39AD3C85518103E6410310F602A8CA(L_9, NULL);
		V_2 = L_10;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = V_2;
		NullCheck(L_11);
		V_3 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		RuntimeObject* L_12 = __this->____cellBuildStatusLock_6;
		V_5 = L_12;
		V_6 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_017c:
			{// begin finally (depth: 1)
				{
					bool L_13 = V_6;
					if (!L_13)
					{
						goto IL_0188;
					}
				}
				{
					RuntimeObject* L_14 = V_5;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_14, NULL);
				}

IL_0188:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_15 = V_5;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_15, (&V_6), NULL);
				DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = V_2;
				DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = L_16;
				V_8 = L_17;
				if (!L_17)
				{
					goto IL_006e_1;
				}
			}
			{
				DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = V_8;
				NullCheck(L_18);
				if (((int32_t)(((RuntimeArray*)L_18)->max_length)))
				{
					goto IL_0074_1;
				}
			}

IL_006e_1:
			{
				V_7 = (double*)((uintptr_t)0);
				goto IL_007f_1;
			}

IL_0074_1:
			{
				DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = V_8;
				NullCheck(L_19);
				V_7 = (double*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
			}

IL_007f_1:
			{
				V_9 = 0;
				goto IL_0169_1;
			}

IL_0087_1:
			{
				double* L_20 = V_7;
				int32_t L_21 = V_9;
				double L_22 = *((double*)((double*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), 8)))));
				V_4 = L_22;
				double L_23 = V_4;
				double L_24 = V_0;
				V_10 = (bool)((((int32_t)((!(((double)L_23) <= ((double)L_24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_10;
				if (!L_25)
				{
					goto IL_0102_1;
				}
			}
			{
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_26 = __this->____cellBuildStatus_7;
				int32_t L_27 = V_9;
				NullCheck(L_26);
				bool L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___IsBuilt_1;
				V_11 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
				bool L_29 = V_11;
				if (!L_29)
				{
					goto IL_00ff_1;
				}
			}
			{
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_30 = __this->____cellBuildStatus_7;
				int32_t L_31 = V_9;
				NullCheck(L_30);
				((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___IsBuilt_1 = (bool)1;
				int32_t L_32 = V_9;
				CellStreamer_GetIndex_m5CDFB77F073580EA75DD5D533C3F5BB7B8022890_inline(__this, L_32, (&V_12), (&V_13), NULL);
				List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* L_33 = __this->____cellsToStream_14;
				Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_34 = __this->____grid_3;
				NullCheck(L_34);
				CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* L_35;
				L_35 = Grid_get_Cells_m22B38BE2DA51D64386CF1B025BDE7805B49754CA_inline(L_34, NULL);
				int32_t L_36 = V_12;
				int32_t L_37 = V_13;
				NullCheck(L_35);
				Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* L_38;
				L_38 = (L_35)->GetAt(L_36, L_37);
				NullCheck(L_33);
				List_1_Add_m738C779C2F3B6DC809C76EDD2E5E0C7A4593ED00_inline(L_33, L_38, List_1_Add_m738C779C2F3B6DC809C76EDD2E5E0C7A4593ED00_RuntimeMethod_var);
			}

IL_00ff_1:
			{
				goto IL_0162_1;
			}

IL_0102_1:
			{
				double L_39 = V_4;
				double L_40 = V_1;
				if ((!(((double)L_39) >= ((double)L_40))))
				{
					goto IL_011b_1;
				}
			}
			{
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_41 = __this->____cellBuildStatus_7;
				int32_t L_42 = V_9;
				NullCheck(L_41);
				bool L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___IsBuilt_1;
				G_B13_0 = ((int32_t)(L_43));
				goto IL_011c_1;
			}

IL_011b_1:
			{
				G_B13_0 = 0;
			}

IL_011c_1:
			{
				V_14 = (bool)G_B13_0;
				bool L_44 = V_14;
				if (!L_44)
				{
					goto IL_0162_1;
				}
			}
			{
				CellBuildStatusU5BU5D_t8840F6A0CAA1AE1B0E17D28AC6026620B58E7D0B* L_45 = __this->____cellBuildStatus_7;
				int32_t L_46 = V_9;
				NullCheck(L_45);
				((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___IsBuilt_1 = (bool)0;
				ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteral0E113F97D77FF0E45934C610A144C2819DC64A04, NULL);
				int32_t L_47 = V_9;
				CellStreamer_GetIndex_m5CDFB77F073580EA75DD5D533C3F5BB7B8022890_inline(__this, L_47, (&V_15), (&V_16), NULL);
				int32_t L_48 = V_15;
				int32_t L_49 = V_16;
				CellStreamer_DiscardLoadedData_m29AD9FF858706E7F488D7920C79DBFB10EE24CED(__this, L_48, L_49, NULL);
				ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
			}

IL_0162_1:
			{
				int32_t L_50 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_50, 1));
			}

IL_0169_1:
			{
				int32_t L_51 = V_9;
				int32_t L_52 = V_3;
				V_17 = (bool)((((int32_t)L_51) < ((int32_t)L_52))? 1 : 0);
				bool L_53 = V_17;
				if (L_53)
				{
					goto IL_0087_1;
				}
			}
			{
				V_8 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)NULL;
				goto IL_0189;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0189:
	{
		List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* L_54 = __this->____cellsToStream_14;
		CellStreamer_SendCellsToBuilder_m160D0CFAB6D80D91B63841993A3DE1B0B5C1E104(__this, L_54, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::DiscardLoadedData(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_DiscardLoadedData_m29AD9FF858706E7F488D7920C79DBFB10EE24CED (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) 
{
	Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_0 = __this->____grid_3;
		NullCheck(L_0);
		CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* L_1;
		L_1 = Grid_get_Cells_m22B38BE2DA51D64386CF1B025BDE7805B49754CA_inline(L_0, NULL);
		int32_t L_2 = ___x0;
		int32_t L_3 = ___z1;
		NullCheck(L_1);
		Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* L_4;
		L_4 = (L_1)->GetAt(L_2, L_3);
		V_0 = L_4;
		Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		V_1 = L_6;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_7 = __this->____terrainData_4;
		NullCheck(L_7);
		TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* L_8 = L_7->___Streamer_23;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_9 = __this->____terrainData_4;
		NullCheck(L_9);
		TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* L_10 = L_9->___Streamer_23;
		NullCheck(L_10);
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_11 = L_10->___LoadedAlphaMapData_2;
		int32_t L_12 = V_1;
		NullCheck(L_8);
		TerrainDataStreamer_ClearLoadedData_m2E742A2AB73441A797A01D5D939BB99B5ED1A692(L_8, L_11, L_12, 0, NULL);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_13 = __this->____terrainData_4;
		NullCheck(L_13);
		TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* L_14 = L_13->___Streamer_23;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_15 = __this->____terrainData_4;
		NullCheck(L_15);
		TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* L_16 = L_15->___Streamer_23;
		NullCheck(L_16);
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_17 = L_16->___LoadedHeightmapData_0;
		int32_t L_18 = V_1;
		NullCheck(L_14);
		TerrainDataStreamer_ClearLoadedData_m2E742A2AB73441A797A01D5D939BB99B5ED1A692(L_14, L_17, L_18, 0, NULL);
		V_2 = 0;
		goto IL_008c;
	}

IL_0065:
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_19 = __this->____terrainData_4;
		NullCheck(L_19);
		TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* L_20 = L_19->___Streamer_23;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_21 = __this->____terrainData_4;
		NullCheck(L_21);
		TerrainDataStreamer_t71E71BE73A9992B60FB6480CB40C874946DAAB72* L_22 = L_21->___Streamer_23;
		NullCheck(L_22);
		Dictionary_2_tB003EDD483CC387713104A6FEA4EA8C41E692F96* L_23 = L_22->___LoadedDetailMapData_1;
		int32_t L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_20);
		TerrainDataStreamer_ClearLoadedData_m2E742A2AB73441A797A01D5D939BB99B5ED1A692(L_20, L_23, L_24, L_25, NULL);
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_008c:
	{
		int32_t L_27 = V_2;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_28 = __this->____terrainData_4;
		NullCheck(L_28);
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_29;
		L_29 = TerrainData_get_Detailmaps_mC8C36C1DBBD4DB93007E602B3BB9D8423109858A_inline(L_28, NULL);
		NullCheck(L_29);
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))? 1 : 0);
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_0065;
		}
	}
	{
		Cell_tF10CB7D05622867E369B9349A2EE8DFA1DDCBD45* L_31 = V_0;
		NullCheck(L_31);
		Cell_Clear_m0B8796EB738054CB4D23F6CF10241A8800686E9C(L_31, NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::SendCellsToBuilder(System.Collections.Generic.List`1<VisualDesignCafe.Rendering.Nature.Cell>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_SendCellsToBuilder_m160D0CFAB6D80D91B63841993A3DE1B0B5C1E104 (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* ___cells0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD95E5FD0ED83B11B437BD1C15DE38B3F6F75C9FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45045578780FD0B9DC1862175DE1C8476691896A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BuildSettings_tE7394746E5900966836523B367829DE01151D69D G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* G_B4_2 = NULL;
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* G_B4_3 = NULL;
	List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* G_B4_4 = NULL;
	Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* G_B4_5 = NULL;
	BuildSettings_tE7394746E5900966836523B367829DE01151D69D G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* G_B3_2 = NULL;
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* G_B3_3 = NULL;
	List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* G_B3_4 = NULL;
	Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* G_B3_5 = NULL;
	int32_t G_B5_0 = 0;
	BuildSettings_tE7394746E5900966836523B367829DE01151D69D G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A G_B5_2;
	memset((&G_B5_2), 0, sizeof(G_B5_2));
	CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* G_B5_3 = NULL;
	TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* G_B5_4 = NULL;
	List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* G_B5_5 = NULL;
	Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* G_B5_6 = NULL;
	{
		List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* L_0 = ___cells0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mD95E5FD0ED83B11B437BD1C15DE38B3F6F75C9FF_inline(L_0, List_1_get_Count_mD95E5FD0ED83B11B437BD1C15DE38B3F6F75C9FF_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0072;
	}

IL_0010:
	{
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteral45045578780FD0B9DC1862175DE1C8476691896A, NULL);
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_3 = __this->____grid_3;
		NullCheck(L_3);
		BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* L_4;
		L_4 = Grid_get_Builder_mA922F9533FD555307A3184DF0819ECEBDE99BBF5_inline(L_3, NULL);
		StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A* L_5 = (&__this->___Settings_1);
		bool L_6 = L_5->___PrioritizeView_5;
		NullCheck(L_4);
		BuildScheduler_set_PrioritizeView_m07BE6641742D85494EB1B7828C4E00B2766D05B0_inline(L_4, L_6, NULL);
		Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* L_7 = __this->____grid_3;
		List_1_t1708767469F4F3FEAC21F3B8E77CC75D0AF72B85* L_8 = ___cells0;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_9 = __this->____terrainData_4;
		StreamSettings_tD8381067133E47869398BAC19CEB5AAE5D314C7A L_10 = __this->___Settings_1;
		BuildSettings_tE7394746E5900966836523B367829DE01151D69D L_11 = __this->___BuildSettings_2;
		bool L_12 = __this->____clearedRect_11;
		G_B3_0 = L_11;
		G_B3_1 = L_10;
		G_B3_2 = __this;
		G_B3_3 = L_9;
		G_B3_4 = L_8;
		G_B3_5 = L_7;
		if (L_12)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_10;
			G_B4_2 = __this;
			G_B4_3 = L_9;
			G_B4_4 = L_8;
			G_B4_5 = L_7;
			goto IL_005d;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		G_B5_4 = G_B3_3;
		G_B5_5 = G_B3_4;
		G_B5_6 = G_B3_5;
		goto IL_005e;
	}

IL_005d:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
		G_B5_5 = G_B4_4;
		G_B5_6 = G_B4_5;
	}

IL_005e:
	{
		NullCheck(G_B5_6);
		Grid_Build_m25DE8B90E8B3FA6580503B6AB1A470A23002C962(G_B5_6, G_B5_5, G_B5_4, G_B5_3, G_B5_2, G_B5_1, G_B5_0, NULL);
		__this->____clearedRect_11 = (bool)0;
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
	}

IL_0072:
	{
		return;
	}
}
// System.Int32 VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::GetIndex(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CellStreamer_GetIndex_m9A1843FD7D9C5A797D2422D51EAB6BD1ED0CC027 (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___z1;
		int32_t L_1 = __this->____cellsX_9;
		int32_t L_2 = ___x0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer::GetIndex(System.Int32,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellStreamer_GetIndex_m5CDFB77F073580EA75DD5D533C3F5BB7B8022890 (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, int32_t ___index0, int32_t* ___x1, int32_t* ___y2, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___x1;
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->____cellsX_9;
		*((int32_t*)L_0) = (int32_t)((int32_t)(L_1%L_2));
		int32_t* L_3 = ___y2;
		int32_t L_4 = ___index0;
		int32_t L_5 = __this->____cellsX_9;
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4/L_5));
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
// Conversion methods for marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus
IL2CPP_EXTERN_C void CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshal_pinvoke(const CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880& unmarshaled, CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshaled_pinvoke& marshaled)
{
	marshaled.___RelativeBounds_0 = unmarshaled.___RelativeBounds_0;
	marshaled.___IsBuilt_1 = static_cast<int32_t>(unmarshaled.___IsBuilt_1);
}
IL2CPP_EXTERN_C void CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshal_pinvoke_back(const CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshaled_pinvoke& marshaled, CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880& unmarshaled)
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 unmarshaledRelativeBounds_temp_0;
	memset((&unmarshaledRelativeBounds_temp_0), 0, sizeof(unmarshaledRelativeBounds_temp_0));
	unmarshaledRelativeBounds_temp_0 = marshaled.___RelativeBounds_0;
	unmarshaled.___RelativeBounds_0 = unmarshaledRelativeBounds_temp_0;
	bool unmarshaledIsBuilt_temp_1 = false;
	unmarshaledIsBuilt_temp_1 = static_cast<bool>(marshaled.___IsBuilt_1);
	unmarshaled.___IsBuilt_1 = unmarshaledIsBuilt_temp_1;
}
// Conversion method for clean up from marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus
IL2CPP_EXTERN_C void CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshal_pinvoke_cleanup(CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus
IL2CPP_EXTERN_C void CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshal_com(const CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880& unmarshaled, CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshaled_com& marshaled)
{
	marshaled.___RelativeBounds_0 = unmarshaled.___RelativeBounds_0;
	marshaled.___IsBuilt_1 = static_cast<int32_t>(unmarshaled.___IsBuilt_1);
}
IL2CPP_EXTERN_C void CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshal_com_back(const CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshaled_com& marshaled, CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880& unmarshaled)
{
	TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 unmarshaledRelativeBounds_temp_0;
	memset((&unmarshaledRelativeBounds_temp_0), 0, sizeof(unmarshaledRelativeBounds_temp_0));
	unmarshaledRelativeBounds_temp_0 = marshaled.___RelativeBounds_0;
	unmarshaled.___RelativeBounds_0 = unmarshaledRelativeBounds_temp_0;
	bool unmarshaledIsBuilt_temp_1 = false;
	unmarshaledIsBuilt_temp_1 = static_cast<bool>(marshaled.___IsBuilt_1);
	unmarshaled.___IsBuilt_1 = unmarshaledIsBuilt_temp_1;
}
// Conversion method for clean up from marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.CellStreamer/CellBuildStatus
IL2CPP_EXTERN_C void CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshal_com_cleanup(CellBuildStatus_t76DC8AA2B6042A30BCCD0BAE87782F5780925880_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::.ctor(System.Int32,System.Int32,System.Double,VisualDesignCafe.Rendering.Nature.CameraCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout__ctor_mD3F95911D39B732BF3635C5A044C98C7A653B114 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___quadsX0, int32_t ___quadsZ1, double ___quadSize2, CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* ___cameraCollection3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA8B6727F803E55A09AD195A5328B5EE710AD7F90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t44A25F3C59962F4750C12ACC843610740D56B163_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB049156BFF8B2D26CF127F7BEDB142EB05D20B77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadSpatialLayout_OnCameraRemoved_m823BFCC0771E4802AC4E954C0D662FE0047E5DE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	{
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_0 = (List_1_t44A25F3C59962F4750C12ACC843610740D56B163*)il2cpp_codegen_object_new(List_1_t44A25F3C59962F4750C12ACC843610740D56B163_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA8B6727F803E55A09AD195A5328B5EE710AD7F90(L_0, 4, List_1__ctor_mA8B6727F803E55A09AD195A5328B5EE710AD7F90_RuntimeMethod_var);
		__this->____cachedData_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cachedData_5), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_1 = ___cameraCollection3;
		__this->____cameraCollection_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cameraCollection_0), (void*)L_1);
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_2 = __this->____cameraCollection_0;
		Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA* L_3 = (Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA*)il2cpp_codegen_object_new(Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mF2E73935C8EBAE62E8544E11513B1D568C32F569(L_3, __this, (intptr_t)((void*)QuadSpatialLayout_OnCameraRemoved_m823BFCC0771E4802AC4E954C0D662FE0047E5DE1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		CameraCollection_add_Removed_mAE5F0AC27B00DE4FE8C96C1554B6E12F26D6DBBF(L_2, L_3, NULL);
		int32_t L_4 = ___quadsX0;
		__this->___QuadsX_2 = L_4;
		int32_t L_5 = ___quadsZ1;
		__this->___QuadsY_3 = L_5;
		double L_6 = ___quadSize2;
		__this->___QuadSize_4 = L_6;
		int32_t L_7 = __this->___QuadsX_2;
		int32_t L_8 = __this->___QuadsY_3;
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_9 = (QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC*)(QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC*)SZArrayNew(QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_7, L_8)));
		__this->___Quads_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Quads_1), (void*)L_9);
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_10 = __this->___Quads_1;
		NullCheck(L_10);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		__this->____closestDistanceToCamera_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____closestDistanceToCamera_6), (void*)L_11);
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_12 = __this->___Quads_1;
		NullCheck(L_12);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_13 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)));
		__this->____closestDirectionToCamera_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____closestDirectionToCamera_7), (void*)L_13);
		double L_14 = ___quadSize2;
		V_0 = ((double)il2cpp_codegen_multiply(L_14, (0.5)));
		V_1 = 0;
		goto IL_00d4;
	}

IL_0097:
	{
		V_2 = 0;
		goto IL_00c3;
	}

IL_009b:
	{
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_15 = __this->___Quads_1;
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		int32_t L_18;
		L_18 = QuadSpatialLayout_GetIndex_mC826C002A801732F54169A149A2700426807A6BB_inline(__this, L_16, L_17, NULL);
		int32_t L_19 = V_1;
		double L_20 = ___quadSize2;
		double L_21 = V_0;
		int32_t L_22 = V_2;
		double L_23 = ___quadSize2;
		double L_24 = V_0;
		Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Quad__ctor_m3931444C10918A9136364B002AE129314C201D2E((&L_25), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)L_19), L_20)), L_21)), ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)L_22), L_23)), L_24)), /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6)L_25);
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00c3:
	{
		int32_t L_27 = V_2;
		int32_t L_28 = __this->___QuadsY_3;
		V_3 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_3;
		if (L_29)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00d4:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = ___quadsX0;
		V_4 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_0097;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_34 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMinValue_8;
		if (!L_34)
		{
			goto IL_00f8;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_35 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMinValue_8;
		NullCheck(L_35);
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_36 = __this->___Quads_1;
		NullCheck(L_36);
		G_B9_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))? 1 : 0);
		goto IL_00f9;
	}

IL_00f8:
	{
		G_B9_0 = 1;
	}

IL_00f9:
	{
		V_5 = (bool)G_B9_0;
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_0128;
		}
	}
	{
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_38 = __this->___Quads_1;
		NullCheck(L_38);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_39 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)));
		((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMinValue_8 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMinValue_8), (void*)L_39);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_40 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMinValue_8;
		QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB049156BFF8B2D26CF127F7BEDB142EB05D20B77(__this, L_40, (-3.4028234663852886E+38), QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB049156BFF8B2D26CF127F7BEDB142EB05D20B77_RuntimeMethod_var);
	}

IL_0128:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_41 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMaxValue_9;
		if (!L_41)
		{
			goto IL_0142;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_42 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMaxValue_9;
		NullCheck(L_42);
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_43 = __this->___Quads_1;
		NullCheck(L_43);
		G_B14_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))? 1 : 0);
		goto IL_0143;
	}

IL_0142:
	{
		G_B14_0 = 1;
	}

IL_0143:
	{
		V_6 = (bool)G_B14_0;
		bool L_44 = V_6;
		if (!L_44)
		{
			goto IL_0172;
		}
	}
	{
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_45 = __this->___Quads_1;
		NullCheck(L_45);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_46 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)));
		((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMaxValue_9 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMaxValue_9), (void*)L_46);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_47 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMaxValue_9;
		QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB049156BFF8B2D26CF127F7BEDB142EB05D20B77(__this, L_47, (3.4028234663852886E+38), QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB049156BFF8B2D26CF127F7BEDB142EB05D20B77_RuntimeMethod_var);
	}

IL_0172:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_48 = __this->____closestDistanceToCamera_6;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_49 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMaxValue_9;
		QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB(__this, L_48, L_49, QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_50 = __this->____closestDirectionToCamera_7;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_51 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMinValue_8;
		QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB(__this, L_50, L_51, QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_Dispose_m370BD509587A3696400F25EB3F11E50AA4EBD839 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadSpatialLayout_OnCameraRemoved_m823BFCC0771E4802AC4E954C0D662FE0047E5DE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_0 = __this->____cameraCollection_0;
		Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA* L_1 = (Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA*)il2cpp_codegen_object_new(Action_1_tC37FE72C4E58777C29F39FD2613CA27E8B9FA4EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mF2E73935C8EBAE62E8544E11513B1D568C32F569(L_1, __this, (intptr_t)((void*)QuadSpatialLayout_OnCameraRemoved_m823BFCC0771E4802AC4E954C0D662FE0047E5DE1_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		CameraCollection_remove_Removed_mBF79420AA67DE6A19586DC6D54E2C484842F9CC2(L_0, L_1, NULL);
		return;
	}
}
// System.Double VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::GetDistanceToCamera(System.Int32,System.Int32,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double QuadSpatialLayout_GetDistanceToCamera_m763B6A99D12E6495D946B97042DC1700E0712AA5 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___x0, int32_t ___z1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___offset2, bool ___readonly3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	double V_1 = 0.0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	double V_6 = 0.0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___z1;
		int32_t L_2;
		L_2 = QuadSpatialLayout_GetIndex_mC826C002A801732F54169A149A2700426807A6BB_inline(__this, L_0, L_1, NULL);
		V_0 = L_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = __this->____closestDistanceToCamera_6;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		double L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		double L_7 = V_1;
		if ((!(((double)L_7) == ((double)(3.4028234663852886E+38)))))
		{
			goto IL_0026;
		}
	}
	{
		bool L_8 = ___readonly3;
		G_B3_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_2 = (bool)G_B3_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		V_3 = 0;
		goto IL_006c;
	}

IL_0030:
	{
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_10 = __this->____cameraCollection_0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98 L_12;
		L_12 = CameraCollection_get_Item_mB5DF2172F05B9CAD94D695DC3ADAA0A3D80F2ED4(L_10, L_11, NULL);
		int32_t L_13 = L_12.___Id_0;
		int32_t L_14 = ___x0;
		int32_t L_15 = ___z1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___offset2;
		double L_17;
		L_17 = QuadSpatialLayout_GetDistanceToCamera_m039271B9FD35806AECA6A13863DDA4B32A52E611(__this, L_13, L_14, L_15, L_16, (bool)0, NULL);
		V_1 = L_17;
		double L_18 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = __this->____closestDistanceToCamera_6;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		double L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_4 = (bool)((((double)L_18) < ((double)L_22))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_0067;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_24 = __this->____closestDistanceToCamera_6;
		int32_t L_25 = V_0;
		double L_26 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (double)L_26);
	}

IL_0067:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_006c:
	{
		int32_t L_28 = V_3;
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_29 = __this->____cameraCollection_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = CameraCollection_get_Count_mE310A46C13ED0E6C9724FA90AA0C85B015FADE67(L_29, NULL);
		V_5 = (bool)((((int32_t)L_28) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0030;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_32 = __this->____closestDistanceToCamera_6;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		double L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_1 = L_35;
	}

IL_008a:
	{
		double L_36 = V_1;
		V_6 = L_36;
		goto IL_008f;
	}

IL_008f:
	{
		double L_37 = V_6;
		return L_37;
	}
}
// System.Double VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::GetDistanceToCamera(System.Int32,System.Int32,System.Int32,UnityEngine.Vector3&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double QuadSpatialLayout_GetDistanceToCamera_m039271B9FD35806AECA6A13863DDA4B32A52E611 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___camera0, int32_t ___x1, int32_t ___z2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___offset3, bool ___readonly4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	double V_5 = 0.0;
	bool V_6 = false;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_7 = NULL;
	double V_8 = 0.0;
	double V_9 = 0.0;
	Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* V_10 = NULL;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double G_B4_0 = 0.0;
	{
		bool L_0 = ___readonly4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2 = ___camera0;
		bool L_3;
		L_3 = QuadSpatialLayout_TryGetCachedData_m5A9D0BABC53EED9B422108472460A2D9EEA67917(__this, L_2, (&V_1), NULL);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		G_B4_0 = (3.4028234663852886E+38);
		goto IL_002d;
	}

IL_001e:
	{
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_4 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = L_4.___Distance_1;
		int32_t L_6 = ___x1;
		int32_t L_7 = ___z2;
		int32_t L_8;
		L_8 = QuadSpatialLayout_GetIndex_mC826C002A801732F54169A149A2700426807A6BB_inline(__this, L_6, L_7, NULL);
		NullCheck(L_5);
		int32_t L_9 = L_8;
		double L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		G_B4_0 = L_10;
	}

IL_002d:
	{
		V_2 = G_B4_0;
		goto IL_00f0;
	}

IL_0033:
	{
		int32_t L_11 = ___camera0;
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_12;
		L_12 = QuadSpatialLayout_GetCachedDataForCamera_mB0413042BE88746691A1002829F9F8FE4DEAB1C6(__this, L_11, NULL);
		V_3 = L_12;
		int32_t L_13 = ___x1;
		int32_t L_14 = ___z2;
		int32_t L_15;
		L_15 = QuadSpatialLayout_GetIndex_mC826C002A801732F54169A149A2700426807A6BB_inline(__this, L_13, L_14, NULL);
		V_4 = L_15;
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_16 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = L_16.___Distance_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		double L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = L_20;
		double L_21 = V_5;
		V_6 = (bool)((((double)L_21) == ((double)(3.4028234663852886E+38)))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00eb;
		}
	}
	{
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_23 = __this->____cameraCollection_0;
		int32_t L_24 = ___camera0;
		NullCheck(L_23);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25;
		L_25 = CameraCollection_GetCameraById_m731D62AEC6BDBAD1E1E90DB35D9E65E474AAD6DF(L_23, L_24, NULL);
		V_7 = L_25;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = V_7;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = ___offset3;
		float L_31 = L_30->___x_2;
		V_8 = ((double)((float)il2cpp_codegen_subtract(L_29, L_31)));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = V_7;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = ___offset3;
		float L_37 = L_36->___z_4;
		V_9 = ((double)((float)il2cpp_codegen_subtract(L_35, L_37)));
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_38 = __this->___Quads_1;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		V_10 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)));
		Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* L_40 = V_10;
		double L_41 = L_40->___CenterX_0;
		V_11 = L_41;
		Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* L_42 = V_10;
		double L_43 = L_42->___CenterY_1;
		V_12 = L_43;
		double L_44;
		L_44 = QuadSpatialLayout_DistanceSqr_m8B8409B05FE713978C7B39C205A7746B3E968B25_inline(__this, (&V_11), (&V_12), (&V_8), (&V_9), NULL);
		V_5 = L_44;
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_45 = V_3;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_46 = L_45.___Distance_1;
		int32_t L_47 = V_4;
		double L_48 = V_5;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (double)L_48);
	}

IL_00eb:
	{
		double L_49 = V_5;
		V_2 = L_49;
		goto IL_00f0;
	}

IL_00f0:
	{
		double L_50 = V_2;
		return L_50;
	}
}
// System.Double[] VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::GetClosestDistancesToCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* QuadSpatialLayout_GetClosestDistancesToCamera_m276F69A87D39AD3C85518103E6410310F602A8CA (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = __this->____closestDistanceToCamera_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = V_0;
		return L_1;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::Cache(System.Double,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_Cache_mF5BA65AB5626A2C504B96B8661DCEFB5F7815908 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, double ___range0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A150505A4E6BC554381059ED0E1EDF3957AC188);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteralA74ACAA1F61DE0EB348EC03946685B0B6270CB36, NULL);
		QuadSpatialLayout_ClearCache_mC0BE582A0B95C61C55B2225A3119F4C6D3767E8F(__this, NULL);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543(_stringLiteral2A150505A4E6BC554381059ED0E1EDF3957AC188, NULL);
		double L_0 = ___range0;
		QuadSpatialLayout_CalculateDistanceToCamera_m9E6C9E612296A2DCE86FC60D8A955AEEFA556D73(__this, L_0, (&___offset1), NULL);
		ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5(NULL);
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::ClearCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_ClearCache_mC0BE582A0B95C61C55B2225A3119F4C6D3767E8F (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = __this->____closestDistanceToCamera_6;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMaxValue_9;
		QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB(__this, L_0, L_1, QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = __this->____closestDirectionToCamera_7;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMinValue_8;
		QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB(__this, L_2, L_3, QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var);
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_4 = __this->____cachedData_5;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_inline(L_4, List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_RuntimeMethod_var);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0075;
	}

IL_0035:
	{
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_6 = __this->____cachedData_5;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_8;
		L_8 = List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946(L_6, L_7, List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_RuntimeMethod_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = L_8.___Distance_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMaxValue_9;
		QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB(__this, L_9, L_10, QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var);
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_11 = __this->____cachedData_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_13;
		L_13 = List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946(L_11, L_12, List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_RuntimeMethod_var);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = L_13.___Direction_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMinValue_8;
		QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB(__this, L_14, L_15, QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0075:
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		V_2 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_2;
		if (L_19)
		{
			goto IL_0035;
		}
	}
	{
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::OnCameraRemoved(VisualDesignCafe.Rendering.Nature.CameraCollection/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_OnCameraRemoved_m823BFCC0771E4802AC4E954C0D662FE0047E5DE1 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98 ___entry0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m10969407186E28ED52B22F4F78AE007BA3F1E64C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_0 = __this->____cachedData_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_inline(L_0, List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0042;
	}

IL_0011:
	{
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_2 = __this->____cachedData_5;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_4;
		L_4 = List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946(L_2, L_3, List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_RuntimeMethod_var);
		int32_t L_5 = L_4.___Id_0;
		Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98 L_6 = ___entry0;
		int32_t L_7 = L_6.___Id_0;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_9 = __this->____cachedData_5;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		List_1_RemoveAt_m10969407186E28ED52B22F4F78AE007BA3F1E64C(L_9, L_10, List_1_RemoveAt_m10969407186E28ED52B22F4F78AE007BA3F1E64C_RuntimeMethod_var);
		goto IL_004a;
	}

IL_003e:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0011;
		}
	}

IL_004a:
	{
		return;
	}
}
// System.Boolean VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::TryGetCachedData(System.Int32,VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuadSpatialLayout_TryGetCachedData_m5A9D0BABC53EED9B422108472460A2D9EEA67917 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___camera0, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* ___cachedData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_0 = __this->____cachedData_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_inline(L_0, List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0044;
	}

IL_0011:
	{
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_2 = __this->____cachedData_5;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_4;
		L_4 = List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946(L_2, L_3, List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_RuntimeMethod_var);
		int32_t L_5 = L_4.___Id_0;
		int32_t L_6 = ___camera0;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* L_8 = ___cachedData1;
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_9 = __this->____cachedData_5;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_11;
		L_11 = List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946(L_9, L_10, List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_RuntimeMethod_var);
		*(CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112*)L_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)&(((CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112*)L_8)->___Distance_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112*)L_8)->___Direction_2), (void*)NULL);
		#endif
		V_3 = (bool)1;
		goto IL_0059;
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0044:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_0011;
		}
	}
	{
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* L_16 = ___cachedData1;
		il2cpp_codegen_initobj(L_16, sizeof(CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112));
		V_3 = (bool)0;
		goto IL_0059;
	}

IL_0059:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::SetCachedData(System.Int32,VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_SetCachedData_mF0CE0F73BC5CDEE1CF13A8EAB8C2BE468DE4105D (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___camera0, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* ___cachedData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m145D862E5992A05767DD0D16530E23B0D6580560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mC6C56F90B8EC08F746129D8D1FCED0C9BEF1B0E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_0 = __this->____cachedData_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_inline(L_0, List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0043;
	}

IL_0011:
	{
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_2 = __this->____cachedData_5;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_4;
		L_4 = List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946(L_2, L_3, List_1_get_Item_m010CCD72C7F2CA5C031AF84268CDF466A7315946_RuntimeMethod_var);
		int32_t L_5 = L_4.___Id_0;
		int32_t L_6 = ___camera0;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_8 = __this->____cachedData_5;
		int32_t L_9 = V_1;
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* L_10 = ___cachedData1;
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_11 = (*(CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112*)L_10);
		NullCheck(L_8);
		List_1_set_Item_mC6C56F90B8EC08F746129D8D1FCED0C9BEF1B0E8(L_8, L_9, L_11, List_1_set_Item_mC6C56F90B8EC08F746129D8D1FCED0C9BEF1B0E8_RuntimeMethod_var);
		goto IL_005d;
	}

IL_003f:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0043:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0011;
		}
	}
	{
		List_1_t44A25F3C59962F4750C12ACC843610740D56B163* L_16 = __this->____cachedData_5;
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* L_17 = ___cachedData1;
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_18 = (*(CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112*)L_17);
		NullCheck(L_16);
		List_1_Add_m145D862E5992A05767DD0D16530E23B0D6580560_inline(L_16, L_18, List_1_Add_m145D862E5992A05767DD0D16530E23B0D6580560_RuntimeMethod_var);
	}

IL_005d:
	{
		return;
	}
}
// VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::GetCachedDataForCamera(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 QuadSpatialLayout_GetCachedDataForCamera_mB0413042BE88746691A1002829F9F8FE4DEAB1C6 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___camera0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___camera0;
		bool L_1;
		L_1 = QuadSpatialLayout_TryGetCachedData_m5A9D0BABC53EED9B422108472460A2D9EEA67917(__this, L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_2 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = L_2.___Direction_2;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_4 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = L_4.___Direction_2;
		NullCheck(L_5);
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_6 = __this->___Quads_1;
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_7 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = L_7.___Distance_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_9 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_10 = L_9.___Distance_1;
		NullCheck(L_10);
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_11 = __this->___Quads_1;
		NullCheck(L_11);
		G_B6_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B6_0 = 1;
	}

IL_0046:
	{
		V_1 = (bool)G_B6_0;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_13 = ___camera0;
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_14 = __this->___Quads_1;
		NullCheck(L_14);
		CachedData__ctor_mB1417F75FD1ED13D31EAC94598032C65CD469203((&V_0), L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length)), NULL);
		int32_t L_15 = ___camera0;
		QuadSpatialLayout_SetCachedData_mF0CE0F73BC5CDEE1CF13A8EAB8C2BE468DE4105D(__this, L_15, (&V_0), NULL);
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_16 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_17 = L_16.___Direction_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_18 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMinValue_8;
		QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB(__this, L_17, L_18, QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var);
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_19 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_20 = L_19.___Distance_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_21 = ((QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_StaticFields*)il2cpp_codegen_static_fields_for(QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977_il2cpp_TypeInfo_var))->____floatMaxValue_9;
		QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB(__this, L_20, L_21, QuadSpatialLayout_FillArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF088E28AA4A0745B6432F6A4C2B9D09E2205B9BB_RuntimeMethod_var);
	}

IL_008a:
	{
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_22 = V_0;
		V_2 = L_22;
		goto IL_008e;
	}

IL_008e:
	{
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_23 = V_2;
		return L_23;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::CalculateDistanceToCamera(System.Double,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadSpatialLayout_CalculateDistanceToCamera_m9E6C9E612296A2DCE86FC60D8A955AEEFA556D73 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, double ___range0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	double V_10 = 0.0;
	double V_11 = 0.0;
	CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 V_12;
	memset((&V_12), 0, sizeof(V_12));
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_13 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_14 = NULL;
	double V_15 = 0.0;
	double V_16 = 0.0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* V_20 = NULL;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	{
		V_0 = 0;
		goto IL_01e9;
	}

IL_0008:
	{
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_0 = __this->____cameraCollection_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98 L_2;
		L_2 = CameraCollection_get_Item_mB5DF2172F05B9CAD94D695DC3ADAA0A3D80F2ED4(L_0, L_1, NULL);
		V_1 = L_2;
		Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98 L_3 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = L_3.___Camera_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___offset1;
		float L_9 = L_8->___x_2;
		V_2 = ((double)((float)il2cpp_codegen_subtract(L_7, L_9)));
		Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98 L_10 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = L_10.___Camera_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___offset1;
		float L_16 = L_15->___z_4;
		V_3 = ((double)((float)il2cpp_codegen_subtract(L_14, L_16)));
		double L_17 = __this->___QuadSize_4;
		V_4 = ((double)((1.0)/L_17));
		double L_18 = V_2;
		double L_19 = ___range0;
		double L_20 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = floor(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_18, L_19)), L_20)));
		int32_t L_22;
		L_22 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(il2cpp_codegen_cast_double_to_int<int32_t>(L_21), 0, NULL);
		V_5 = L_22;
		double L_23 = V_3;
		double L_24 = ___range0;
		double L_25 = V_4;
		double L_26;
		L_26 = floor(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_23, L_24)), L_25)));
		int32_t L_27;
		L_27 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(il2cpp_codegen_cast_double_to_int<int32_t>(L_26), 0, NULL);
		V_6 = L_27;
		double L_28 = V_2;
		double L_29 = ___range0;
		double L_30 = V_4;
		double L_31;
		L_31 = ceil(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_28, L_29)), L_30)));
		int32_t L_32 = __this->___QuadsX_2;
		int32_t L_33;
		L_33 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(il2cpp_codegen_cast_double_to_int<int32_t>(L_31), L_32, NULL);
		V_7 = L_33;
		double L_34 = V_3;
		double L_35 = ___range0;
		double L_36 = V_4;
		double L_37;
		L_37 = ceil(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_34, L_35)), L_36)));
		int32_t L_38 = __this->___QuadsY_3;
		int32_t L_39;
		L_39 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(il2cpp_codegen_cast_double_to_int<int32_t>(L_37), L_38, NULL);
		V_8 = L_39;
		Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98 L_40 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_41 = L_40.___Camera_1;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_42, L_43, NULL);
		V_9 = L_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_9;
		float L_46 = L_45.___x_2;
		V_10 = ((double)L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_9;
		float L_48 = L_47.___z_4;
		V_11 = ((double)L_48);
		Entry_tCBCF421BEBEB4C777CDC823344B0B19F10038C98 L_49 = V_1;
		int32_t L_50 = L_49.___Id_0;
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_51;
		L_51 = QuadSpatialLayout_GetCachedDataForCamera_mB0413042BE88746691A1002829F9F8FE4DEAB1C6(__this, L_50, NULL);
		V_12 = L_51;
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_52 = V_12;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53 = L_52.___Distance_1;
		V_13 = L_53;
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_54 = V_12;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_55 = L_54.___Direction_2;
		V_14 = L_55;
		int32_t L_56 = V_6;
		V_18 = L_56;
		goto IL_01d5;
	}

IL_0112:
	{
		int32_t L_57 = V_5;
		V_19 = L_57;
		goto IL_01c0;
	}

IL_011b:
	{
		int32_t L_58 = V_19;
		int32_t L_59 = V_18;
		int32_t L_60;
		L_60 = QuadSpatialLayout_GetIndex_mC826C002A801732F54169A149A2700426807A6BB_inline(__this, L_58, L_59, NULL);
		V_17 = L_60;
		QuadU5BU5D_tE3D9B19236092DBD672FC106ED3BF7CEA0A7C0BC* L_61 = __this->___Quads_1;
		int32_t L_62 = V_17;
		NullCheck(L_61);
		V_20 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)));
		Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* L_63 = V_20;
		double* L_64 = (&L_63->___CenterX_0);
		Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* L_65 = V_20;
		double* L_66 = (&L_65->___CenterY_1);
		double L_67;
		L_67 = QuadSpatialLayout_DistanceSqr_m8B8409B05FE713978C7B39C205A7746B3E968B25_inline(__this, L_64, L_66, (&V_2), (&V_3), NULL);
		V_15 = L_67;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_68 = V_13;
		int32_t L_69 = V_17;
		double L_70 = V_15;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (double)L_70);
		double L_71 = V_15;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_72 = __this->____closestDistanceToCamera_6;
		int32_t L_73 = V_17;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		double L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_21 = (bool)((((double)L_71) < ((double)L_75))? 1 : 0);
		bool L_76 = V_21;
		if (!L_76)
		{
			goto IL_0176;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_77 = __this->____closestDistanceToCamera_6;
		int32_t L_78 = V_17;
		double L_79 = V_15;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (double)L_79);
	}

IL_0176:
	{
		Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* L_80 = V_20;
		double* L_81 = (&L_80->___CenterX_0);
		Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* L_82 = V_20;
		double* L_83 = (&L_82->___CenterY_1);
		double L_84;
		L_84 = QuadSpatialLayout_Direction_m5EBC991F14D237089E137BBCE514A3ED62FD592B_inline(__this, L_81, L_83, (&V_2), (&V_3), (&V_10), (&V_11), NULL);
		V_16 = L_84;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_85 = V_14;
		int32_t L_86 = V_17;
		double L_87 = V_16;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (double)L_87);
		double L_88 = V_16;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_89 = __this->____closestDirectionToCamera_7;
		int32_t L_90 = V_17;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		double L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		V_22 = (bool)((((double)L_88) > ((double)L_92))? 1 : 0);
		bool L_93 = V_22;
		if (!L_93)
		{
			goto IL_01b9;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_94 = __this->____closestDirectionToCamera_7;
		int32_t L_95 = V_17;
		double L_96 = V_16;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (double)L_96);
	}

IL_01b9:
	{
		int32_t L_97 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_01c0:
	{
		int32_t L_98 = V_19;
		int32_t L_99 = V_7;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_101 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01d5:
	{
		int32_t L_102 = V_18;
		int32_t L_103 = V_8;
		V_24 = (bool)((((int32_t)L_102) < ((int32_t)L_103))? 1 : 0);
		bool L_104 = V_24;
		if (L_104)
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_105 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_01e9:
	{
		int32_t L_106 = V_0;
		CameraCollection_t45242DD574DD1C0B4FF6DA5977F981DEE573748F* L_107 = __this->____cameraCollection_0;
		NullCheck(L_107);
		int32_t L_108;
		L_108 = CameraCollection_get_Count_mE310A46C13ED0E6C9724FA90AA0C85B015FADE67(L_107, NULL);
		V_25 = (bool)((((int32_t)L_106) < ((int32_t)L_108))? 1 : 0);
		bool L_109 = V_25;
		if (L_109)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Double VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::DistanceSqr(System.Double&,System.Double&,System.Double&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double QuadSpatialLayout_DistanceSqr_m8B8409B05FE713978C7B39C205A7746B3E968B25 (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, double* ___aX0, double* ___aY1, double* ___bX2, double* ___bY3, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		double* L_0 = ___aX0;
		double L_1 = *((double*)L_0);
		double* L_2 = ___bX2;
		double L_3 = *((double*)L_2);
		V_0 = ((double)il2cpp_codegen_subtract(L_1, L_3));
		double* L_4 = ___aY1;
		double L_5 = *((double*)L_4);
		double* L_6 = ___bY3;
		double L_7 = *((double*)L_6);
		V_1 = ((double)il2cpp_codegen_subtract(L_5, L_7));
		double L_8 = V_0;
		double L_9 = V_0;
		double L_10 = V_1;
		double L_11 = V_1;
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_8, L_9)), ((double)il2cpp_codegen_multiply(L_10, L_11))));
		goto IL_0018;
	}

IL_0018:
	{
		double L_12 = V_2;
		return L_12;
	}
}
// System.Double VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::Direction(System.Double&,System.Double&,System.Double&,System.Double&,System.Double&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double QuadSpatialLayout_Direction_m5EBC991F14D237089E137BBCE514A3ED62FD592B (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, double* ___targetX0, double* ___targetY1, double* ___currentX2, double* ___currentY3, double* ___forwardX4, double* ___forwardY5, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		double* L_0 = ___targetX0;
		double L_1 = *((double*)L_0);
		double* L_2 = ___currentX2;
		double L_3 = *((double*)L_2);
		V_0 = ((double)il2cpp_codegen_subtract(L_1, L_3));
		double* L_4 = ___targetY1;
		double L_5 = *((double*)L_4);
		double* L_6 = ___currentY3;
		double L_7 = *((double*)L_6);
		V_1 = ((double)il2cpp_codegen_subtract(L_5, L_7));
		double L_8 = V_0;
		double* L_9 = ___forwardX4;
		double L_10 = *((double*)L_9);
		double L_11 = V_1;
		double* L_12 = ___forwardY5;
		double L_13 = *((double*)L_12);
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_8, L_10)), ((double)il2cpp_codegen_multiply(L_11, L_13))));
		goto IL_001c;
	}

IL_001c:
	{
		double L_14 = V_2;
		return L_14;
	}
}
// System.Int32 VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout::GetIndex(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuadSpatialLayout_GetIndex_mC826C002A801732F54169A149A2700426807A6BB (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___z1;
		int32_t L_1 = __this->___QuadsX_2;
		int32_t L_2 = ___x0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
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
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/Quad::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quad__ctor_m3931444C10918A9136364B002AE129314C201D2E (Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* __this, double ___x0, double ___y1, const RuntimeMethod* method) 
{
	{
		double L_0 = ___x0;
		__this->___CenterX_0 = L_0;
		double L_1 = ___y1;
		__this->___CenterY_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Quad__ctor_m3931444C10918A9136364B002AE129314C201D2E_AdjustorThunk (RuntimeObject* __this, double ___x0, double ___y1, const RuntimeMethod* method)
{
	Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Quad_t8D93FED2C8852B2F1E7953695994C4CD8582CDF6*>(__this + _offset);
	Quad__ctor_m3931444C10918A9136364B002AE129314C201D2E(_thisAdjusted, ___x0, ___y1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData
IL2CPP_EXTERN_C void CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshal_pinvoke(const CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112& unmarshaled, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshaled_pinvoke& marshaled)
{
	marshaled.___Id_0 = unmarshaled.___Id_0;
	marshaled.___Distance_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R8, unmarshaled.___Distance_1);
	marshaled.___Direction_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R8, unmarshaled.___Direction_2);
}
IL2CPP_EXTERN_C void CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshal_pinvoke_back(const CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshaled_pinvoke& marshaled, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledId_temp_0 = 0;
	unmarshaledId_temp_0 = marshaled.___Id_0;
	unmarshaled.___Id_0 = unmarshaledId_temp_0;
	unmarshaled.___Distance_1 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R8, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, marshaled.___Distance_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Distance_1), (void*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R8, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, marshaled.___Distance_1));
	unmarshaled.___Direction_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R8, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, marshaled.___Direction_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Direction_2), (void*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R8, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, marshaled.___Direction_2));
}
// Conversion method for clean up from marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData
IL2CPP_EXTERN_C void CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshal_pinvoke_cleanup(CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Distance_1);
	marshaled.___Distance_1 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Direction_2);
	marshaled.___Direction_2 = NULL;
}
// Conversion methods for marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData
IL2CPP_EXTERN_C void CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshal_com(const CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112& unmarshaled, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshaled_com& marshaled)
{
	marshaled.___Id_0 = unmarshaled.___Id_0;
	marshaled.___Distance_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R8, unmarshaled.___Distance_1);
	marshaled.___Direction_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R8, unmarshaled.___Direction_2);
}
IL2CPP_EXTERN_C void CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshal_com_back(const CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshaled_com& marshaled, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledId_temp_0 = 0;
	unmarshaledId_temp_0 = marshaled.___Id_0;
	unmarshaled.___Id_0 = unmarshaledId_temp_0;
	unmarshaled.___Distance_1 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R8, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, marshaled.___Distance_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Distance_1), (void*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R8, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, marshaled.___Distance_1));
	unmarshaled.___Direction_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R8, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, marshaled.___Direction_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Direction_2), (void*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R8, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, marshaled.___Direction_2));
}
// Conversion method for clean up from marshalling of: VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData
IL2CPP_EXTERN_C void CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshal_com_cleanup(CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Distance_1);
	marshaled.___Distance_1 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Direction_2);
	marshaled.___Direction_2 = NULL;
}
// System.Void VisualDesignCafe.Rendering.Nature.Streaming.QuadSpatialLayout/CachedData::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedData__ctor_mB1417F75FD1ED13D31EAC94598032C65CD469203 (CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* __this, int32_t ___id0, int32_t ___capacity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___id0;
		__this->___Id_0 = L_0;
		int32_t L_1 = ___capacity1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___Distance_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Distance_1), (void*)L_2);
		int32_t L_3 = ___capacity1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___Direction_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Direction_2), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void CachedData__ctor_mB1417F75FD1ED13D31EAC94598032C65CD469203_AdjustorThunk (RuntimeObject* __this, int32_t ___id0, int32_t ___capacity1, const RuntimeMethod* method)
{
	CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112*>(__this + _offset);
	CachedData__ctor_mB1417F75FD1ED13D31EAC94598032C65CD469203(_thisAdjusted, ___id0, ___capacity1, method);
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
// System.Boolean VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnSettings_Equals_mB5A238F32856F589CEFA5966FDC3A6E9DE8DC263 (SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISpawnSettings_t9C0E228689B39ED0EB87B6D0E3DFBCAE812DC4D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___obj0;
		bool L_1;
		L_1 = SpawnSettings_Equals_mE81C7534CED8A3B33E1AFBD2528DE9E138E0B637(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ISpawnSettings_t9C0E228689B39ED0EB87B6D0E3DFBCAE812DC4D3_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool SpawnSettings_Equals_mB5A238F32856F589CEFA5966FDC3A6E9DE8DC263_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F*>(__this + _offset);
	bool _returnValue;
	_returnValue = SpawnSettings_Equals_mB5A238F32856F589CEFA5966FDC3A6E9DE8DC263(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings::Equals(VisualDesignCafe.Rendering.Nature.Spawning.ISpawnSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnSettings_Equals_mE81C7534CED8A3B33E1AFBD2528DE9E138E0B637 (SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	{
		RuntimeObject* L_0 = ___other0;
		RuntimeObject* L_1 = L_0;
		V_2 = L_1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((*(SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F*)((SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F*)(SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F*)UnBox(L_2, SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F_il2cpp_TypeInfo_var))));
		G_B3_0 = 1;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_1 = (bool)((((int32_t)G_B3_0) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_007f;
	}

IL_0021:
	{
		float L_4 = __this->___NoiseSpread_0;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F L_5 = V_0;
		float L_6 = L_5.___NoiseSpread_0;
		if ((!(((float)L_4) == ((float)L_6))))
		{
			goto IL_007b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___ScaleMin_1;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8.___ScaleMin_1;
		bool L_10;
		L_10 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_007b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___ScaleMax_2;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12.___ScaleMax_2;
		bool L_14;
		L_14 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_007b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___Offset_3;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16.___Offset_3;
		bool L_18;
		L_18 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = __this->___Orientation_4;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F L_20 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20.___Orientation_4;
		bool L_22;
		L_22 = Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline(L_19, L_21, NULL);
		G_B11_0 = ((int32_t)(L_22));
		goto IL_007c;
	}

IL_007b:
	{
		G_B11_0 = 0;
	}

IL_007c:
	{
		V_3 = (bool)G_B11_0;
		goto IL_007f;
	}

IL_007f:
	{
		bool L_23 = V_3;
		return L_23;
	}
}
IL2CPP_EXTERN_C  bool SpawnSettings_Equals_mE81C7534CED8A3B33E1AFBD2528DE9E138E0B637_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F*>(__this + _offset);
	bool _returnValue;
	_returnValue = SpawnSettings_Equals_mE81C7534CED8A3B33E1AFBD2528DE9E138E0B637(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 VisualDesignCafe.Rendering.Nature.Spawning.SpawnSettings::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpawnSettings_GetHashCode_m12E589316E158148B826462578A15A9B690D38C0 (SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)-680173923);
		int32_t L_0 = V_0;
		float* L_1 = (&__this->___NoiseSpread_0);
		int32_t L_2;
		L_2 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)-1521134295))), L_2));
		int32_t L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___ScaleMin_1);
		int32_t L_5;
		L_5 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_4, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)-1521134295))), L_5));
		int32_t L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___ScaleMax_2);
		int32_t L_8;
		L_8 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_7, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)-1521134295))), L_8));
		int32_t L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___Offset_3);
		int32_t L_11;
		L_11 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_10, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)-1521134295))), L_11));
		int32_t L_12 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_13 = (&__this->___Orientation_4);
		int32_t L_14;
		L_14 = Quaternion_GetHashCode_m5F55C34C98E437376595E722BE4EB8A70434F049_inline(L_13, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)-1521134295))), L_14));
		int32_t L_15 = V_0;
		V_1 = L_15;
		goto IL_0087;
	}

IL_0087:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C  int32_t SpawnSettings_GetHashCode_m12E589316E158148B826462578A15A9B690D38C0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SpawnSettings_GetHashCode_m12E589316E158148B826462578A15A9B690D38C0(_thisAdjusted, method);
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
// System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::.ctor(VisualDesignCafe.Rendering.Nature.TerrainDetail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_mE3D025ACE2622FD17C5127F882D5F7DBB4DE8176 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* ___detail0, const RuntimeMethod* method) 
{
	TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* G_B2_0 = NULL;
	Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* G_B2_1 = NULL;
	TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* G_B1_0 = NULL;
	Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* L_0 = ___detail0;
		TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* L_1 = L_0;
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
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B8418D3D638399304072A5F92555FAAA7ADE53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner__ctor_mE3D025ACE2622FD17C5127F882D5F7DBB4DE8176_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->___Detail_2 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___Detail_2), (void*)G_B2_0);
		TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* L_3 = ___detail0;
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* >::Invoke(7 /* System.Boolean VisualDesignCafe.Rendering.Nature.Spawning.Spawner::Refresh(VisualDesignCafe.Rendering.Nature.TerrainDetail) */, __this, L_3);
		return;
	}
}
// System.Boolean VisualDesignCafe.Rendering.Nature.Spawning.Spawner::Refresh(VisualDesignCafe.Rendering.Nature.TerrainDetail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Spawner_Refresh_m4890F32AC6283EE81D6D5B7BBCCB322A8D55D516 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* ___terrainDetail0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDetail_GetProperty_TisDetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB_m2107EC6273B735C2C3D133B1DC387A2E7F76D4E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDetail_GetProperty_TisDetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142_mEF0657CAA40B989F00FBA07292E2BD8B4E504BC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainDetail_GetProperty_TisDetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825_m9A84C071075EC3A1CC02A9A10FEA227178811C04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F L_0 = __this->___Settings_3;
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_1), sizeof(SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F));
		TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* L_1 = ___terrainDetail0;
		NullCheck(L_1);
		DetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB* L_2;
		L_2 = TerrainDetail_GetProperty_TisDetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB_m2107EC6273B735C2C3D133B1DC387A2E7F76D4E9(L_1, TerrainDetail_GetProperty_TisDetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB_m2107EC6273B735C2C3D133B1DC387A2E7F76D4E9_RuntimeMethod_var);
		NullCheck(L_2);
		float L_3;
		L_3 = DetailNoiseSpread_get_NoiseSpread_mB400384F184F7ED37EACAEB20C4548845B381A25_inline(L_2, NULL);
		(&V_1)->___NoiseSpread_0 = L_3;
		TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* L_4 = ___terrainDetail0;
		NullCheck(L_4);
		DetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825* L_5;
		L_5 = TerrainDetail_GetProperty_TisDetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825_m9A84C071075EC3A1CC02A9A10FEA227178811C04(L_4, TerrainDetail_GetProperty_TisDetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825_m9A84C071075EC3A1CC02A9A10FEA227178811C04_RuntimeMethod_var);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = DetailTransform_get_Offset_m496544F586273ADB92DE928794AD4CBD4323E67D_inline(L_5, NULL);
		(&V_1)->___Offset_3 = L_6;
		TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* L_7 = ___terrainDetail0;
		NullCheck(L_7);
		DetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825* L_8;
		L_8 = TerrainDetail_GetProperty_TisDetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825_m9A84C071075EC3A1CC02A9A10FEA227178811C04(L_7, TerrainDetail_GetProperty_TisDetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825_m9A84C071075EC3A1CC02A9A10FEA227178811C04_RuntimeMethod_var);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = DetailTransform_get_Orientation_mBF2D47914C324C3C9A02961527894052D110B3C1_inline(L_8, NULL);
		(&V_1)->___Orientation_4 = L_9;
		TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* L_10 = ___terrainDetail0;
		NullCheck(L_10);
		DetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142* L_11;
		L_11 = TerrainDetail_GetProperty_TisDetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142_mEF0657CAA40B989F00FBA07292E2BD8B4E504BC8(L_10, TerrainDetail_GetProperty_TisDetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142_mEF0657CAA40B989F00FBA07292E2BD8B4E504BC8_RuntimeMethod_var);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = DetailSize_get_MaxScale_m920EFEF6D608FC45A556BBB7AC8D2AEAB23D0094_inline(L_11, NULL);
		(&V_1)->___ScaleMax_2 = L_12;
		TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* L_13 = ___terrainDetail0;
		NullCheck(L_13);
		DetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142* L_14;
		L_14 = TerrainDetail_GetProperty_TisDetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142_mEF0657CAA40B989F00FBA07292E2BD8B4E504BC8(L_13, TerrainDetail_GetProperty_TisDetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142_mEF0657CAA40B989F00FBA07292E2BD8B4E504BC8_RuntimeMethod_var);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = DetailSize_get_MinScale_mF44F4246BF41DB230C6944B872DC03EB6393F088_inline(L_14, NULL);
		(&V_1)->___ScaleMin_1 = L_15;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F L_16 = V_1;
		__this->___Settings_3 = L_16;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* L_17 = (&__this->___Settings_3);
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F L_18 = V_0;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F L_19 = L_18;
		RuntimeObject* L_20 = Box(SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F_il2cpp_TypeInfo_var, &L_19);
		bool L_21;
		L_21 = SpawnSettings_Equals_mE81C7534CED8A3B33E1AFBD2528DE9E138E0B637(L_17, (RuntimeObject*)L_20, NULL);
		V_2 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_0088;
	}

IL_0088:
	{
		bool L_22 = V_2;
		return L_22;
	}
}
// System.Int32 VisualDesignCafe.Rendering.Nature.Spawning.Spawner::GetCapacity(VisualDesignCafe.Rendering.Nature.TerrainData,VisualDesignCafe.Rendering.Nature.TerrainRect& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Spawner_GetCapacity_m4CB42D15F1F2BF40C22FDF5CF5562F6A9650783D (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData0, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* ___terrainRect1, const RuntimeMethod* method) 
{
	DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_0 = ___terrainData0;
		V_1 = (bool)((((RuntimeObject*)(TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralABA2DC431CAFBB027FE00F1228FA7AA3F6239E81)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_GetCapacity_m4CB42D15F1F2BF40C22FDF5CF5562F6A9650783D_RuntimeMethod_var)));
	}

IL_0014:
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_3 = ___terrainData0;
		NullCheck(L_3);
		bool L_4;
		L_4 = TerrainData_get_IsDisposed_mDD848B72976FB21C15527E5BD8BF3B388CC9540F_inline(L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* L_6 = (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_GetCapacity_m4CB42D15F1F2BF40C22FDF5CF5562F6A9650783D_RuntimeMethod_var)));
	}

IL_0024:
	{
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* L_7 = ___terrainRect1;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_8 = ___terrainData0;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_9;
		memset((&L_9), 0, sizeof(L_9));
		DetailmapRect__ctor_m462E41EEDF44F2D90628DB9F8A1AC0385883A840((&L_9), L_7, L_8, 0, 0, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10;
		L_10 = Spawner_GetCapacity_m7BBC5F64344E421B5494239DDD060A25B0447CAF(__this, (&V_0), NULL);
		V_3 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_11 = V_3;
		return L_11;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::Spawn(VisualDesignCafe.Rendering.Nature.TerrainData,VisualDesignCafe.Rendering.Nature.TerrainRect& modreq(System.Runtime.InteropServices.InAttribute),VisualDesignCafe.Rendering.Nature.Spawning.SpawnResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_Spawn_m75A9F6EEBA231174751A00258EB02435310AC9B6 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData0, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* ___terrainRect1, SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD1C08FEB8E37DA6FB32E18E7F25ACEF8DFE3E015_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedArray_1_get_IsDisposed_mDD25ABE1E521872DB5D53AE53576208C4FDA10D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* V_0 = NULL;
	SpawnRect_t697D9DDF1846BD14EB9ED69C06AC9EA13072DB27 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	float V_16 = 0.0f;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B27_0 = 0;
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_0 = ___terrainData0;
		V_7 = (bool)((((RuntimeObject*)(TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_7;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralABA2DC431CAFBB027FE00F1228FA7AA3F6239E81)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_Spawn_m75A9F6EEBA231174751A00258EB02435310AC9B6_RuntimeMethod_var)));
	}

IL_0016:
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_3 = ___terrainData0;
		NullCheck(L_3);
		bool L_4;
		L_4 = TerrainData_get_IsDisposed_mDD848B72976FB21C15527E5BD8BF3B388CC9540F_inline(L_3, NULL);
		V_8 = L_4;
		bool L_5 = V_8;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* L_6 = (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_Spawn_m75A9F6EEBA231174751A00258EB02435310AC9B6_RuntimeMethod_var)));
	}

IL_0028:
	{
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_7 = ___result2;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0* L_8 = (&L_7->___Instances_0);
		bool L_9;
		L_9 = NativeArray_1_get_IsCreated_mD1C08FEB8E37DA6FB32E18E7F25ACEF8DFE3E015(L_8, NativeArray_1_get_IsCreated_mD1C08FEB8E37DA6FB32E18E7F25ACEF8DFE3E015_RuntimeMethod_var);
		V_9 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_9;
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_11 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1262BBA446B495C97EDCC403B73F785171FA8C5A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_Spawn_m75A9F6EEBA231174751A00258EB02435310AC9B6_RuntimeMethod_var)));
	}

IL_0047:
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_12 = ___terrainData0;
		NullCheck(L_12);
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_13;
		L_13 = TerrainData_get_Detailmaps_mC8C36C1DBBD4DB93007E602B3BB9D8423109858A_inline(L_12, NULL);
		TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* L_14 = __this->___Detail_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___Index_7;
		NullCheck(L_13);
		int32_t L_16 = L_15;
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = L_17;
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_18 = V_0;
		if (!L_18)
		{
			goto IL_0065;
		}
	}
	{
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_19 = V_0;
		NullCheck(L_19);
		bool L_20;
		L_20 = Detailmap_get_IsDisposed_m1982E111A7787F7CD4CDF9080D74B7E6CD18D6DD(L_19, NULL);
		G_B9_0 = ((int32_t)(L_20));
		goto IL_0066;
	}

IL_0065:
	{
		G_B9_0 = 1;
	}

IL_0066:
	{
		V_10 = (bool)G_B9_0;
		bool L_21 = V_10;
		if (!L_21)
		{
			goto IL_0072;
		}
	}
	{
		TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* L_22 = (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C(L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_Spawn_m75A9F6EEBA231174751A00258EB02435310AC9B6_RuntimeMethod_var)));
	}

IL_0072:
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_23 = ___terrainData0;
		NullCheck(L_23);
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_24;
		L_24 = TerrainData_get_Heights_mCEECDB7F8DADED7A77EBD77095DDA1486FBB8516_inline(L_23, NULL);
		if (!L_24)
		{
			goto IL_0087;
		}
	}
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_25 = ___terrainData0;
		NullCheck(L_25);
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_26;
		L_26 = TerrainData_get_Heights_mCEECDB7F8DADED7A77EBD77095DDA1486FBB8516_inline(L_25, NULL);
		NullCheck(L_26);
		bool L_27;
		L_27 = UnmanagedArray_1_get_IsDisposed_mDD25ABE1E521872DB5D53AE53576208C4FDA10D0_inline(L_26, UnmanagedArray_1_get_IsDisposed_mDD25ABE1E521872DB5D53AE53576208C4FDA10D0_RuntimeMethod_var);
		G_B14_0 = ((int32_t)(L_27));
		goto IL_0088;
	}

IL_0087:
	{
		G_B14_0 = 1;
	}

IL_0088:
	{
		V_11 = (bool)G_B14_0;
		bool L_28 = V_11;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* L_29 = (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C(L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_Spawn_m75A9F6EEBA231174751A00258EB02435310AC9B6_RuntimeMethod_var)));
	}

IL_0094:
	{
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* L_30 = ___terrainRect1;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_31 = (*(TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949*)L_30);
		(&V_1)->___TerrainRect_0 = L_31;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* L_32 = (&(&V_1)->___TerrainRect_0);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_33 = ___terrainData0;
		TerrainRect_Clamp_mE997D3C1A4D283E986F727C7FEFFDAE7F5463291(L_32, L_33, NULL);
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949* L_34 = (&(&V_1)->___TerrainRect_0);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_35 = ___terrainData0;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340 L_36;
		memset((&L_36), 0, sizeof(L_36));
		DetailmapRect__ctor_m462E41EEDF44F2D90628DB9F8A1AC0385883A840((&L_36), L_34, L_35, 0, 0, /*hidden argument*/NULL);
		(&V_1)->___DetailmapRect_1 = L_36;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* L_37 = (&(&V_1)->___DetailmapRect_1);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_38 = ___terrainData0;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_39;
		L_39 = DetailmapRect_ToTerrainRect_m6790E5975AF490F4D59467308146A66973461C4D(L_37, L_38, NULL);
		(&V_1)->___TerrainRect_0 = L_39;
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_40 = ___result2;
		int32_t L_41 = L_40->___Count_1;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* L_42 = (&(&V_1)->___DetailmapRect_1);
		int32_t L_43;
		L_43 = Spawner_GetCapacity_m7BBC5F64344E421B5494239DDD060A25B0447CAF(__this, L_42, NULL);
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_44 = ___result2;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0* L_45 = (&L_44->___Instances_0);
		int32_t L_46;
		L_46 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_45)->___m_Length_1);
		V_12 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_41, L_43))) > ((int32_t)L_46))? 1 : 0);
		bool L_47 = V_12;
		if (!L_47)
		{
			goto IL_010b;
		}
	}
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_48 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_48);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_48, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61124E05876F55849671445E7D092F0E427871E3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_Spawn_m75A9F6EEBA231174751A00258EB02435310AC9B6_RuntimeMethod_var)));
	}

IL_010b:
	{
		TerrainDetail_tC141A33265A4BB1BC82A9DF3BC5825EA7FEAA1D4* L_49 = __this->___Detail_2;
		NullCheck(L_49);
		int32_t L_50 = L_49->___Index_7;
		RandomHash__ctor_mE1821BBEC87B6451B89FB5F0C487B3E834B1C32D((&V_2), L_50, NULL);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_51 = ___terrainData0;
		NullCheck(L_51);
		float L_52;
		L_52 = TerrainData_get_Density_mC96D0CEAC551708FAF5DDCB791190D5DFF303B4A_inline(L_51, NULL);
		V_3 = L_52;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* L_53 = (&(&V_1)->___DetailmapRect_1);
		int32_t L_54;
		L_54 = DetailmapRect_get_XMax_m49A9BF0FC0A5DD371871FFC3BA4FD820C87058C9(L_53, NULL);
		V_4 = L_54;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* L_55 = (&(&V_1)->___DetailmapRect_1);
		int32_t L_56;
		L_56 = DetailmapRect_get_YMax_mD9657481CFA4FCE5CA8B3AC404E54CFB5C7C9507(L_55, NULL);
		V_5 = L_56;
		il2cpp_codegen_initobj((&V_6), sizeof(Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_57 = (&(&V_6)->___Size_3);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_58 = ___terrainData0;
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline(L_58, NULL);
		float L_60 = L_59.___x_2;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_61 = ___terrainData0;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = TerrainData_get_DetailResolution_mBB49BD0472E9E771B647B304A431ABCD99C599A4_inline(L_61, NULL);
		L_57->___x_2 = ((float)(L_60/((float)L_62)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_63 = (&(&V_6)->___Size_3);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_64 = ___terrainData0;
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline(L_64, NULL);
		float L_66 = L_65.___z_4;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_67 = ___terrainData0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = TerrainData_get_DetailResolution_mBB49BD0472E9E771B647B304A431ABCD99C599A4_inline(L_67, NULL);
		L_63->___z_4 = ((float)(L_66/((float)L_68)));
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_69 = ___result2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_70 = (&L_69->___Bounds_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B(L_70, L_71, NULL);
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_72 = ___result2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_73 = (&L_72->___Bounds_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128(L_73, L_74, NULL);
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* L_75 = (&(&V_1)->___DetailmapRect_1);
		int32_t L_76;
		L_76 = DetailmapRect_get_YMin_m9FC15CA9FF8379D5DAE7823A842A1ABC1F5361B7_inline(L_75, NULL);
		V_13 = L_76;
		goto IL_032a;
	}

IL_01bb:
	{
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* L_77 = (&(&V_1)->___DetailmapRect_1);
		int32_t L_78;
		L_78 = DetailmapRect_get_XMin_mEF5FC82C98B7006D1D60DC38F5235CFF00C41F38_inline(L_77, NULL);
		V_14 = L_78;
		goto IL_0315;
	}

IL_01ce:
	{
		int32_t L_79 = V_14;
		int32_t L_80 = V_13;
		RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 L_81;
		L_81 = RandomHash_Combine_m7440004A70DCDFD5BD6706D882D510E154EFAD17((&V_2), ((int32_t)(L_79^L_80)), NULL);
		V_2 = L_81;
	}
	try
	{// begin try (depth: 1)
		Detailmap_t9B8A0533F2BCDA90C1D6568AD4455A72874D3F1E* L_82 = V_0;
		int32_t L_83 = V_14;
		int32_t L_84 = V_13;
		NullCheck(L_82);
		int32_t* L_85;
		L_85 = Detailmap_get_Item_mDC51480D28D762D00723645A5292A3EA283F6AA6(L_82, L_83, L_84, NULL);
		int32_t L_86 = *((int32_t*)L_85);
		V_15 = L_86;
		goto IL_01fd;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ed;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01f5;
		}
		throw e;
	}

CATCH_01ed:
	{// begin catch(System.ObjectDisposedException)
		TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* L_87 = (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD_il2cpp_TypeInfo_var)));
		NullCheck(L_87);
		TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C(L_87, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_Spawn_m75A9F6EEBA231174751A00258EB02435310AC9B6_RuntimeMethod_var)));
	}// end catch (depth: 1)

CATCH_01f5:
	{// begin catch(System.NullReferenceException)
		TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* L_88 = (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD_il2cpp_TypeInfo_var)));
		NullCheck(L_88);
		TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C(L_88, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_Spawn_m75A9F6EEBA231174751A00258EB02435310AC9B6_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_01fd:
	{
		int32_t L_89 = V_15;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_90;
		L_90 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(L_89, 0, NULL);
		V_15 = L_90;
		int32_t L_91 = V_15;
		int32_t L_92;
		L_92 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_91, ((int32_t)16), NULL);
		V_15 = L_92;
		int32_t L_93 = V_15;
		float L_94 = V_3;
		V_16 = ((float)il2cpp_codegen_multiply(((float)L_93), L_94));
		float L_95 = V_16;
		if ((!(((float)L_95) < ((float)(1.0f)))))
		{
			goto IL_0233;
		}
	}
	{
		float L_96 = V_16;
		RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 L_97 = V_2;
		int32_t L_98 = L_97.___Value_1;
		float L_99;
		L_99 = RandomCache_GetRandomNumber_m1D05D606C2C09293090D6D1CF717779ECA84A2C1(L_98, NULL);
		G_B27_0 = ((((float)L_96) < ((float)L_99))? 1 : 0);
		goto IL_0234;
	}

IL_0233:
	{
		G_B27_0 = 0;
	}

IL_0234:
	{
		V_17 = (bool)G_B27_0;
		bool L_100 = V_17;
		if (!L_100)
		{
			goto IL_023f;
		}
	}
	{
		goto IL_030f;
	}

IL_023f:
	{
		int32_t L_101 = V_14;
		(&V_6)->___X_0 = L_101;
		int32_t L_102 = V_13;
		(&V_6)->___Y_1 = L_102;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_103 = (&(&V_6)->___Center_2);
		SpawnRect_t697D9DDF1846BD14EB9ED69C06AC9EA13072DB27 L_104 = V_1;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_105 = L_104.___TerrainRect_0;
		float L_106 = L_105.___X_0;
		int32_t L_107 = V_14;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* L_108 = (&(&V_1)->___DetailmapRect_1);
		int32_t L_109;
		L_109 = DetailmapRect_get_XMin_mEF5FC82C98B7006D1D60DC38F5235CFF00C41F38_inline(L_108, NULL);
		Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402 L_110 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = L_110.___Size_3;
		float L_112 = L_111.___x_2;
		Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402 L_113 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = L_113.___Size_3;
		float L_115 = L_114.___x_2;
		L_103->___x_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_106, ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_107, L_109))), L_112)))), ((float)il2cpp_codegen_multiply(L_115, (0.5f)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_116 = (&(&V_6)->___Center_2);
		SpawnRect_t697D9DDF1846BD14EB9ED69C06AC9EA13072DB27 L_117 = V_1;
		TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 L_118 = L_117.___TerrainRect_0;
		float L_119 = L_118.___Y_1;
		int32_t L_120 = V_13;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* L_121 = (&(&V_1)->___DetailmapRect_1);
		int32_t L_122;
		L_122 = DetailmapRect_get_YMin_m9FC15CA9FF8379D5DAE7823A842A1ABC1F5361B7_inline(L_121, NULL);
		Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402 L_123 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = L_123.___Size_3;
		float L_125 = L_124.___z_4;
		Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402 L_126 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = L_126.___Size_3;
		float L_128 = L_127.___z_4;
		L_116->___z_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_119, ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_120, L_122))), L_125)))), ((float)il2cpp_codegen_multiply(L_128, (0.5f)))));
		RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 L_129 = V_2;
		(&V_6)->___Seed_4 = L_129;
		float L_130 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_131;
		L_131 = ceil(((double)L_130));
		V_15 = il2cpp_codegen_cast_double_to_int<int32_t>(L_131);
		int32_t L_132 = V_15;
		V_18 = (bool)((((int32_t)L_132) > ((int32_t)0))? 1 : 0);
		bool L_133 = V_18;
		if (!L_133)
		{
			goto IL_030e;
		}
	}
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_134 = ___terrainData0;
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_135 = ___result2;
		int32_t L_136 = V_15;
		VirtualActionInvoker5< TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A*, SpawnRect_t697D9DDF1846BD14EB9ED69C06AC9EA13072DB27*, Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402*, SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5*, int32_t >::Invoke(10 /* System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::Spawn(VisualDesignCafe.Rendering.Nature.TerrainData,VisualDesignCafe.Rendering.Nature.Spawning.Spawner/SpawnRect& modreq(System.Runtime.InteropServices.InAttribute),VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Texel& modreq(System.Runtime.InteropServices.InAttribute),VisualDesignCafe.Rendering.Nature.Spawning.SpawnResult&,System.Int32) */, __this, L_134, (&V_1), (&V_6), L_135, L_136);
	}

IL_030e:
	{
	}

IL_030f:
	{
		int32_t L_137 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_137, 1));
	}

IL_0315:
	{
		int32_t L_138 = V_14;
		int32_t L_139 = V_4;
		V_19 = (bool)((((int32_t)L_138) < ((int32_t)L_139))? 1 : 0);
		bool L_140 = V_19;
		if (L_140)
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_141 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_032a:
	{
		int32_t L_142 = V_13;
		int32_t L_143 = V_5;
		V_20 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_20;
		if (L_144)
		{
			goto IL_01bb;
		}
	}
	{
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::Spawn(VisualDesignCafe.Rendering.Nature.TerrainData,VisualDesignCafe.Rendering.Nature.Spawning.Spawner/SpawnRect& modreq(System.Runtime.InteropServices.InAttribute),VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Texel& modreq(System.Runtime.InteropServices.InAttribute),VisualDesignCafe.Rendering.Nature.Spawning.SpawnResult&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_Spawn_m4BB37B8B1A4AAC3B5BAF8209A5D0F23AA7BEA5A0 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData0, SpawnRect_t697D9DDF1846BD14EB9ED69C06AC9EA13072DB27* ___rect1, Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402* ___texel2, SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* ___result3, int32_t ___count4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_0 = ___terrainData0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = TerrainData_get_Position_m2C0A4C02BC08F6552860A4C1DFCFA77785A192A4_inline(L_0, NULL);
		float L_2 = L_1.___x_2;
		Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402* L_3 = ___texel2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&L_3->___Center_2);
		float L_5 = L_4->___x_2;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* L_6 = (&__this->___Settings_3);
		float L_7 = L_6->___NoiseSpread_0;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_8 = ___terrainData0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = TerrainData_get_Position_m2C0A4C02BC08F6552860A4C1DFCFA77785A192A4_inline(L_8, NULL);
		float L_10 = L_9.___z_4;
		Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402* L_11 = ___texel2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&L_11->___Center_2);
		float L_13 = L_12->___z_4;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* L_14 = (&__this->___Settings_3);
		float L_15 = L_14->___NoiseSpread_0;
		float L_16;
		L_16 = Mathf_PerlinNoise_mFDD2B12BE1FE4E890FA9FCD5CE6D7A90CAA779D4(((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(L_13, L_15)))), NULL);
		V_0 = L_16;
		V_1 = 0;
		goto IL_0160;
	}

IL_0054:
	{
		Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402* L_17 = ___texel2;
		RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 L_18 = L_17->___Seed_4;
		V_4 = L_18;
		int32_t L_19 = V_1;
		RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 L_20;
		L_20 = RandomHash_Combine_m7440004A70DCDFD5BD6706D882D510E154EFAD17((&V_4), L_19, NULL);
		(&V_2)->___Seed_0 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&(&V_2)->___Value_1);
		Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623 L_22 = V_2;
		RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 L_23 = L_22.___Seed_0;
		int32_t L_24 = L_23.___Value_1;
		float L_25;
		L_25 = RandomCache_GetRandomNumber_m1D05D606C2C09293090D6D1CF717779ECA84A2C1(L_24, NULL);
		L_21->___x_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_25, (2.0f))), (1.0f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&(&V_2)->___Value_1);
		Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623 L_27 = V_2;
		RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 L_28 = L_27.___Seed_0;
		int32_t L_29 = L_28.___Value_1;
		float L_30;
		L_30 = RandomCache_GetRandomNumber_m1D05D606C2C09293090D6D1CF717779ECA84A2C1(((int32_t)il2cpp_codegen_add(L_29, 1)), NULL);
		L_26->___y_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_30, (2.0f))), (1.0f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&(&V_2)->___Value_1);
		Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623 L_32 = V_2;
		RandomHash_t72CA3F462503EF7C23066AAB3EABA2BB9CE75640 L_33 = L_32.___Seed_0;
		int32_t L_34 = L_33.___Value_1;
		float L_35;
		L_35 = RandomCache_GetRandomNumber_m1D05D606C2C09293090D6D1CF717779ECA84A2C1(((int32_t)il2cpp_codegen_add(L_34, 2)), NULL);
		L_31->___z_4 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_35, (2.0f))), (1.0f)));
		float L_36 = V_0;
		(&V_2)->___PerlinNoise_2 = L_36;
		il2cpp_codegen_initobj((&V_3), sizeof(Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081));
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_37 = ___terrainData0;
		Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402* L_38 = ___texel2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = (&L_38->___Center_2);
		Texel_tACF6B44FBB3443D12845F36F49B112BAED13F402* L_40 = ___texel2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (&L_40->___Size_3);
		VirtualActionInvoker5< Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081*, Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623*, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(12 /* System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::SetPosition(VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance&,VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Random& modreq(System.Runtime.InteropServices.InAttribute),VisualDesignCafe.Rendering.Nature.TerrainData,UnityEngine.Vector3& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Vector3& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, (&V_3), (&V_2), L_37, L_39, L_41);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_42 = ___terrainData0;
		VirtualActionInvoker3< Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081*, Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623*, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* >::Invoke(13 /* System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::SetScale(VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance&,VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Random& modreq(System.Runtime.InteropServices.InAttribute),VisualDesignCafe.Rendering.Nature.TerrainData) */, __this, (&V_3), (&V_2), L_42);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_43 = ___terrainData0;
		VirtualActionInvoker3< Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081*, Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623*, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* >::Invoke(14 /* System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::SetRotation(VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance&,VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Random& modreq(System.Runtime.InteropServices.InAttribute),VisualDesignCafe.Rendering.Nature.TerrainData) */, __this, (&V_3), (&V_2), L_43);
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_44 = ___result3;
		VirtualActionInvoker2< Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081*, SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* >::Invoke(11 /* System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::RecalculateBounds(VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance&,VisualDesignCafe.Rendering.Nature.Spawning.SpawnResult&) */, __this, (&V_3), L_44);
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_45 = ___result3;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0* L_46 = (&L_45->___Instances_0);
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_47 = ___result3;
		int32_t L_48 = L_47->___Count_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_49;
		L_49 = VirtualFuncInvoker1< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* >::Invoke(15 /* UnityEngine.Matrix4x4 VisualDesignCafe.Rendering.Nature.Spawning.Spawner::BuildMatrix(VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance&) */, __this, (&V_3));
		IL2CPP_NATIVEARRAY_SET_ITEM(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, (L_46)->___m_Buffer_0, L_48, (L_49));
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_50 = ___result3;
		int32_t* L_51 = (&L_50->___Count_1);
		int32_t* L_52 = L_51;
		int32_t L_53 = *((int32_t*)L_52);
		*((int32_t*)L_52) = (int32_t)((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0160:
	{
		int32_t L_55 = V_1;
		int32_t L_56 = ___count4;
		V_5 = (bool)((((int32_t)L_55) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_5;
		if (L_57)
		{
			goto IL_0054;
		}
	}
	{
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::RecalculateBounds(VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance&,VisualDesignCafe.Rendering.Nature.Spawning.SpawnResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_RecalculateBounds_m8A82D73DF6BBE06705C2900365D72C0FE5609017 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* ___instance0, SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* ___result1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_0 = ___result1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_1 = (&L_0->___Bounds_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ((Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D_StaticFields*)il2cpp_codegen_static_fields_for(Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D_il2cpp_TypeInfo_var))->____zero_1;
		bool L_4;
		L_4 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_2, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_6 = ___result1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_7 = (&L_6->___Bounds_2);
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_8 = ___instance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___Position_0;
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B(L_7, L_9, NULL);
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_10 = ___result1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_11 = (&L_10->___Bounds_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128(L_11, L_12, NULL);
		goto IL_0053;
	}

IL_0041:
	{
		SpawnResult_tC546DCCC9318F52C4B32C7E7663126D5CAC9DEA5* L_13 = ___result1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_14 = (&L_13->___Bounds_2);
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_15 = ___instance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15->___Position_0;
		Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F(L_14, L_16, NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::SetPosition(VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance&,VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Random& modreq(System.Runtime.InteropServices.InAttribute),VisualDesignCafe.Rendering.Nature.TerrainData,UnityEngine.Vector3& modreq(System.Runtime.InteropServices.InAttribute),UnityEngine.Vector3& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_SetPosition_m3A8A440297DCA173EB78BBBAAD83E7ABC66066D4 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* ___instance0, Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623* ___random1, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___footPrint4, const RuntimeMethod* method) 
{
	{
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_0 = ___instance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&L_0->___Position_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___center3;
		float L_3 = L_2->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___footPrint4;
		float L_5 = L_4->___x_2;
		Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623* L_6 = ___random1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&L_6->___Value_1);
		float L_8 = L_7->___x_2;
		L_1->___x_2 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, (0.5f))), L_8))));
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_9 = ___instance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&L_9->___Position_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___center3;
		float L_12 = L_11->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = ___footPrint4;
		float L_14 = L_13->___z_4;
		Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623* L_15 = ___random1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&L_15->___Value_1);
		float L_17 = L_16->___z_4;
		L_10->___z_4 = ((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_14, (0.5f))), L_17))));
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_18 = ___instance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&L_18->___Position_0);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_20 = ___terrainData2;
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_21 = ___instance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&L_21->___Position_0);
		float L_23;
		L_23 = Spawner_GetTerrainHeight_mF55D6409BB4C40B50A8AF206CC9C2FA5235FD560(__this, L_20, L_22, NULL);
		L_19->___y_3 = L_23;
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_24 = ___instance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&L_24->___Position_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_26);
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* L_28 = (&__this->___Settings_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = L_28->___Offset_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_27, L_29, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_26 = L_30;
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::SetScale(VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance&,VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Random& modreq(System.Runtime.InteropServices.InAttribute),VisualDesignCafe.Rendering.Nature.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_SetScale_mD8C66B53CF2D8B12B017AC5286C2461CC1C3EF48 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* ___instance0, Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623* ___random1, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData2, const RuntimeMethod* method) 
{
	{
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_0 = ___instance0;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* L_1 = (&__this->___Settings_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___ScaleMin_1;
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* L_3 = (&__this->___Settings_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___ScaleMax_2;
		Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623* L_5 = ___random1;
		float L_6 = L_5->___PerlinNoise_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_2, L_4, L_6, NULL);
		L_0->___Scale_2 = L_7;
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::SetRotation(VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance&,VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Random& modreq(System.Runtime.InteropServices.InAttribute),VisualDesignCafe.Rendering.Nature.TerrainData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_SetRotation_m329421E294B34634E4CD39DB3039DA22616AB8A9 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* ___instance0, Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623* ___random1, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData2, const RuntimeMethod* method) 
{
	{
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_0 = ___instance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_2 = ___terrainData2;
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_3 = ___instance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&L_3->___Position_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Spawner_GetTerrainNormal_m6627844DF6088C211F9182A9400E9C66D23C31D5(__this, L_2, L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_1, L_5, NULL);
		Random_t605736EBA44FCFF3AF24A1BF1E2783166386C623* L_7 = ___random1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&L_7->___Value_1);
		float L_9 = L_8->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(((float)il2cpp_codegen_multiply(L_9, (180.0f))), L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_6, L_11, NULL);
		SpawnSettings_tD0E6DDF8DE90A4FFACEB84BCF4DE5D64AEE9546F* L_13 = (&__this->___Settings_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = L_13->___Orientation_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_12, L_14, NULL);
		L_0->___Rotation_1 = L_15;
		return;
	}
}
// UnityEngine.Matrix4x4 VisualDesignCafe.Rendering.Nature.Spawning.Spawner::BuildMatrix(VisualDesignCafe.Rendering.Nature.Spawning.Spawner/Instance&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Spawner_BuildMatrix_mBF5F255FB33F30CE03979D5DED5ACBF8FBB4F149 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* ___instance0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B5_0 = 0;
	{
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_0 = ___instance0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_1 = (&L_0->___Rotation_1);
		float L_2 = L_1->___x_0;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_3 = ___instance0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4 = (&L_3->___Rotation_1);
		float L_5 = L_4->___y_1;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_6 = ___instance0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_7 = (&L_6->___Rotation_1);
		float L_8 = L_7->___z_2;
		if ((!(((float)L_8) == ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_9 = ___instance0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_10 = (&L_9->___Rotation_1);
		float L_11 = L_10->___w_3;
		G_B5_0 = ((((float)L_11) == ((float)(0.0f)))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		V_0 = (bool)G_B5_0;
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_13 = ___instance0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		L_13->___Rotation_1 = L_14;
	}

IL_005d:
	{
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_15 = ___instance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15->___Position_0;
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_17 = ___instance0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17->___Rotation_1;
		Instance_t3ED554CA2F037317DCD2FADB050D0B8B7DCCE081* L_19 = ___instance0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19->___Scale_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21;
		L_21 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_16, L_18, L_20, NULL);
		V_1 = L_21;
		goto IL_0077;
	}

IL_0077:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = V_1;
		return L_22;
	}
}
// System.Single VisualDesignCafe.Rendering.Nature.Spawning.Spawner::GetTerrainHeight(VisualDesignCafe.Rendering.Nature.TerrainData,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spawner_GetTerrainHeight_mF55D6409BB4C40B50A8AF206CC9C2FA5235FD560 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_0 = ___terrainData0;
		NullCheck(L_0);
		TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* L_1 = L_0->___Surface_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___position1;
		float L_3 = L_2->___x_2;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_4 = ___terrainData0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline(L_4, NULL);
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___position1;
		float L_8 = L_7->___z_4;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_9 = ___terrainData0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline(L_9, NULL);
		float L_11 = L_10.___z_4;
		NullCheck(L_1);
		float L_12;
		L_12 = TerrainSurface_GetInterpolatedHeight_m24FD221185DFB5F0B43A3FAE8DC39E55864E3D3D(L_1, ((float)(L_3/L_6)), ((float)(L_8/L_11)), NULL);
		V_0 = L_12;
		goto IL_0044;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_0034:
	{// begin catch(System.ObjectDisposedException)
		TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* L_13 = (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C(L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_GetTerrainHeight_mF55D6409BB4C40B50A8AF206CC9C2FA5235FD560_RuntimeMethod_var)));
	}// end catch (depth: 1)

CATCH_003c:
	{// begin catch(System.NullReferenceException)
		TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* L_14 = (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_GetTerrainHeight_mF55D6409BB4C40B50A8AF206CC9C2FA5235FD560_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0044:
	{
		float L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.Vector3 VisualDesignCafe.Rendering.Nature.Spawning.Spawner::GetTerrainNormal(VisualDesignCafe.Rendering.Nature.TerrainData,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Spawner_GetTerrainNormal_m6627844DF6088C211F9182A9400E9C66D23C31D5 (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* ___terrainData0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_0 = ___terrainData0;
		NullCheck(L_0);
		TerrainSurface_t7C75C1051300FBF4D637FB737F411C5393F69DF1* L_1 = L_0->___Surface_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___position1;
		float L_3 = L_2->___x_2;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_4 = ___terrainData0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline(L_4, NULL);
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___position1;
		float L_8 = L_7->___z_4;
		TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* L_9 = ___terrainData0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline(L_9, NULL);
		float L_11 = L_10.___z_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = TerrainSurface_GetInterpolatedNormal_m5F4EFA15EC1DB0640A6A84A5675D87552CF5603F(L_1, ((float)(L_3/L_6)), ((float)(L_8/L_11)), NULL);
		V_0 = L_12;
		goto IL_0044;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_0034:
	{// begin catch(System.ObjectDisposedException)
		TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* L_13 = (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C(L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_GetTerrainNormal_m6627844DF6088C211F9182A9400E9C66D23C31D5_RuntimeMethod_var)));
	}// end catch (depth: 1)

CATCH_003c:
	{// begin catch(System.NullReferenceException)
		TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD* L_14 = (TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TerrainDataDisposedException_t68A3A76A54772993CC866DB55BF5365DC46FE7CD_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		TerrainDataDisposedException__ctor_m3B678925E6C1ACEB61C6F4BDE592952CA2DB459C(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Spawner_GetTerrainNormal_m6627844DF6088C211F9182A9400E9C66D23C31D5_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0044:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		return L_15;
	}
}
// System.Int32 VisualDesignCafe.Rendering.Nature.Spawning.Spawner::GetCapacity(VisualDesignCafe.Rendering.Nature.DetailmapRect&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Spawner_GetCapacity_m7BBC5F64344E421B5494239DDD060A25B0447CAF (Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D* __this, DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* ___detailmapRect0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* L_0 = ___detailmapRect0;
		int32_t L_1 = L_0->___Width_2;
		DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* L_2 = ___detailmapRect0;
		int32_t L_3 = L_2->___Height_3;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_1, L_3)), ((int32_t)16)));
		goto IL_0014;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Spawning.Spawner::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__cctor_m1B8243910F336CEDE06269F4D7226EA4ACCBBF44 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		((Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D_StaticFields*)il2cpp_codegen_static_fields_for(Spawner_tDEE17F653F421300C108BE2E1F749C00D4860B7D_il2cpp_TypeInfo_var))->____zero_1 = L_0;
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
// System.Void VisualDesignCafe.Rendering.Nature.Profiling.ProfilerSampleScope::Begin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerSampleScope_Begin_m606F928464827995C432371B9F0532D3507D0543 (String_t* ___sampleName0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void VisualDesignCafe.Rendering.Nature.Profiling.ProfilerSampleScope::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerSampleScope_End_m9FA615E25252A95E2BB174686088557E167036F5 (const RuntimeMethod* method) 
{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* TerrainData_get_Heights_mCEECDB7F8DADED7A77EBD77095DDA1486FBB8516_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) 
{
	{
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_0 = __this->___U3CHeightsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* TerrainData_get_PreviousHeights_m6488BD94E33E60D7F78986A43FF44FD0D761D4AF_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) 
{
	{
		UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* L_0 = __this->___U3CPreviousHeightsU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TerrainData_get_HeightmapResolution_mBADC2A7191E6438218F77EDDDC7B123991DED3E6_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightmapResolutionU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* TerrainData_get_Detailmaps_mC8C36C1DBBD4DB93007E602B3BB9D8423109858A_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) 
{
	{
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_0 = __this->___U3CDetailmapsU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* TerrainData_get_PreviousDetailmaps_m05D5B502DE4F61E46878249587186379A58DF31F_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) 
{
	{
		DetailmapU5BU5D_t6DC30B74388588AF4EF0BDA3DC10706D35053886* L_0 = __this->___U3CPreviousDetailmapsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TerrainData_get_DetailResolution_mBB49BD0472E9E771B647B304A431ABCD99C599A4_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDetailResolutionU3Ek__BackingField_4;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_Size_m2C30687C6EC084EDEEE8166E75C7242C7B46D614_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CSizeU3Ek__BackingField_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* Grid_get_Builder_mA922F9533FD555307A3184DF0819ECEBDE99BBF5_inline (Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* __this, const RuntimeMethod* method) 
{
	{
		BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* L_0 = __this->____builder_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CellStreamer_GetIndex_m9A1843FD7D9C5A797D2422D51EAB6BD1ED0CC027_inline (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___z1;
		int32_t L_1 = __this->____cellsX_9;
		int32_t L_2 = ___x0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* Grid_get_Cells_m22B38BE2DA51D64386CF1B025BDE7805B49754CA_inline (Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* __this, const RuntimeMethod* method) 
{
	{
		CellU5BU2CU5D_t2A0AFCD711F986E353DE06E1177B2F7FD2F8CBE2* L_0 = __this->___U3CCellsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Grid_get_CellSize_m0E368C11611554B068A982A685246C20F44A9C08_inline (Grid_t5D919D450F32546E21BD0D086A294E1DF841B7C5* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____cellSize_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CellStreamer_GetIndex_m5CDFB77F073580EA75DD5D533C3F5BB7B8022890_inline (CellStreamer_t7001AED5A7DB2251F5947B5FDE136EF1643D9D24* __this, int32_t ___index0, int32_t* ___x1, int32_t* ___y2, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___x1;
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->____cellsX_9;
		*((int32_t*)L_0) = (int32_t)((int32_t)(L_1%L_2));
		int32_t* L_3 = ___y2;
		int32_t L_4 = ___index0;
		int32_t L_5 = __this->____cellsX_9;
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4/L_5));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_Position_m2C0A4C02BC08F6552860A4C1DFCFA77785A192A4_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPositionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BuildScheduler_set_PrioritizeView_m07BE6641742D85494EB1B7828C4E00B2766D05B0_inline (BuildScheduler_t778EE2C950CCC0C417D9E0C8DF07591A61BB703B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CPrioritizeViewU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QuadSpatialLayout_GetIndex_mC826C002A801732F54169A149A2700426807A6BB_inline (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___z1;
		int32_t L_1 = __this->___QuadsX_2;
		int32_t L_2 = ___x0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double QuadSpatialLayout_DistanceSqr_m8B8409B05FE713978C7B39C205A7746B3E968B25_inline (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, double* ___aX0, double* ___aY1, double* ___bX2, double* ___bY3, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		double* L_0 = ___aX0;
		double L_1 = *((double*)L_0);
		double* L_2 = ___bX2;
		double L_3 = *((double*)L_2);
		V_0 = ((double)il2cpp_codegen_subtract(L_1, L_3));
		double* L_4 = ___aY1;
		double L_5 = *((double*)L_4);
		double* L_6 = ___bY3;
		double L_7 = *((double*)L_6);
		V_1 = ((double)il2cpp_codegen_subtract(L_5, L_7));
		double L_8 = V_0;
		double L_9 = V_0;
		double L_10 = V_1;
		double L_11 = V_1;
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_8, L_9)), ((double)il2cpp_codegen_multiply(L_10, L_11))));
		goto IL_0018;
	}

IL_0018:
	{
		double L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double QuadSpatialLayout_Direction_m5EBC991F14D237089E137BBCE514A3ED62FD592B_inline (QuadSpatialLayout_t0F5E7FB26685A28C378F16CC974E7CEBEF446977* __this, double* ___targetX0, double* ___targetY1, double* ___currentX2, double* ___currentY3, double* ___forwardX4, double* ___forwardY5, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		double* L_0 = ___targetX0;
		double L_1 = *((double*)L_0);
		double* L_2 = ___currentX2;
		double L_3 = *((double*)L_2);
		V_0 = ((double)il2cpp_codegen_subtract(L_1, L_3));
		double* L_4 = ___targetY1;
		double L_5 = *((double*)L_4);
		double* L_6 = ___currentY3;
		double L_7 = *((double*)L_6);
		V_1 = ((double)il2cpp_codegen_subtract(L_5, L_7));
		double L_8 = V_0;
		double* L_9 = ___forwardX4;
		double L_10 = *((double*)L_9);
		double L_11 = V_1;
		double* L_12 = ___forwardY5;
		double L_13 = *((double*)L_12);
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_8, L_10)), ((double)il2cpp_codegen_multiply(L_11, L_13))));
		goto IL_001c;
	}

IL_001c:
	{
		double L_14 = V_2;
		return L_14;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_2);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_3);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_4);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Quaternion_GetHashCode_m5F55C34C98E437376595E722BE4EB8A70434F049_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_2);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&__this->___w_3);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DetailNoiseSpread_get_NoiseSpread_mB400384F184F7ED37EACAEB20C4548845B381A25_inline (DetailNoiseSpread_tFC54891140347FB37C03597BCB8AF8D4CB40D6BB* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____noiseSpread_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DetailTransform_get_Offset_m496544F586273ADB92DE928794AD4CBD4323E67D_inline (DetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 DetailTransform_get_Orientation_mBF2D47914C324C3C9A02961527894052D110B3C1_inline (DetailTransform_t59FEF87B029690EC9AA8671DC05D60F0D19D4825* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->____orientation_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DetailSize_get_MaxScale_m920EFEF6D608FC45A556BBB7AC8D2AEAB23D0094_inline (DetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____maxScale_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DetailSize_get_MinScale_mF44F4246BF41DB230C6944B872DC03EB6393F088_inline (DetailSize_tD927FAEC5BA9FE12254A0B818AF080B4E2998142* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____minScale_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TerrainData_get_IsDisposed_mDD848B72976FB21C15527E5BD8BF3B388CC9540F_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsDisposedU3Ek__BackingField_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TerrainData_get_Density_mC96D0CEAC551708FAF5DDCB791190D5DFF303B4A_inline (TerrainData_tC59C5016112E768B248B24B116F8DA434A2E550A* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CDensityU3Ek__BackingField_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DetailmapRect_get_YMin_m9FC15CA9FF8379D5DAE7823A842A1ABC1F5361B7_inline (DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___Y_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DetailmapRect_get_XMin_mEF5FC82C98B7006D1D60DC38F5235CFF00C41F38_inline (DetailmapRect_t5F08BE17D5210C455B017D91DC69919D9B094340* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___X_0;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m022E83B470595E4E63515BFCE655618C856DB5DC_gshared_inline (List_1_tA566AA2738F7D45927E2B99DF0BD2469CFA2CF25* __this, const RuntimeMethod* method) 
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
		LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633* L_3 = (LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4A39C99F6733217E7A8A199622CCE211BA8D9D7A_gshared_inline (List_1_tA566AA2738F7D45927E2B99DF0BD2469CFA2CF25* __this, LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396 ___item0, const RuntimeMethod* method) 
{
	LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633* L_1 = (LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		LoadRequest_1U5BU5D_tC44E872CDFA137D2D2BFCE160E4CE7754D60B633* L_6 = V_0;
		int32_t L_7 = V_1;
		LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396)L_8);
		return;
	}

IL_0034:
	{
		LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396 L_9 = ___item0;
		((  void (*) (List_1_tA566AA2738F7D45927E2B99DF0BD2469CFA2CF25*, LoadRequest_1_t83D4C941CC25909D90EB26FDF5F40606E69FF396, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m61AE232F927B8CCA5E86FAB9BE92C259B93C7937_gshared_inline (Action_1_t0E703B63899DA25B799B0D3495FBAB3A030CD3F5* __this, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, TerrainRect_t0D90C2119A591973863C1BFA884E6A15CB270949, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0D2AC3453F7B9918DE712B52A88A3BD7063F8D75_gshared_inline (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m145D862E5992A05767DD0D16530E23B0D6580560_gshared_inline (List_1_t44A25F3C59962F4750C12ACC843610740D56B163* __this, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 ___item0, const RuntimeMethod* method) 
{
	CachedDataU5BU5D_tA8C7FEC85A66447A71461984E18D5ED85B372C95* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		CachedDataU5BU5D_tA8C7FEC85A66447A71461984E18D5ED85B372C95* L_1 = (CachedDataU5BU5D_tA8C7FEC85A66447A71461984E18D5ED85B372C95*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		CachedDataU5BU5D_tA8C7FEC85A66447A71461984E18D5ED85B372C95* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		CachedDataU5BU5D_tA8C7FEC85A66447A71461984E18D5ED85B372C95* L_6 = V_0;
		int32_t L_7 = V_1;
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112)L_8);
		return;
	}

IL_0034:
	{
		CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112 L_9 = ___item0;
		((  void (*) (List_1_t44A25F3C59962F4750C12ACC843610740D56B163*, CachedData_t1C74545CC24DE0697599B7D4510F3D44FC927112, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnmanagedArray_1_get_IsDisposed_mDD25ABE1E521872DB5D53AE53576208C4FDA10D0_gshared_inline (UnmanagedArray_1_t760FD982E2FD1217733B7B9DB2A60FAB52B58DCA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->____isDisposed_7;
		return L_0;
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
