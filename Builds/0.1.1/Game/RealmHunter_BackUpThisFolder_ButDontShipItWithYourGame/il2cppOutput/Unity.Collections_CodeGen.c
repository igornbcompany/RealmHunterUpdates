#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52_RuntimeMethod_var;
extern const RuntimeMethod* RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5_RuntimeMethod_var;
extern const RuntimeMethod* SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7_RuntimeMethod_var;
extern const RuntimeMethod* StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6_RuntimeMethod_var;



// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_mB9EA4CCF3A3DC39A3BC92CFE9557FFAA77D15404 (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
extern void IsUnmanagedAttribute__ctor_m15974D59768AFF916E346F7107F7FF7F6AD9099C (void);
// 0x00000003 Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager::AllocateBlock(T&,System.Int32,System.Int32,System.Int32)
// 0x00000004 System.Void* Unity.Collections.AllocatorManager::Allocate(T&,System.Int32,System.Int32,System.Int32)
// 0x00000005 U* Unity.Collections.AllocatorManager::Allocate(T&,U,System.Int32)
// 0x00000006 System.Void Unity.Collections.AllocatorManager::FreeBlock(T&,Unity.Collections.AllocatorManager/Block&)
// 0x00000007 System.Void Unity.Collections.AllocatorManager::Free(T&,System.Void*,System.Int32,System.Int32,System.Int32)
// 0x00000008 System.Void Unity.Collections.AllocatorManager::Free(T&,U*,System.Int32)
// 0x00000009 System.Void Unity.Collections.AllocatorManager::Free(Unity.Collections.AllocatorManager/AllocatorHandle,T*,System.Int32)
// 0x0000000A System.Void Unity.Collections.AllocatorManager::CheckDelegate(System.Boolean&)
extern void AllocatorManager_CheckDelegate_m4A8CEB99274CDBB45D754B43D7F6A7141FB4A1E5 (void);
// 0x0000000B System.Boolean Unity.Collections.AllocatorManager::UseDelegate()
extern void AllocatorManager_UseDelegate_mBF89F104AD0ED5DE52A221569A69F09293E36033 (void);
// 0x0000000C System.Int32 Unity.Collections.AllocatorManager::allocate_block(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_allocate_block_mCA2494A79A83824BB93DBBB08883E2FA4FA0020C (void);
// 0x0000000D System.Void Unity.Collections.AllocatorManager::forward_mono_allocate_block(Unity.Collections.AllocatorManager/Block&,System.Int32&)
extern void AllocatorManager_forward_mono_allocate_block_mA4344DF1E601F7EC9AD85B7B5406225B4091567D (void);
// 0x0000000E Unity.Collections.Allocator Unity.Collections.AllocatorManager::LegacyOf(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void AllocatorManager_LegacyOf_m18E5AA6A18C4741EE3A244E3834736FD1D23D8C1 (void);
// 0x0000000F System.Int32 Unity.Collections.AllocatorManager::TryLegacy(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_TryLegacy_m47E4B9C46270E61CE56D1A9D25E38AD498C2033C (void);
// 0x00000010 System.Int32 Unity.Collections.AllocatorManager::Try(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorManager_Try_m80548C54CFCD1C94C60CDB8825D23106947A9125 (void);
// 0x00000011 System.Void Unity.Collections.AllocatorManager::.cctor()
extern void AllocatorManager__cctor_m9B228E6B261BF8B5170839E1AC5AC693E488A0A1 (void);
// 0x00000012 System.Void Unity.Collections.AllocatorManager/TryFunction::.ctor(System.Object,System.IntPtr)
extern void TryFunction__ctor_m10C4A7B32E87301727B84D8CBA081FABAE3CCE53 (void);
// 0x00000013 System.Int32 Unity.Collections.AllocatorManager/TryFunction::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2 (void);
// 0x00000014 Unity.Collections.AllocatorManager/TableEntry& Unity.Collections.AllocatorManager/AllocatorHandle::get_TableEntry()
extern void AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63 (void);
// 0x00000015 System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Rewind()
extern void AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1 (void);
// 0x00000016 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
extern void AllocatorHandle_op_Implicit_m784E54E7FB5C2C06F5A0A812D4DFBDCE01395CF3 (void);
// 0x00000017 System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::get_Value()
extern void AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F (void);
// 0x00000018 System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::Try(Unity.Collections.AllocatorManager/Block&)
extern void AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9 (void);
// 0x00000019 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::get_Handle()
extern void AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2 (void);
// 0x0000001A Unity.Collections.Allocator Unity.Collections.AllocatorManager/AllocatorHandle::get_ToAllocator()
extern void AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF (void);
// 0x0000001B System.Void Unity.Collections.AllocatorManager/AllocatorHandle::Dispose()
extern void AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3 (void);
// 0x0000001C System.Void Unity.Collections.AllocatorManager/Range::Dispose()
extern void Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A (void);
// 0x0000001D System.Int64 Unity.Collections.AllocatorManager/Block::get_Bytes()
extern void Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7 (void);
// 0x0000001E System.Int64 Unity.Collections.AllocatorManager/Block::get_AllocatedBytes()
extern void Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08 (void);
// 0x0000001F System.Int32 Unity.Collections.AllocatorManager/Block::get_Alignment()
extern void Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633 (void);
// 0x00000020 System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
extern void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F (void);
// 0x00000021 System.Void Unity.Collections.AllocatorManager/Block::Dispose()
extern void Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED (void);
// 0x00000022 System.Int32 Unity.Collections.AllocatorManager/Block::TryFree()
extern void Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225 (void);
// 0x00000023 System.Int32 Unity.Collections.AllocatorManager/IAllocator::Try(Unity.Collections.AllocatorManager/Block&)
// 0x00000024 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/IAllocator::get_Handle()
// 0x00000025 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/StackAllocator::get_Handle()
extern void StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267 (void);
// 0x00000026 System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558 (void);
// 0x00000027 System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6 (void);
// 0x00000028 System.Void Unity.Collections.AllocatorManager/StackAllocator::Dispose()
extern void StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB (void);
// 0x00000029 System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7 (void);
// 0x0000002A System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_00000A0CU24PostfixBurstDelegate__ctor_m86132B67D16441E144FADD2D7C41F2E88EFFE7FF (void);
// 0x0000002B System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_00000A0CU24PostfixBurstDelegate_Invoke_mD81D3BB3B56D6446CE84FDD01A3DEE5C575A5C8F (void);
// 0x0000002C System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_00000A0CU24BurstDirectCall_GetFunctionPointerDiscard_mBD7B14657BD9DED1D6DB17395682A198A2127ADC (void);
// 0x0000002D System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::GetFunctionPointer()
extern void Try_00000A0CU24BurstDirectCall_GetFunctionPointer_mACA66472A7DABE3D3CC1445FA57D585EAE560374 (void);
// 0x0000002E System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::Constructor()
extern void Try_00000A0CU24BurstDirectCall_Constructor_m78969031636424FF180A63912777C0B8446862C0 (void);
// 0x0000002F System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::Initialize()
extern void Try_00000A0CU24BurstDirectCall_Initialize_mB794E7AFF05A339E2F654C879FF924F63626E56E (void);
// 0x00000030 System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::.cctor()
extern void Try_00000A0CU24BurstDirectCall__cctor_mCB91408F41E2F5FB8499408AD28471D1DFF9A900 (void);
// 0x00000031 System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_00000A0C$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_00000A0CU24BurstDirectCall_Invoke_m83BD090A8382C1F49D7DB18C55ED2F1897B13125 (void);
// 0x00000032 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/SlabAllocator::get_Handle()
extern void SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE (void);
// 0x00000033 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::get_SlabSizeInBytes()
extern void SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612 (void);
// 0x00000034 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD (void);
// 0x00000035 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0 (void);
// 0x00000036 System.Void Unity.Collections.AllocatorManager/SlabAllocator::Dispose()
extern void SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912 (void);
// 0x00000037 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5 (void);
// 0x00000038 System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_00000A1AU24PostfixBurstDelegate__ctor_mAA8F8D86A6F4CCAC45DB371681919640B107B445 (void);
// 0x00000039 System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_00000A1AU24PostfixBurstDelegate_Invoke_m9D703F119880DF9801FB5F245FE99076523D9F06 (void);
// 0x0000003A System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_00000A1AU24BurstDirectCall_GetFunctionPointerDiscard_m7BA13FC5A431C3E0C533473FEFB7C11E35FB1791 (void);
// 0x0000003B System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::GetFunctionPointer()
extern void Try_00000A1AU24BurstDirectCall_GetFunctionPointer_m9C718A8828FEC5AEF27957362FA52CAD49262ABB (void);
// 0x0000003C System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::Constructor()
extern void Try_00000A1AU24BurstDirectCall_Constructor_mD48044B24C54068FFD88C68D6A5521CCA8F096B9 (void);
// 0x0000003D System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::Initialize()
extern void Try_00000A1AU24BurstDirectCall_Initialize_m5C3A9A99F6293196E32C82585B7C5AE040237CC5 (void);
// 0x0000003E System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::.cctor()
extern void Try_00000A1AU24BurstDirectCall__cctor_m6B8D1A78FC31D7A1283F2ED365CF6F636DF483A7 (void);
// 0x0000003F System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_00000A1A$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_00000A1AU24BurstDirectCall_Invoke_m97B19B4E6D47817822FECE96A16CCFFEB455C4C0 (void);
// 0x00000040 T& Unity.Collections.AllocatorManager/Array32768`1::ElementAt(System.Int32)
// 0x00000041 System.Void Unity.Collections.AllocatorManager/SharedStatics/TableEntry::.cctor()
extern void TableEntry__cctor_m756709B4E1DD838A5A106DA37C9C1CD006844E8B (void);
// 0x00000042 System.Void Unity.Collections.AllocatorManager/Managed::.cctor()
extern void Managed__cctor_m8AABCF5C149993D7017CDD63D9B18F3AAC7AEB97 (void);
// 0x00000043 System.Void Unity.Collections.CreatePropertyAttribute::.ctor()
extern void CreatePropertyAttribute__ctor_mFD5BF090F42312F62534D903F2D804C19CE16264 (void);
// 0x00000044 System.Void Unity.Collections.BurstCompatibleAttribute::set_GenericTypeArguments(System.Type[])
extern void BurstCompatibleAttribute_set_GenericTypeArguments_mBE8AE08E0824187C5B48F5132C73624CAB2C6906 (void);
// 0x00000045 System.Void Unity.Collections.BurstCompatibleAttribute::.ctor()
extern void BurstCompatibleAttribute__ctor_m6D43ED0B880EE6FCCCBC38B1A63DB493898DD3BA (void);
// 0x00000046 System.Void Unity.Collections.NotBurstCompatibleAttribute::.ctor()
extern void NotBurstCompatibleAttribute__ctor_mF89AC194CF3CC2F03A673D1FBDE969E1751CB827 (void);
// 0x00000047 System.UInt32 Unity.Collections.CollectionHelper::Hash(System.Void*,System.Int32)
extern void CollectionHelper_Hash_mBE065315254F12BC78A818A6D8302DF01C35795F (void);
// 0x00000048 System.Boolean Unity.Collections.CollectionHelper::ShouldDeallocate(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void CollectionHelper_ShouldDeallocate_mEA0AEDB292CE3BD7BD84114E25C3BE396AF50CC2 (void);
// 0x00000049 System.Int32 Unity.Collections.CollectionHelper::AssumePositive(System.Int32)
extern void CollectionHelper_AssumePositive_m33E244E5FD3318B35CD9D70504B34FC7D578DA43 (void);
// 0x0000004A System.Int32 Unity.Collections.FixedList::PaddingBytes()
// 0x0000004B System.Int32 Unity.Collections.FixedList32Bytes`1::get_Length()
// 0x0000004C System.Int32 Unity.Collections.FixedList32Bytes`1::get_LengthInBytes()
// 0x0000004D System.Byte* Unity.Collections.FixedList32Bytes`1::get_Buffer()
// 0x0000004E System.Int32 Unity.Collections.FixedList32Bytes`1::GetHashCode()
// 0x0000004F System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000050 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000051 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000052 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000053 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000054 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000055 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000056 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000057 System.Int32 Unity.Collections.FixedList32Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000058 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000059 System.Boolean Unity.Collections.FixedList32Bytes`1::Equals(System.Object)
// 0x0000005A System.Collections.IEnumerator Unity.Collections.FixedList32Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005B System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList32Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000005C System.Int32 Unity.Collections.FixedList64Bytes`1::get_Length()
// 0x0000005D System.Int32 Unity.Collections.FixedList64Bytes`1::get_LengthInBytes()
// 0x0000005E System.Byte* Unity.Collections.FixedList64Bytes`1::get_Buffer()
// 0x0000005F System.Int32 Unity.Collections.FixedList64Bytes`1::GetHashCode()
// 0x00000060 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000061 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000062 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000063 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000064 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000065 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000066 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000067 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000068 System.Int32 Unity.Collections.FixedList64Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x00000069 System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000006A System.Boolean Unity.Collections.FixedList64Bytes`1::Equals(System.Object)
// 0x0000006B System.Collections.IEnumerator Unity.Collections.FixedList64Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList64Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006D System.Int32 Unity.Collections.FixedList128Bytes`1::get_Length()
// 0x0000006E System.Int32 Unity.Collections.FixedList128Bytes`1::get_LengthInBytes()
// 0x0000006F System.Byte* Unity.Collections.FixedList128Bytes`1::get_Buffer()
// 0x00000070 System.Int32 Unity.Collections.FixedList128Bytes`1::GetHashCode()
// 0x00000071 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000072 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000073 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000074 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000075 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000076 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000077 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000078 System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000079 System.Int32 Unity.Collections.FixedList128Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000007A System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000007B System.Boolean Unity.Collections.FixedList128Bytes`1::Equals(System.Object)
// 0x0000007C System.Collections.IEnumerator Unity.Collections.FixedList128Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007D System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList128Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000007E System.Int32 Unity.Collections.FixedList512Bytes`1::get_Length()
// 0x0000007F System.Int32 Unity.Collections.FixedList512Bytes`1::get_LengthInBytes()
// 0x00000080 System.Byte* Unity.Collections.FixedList512Bytes`1::get_Buffer()
// 0x00000081 System.Int32 Unity.Collections.FixedList512Bytes`1::GetHashCode()
// 0x00000082 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000083 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000084 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000085 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000086 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000087 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x00000088 System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x00000089 System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000008A System.Int32 Unity.Collections.FixedList512Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000008B System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000008C System.Boolean Unity.Collections.FixedList512Bytes`1::Equals(System.Object)
// 0x0000008D System.Collections.IEnumerator Unity.Collections.FixedList512Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008E System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList512Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000008F System.Int32 Unity.Collections.FixedList4096Bytes`1::get_Length()
// 0x00000090 System.Int32 Unity.Collections.FixedList4096Bytes`1::get_LengthInBytes()
// 0x00000091 System.Byte* Unity.Collections.FixedList4096Bytes`1::get_Buffer()
// 0x00000092 T Unity.Collections.FixedList4096Bytes`1::get_Item(System.Int32)
// 0x00000093 System.Void Unity.Collections.FixedList4096Bytes`1::set_Item(System.Int32,T)
// 0x00000094 System.Int32 Unity.Collections.FixedList4096Bytes`1::GetHashCode()
// 0x00000095 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000096 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList32Bytes`1<T>)
// 0x00000097 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000098 System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList64Bytes`1<T>)
// 0x00000099 System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000009A System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList128Bytes`1<T>)
// 0x0000009B System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000009C System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList512Bytes`1<T>)
// 0x0000009D System.Int32 Unity.Collections.FixedList4096Bytes`1::CompareTo(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000009E System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(Unity.Collections.FixedList4096Bytes`1<T>)
// 0x0000009F System.Boolean Unity.Collections.FixedList4096Bytes`1::Equals(System.Object)
// 0x000000A0 System.Collections.IEnumerator Unity.Collections.FixedList4096Bytes`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A1 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.FixedList4096Bytes`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000A2 System.Void* Unity.Collections.Memory/Unmanaged::Allocate(System.Int64,System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Allocate_mCD00DF6E249C3A43F8282A83AD3B16AEFFE81A14 (void);
// 0x000000A3 System.Void Unity.Collections.Memory/Unmanaged::Free(System.Void*,Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Unmanaged_Free_m18CD64E2094F71CB38499DC51A55104AE42A464A (void);
// 0x000000A4 System.Void Unity.Collections.Memory/Unmanaged::Free(T*,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000000A5 System.Boolean Unity.Collections.Memory/Unmanaged/Array::IsCustom(Unity.Collections.AllocatorManager/AllocatorHandle)
extern void Array_IsCustom_m3B23BD5B6E2CD65EE4BAF3A60305F67D45B64B3F (void);
// 0x000000A6 System.Void* Unity.Collections.Memory/Unmanaged/Array::CustomResize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_CustomResize_mDB54012F437319EB6FB861B8D67256AB5A9B20D5 (void);
// 0x000000A7 System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
extern void Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672 (void);
// 0x000000A8 T* Unity.Collections.Memory/Unmanaged/Array::Resize(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000000A9 System.Int32 Unity.Collections.NativeArrayExtensions::IndexOf(Unity.Collections.NativeList`1<T>,U)
// 0x000000AA System.Int32 Unity.Collections.NativeArrayExtensions::IndexOf(System.Void*,System.Int32,U)
// 0x000000AB System.Void Unity.Collections.NativeList`1::.ctor(Unity.Collections.AllocatorManager/AllocatorHandle)
// 0x000000AC System.Void Unity.Collections.NativeList`1::Initialize(System.Int32,U&,System.Int32)
// 0x000000AD System.Void Unity.Collections.NativeList`1::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int32)
// 0x000000AE T Unity.Collections.NativeList`1::get_Item(System.Int32)
// 0x000000AF System.Void Unity.Collections.NativeList`1::set_Item(System.Int32,T)
// 0x000000B0 System.Int32 Unity.Collections.NativeList`1::get_Length()
// 0x000000B1 System.Void Unity.Collections.NativeList`1::Add(T&)
// 0x000000B2 System.Void Unity.Collections.NativeList`1::RemoveAtSwapBack(System.Int32)
// 0x000000B3 System.Boolean Unity.Collections.NativeList`1::get_IsCreated()
// 0x000000B4 System.Void Unity.Collections.NativeList`1::Dispose()
// 0x000000B5 System.Void Unity.Collections.NativeList`1::Clear()
// 0x000000B6 Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1::op_Implicit(Unity.Collections.NativeList`1<T>)
// 0x000000B7 Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1::AsArray()
// 0x000000B8 System.Collections.IEnumerator Unity.Collections.NativeList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000B9 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BA System.Void Unity.Collections.Spinner::Lock()
extern void Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7 (void);
// 0x000000BB System.Void Unity.Collections.Spinner::Unlock()
extern void Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A (void);
// 0x000000BC System.Void Unity.Collections.UnmanagedArray`1::Dispose()
// 0x000000BD T& Unity.Collections.UnmanagedArray`1::get_Item(System.Int32)
// 0x000000BE System.Void Unity.Collections.RewindableAllocator::Rewind()
extern void RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595 (void);
// 0x000000BF System.Void Unity.Collections.RewindableAllocator::Dispose()
extern void RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F (void);
// 0x000000C0 System.Int32 Unity.Collections.RewindableAllocator::Try(Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED (void);
// 0x000000C1 System.Int32 Unity.Collections.RewindableAllocator::Try(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115 (void);
// 0x000000C2 Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.RewindableAllocator::get_Handle()
extern void RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E (void);
// 0x000000C3 System.Int32 Unity.Collections.RewindableAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52 (void);
// 0x000000C4 System.Void Unity.Collections.RewindableAllocator/MemoryBlock::.ctor(System.Int64)
extern void MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F (void);
// 0x000000C5 System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Rewind()
extern void MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069 (void);
// 0x000000C6 System.Void Unity.Collections.RewindableAllocator/MemoryBlock::Dispose()
extern void MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F (void);
// 0x000000C7 System.Int32 Unity.Collections.RewindableAllocator/MemoryBlock::TryAllocate(Unity.Collections.AllocatorManager/Block&)
extern void MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10 (void);
// 0x000000C8 System.Boolean Unity.Collections.RewindableAllocator/MemoryBlock::Contains(System.IntPtr)
extern void MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC (void);
// 0x000000C9 System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Try_00000732U24PostfixBurstDelegate__ctor_mA9DDABFD185DD18D65D21F1E2EA3818971C5F551 (void);
// 0x000000CA System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_00000732U24PostfixBurstDelegate_Invoke_m1C934BE097DF23DB9E9F793A6C26D2DA877F525F (void);
// 0x000000CB System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Try_00000732U24BurstDirectCall_GetFunctionPointerDiscard_m3B752E354E2828DD285C066CE3B5DEA90A3F6579 (void);
// 0x000000CC System.IntPtr Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::GetFunctionPointer()
extern void Try_00000732U24BurstDirectCall_GetFunctionPointer_m59ECCFF1396288F720B6FAB9BE4A2070A0934517 (void);
// 0x000000CD System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::Constructor()
extern void Try_00000732U24BurstDirectCall_Constructor_m997692EF44E78D376545B3067EDD1B49F12E5557 (void);
// 0x000000CE System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::Initialize()
extern void Try_00000732U24BurstDirectCall_Initialize_m60452591A440414FE20227B6301BE60B45B56389 (void);
// 0x000000CF System.Void Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::.cctor()
extern void Try_00000732U24BurstDirectCall__cctor_m7C7D3354EAC0706E54621818ECC5CFE91F46CFDF (void);
// 0x000000D0 System.Int32 Unity.Collections.RewindableAllocator/Unity.Collections.Try_00000732$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
extern void Try_00000732U24BurstDirectCall_Invoke_mE3FD6C631A6D1591113B46B9BAA9B3A7B973C703 (void);
// 0x000000D1 System.Void Unity.Collections.xxHash3::Avx2HashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_Avx2HashLongInternalLoop_m442746594450DC1E0B61061B9F3D1032C2D57529 (void);
// 0x000000D2 System.Void Unity.Collections.xxHash3::Avx2ScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_Avx2ScrambleAcc_mD74A53B0BA0A96E8B0298A97A0C1E3DFA4C643D5 (void);
// 0x000000D3 System.Void Unity.Collections.xxHash3::Avx2Accumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_Avx2Accumulate_m270AB6784390432C557F890E6E4281D6921D78B7 (void);
// 0x000000D4 System.Void Unity.Collections.xxHash3::Avx2Accumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*)
extern void xxHash3_Avx2Accumulate512_mB2B1BC058C2E3A9199E028CC115890D11E8B5ECD (void);
// 0x000000D5 System.UInt64 Unity.Collections.xxHash3::Hash64Long(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void xxHash3_Hash64Long_m139E7D0E4F9BEE31A67C6B0DA3D89AA93773D4B9 (void);
// 0x000000D6 System.Void Unity.Collections.xxHash3::Hash128Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128Long_mB811A64DE35E597BEF6A1F1566456674B26FA2C5 (void);
// 0x000000D7 Unity.Mathematics.uint4 Unity.Collections.xxHash3::ToUint4(System.UInt64,System.UInt64)
extern void xxHash3_ToUint4_m6DA767007FADBF9532A2E5173996473BEDE21220 (void);
// 0x000000D8 System.UInt64 Unity.Collections.xxHash3::Read64LE(System.Void*)
extern void xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65 (void);
// 0x000000D9 System.Void Unity.Collections.xxHash3::Write64LE(System.Void*,System.UInt64)
extern void xxHash3_Write64LE_m081CFB5625644F1EA14C692C00DD342F9D8CFF8F (void);
// 0x000000DA System.UInt64 Unity.Collections.xxHash3::Mul32To64(System.UInt32,System.UInt32)
extern void xxHash3_Mul32To64_m658CA5D40AAB84E56DF2C0433A34E209F3C236DE (void);
// 0x000000DB System.UInt64 Unity.Collections.xxHash3::XorShift64(System.UInt64,System.Int32)
extern void xxHash3_XorShift64_m60FE95AE47D67ACD4AA70E8C3AE81A92C3C89955 (void);
// 0x000000DC System.UInt64 Unity.Collections.xxHash3::Mul128Fold64(System.UInt64,System.UInt64)
extern void xxHash3_Mul128Fold64_mA7EB7CAED01CEFA6204C0344F5DD7CD7625AABB5 (void);
// 0x000000DD System.UInt64 Unity.Collections.xxHash3::Avalanche(System.UInt64)
extern void xxHash3_Avalanche_mBE469AA9C171E827977A1C02AB4F54450CB6B382 (void);
// 0x000000DE System.UInt64 Unity.Collections.xxHash3::Mix2Acc(System.UInt64,System.UInt64,System.Byte*)
extern void xxHash3_Mix2Acc_mD770DD066F75B7813FE9495ED10135605D6F63A1 (void);
// 0x000000DF System.UInt64 Unity.Collections.xxHash3::MergeAcc(System.UInt64*,System.Byte*,System.UInt64)
extern void xxHash3_MergeAcc_m95092AEC7B1C5BB19BF70E55CA030CAE37C79161 (void);
// 0x000000E0 System.Void Unity.Collections.xxHash3::DefaultHashLongInternalLoop(System.UInt64*,System.Byte*,System.Byte*,System.Int64,System.Byte*,System.Int32)
extern void xxHash3_DefaultHashLongInternalLoop_m3D2C33BD3DA90FA61B83E38DE7D85F519FF5B103 (void);
// 0x000000E1 System.Void Unity.Collections.xxHash3::DefaultAccumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
extern void xxHash3_DefaultAccumulate_m7DA7DD552587A8E4F8DDF6ECF15A9E3BA9F0FF99 (void);
// 0x000000E2 System.Void Unity.Collections.xxHash3::DefaultAccumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int32)
extern void xxHash3_DefaultAccumulate512_mEDA479285F49F88B0C611808FD0DF25DAEC7FD30 (void);
// 0x000000E3 System.Void Unity.Collections.xxHash3::DefaultScrambleAcc(System.UInt64*,System.Byte*)
extern void xxHash3_DefaultScrambleAcc_m0C7101A15C7DC90645515C5AD54A93064925CCE9 (void);
// 0x000000E4 System.UInt64 Unity.Collections.xxHash3::Hash64Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void xxHash3_Hash64LongU24BurstManaged_mD990588FAC78D5CBFC165A8404B27BDE4FB2B3E1 (void);
// 0x000000E5 System.Void Unity.Collections.xxHash3::Hash128Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void xxHash3_Hash128LongU24BurstManaged_m08DB7B8209EBE3584489E17EBB40B64D29F9C9B4 (void);
// 0x000000E6 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Hash64Long_00000769U24PostfixBurstDelegate__ctor_mAB0BAF9264A023415CA8D3BC5DF71C4BF8071D2C (void);
// 0x000000E7 System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3 (void);
// 0x000000E8 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Hash64Long_00000769U24BurstDirectCall_GetFunctionPointerDiscard_m6A2C3CDD93F7E1338C11540FAD304332C8629318 (void);
// 0x000000E9 System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::GetFunctionPointer()
extern void Hash64Long_00000769U24BurstDirectCall_GetFunctionPointer_m4B2527C1C7A26E4C4DDEE5085BA74268B41ABF1F (void);
// 0x000000EA System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::Constructor()
extern void Hash64Long_00000769U24BurstDirectCall_Constructor_m5DA8CD882874F9BB78C13CA1D3FC15C62447AEEC (void);
// 0x000000EB System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::Initialize()
extern void Hash64Long_00000769U24BurstDirectCall_Initialize_m95E7F7B2E4CC1AF0E063BBF05A1BF11F6CCB2328 (void);
// 0x000000EC System.Void Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::.cctor()
extern void Hash64Long_00000769U24BurstDirectCall__cctor_mE79D5C6F4A1E1EE68B02F300383F0938CE1FFC6F (void);
// 0x000000ED System.UInt64 Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000769$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*)
extern void Hash64Long_00000769U24BurstDirectCall_Invoke_m1AA4699AB6B75E84AC2D149C1BABD3BF09CE3752 (void);
// 0x000000EE System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
extern void Hash128Long_00000770U24PostfixBurstDelegate__ctor_mE19E7866EFC9EF255D17341483DEC923613C5C0D (void);
// 0x000000EF System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB (void);
// 0x000000F0 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
extern void Hash128Long_00000770U24BurstDirectCall_GetFunctionPointerDiscard_m53CB212EA6BE49C05ADEF17C73045AEDC034AFF4 (void);
// 0x000000F1 System.IntPtr Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::GetFunctionPointer()
extern void Hash128Long_00000770U24BurstDirectCall_GetFunctionPointer_m23A4CE813A0A57DE32573B8488E8563BEA4E213C (void);
// 0x000000F2 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::Constructor()
extern void Hash128Long_00000770U24BurstDirectCall_Constructor_mA7370FE9286219498239AB05856AC51223D639AB (void);
// 0x000000F3 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::Initialize()
extern void Hash128Long_00000770U24BurstDirectCall_Initialize_m662C1AF632941013940D96BD64C16FC023773B1E (void);
// 0x000000F4 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::.cctor()
extern void Hash128Long_00000770U24BurstDirectCall__cctor_m155D2154CF2B0E3C594D06F32F5C3D113D1F2C8B (void);
// 0x000000F5 System.Void Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000770$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
extern void Hash128Long_00000770U24BurstDirectCall_Invoke_m617BBF6D8F11F7780500926C618F5A6A3CCFD1E4 (void);
// 0x000000F6 System.Void* Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility::GetUnsafeReadOnlyPtr(Unity.Collections.NativeList`1<T>)
// 0x000000F7 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Length()
// 0x000000F8 System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Capacity()
// 0x000000F9 T Unity.Collections.LowLevel.Unsafe.UnsafeList`1::get_Item(System.Int32)
// 0x000000FA System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::set_Item(System.Int32,T)
// 0x000000FB Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Create(System.Int32,U&,Unity.Collections.NativeArrayOptions)
// 0x000000FC System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Destroy(Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>*)
// 0x000000FD System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Dispose()
// 0x000000FE System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Clear()
// 0x000000FF System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Resize(System.Int32,Unity.Collections.NativeArrayOptions)
// 0x00000100 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Realloc(U&,System.Int32)
// 0x00000101 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::SetCapacity(U&,System.Int32)
// 0x00000102 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::SetCapacity(System.Int32)
// 0x00000103 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::Add(T&)
// 0x00000104 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::RemoveAtSwapBack(System.Int32)
// 0x00000105 System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList`1::RemoveRangeSwapBack(System.Int32,System.Int32)
// 0x00000106 System.Collections.IEnumerator Unity.Collections.LowLevel.Unsafe.UnsafeList`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000107 System.Collections.Generic.IEnumerator`1<T> Unity.Collections.LowLevel.Unsafe.UnsafeList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000108 System.Void $BurstDirectCallInitializer::Initialize()
extern void U24BurstDirectCallInitializer_Initialize_mF1E148DB6A518A7ABD5E39159E45B9270A7CD052 (void);
static Il2CppMethodPointer s_methodPointers[264] = 
{
	EmbeddedAttribute__ctor_mB9EA4CCF3A3DC39A3BC92CFE9557FFAA77D15404,
	IsUnmanagedAttribute__ctor_m15974D59768AFF916E346F7107F7FF7F6AD9099C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AllocatorManager_CheckDelegate_m4A8CEB99274CDBB45D754B43D7F6A7141FB4A1E5,
	AllocatorManager_UseDelegate_mBF89F104AD0ED5DE52A221569A69F09293E36033,
	AllocatorManager_allocate_block_mCA2494A79A83824BB93DBBB08883E2FA4FA0020C,
	AllocatorManager_forward_mono_allocate_block_mA4344DF1E601F7EC9AD85B7B5406225B4091567D,
	AllocatorManager_LegacyOf_m18E5AA6A18C4741EE3A244E3834736FD1D23D8C1,
	AllocatorManager_TryLegacy_m47E4B9C46270E61CE56D1A9D25E38AD498C2033C,
	AllocatorManager_Try_m80548C54CFCD1C94C60CDB8825D23106947A9125,
	AllocatorManager__cctor_m9B228E6B261BF8B5170839E1AC5AC693E488A0A1,
	TryFunction__ctor_m10C4A7B32E87301727B84D8CBA081FABAE3CCE53,
	TryFunction_Invoke_mED723D46A7B0C4B590ABECE0868EA02AD94D07A2,
	AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63,
	AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1,
	AllocatorHandle_op_Implicit_m784E54E7FB5C2C06F5A0A812D4DFBDCE01395CF3,
	AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F,
	AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9,
	AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2,
	AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF,
	AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3,
	Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A,
	Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7,
	Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08,
	Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633,
	Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F,
	Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED,
	Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225,
	NULL,
	NULL,
	StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267,
	StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558,
	StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6,
	StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB,
	StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7,
	Try_00000A0CU24PostfixBurstDelegate__ctor_m86132B67D16441E144FADD2D7C41F2E88EFFE7FF,
	Try_00000A0CU24PostfixBurstDelegate_Invoke_mD81D3BB3B56D6446CE84FDD01A3DEE5C575A5C8F,
	Try_00000A0CU24BurstDirectCall_GetFunctionPointerDiscard_mBD7B14657BD9DED1D6DB17395682A198A2127ADC,
	Try_00000A0CU24BurstDirectCall_GetFunctionPointer_mACA66472A7DABE3D3CC1445FA57D585EAE560374,
	Try_00000A0CU24BurstDirectCall_Constructor_m78969031636424FF180A63912777C0B8446862C0,
	Try_00000A0CU24BurstDirectCall_Initialize_mB794E7AFF05A339E2F654C879FF924F63626E56E,
	Try_00000A0CU24BurstDirectCall__cctor_mCB91408F41E2F5FB8499408AD28471D1DFF9A900,
	Try_00000A0CU24BurstDirectCall_Invoke_m83BD090A8382C1F49D7DB18C55ED2F1897B13125,
	SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE,
	SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612,
	SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD,
	SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0,
	SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912,
	SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5,
	Try_00000A1AU24PostfixBurstDelegate__ctor_mAA8F8D86A6F4CCAC45DB371681919640B107B445,
	Try_00000A1AU24PostfixBurstDelegate_Invoke_m9D703F119880DF9801FB5F245FE99076523D9F06,
	Try_00000A1AU24BurstDirectCall_GetFunctionPointerDiscard_m7BA13FC5A431C3E0C533473FEFB7C11E35FB1791,
	Try_00000A1AU24BurstDirectCall_GetFunctionPointer_m9C718A8828FEC5AEF27957362FA52CAD49262ABB,
	Try_00000A1AU24BurstDirectCall_Constructor_mD48044B24C54068FFD88C68D6A5521CCA8F096B9,
	Try_00000A1AU24BurstDirectCall_Initialize_m5C3A9A99F6293196E32C82585B7C5AE040237CC5,
	Try_00000A1AU24BurstDirectCall__cctor_m6B8D1A78FC31D7A1283F2ED365CF6F636DF483A7,
	Try_00000A1AU24BurstDirectCall_Invoke_m97B19B4E6D47817822FECE96A16CCFFEB455C4C0,
	NULL,
	TableEntry__cctor_m756709B4E1DD838A5A106DA37C9C1CD006844E8B,
	Managed__cctor_m8AABCF5C149993D7017CDD63D9B18F3AAC7AEB97,
	CreatePropertyAttribute__ctor_mFD5BF090F42312F62534D903F2D804C19CE16264,
	BurstCompatibleAttribute_set_GenericTypeArguments_mBE8AE08E0824187C5B48F5132C73624CAB2C6906,
	BurstCompatibleAttribute__ctor_m6D43ED0B880EE6FCCCBC38B1A63DB493898DD3BA,
	NotBurstCompatibleAttribute__ctor_mF89AC194CF3CC2F03A673D1FBDE969E1751CB827,
	CollectionHelper_Hash_mBE065315254F12BC78A818A6D8302DF01C35795F,
	CollectionHelper_ShouldDeallocate_mEA0AEDB292CE3BD7BD84114E25C3BE396AF50CC2,
	CollectionHelper_AssumePositive_m33E244E5FD3318B35CD9D70504B34FC7D578DA43,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Unmanaged_Allocate_mCD00DF6E249C3A43F8282A83AD3B16AEFFE81A14,
	Unmanaged_Free_m18CD64E2094F71CB38499DC51A55104AE42A464A,
	NULL,
	Array_IsCustom_m3B23BD5B6E2CD65EE4BAF3A60305F67D45B64B3F,
	Array_CustomResize_mDB54012F437319EB6FB861B8D67256AB5A9B20D5,
	Array_Resize_mBE6A0C00B7C84F53DEA8A458C39887B0D0559672,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7,
	Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A,
	NULL,
	NULL,
	RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595,
	RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F,
	RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED,
	RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115,
	RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E,
	RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52,
	MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F,
	MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069,
	MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F,
	MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10,
	MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC,
	Try_00000732U24PostfixBurstDelegate__ctor_mA9DDABFD185DD18D65D21F1E2EA3818971C5F551,
	Try_00000732U24PostfixBurstDelegate_Invoke_m1C934BE097DF23DB9E9F793A6C26D2DA877F525F,
	Try_00000732U24BurstDirectCall_GetFunctionPointerDiscard_m3B752E354E2828DD285C066CE3B5DEA90A3F6579,
	Try_00000732U24BurstDirectCall_GetFunctionPointer_m59ECCFF1396288F720B6FAB9BE4A2070A0934517,
	Try_00000732U24BurstDirectCall_Constructor_m997692EF44E78D376545B3067EDD1B49F12E5557,
	Try_00000732U24BurstDirectCall_Initialize_m60452591A440414FE20227B6301BE60B45B56389,
	Try_00000732U24BurstDirectCall__cctor_m7C7D3354EAC0706E54621818ECC5CFE91F46CFDF,
	Try_00000732U24BurstDirectCall_Invoke_mE3FD6C631A6D1591113B46B9BAA9B3A7B973C703,
	xxHash3_Avx2HashLongInternalLoop_m442746594450DC1E0B61061B9F3D1032C2D57529,
	xxHash3_Avx2ScrambleAcc_mD74A53B0BA0A96E8B0298A97A0C1E3DFA4C643D5,
	xxHash3_Avx2Accumulate_m270AB6784390432C557F890E6E4281D6921D78B7,
	xxHash3_Avx2Accumulate512_mB2B1BC058C2E3A9199E028CC115890D11E8B5ECD,
	xxHash3_Hash64Long_m139E7D0E4F9BEE31A67C6B0DA3D89AA93773D4B9,
	xxHash3_Hash128Long_mB811A64DE35E597BEF6A1F1566456674B26FA2C5,
	xxHash3_ToUint4_m6DA767007FADBF9532A2E5173996473BEDE21220,
	xxHash3_Read64LE_m142BE5079FBF51DF81C53FAB5E7021ECA764DC65,
	xxHash3_Write64LE_m081CFB5625644F1EA14C692C00DD342F9D8CFF8F,
	xxHash3_Mul32To64_m658CA5D40AAB84E56DF2C0433A34E209F3C236DE,
	xxHash3_XorShift64_m60FE95AE47D67ACD4AA70E8C3AE81A92C3C89955,
	xxHash3_Mul128Fold64_mA7EB7CAED01CEFA6204C0344F5DD7CD7625AABB5,
	xxHash3_Avalanche_mBE469AA9C171E827977A1C02AB4F54450CB6B382,
	xxHash3_Mix2Acc_mD770DD066F75B7813FE9495ED10135605D6F63A1,
	xxHash3_MergeAcc_m95092AEC7B1C5BB19BF70E55CA030CAE37C79161,
	xxHash3_DefaultHashLongInternalLoop_m3D2C33BD3DA90FA61B83E38DE7D85F519FF5B103,
	xxHash3_DefaultAccumulate_m7DA7DD552587A8E4F8DDF6ECF15A9E3BA9F0FF99,
	xxHash3_DefaultAccumulate512_mEDA479285F49F88B0C611808FD0DF25DAEC7FD30,
	xxHash3_DefaultScrambleAcc_m0C7101A15C7DC90645515C5AD54A93064925CCE9,
	xxHash3_Hash64LongU24BurstManaged_mD990588FAC78D5CBFC165A8404B27BDE4FB2B3E1,
	xxHash3_Hash128LongU24BurstManaged_m08DB7B8209EBE3584489E17EBB40B64D29F9C9B4,
	Hash64Long_00000769U24PostfixBurstDelegate__ctor_mAB0BAF9264A023415CA8D3BC5DF71C4BF8071D2C,
	Hash64Long_00000769U24PostfixBurstDelegate_Invoke_m5762A04B0055F54E0F93FD66B7B395D0F42086F3,
	Hash64Long_00000769U24BurstDirectCall_GetFunctionPointerDiscard_m6A2C3CDD93F7E1338C11540FAD304332C8629318,
	Hash64Long_00000769U24BurstDirectCall_GetFunctionPointer_m4B2527C1C7A26E4C4DDEE5085BA74268B41ABF1F,
	Hash64Long_00000769U24BurstDirectCall_Constructor_m5DA8CD882874F9BB78C13CA1D3FC15C62447AEEC,
	Hash64Long_00000769U24BurstDirectCall_Initialize_m95E7F7B2E4CC1AF0E063BBF05A1BF11F6CCB2328,
	Hash64Long_00000769U24BurstDirectCall__cctor_mE79D5C6F4A1E1EE68B02F300383F0938CE1FFC6F,
	Hash64Long_00000769U24BurstDirectCall_Invoke_m1AA4699AB6B75E84AC2D149C1BABD3BF09CE3752,
	Hash128Long_00000770U24PostfixBurstDelegate__ctor_mE19E7866EFC9EF255D17341483DEC923613C5C0D,
	Hash128Long_00000770U24PostfixBurstDelegate_Invoke_mA50F7E7BB006519CCE88B6D91529E051AA9CE7EB,
	Hash128Long_00000770U24BurstDirectCall_GetFunctionPointerDiscard_m53CB212EA6BE49C05ADEF17C73045AEDC034AFF4,
	Hash128Long_00000770U24BurstDirectCall_GetFunctionPointer_m23A4CE813A0A57DE32573B8488E8563BEA4E213C,
	Hash128Long_00000770U24BurstDirectCall_Constructor_mA7370FE9286219498239AB05856AC51223D639AB,
	Hash128Long_00000770U24BurstDirectCall_Initialize_m662C1AF632941013940D96BD64C16FC023773B1E,
	Hash128Long_00000770U24BurstDirectCall__cctor_m155D2154CF2B0E3C594D06F32F5C3D113D1F2C8B,
	Hash128Long_00000770U24BurstDirectCall_Invoke_m617BBF6D8F11F7780500926C618F5A6A3CCFD1E4,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	U24BurstDirectCallInitializer_Initialize_mF1E148DB6A518A7ABD5E39159E45B9270A7CD052,
};
extern void AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63_AdjustorThunk (void);
extern void AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1_AdjustorThunk (void);
extern void AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_AdjustorThunk (void);
extern void AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9_AdjustorThunk (void);
extern void AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2_AdjustorThunk (void);
extern void AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF_AdjustorThunk (void);
extern void AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3_AdjustorThunk (void);
extern void Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A_AdjustorThunk (void);
extern void Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7_AdjustorThunk (void);
extern void Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08_AdjustorThunk (void);
extern void Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633_AdjustorThunk (void);
extern void Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F_AdjustorThunk (void);
extern void Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED_AdjustorThunk (void);
extern void Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225_AdjustorThunk (void);
extern void StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267_AdjustorThunk (void);
extern void StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558_AdjustorThunk (void);
extern void StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB_AdjustorThunk (void);
extern void SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE_AdjustorThunk (void);
extern void SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612_AdjustorThunk (void);
extern void SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD_AdjustorThunk (void);
extern void SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912_AdjustorThunk (void);
extern void Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7_AdjustorThunk (void);
extern void Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A_AdjustorThunk (void);
extern void RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595_AdjustorThunk (void);
extern void RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F_AdjustorThunk (void);
extern void RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED_AdjustorThunk (void);
extern void RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E_AdjustorThunk (void);
extern void MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F_AdjustorThunk (void);
extern void MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069_AdjustorThunk (void);
extern void MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F_AdjustorThunk (void);
extern void MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10_AdjustorThunk (void);
extern void MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[32] = 
{
	{ 0x06000014, AllocatorHandle_get_TableEntry_m09C5D57FF627FEAD3AAE73FB28CB4B9EEB811A63_AdjustorThunk },
	{ 0x06000015, AllocatorHandle_Rewind_mC0426BBD1E638878C33164F91AC3ADC66C850AC1_AdjustorThunk },
	{ 0x06000017, AllocatorHandle_get_Value_m24A0A3E433794106E43E9140CC2BB55493C8F30F_AdjustorThunk },
	{ 0x06000018, AllocatorHandle_Try_m4E8677E100693A0F015076408244AF2BA827CBC9_AdjustorThunk },
	{ 0x06000019, AllocatorHandle_get_Handle_m440EA9B9A4306115087775DA2AA0AC034107D0E2_AdjustorThunk },
	{ 0x0600001A, AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF_AdjustorThunk },
	{ 0x0600001B, AllocatorHandle_Dispose_mB74CBC8980962C016A6C85F09D3F94775A2C58E3_AdjustorThunk },
	{ 0x0600001C, Range_Dispose_mEABC7B5F5F72CBAC69BAB12C80B8EDEE86B3737A_AdjustorThunk },
	{ 0x0600001D, Block_get_Bytes_m4BB90CD1C72FC56C573BE09951BF1CA68E8BD7D7_AdjustorThunk },
	{ 0x0600001E, Block_get_AllocatedBytes_mFE126B221F670BDA89C5D59C9E63C9724F79BE08_AdjustorThunk },
	{ 0x0600001F, Block_get_Alignment_mC2388F87008B204A333664B9323BD38AA20FD633_AdjustorThunk },
	{ 0x06000020, Block_set_Alignment_m4E74D90E827C5F58B3EBE91B2F5B097388E0500F_AdjustorThunk },
	{ 0x06000021, Block_Dispose_m38B474EF3D6A142344D0A58651319FD039FB54ED_AdjustorThunk },
	{ 0x06000022, Block_TryFree_m0C5FA80AF51DA6F40F40DAE7E97975C3BB402225_AdjustorThunk },
	{ 0x06000025, StackAllocator_get_Handle_m31D630726EF42BC6C432F8751E6B2BE346BB2267_AdjustorThunk },
	{ 0x06000026, StackAllocator_Try_m46B9AAB118C2ACCDB8B0A54DA8E27209CA152558_AdjustorThunk },
	{ 0x06000028, StackAllocator_Dispose_m0872D5C01F22CD4BCCF71EA0185DB18EA14D62CB_AdjustorThunk },
	{ 0x06000032, SlabAllocator_get_Handle_m09C2CCD8BCEA26214DC514707F222B228A1E04BE_AdjustorThunk },
	{ 0x06000033, SlabAllocator_get_SlabSizeInBytes_mFFD79D4D6B544F1C21CB0EB40BBDFF5D5477A612_AdjustorThunk },
	{ 0x06000034, SlabAllocator_Try_mE7D3D58D59FB68AE5FA9FF99C0C69FD854F482CD_AdjustorThunk },
	{ 0x06000036, SlabAllocator_Dispose_m9ED75718657190884C0327489A9AE9DB525D7912_AdjustorThunk },
	{ 0x060000BA, Spinner_Lock_mF38DA7980552D7B8E60444A1B64ADF440D3DFAA7_AdjustorThunk },
	{ 0x060000BB, Spinner_Unlock_m1664CFC96DCA3A7B36092F61C9E34624C497EB1A_AdjustorThunk },
	{ 0x060000BE, RewindableAllocator_Rewind_m8EB623F05C707C3AF52FF082A7C095FE3A1CE595_AdjustorThunk },
	{ 0x060000BF, RewindableAllocator_Dispose_mD873C81842DAEBF01369B8023805FF930C4C8A2F_AdjustorThunk },
	{ 0x060000C0, RewindableAllocator_Try_m6C020E9D4D72801E38775286491991C3FCE064ED_AdjustorThunk },
	{ 0x060000C2, RewindableAllocator_get_Handle_mF81EDA2102485C46965AAB56347E8F64FE551D9E_AdjustorThunk },
	{ 0x060000C4, MemoryBlock__ctor_m0DEC878B6827C0B400BE1C00CA37C2F8F1C31D7F_AdjustorThunk },
	{ 0x060000C5, MemoryBlock_Rewind_m64C7EC463789D78802B8D27695AFFD37133E7069_AdjustorThunk },
	{ 0x060000C6, MemoryBlock_Dispose_mE0EAA3828B238B9A26EF6BB5CA7CB5EC592FBD6F_AdjustorThunk },
	{ 0x060000C7, MemoryBlock_TryAllocate_m34CC70E419486D5B1C90E7BF4A6762BE3D130F10_AdjustorThunk },
	{ 0x060000C8, MemoryBlock_Contains_m2F035A4F1F9063B42ACB1B590C4EFD1741E39CEC_AdjustorThunk },
};
static const int32_t s_InvokerIndices[264] = 
{
	10744,
	10744,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	15885,
	16027,
	15425,
	14905,
	15458,
	15425,
	15425,
	16104,
	5295,
	3857,
	10421,
	10744,
	15950,
	10530,
	7303,
	10768,
	10530,
	10744,
	10744,
	10531,
	10531,
	10530,
	8649,
	10744,
	10530,
	0,
	0,
	10768,
	7303,
	14471,
	10744,
	14471,
	5295,
	3857,
	15885,
	16053,
	16104,
	16104,
	16104,
	14471,
	10768,
	10530,
	7303,
	14471,
	10744,
	14471,
	5295,
	3857,
	15885,
	16053,
	16104,
	16104,
	16104,
	14471,
	0,
	16104,
	16104,
	10744,
	8707,
	10744,
	10744,
	14775,
	15319,
	15440,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	13215,
	14918,
	0,
	15319,
	11376,
	11376,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	10744,
	10744,
	0,
	0,
	10744,
	10744,
	7303,
	14471,
	10768,
	14471,
	8650,
	10744,
	10744,
	7303,
	6408,
	5295,
	3857,
	15885,
	16053,
	16104,
	16104,
	16104,
	14471,
	11539,
	14905,
	11538,
	12965,
	12940,
	12154,
	15091,
	15828,
	14914,
	14792,
	14793,
	14794,
	15841,
	13689,
	13687,
	11539,
	11538,
	12149,
	14905,
	12940,
	12154,
	5295,
	1922,
	15885,
	16053,
	16104,
	16104,
	16104,
	12940,
	5295,
	1025,
	15885,
	16053,
	16104,
	16104,
	16104,
	12154,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	16104,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[6] = 
{
	{ 0x06000027, 21,  (void**)&StackAllocator_Try_mAE50C02088BB7F9E154A124C00E7BF1C3DF1B0B6_RuntimeMethod_var, 0 },
	{ 0x06000029, 22,  (void**)&StackAllocator_TryU24BurstManaged_m8C725A7308CCA2FCF709053D2660D37BBB1990E7_RuntimeMethod_var, 0 },
	{ 0x06000035, 19,  (void**)&SlabAllocator_Try_mBC7DA9938F61EC1FA877854A3F095EB8CA5D4AE0_RuntimeMethod_var, 0 },
	{ 0x06000037, 20,  (void**)&SlabAllocator_TryU24BurstManaged_m484D87FD1C7B43A0E6B77864265E0370AC734EA5_RuntimeMethod_var, 0 },
	{ 0x060000C1, 12,  (void**)&RewindableAllocator_Try_mFA247929359660CC33023F374ED76B43812B9115_RuntimeMethod_var, 0 },
	{ 0x060000C3, 13,  (void**)&RewindableAllocator_TryU24BurstManaged_m9FC90FBCAB23681675E5FF0BBE59BB7D5058ED52_RuntimeMethod_var, 0 },
};
static const Il2CppTokenRangePair s_rgctxIndices[25] = 
{
	{ 0x02000014, { 14, 2 } },
	{ 0x0200001D, { 17, 25 } },
	{ 0x0200001F, { 42, 25 } },
	{ 0x02000021, { 67, 25 } },
	{ 0x02000023, { 92, 25 } },
	{ 0x02000025, { 117, 27 } },
	{ 0x02000031, { 154, 12 } },
	{ 0x02000034, { 169, 2 } },
	{ 0x0200003F, { 171, 12 } },
	{ 0x06000003, { 0, 3 } },
	{ 0x06000004, { 3, 1 } },
	{ 0x06000005, { 4, 3 } },
	{ 0x06000006, { 7, 2 } },
	{ 0x06000007, { 9, 1 } },
	{ 0x06000008, { 10, 3 } },
	{ 0x06000009, { 13, 1 } },
	{ 0x0600004A, { 16, 1 } },
	{ 0x060000A4, { 144, 1 } },
	{ 0x060000A8, { 145, 2 } },
	{ 0x060000A9, { 147, 3 } },
	{ 0x060000AA, { 150, 4 } },
	{ 0x060000AC, { 166, 3 } },
	{ 0x060000FB, { 183, 4 } },
	{ 0x06000100, { 187, 2 } },
	{ 0x06000101, { 189, 1 } },
};
extern const uint32_t g_rgctx_T_tE5C3A13CD8880B94F529D63A5EFB93664A447758;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tE5C3A13CD8880B94F529D63A5EFB93664A447758_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tE5C3A13CD8880B94F529D63A5EFB93664A447758_IAllocator_Try_mDD961D5AECA15763EDDE7F745C825C7CD5D7FAB2;
extern const uint32_t g_rgctx_AllocatorManager_AllocateBlock_TisT_t832268F43FDA2A46198A41786645A56E6EE10C1E_m797DED5655EB95B0D442F0912AF81DEF0E3625B2;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisU_t4D149DA0C8CEE2E9C8DB9E9306AF2B0EFC699CE7_mB2B753D9FFF6A91BC7BB0D751115E5456F4C5CBC;
extern const uint32_t g_rgctx_UnsafeUtility_AlignOf_TisU_t4D149DA0C8CEE2E9C8DB9E9306AF2B0EFC699CE7_mB028D816847C39B855D0D55E5821E1340C6D907E;
extern const uint32_t g_rgctx_AllocatorManager_Allocate_TisT_t8D9C653ED19B6E2F2333C10AC3EA9F8102FB2CA8_m7CDB98CBCB5917A6B7CABA9EAB85D379085D4687;
extern const uint32_t g_rgctx_T_t8A1FD0FB059B75FCE5A238B22606E123376A4517;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t8A1FD0FB059B75FCE5A238B22606E123376A4517_IAllocator_Try_mDD961D5AECA15763EDDE7F745C825C7CD5D7FAB2;
extern const uint32_t g_rgctx_AllocatorManager_FreeBlock_TisT_tCB110901A859D75A366775BF33C8F318B4B639D9_m4B10F02A6F91D6ACFC22399646AB6910E6EF7C8D;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisU_t64D8855544CD030999EE0547D27298E654E1C21C_m4606A4191F7ACBB1E107DCCA268B1D00C45FFC17;
extern const uint32_t g_rgctx_UnsafeUtility_AlignOf_TisU_t64D8855544CD030999EE0547D27298E654E1C21C_m3082EA8474DEA61FAFE06A5E98980DBC821EC0C7;
extern const uint32_t g_rgctx_AllocatorManager_Free_TisT_t100BD791DC8B2981602B2B0DAE7A6BB822985B04_mECB7138A8E0B4B33823E0F143AE13A31D9FDE800;
extern const uint32_t g_rgctx_AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisT_tDC131F0D335593921DE2796C7EE7047173723737_m272E593EAF4C116597907D332CEF10F7608D422C;
extern const uint32_t g_rgctx_T_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34;
extern const uint32_t g_rgctx_UnsafeUtility_AsRef_TisT_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34_m9538FE908772E7494066A9FA456D9674A1F18CE3;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t29DC2694B89ACC66C53015AB501F49D9BF8CD0DB_m8CF53515D2968653B5374B3EAE05D748E49A11B9;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_m09C6C267D9BAF792F6EE22EE3EBFFA6DF40A1AF0;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_m191F3A5FE7AAB361FA480881D44EC91BB1C9CB69;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_m5A5B1F66A67EA67C700FFCD174CD386557F811B0;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Buffer_m8C59DC6D188FDA6852C8E1DCD65467F24AB6C6FF;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_LengthInBytes_mF4D1CE0CFE876F4AEA6727E2F9DC3E9ED4C6F49F;
extern const uint32_t g_rgctx_T_t604DA2B2C61AC824178F38507FE80321D55C1110;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_mBBBC65A417BA1B4D27BD77E11B44DE17E4AE14EF;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m927C78B4D944D4E876AB25A3E7AB4F6DFAD4F108;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_m6290A920F0B1C958BBD7B60BA6F94FD3164B806A;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_m07F322CB13F58D937FC51D44F14EE31B19067359;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_m6642F674EE22AC655E358EF533B0F700C16A0A94;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m1CC3012C703D85C7C951AE77DD2B3F5B8E42E918;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_mFAF2429BB4895D0C3AF7C5B981A3C53F440BE6A5;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_m29F0A70AA1DAC8624B99E5E213DC4E34036BBF0C;
extern const uint32_t g_rgctx_FixedList32Bytes_1_CompareTo_m21876ACD769677EB12796837397549EACDC6DA1F;
extern const uint32_t g_rgctx_FixedList32Bytes_1_tD2F19E017C9CF5DC6CB5780CDA882089FFE4B99C;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_mA9B2F154A856E8EB9B4983E2745FD077BA0D98C3;
extern const uint32_t g_rgctx_FixedList64Bytes_1_tC4ED4AB3E4EEE98679B1412FB4C80C3E4FA16834;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m496CF2C8A1FAFE63A285C2350D9530A60CC9B463;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t97E27D9873786614696ED6CB6B7DABF2AFF7DCFF;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m3B2C3C3508065763A6DEE8185CD3507C80EE2159;
extern const uint32_t g_rgctx_FixedList512Bytes_1_tE0BA0381F29B58D8A0C87FD4F2A4E8DB45DFB48F;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m8812C7F42A79683AC17FBC09A7F04E5E909E3A67;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t0629EA7E8B063F8817ECAE15F9A75E6F61CA42F0;
extern const uint32_t g_rgctx_FixedList32Bytes_1_Equals_m7701FD9664F730DE055F5A80657EBC6BF96BB399;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m904CEC4D13DAB3EC2E63867290A4919B3EE07B94;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_mD2A5FA4608BB9FF1D47B31D633A39ABBFADCD74C;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_mEF006EA493865D2B035382A92A92A4CD192179FE;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Buffer_m4ACFD76E5BAB7BBA3B105EF045FB34DF16925121;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_LengthInBytes_m830026A47AC35E78ACFB4ED8613C4241631C7FB3;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mDC309D74DBDE3857D8CF451A6C61E4DF244DB906;
extern const uint32_t g_rgctx_T_tD32C0F6209442C9BB65A030D29698147784945B7;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_mFFA2BDEF1D5931103F2349F121D89B9EFDA18B2A;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_m1B404F21933A0C0E3F4EDB9BDC56FF1374BA36BB;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_m913F6E9C36DA6E5150201BB04705176C61779A4A;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_mAE605CEAEF66638FB3772258684647B86795A026;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_mB4AC876C1C0A6D784950D1DF9D938E8187CC254A;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_m709B483E5DEB7FB21FD73055E1D18EFC77CB8D94;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_mA84088FDB735E31D8EC68ED7C7241B82F7E382E9;
extern const uint32_t g_rgctx_FixedList64Bytes_1_CompareTo_m72AEE1D5D4DD2A52568A3DB0395D4C6A4450D662;
extern const uint32_t g_rgctx_FixedList32Bytes_1_tF36F3420B2D85BB09FDA7CBE0B0A59127E7E47B5;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_mFA63385DF5A53E2D34A838F6B4D3E5EB93454707;
extern const uint32_t g_rgctx_FixedList64Bytes_1_t01290055D2315B7FB797137C2585E1D2A8FEFC93;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_m4A58B7E48EC3D1CE4B417CC606F7AF283179CE19;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t90FF12D54923E198013051CB940E9B9C7747AA0E;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_mD426D7F36DA3313161AF4ACB1D163554927B2B5C;
extern const uint32_t g_rgctx_FixedList512Bytes_1_t5A455036DE64718823C34266F43B4B930819650E;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_mA3CB277239697E135B80B1652428B650E393E3EF;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t140F024B8BA0DDF7C9A41DFDFE78C7BEECDE6355;
extern const uint32_t g_rgctx_FixedList64Bytes_1_Equals_m676325C656968A3297E0312C5E86C06A021B6A7A;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_m0455E51110778F6A133DB6106D4F22A64B989348;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_m0D1A1A4AE246377E927C65D86E98A47A4CB8B3FB;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_m0186AB6C9D3E697B569C93ECCB6B4D6F93B88CF6;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Buffer_m97D30707BB2AEA2F5DBADE3B0FAC8F672E8B1A3D;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_LengthInBytes_m47F607A647F86AE5CEE40BB1760159288C68D0BB;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mB2C086817BC1745080C475DEF2DC556F31A59D67;
extern const uint32_t g_rgctx_T_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m2666E22B9261026A0D7D0DDBE9CAF263093BCA3B;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m4D4D3FDEAC491E57BF639002CE416C8CAEEAF68B;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_mE9957B37908F02DBF2C0FBC8A01F575132266E51;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m4C2FEAF12A383067066580E5AE042BA1E5E15353;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m660F2F29958AF880448E6418281CCCEB44F5B7D4;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m437197F791AB58DC99F09DD25DFF430B2F4CFA16;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_m9A5EEBCAC9EB81EA90B9BD7FFB53C8C16795D572;
extern const uint32_t g_rgctx_FixedList128Bytes_1_CompareTo_m255D7C47599B63B530DEF04B43CD7223D203C6DC;
extern const uint32_t g_rgctx_FixedList32Bytes_1_t3C413D65609876A5C74284892DEE5A0D625FB108;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_m086E1CCF2A8A8917B11F2B64CF7D29C6EE148120;
extern const uint32_t g_rgctx_FixedList64Bytes_1_t870D9CA977C5EB1DE5E7F03D3EBCDF741429CFD5;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_mBF301D370C792F53697A10E96FFDC089205671AE;
extern const uint32_t g_rgctx_FixedList128Bytes_1_tD5CBB33E81228C7A982A8BB36F4C59C6886B72D2;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_m2CDB0F15DB14C27621333422EF9796AD3D031766;
extern const uint32_t g_rgctx_FixedList512Bytes_1_tC3D869C52DA776B0E1C9C381FB198A6197EACD87;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_mB57417246E4D25627832638BE91CB141FDF04EA9;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t416541239A6A63A742AD7E9584232B8BAEC559DD;
extern const uint32_t g_rgctx_FixedList128Bytes_1_Equals_m23DA07023310D345AD86B3B55A0D2AA231BD7788;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m0B248C6A39E59A7CC633B8EBB0E2214A7374A24A;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_mBE97F70BAB50B16F38220210CEF3C50282BE1C47;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_m52485D019E61317FE3F1FE602315A29DFE6AAA25;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Buffer_mD366D995A0996A4941BFD8FF7751F8888529019A;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_LengthInBytes_mE533117FD90EE225AB1657584FE15D9FCD3B31F6;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mFEB57847565241DE5AC20F3C47DFB1C1FBD77D42;
extern const uint32_t g_rgctx_T_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m2ED44CE82345E495B02845190DC950E9369F9B66;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m0E56845145169510605A77387713117B1DF42A2D;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m7D404D1A8DCDBFBA6E77CA9A1BAE087DA8BEDB45;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_mC45C102EEA509426C4E25123ACB537AA2E1C8B53;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m0BE3A1FE674C670F1F163603702EA2EC121C96C0;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_mCB87559DEEEFBF43BBE5EDA844844CCB64B12C06;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_mAFB31975A1194980FE703C4FF6157CA124568175;
extern const uint32_t g_rgctx_FixedList512Bytes_1_CompareTo_m71F5DF9EF41C7A4B6C05EDC77E4AEBD567829F44;
extern const uint32_t g_rgctx_FixedList32Bytes_1_t16FDC26837A35E8C9EE737B47C5566926DD97D40;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mFEFB3BF366F96DCEEF8CF0F400F6F6BC865C4EFA;
extern const uint32_t g_rgctx_FixedList64Bytes_1_t692D679ABC650A6E1D639F9B704EBF1C015B7E54;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mDC81D66D0B81AB0FEBD1F8666E2BB7783FA5ACB8;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t855A409C9DAE10C3B3F003764F360E082BE304C1;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_m2A8267A3F7D08EC772B96BE833442B1E5887C72E;
extern const uint32_t g_rgctx_FixedList512Bytes_1_t669FFE3EF2D7972808F85F458A97B36D3B08A302;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mBDE871330097648822A6964D577DA54C9C62CDE1;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_t30D9953988646BADE87AE3D019C1B0BB523F33B2;
extern const uint32_t g_rgctx_FixedList512Bytes_1_Equals_mDAE776DA9235ED2BD2A75CD0AC265DB954F739E3;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Length_mF981B72DCECDB30EBED5ACCC7749B57FE4D25643;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_mFF2077A47FF407633B5F56804C9FC60D642F1563;
extern const uint32_t g_rgctx_FixedList_PaddingBytes_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m43E18E2DFA5B522ED17C8297A15A8F892776AC68;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_Buffer_m8C59032AB0882881E308B5310103C4C0C67FE527;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_mD71A507EC6BD78DBBDBFDBA4E473D4701542CE1C;
extern const uint32_t g_rgctx_UnsafeUtility_WriteArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m56A820D20427A3A0861D79521356390F95A816AA;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_get_LengthInBytes_mDD272B4890655CD06ACF62B312C72673B7066DAB;
extern const uint32_t g_rgctx_FixedList32Bytes_1_get_Length_mE8F8A185DE5BB8CB0BEE9383F387044EC232D30C;
extern const uint32_t g_rgctx_T_tBD073BADADC7386EA705AE4342916B0F07BDACDE;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_mDCA60AD837CDD603A14317382F8FE7B7A5332496;
extern const uint32_t g_rgctx_FixedList64Bytes_1_get_Length_m6B94FC005EB3D868CEC8B0A1A2953929BDB403B9;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m1EE2D74734AD460BFAC1124BEC50F6A7242C157A;
extern const uint32_t g_rgctx_FixedList128Bytes_1_get_Length_mBEFA2EA7F7D0BDBF7900A55AD4870026F5CDD9E0;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m76A8C7244A78E281DE7D75356C8C98452CC9B973;
extern const uint32_t g_rgctx_FixedList512Bytes_1_get_Length_m0FB45017FC642488814B76ED2D5856074D0A2C13;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m7B2C705430CA47FDBA89E556A4BA14F10B5E62D6;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_CompareTo_m48E8E70F5EC08F0B2764E1FA714A0E6B42AD79B3;
extern const uint32_t g_rgctx_FixedList32Bytes_1_t7AAD6CEC30726A322BBECE5EF36547B20FE7474E;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_mA097DF642E512753B3F3819A63A991273FB15433;
extern const uint32_t g_rgctx_FixedList64Bytes_1_tA47527956352165EF643C47FD1BC7C6169E29EBC;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_m3F25D402683E10A10CC6E899C3C5F3242C07DE65;
extern const uint32_t g_rgctx_FixedList128Bytes_1_t79918BA354DF7C9EED2BB2E611792E496C73C747;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_mA57897971800CECFA745EAA611995A129370DE0E;
extern const uint32_t g_rgctx_FixedList512Bytes_1_t3AB2AD5617F05D853E1819914CDD7FE040D0A863;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_m234039E2C015B564CDC7962B8ECA3F6161456BC2;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_tDD8407366F29BD7A6221ED46D0353F2A5DEB8D87;
extern const uint32_t g_rgctx_FixedList4096Bytes_1_Equals_m79776FC49E1BE2ECE4CD5A12AB1AD9E67199A5B6;
extern const uint32_t g_rgctx_Array_Resize_TisT_tF0EA25DBB8912A5E4D30E25258B0340FC0E6C1DF_mB3EF764F125583719B1046AFF5AED53619481EBB;
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_t260C192D738187423EDFCEA90B05305D55738382_m199E8C87D0434BBA321B5FA85B90CF3C7142BB5B;
extern const uint32_t g_rgctx_UnsafeUtility_AlignOf_TisT_t260C192D738187423EDFCEA90B05305D55738382_mC30B16102C53F6FBE9F546209B7B1F6FCCCA47DE;
extern const uint32_t g_rgctx_NativeListUnsafeUtility_GetUnsafeReadOnlyPtr_TisT_t046230885067ECA54CAE5D7117DAE9280DB4E001_mB1418C0F7C717CD8A2EB26AD3D8972D38E20E670;
extern const uint32_t g_rgctx_NativeList_1_get_Length_mE5D74C349E4F451D8AF2C3893F2C820DB6D5DF7C;
extern const uint32_t g_rgctx_NativeArrayExtensions_IndexOf_TisT_t046230885067ECA54CAE5D7117DAE9280DB4E001_TisU_t92832E71C581F55509A6BD304BD9924D0B60026B_m4136F385A98F4B08C0C5EA4585F9093F72069EC3;
extern const uint32_t g_rgctx_UnsafeUtility_ReadArrayElement_TisT_tA3239173928377A1C9F2B31A07E401AFD65BCEA3_m07A3C9F89CF728E646F0CE771E50FCB7623FE33B;
extern const uint32_t g_rgctx_T_tA3239173928377A1C9F2B31A07E401AFD65BCEA3;
extern const uint32_t g_rgctx_IEquatable_1_t0375C16189D590B1C771AB8F17F9F196007432B6;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tA3239173928377A1C9F2B31A07E401AFD65BCEA3_IEquatable_1_Equals_m5D9113F0C0FCF17B07AC67D77DE768C1E878828E;
extern const uint32_t g_rgctx_NativeList_1__ctor_mFC02027D535FF8FA6DA0D2F3FF28BE9C3C22FA0D;
extern const uint32_t g_rgctx_UnsafeList_1_t62C841C6D06562004B617CB8FEB154768A22A448;
extern const uint32_t g_rgctx_NativeList_1_Initialize_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mDA27076ECD04FDDCE4F08EC240944ED85C58EA1F;
extern const uint32_t g_rgctx_UnsafeList_1_get_Item_m3A75728B303CDC6919167D5BFCD56D9BAE755F4A;
extern const uint32_t g_rgctx_UnsafeList_1_set_Item_m55F6D1F1AE6B627E9916AC7867161D4DFA6EB267;
extern const uint32_t g_rgctx_UnsafeList_1_get_Length_mBB48D1B7E16C1A3EFC1FECFAE979F4AC003C5BA7;
extern const uint32_t g_rgctx_UnsafeList_1_Add_m31E9C9CB6476E5AF889F68A699B2DE541626AE2D;
extern const uint32_t g_rgctx_UnsafeList_1_RemoveAtSwapBack_mACD31FE8F0282A96901562DFFED349749A9CD451;
extern const uint32_t g_rgctx_UnsafeList_1_Destroy_mD69F4CF3284228DB52BEB4640DB01E1585165137;
extern const uint32_t g_rgctx_UnsafeList_1_Clear_m763F409F9070AAB6B2E20A3952CED497999D10B5;
extern const uint32_t g_rgctx_NativeList_1_AsArray_mF7F649295B1EB59DCF87D80023CDC9825B535243;
extern const uint32_t g_rgctx_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisT_t86F43EBF284E6FC6FD87B54AE593FF12A96EACEA_m1F161EA757F0C007614975D1B377327C48EB34A1;
extern const uint32_t g_rgctx_UnsafeList_1_Create_TisU_t8D9513FF7045C2A2417339533F96C0B604BC6DE3_m26B4374274F92E900410C0AC3772BD733A13F0E9;
extern const uint32_t g_rgctx_U_t8D9513FF7045C2A2417339533F96C0B604BC6DE3;
extern const Il2CppRGCTXConstrainedData g_rgctx_U_t8D9513FF7045C2A2417339533F96C0B604BC6DE3_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C;
extern const uint32_t g_rgctx_Unmanaged_Free_TisT_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F_mF973BCD6CB4AF991D834D40E8AEBC6CEF351E161;
extern const uint32_t g_rgctx_T_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F;
extern const uint32_t g_rgctx_T_t6368C7377A351E8DAE030B3776E2EAB48430F6A1;
extern const uint32_t g_rgctx_UnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF;
extern const uint32_t g_rgctx_UnsafeList_1_get_Capacity_mE30AE2BB42DF086225C6BEEACED7A1E66EAC91ED;
extern const uint32_t g_rgctx_UnsafeList_1_Dispose_mA9C46557DD7D143A317FDF3F55E3DB921A44125C;
extern const uint32_t g_rgctx_AllocatorManager_Free_TisUnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF_mF47548FD834BA2A679D9442028E131468CF63713;
extern const uint32_t g_rgctx_AllocatorManager_Free_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_m89B9D8AB4597F6B56846D2DB25514A55028F0286;
extern const uint32_t g_rgctx_UnsafeList_1_SetCapacity_mC9FF72A63AF11927A72AFC4491824A38C3741104;
extern const uint32_t g_rgctx_UnsafeUtility_AlignOf_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_mA0C412E421457A2C706A3F144111D61E75B029EE;
extern const uint32_t g_rgctx_UnsafeList_1_SetCapacity_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mB514D6019190B92124D1A238FB222C812F7CC09F;
extern const uint32_t g_rgctx_UnsafeList_1_Resize_mD2E7D06E288A389059211E1D82BA7DB35F3AF301;
extern const uint32_t g_rgctx_UnsafeUtility_WriteArrayElement_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_mA745AD61EEFAE4EB27E7502F964A94E8A1561CE8;
extern const uint32_t g_rgctx_UnsafeList_1_RemoveRangeSwapBack_m044959544E6E74EB834CB3CC17A49A9191FCB5F9;
extern const uint32_t g_rgctx_AllocatorManager_Allocate_TisU_tFA7E35DF34A5C45378D5003B997EE708CAA867A0_TisUnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF_m337ECDA3B82EF30B262EB27FEA7E8903F4485252;
extern const uint32_t g_rgctx_U_tFA7E35DF34A5C45378D5003B997EE708CAA867A0;
extern const Il2CppRGCTXConstrainedData g_rgctx_U_tFA7E35DF34A5C45378D5003B997EE708CAA867A0_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C;
extern const uint32_t g_rgctx_UnsafeList_1_SetCapacity_TisU_tFA7E35DF34A5C45378D5003B997EE708CAA867A0_m9D36F321305B7E32DD2BBDAFCCCD256D7CB27AA4;
extern const uint32_t g_rgctx_AllocatorManager_Allocate_TisU_tD4E7F950E65E51D0FFB646539AFA97213F18FDCB_mCAA09AFAE50E5C38BE63024CFE677C22C9407EC2;
extern const uint32_t g_rgctx_AllocatorManager_Free_TisU_tD4E7F950E65E51D0FFB646539AFA97213F18FDCB_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_mE48401D508A917A70C8392F08322626D516716DD;
extern const uint32_t g_rgctx_UnsafeList_1_Realloc_TisU_t74C7EABD355F620088583D354F66E077F74C2116_m601210D03B7815AC3291C90C7517E1FCEB210612;
static const Il2CppRGCTXDefinition s_rgctxValues[190] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tE5C3A13CD8880B94F529D63A5EFB93664A447758 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tE5C3A13CD8880B94F529D63A5EFB93664A447758_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tE5C3A13CD8880B94F529D63A5EFB93664A447758_IAllocator_Try_mDD961D5AECA15763EDDE7F745C825C7CD5D7FAB2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_AllocateBlock_TisT_t832268F43FDA2A46198A41786645A56E6EE10C1E_m797DED5655EB95B0D442F0912AF81DEF0E3625B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisU_t4D149DA0C8CEE2E9C8DB9E9306AF2B0EFC699CE7_mB2B753D9FFF6A91BC7BB0D751115E5456F4C5CBC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AlignOf_TisU_t4D149DA0C8CEE2E9C8DB9E9306AF2B0EFC699CE7_mB028D816847C39B855D0D55E5821E1340C6D907E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Allocate_TisT_t8D9C653ED19B6E2F2333C10AC3EA9F8102FB2CA8_m7CDB98CBCB5917A6B7CABA9EAB85D379085D4687 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8A1FD0FB059B75FCE5A238B22606E123376A4517 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t8A1FD0FB059B75FCE5A238B22606E123376A4517_IAllocator_Try_mDD961D5AECA15763EDDE7F745C825C7CD5D7FAB2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_FreeBlock_TisT_tCB110901A859D75A366775BF33C8F318B4B639D9_m4B10F02A6F91D6ACFC22399646AB6910E6EF7C8D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisU_t64D8855544CD030999EE0547D27298E654E1C21C_m4606A4191F7ACBB1E107DCCA268B1D00C45FFC17 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AlignOf_TisU_t64D8855544CD030999EE0547D27298E654E1C21C_m3082EA8474DEA61FAFE06A5E98980DBC821EC0C7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Free_TisT_t100BD791DC8B2981602B2B0DAE7A6BB822985B04_mECB7138A8E0B4B33823E0F143AE13A31D9FDE800 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Free_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisT_tDC131F0D335593921DE2796C7EE7047173723737_m272E593EAF4C116597907D332CEF10F7608D422C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AsRef_TisT_t2B0E445D8A10145BC0D27189CC7F23CC9EF95B34_m9538FE908772E7494066A9FA456D9674A1F18CE3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t29DC2694B89ACC66C53015AB501F49D9BF8CD0DB_m8CF53515D2968653B5374B3EAE05D748E49A11B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_m09C6C267D9BAF792F6EE22EE3EBFFA6DF40A1AF0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_m191F3A5FE7AAB361FA480881D44EC91BB1C9CB69 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_t604DA2B2C61AC824178F38507FE80321D55C1110_m5A5B1F66A67EA67C700FFCD174CD386557F811B0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Buffer_m8C59DC6D188FDA6852C8E1DCD65467F24AB6C6FF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_LengthInBytes_mF4D1CE0CFE876F4AEA6727E2F9DC3E9ED4C6F49F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t604DA2B2C61AC824178F38507FE80321D55C1110 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_mBBBC65A417BA1B4D27BD77E11B44DE17E4AE14EF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m927C78B4D944D4E876AB25A3E7AB4F6DFAD4F108 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_m6290A920F0B1C958BBD7B60BA6F94FD3164B806A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_m07F322CB13F58D937FC51D44F14EE31B19067359 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_m6642F674EE22AC655E358EF533B0F700C16A0A94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m1CC3012C703D85C7C951AE77DD2B3F5B8E42E918 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_mFAF2429BB4895D0C3AF7C5B981A3C53F440BE6A5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_m29F0A70AA1DAC8624B99E5E213DC4E34036BBF0C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_CompareTo_m21876ACD769677EB12796837397549EACDC6DA1F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_tD2F19E017C9CF5DC6CB5780CDA882089FFE4B99C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_mA9B2F154A856E8EB9B4983E2745FD077BA0D98C3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_tC4ED4AB3E4EEE98679B1412FB4C80C3E4FA16834 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m496CF2C8A1FAFE63A285C2350D9530A60CC9B463 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t97E27D9873786614696ED6CB6B7DABF2AFF7DCFF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m3B2C3C3508065763A6DEE8185CD3507C80EE2159 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_tE0BA0381F29B58D8A0C87FD4F2A4E8DB45DFB48F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m8812C7F42A79683AC17FBC09A7F04E5E909E3A67 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t0629EA7E8B063F8817ECAE15F9A75E6F61CA42F0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_Equals_m7701FD9664F730DE055F5A80657EBC6BF96BB399 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m904CEC4D13DAB3EC2E63867290A4919B3EE07B94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_mD2A5FA4608BB9FF1D47B31D633A39ABBFADCD74C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_tD32C0F6209442C9BB65A030D29698147784945B7_mEF006EA493865D2B035382A92A92A4CD192179FE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Buffer_m4ACFD76E5BAB7BBA3B105EF045FB34DF16925121 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_LengthInBytes_m830026A47AC35E78ACFB4ED8613C4241631C7FB3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mDC309D74DBDE3857D8CF451A6C61E4DF244DB906 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tD32C0F6209442C9BB65A030D29698147784945B7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_mFFA2BDEF1D5931103F2349F121D89B9EFDA18B2A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_m1B404F21933A0C0E3F4EDB9BDC56FF1374BA36BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_m913F6E9C36DA6E5150201BB04705176C61779A4A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_mAE605CEAEF66638FB3772258684647B86795A026 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_mB4AC876C1C0A6D784950D1DF9D938E8187CC254A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_m709B483E5DEB7FB21FD73055E1D18EFC77CB8D94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_mA84088FDB735E31D8EC68ED7C7241B82F7E382E9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_CompareTo_m72AEE1D5D4DD2A52568A3DB0395D4C6A4450D662 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_tF36F3420B2D85BB09FDA7CBE0B0A59127E7E47B5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_mFA63385DF5A53E2D34A838F6B4D3E5EB93454707 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_t01290055D2315B7FB797137C2585E1D2A8FEFC93 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_m4A58B7E48EC3D1CE4B417CC606F7AF283179CE19 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t90FF12D54923E198013051CB940E9B9C7747AA0E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_mD426D7F36DA3313161AF4ACB1D163554927B2B5C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_t5A455036DE64718823C34266F43B4B930819650E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_mA3CB277239697E135B80B1652428B650E393E3EF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t140F024B8BA0DDF7C9A41DFDFE78C7BEECDE6355 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_Equals_m676325C656968A3297E0312C5E86C06A021B6A7A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_m0455E51110778F6A133DB6106D4F22A64B989348 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_m0D1A1A4AE246377E927C65D86E98A47A4CB8B3FB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30_m0186AB6C9D3E697B569C93ECCB6B4D6F93B88CF6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Buffer_m97D30707BB2AEA2F5DBADE3B0FAC8F672E8B1A3D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_LengthInBytes_m47F607A647F86AE5CEE40BB1760159288C68D0BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mB2C086817BC1745080C475DEF2DC556F31A59D67 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m2666E22B9261026A0D7D0DDBE9CAF263093BCA3B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m4D4D3FDEAC491E57BF639002CE416C8CAEEAF68B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_mE9957B37908F02DBF2C0FBC8A01F575132266E51 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m4C2FEAF12A383067066580E5AE042BA1E5E15353 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m660F2F29958AF880448E6418281CCCEB44F5B7D4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m437197F791AB58DC99F09DD25DFF430B2F4CFA16 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_m9A5EEBCAC9EB81EA90B9BD7FFB53C8C16795D572 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_CompareTo_m255D7C47599B63B530DEF04B43CD7223D203C6DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_t3C413D65609876A5C74284892DEE5A0D625FB108 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_m086E1CCF2A8A8917B11F2B64CF7D29C6EE148120 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_t870D9CA977C5EB1DE5E7F03D3EBCDF741429CFD5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_mBF301D370C792F53697A10E96FFDC089205671AE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_tD5CBB33E81228C7A982A8BB36F4C59C6886B72D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_m2CDB0F15DB14C27621333422EF9796AD3D031766 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_tC3D869C52DA776B0E1C9C381FB198A6197EACD87 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_mB57417246E4D25627832638BE91CB141FDF04EA9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t416541239A6A63A742AD7E9584232B8BAEC559DD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_Equals_m23DA07023310D345AD86B3B55A0D2AA231BD7788 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m0B248C6A39E59A7CC633B8EBB0E2214A7374A24A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_mBE97F70BAB50B16F38220210CEF3C50282BE1C47 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B_m52485D019E61317FE3F1FE602315A29DFE6AAA25 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Buffer_mD366D995A0996A4941BFD8FF7751F8888529019A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_LengthInBytes_mE533117FD90EE225AB1657584FE15D9FCD3B31F6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mFEB57847565241DE5AC20F3C47DFB1C1FBD77D42 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m2ED44CE82345E495B02845190DC950E9369F9B66 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m0E56845145169510605A77387713117B1DF42A2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m7D404D1A8DCDBFBA6E77CA9A1BAE087DA8BEDB45 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_mC45C102EEA509426C4E25123ACB537AA2E1C8B53 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m0BE3A1FE674C670F1F163603702EA2EC121C96C0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_mCB87559DEEEFBF43BBE5EDA844844CCB64B12C06 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_mAFB31975A1194980FE703C4FF6157CA124568175 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_CompareTo_m71F5DF9EF41C7A4B6C05EDC77E4AEBD567829F44 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_t16FDC26837A35E8C9EE737B47C5566926DD97D40 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mFEFB3BF366F96DCEEF8CF0F400F6F6BC865C4EFA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_t692D679ABC650A6E1D639F9B704EBF1C015B7E54 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mDC81D66D0B81AB0FEBD1F8666E2BB7783FA5ACB8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t855A409C9DAE10C3B3F003764F360E082BE304C1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_m2A8267A3F7D08EC772B96BE833442B1E5887C72E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_t669FFE3EF2D7972808F85F458A97B36D3B08A302 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mBDE871330097648822A6964D577DA54C9C62CDE1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_t30D9953988646BADE87AE3D019C1B0BB523F33B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_Equals_mDAE776DA9235ED2BD2A75CD0AC265DB954F739E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Length_mF981B72DCECDB30EBED5ACCC7749B57FE4D25643 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_mFF2077A47FF407633B5F56804C9FC60D642F1563 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList_PaddingBytes_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m43E18E2DFA5B522ED17C8297A15A8F892776AC68 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_Buffer_m8C59032AB0882881E308B5310103C4C0C67FE527 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_mD71A507EC6BD78DBBDBFDBA4E473D4701542CE1C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_WriteArrayElement_TisT_tBD073BADADC7386EA705AE4342916B0F07BDACDE_m56A820D20427A3A0861D79521356390F95A816AA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_get_LengthInBytes_mDD272B4890655CD06ACF62B312C72673B7066DAB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList32Bytes_1_get_Length_mE8F8A185DE5BB8CB0BEE9383F387044EC232D30C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tBD073BADADC7386EA705AE4342916B0F07BDACDE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_mDCA60AD837CDD603A14317382F8FE7B7A5332496 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList64Bytes_1_get_Length_m6B94FC005EB3D868CEC8B0A1A2953929BDB403B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m1EE2D74734AD460BFAC1124BEC50F6A7242C157A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList128Bytes_1_get_Length_mBEFA2EA7F7D0BDBF7900A55AD4870026F5CDD9E0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m76A8C7244A78E281DE7D75356C8C98452CC9B973 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList512Bytes_1_get_Length_m0FB45017FC642488814B76ED2D5856074D0A2C13 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m7B2C705430CA47FDBA89E556A4BA14F10B5E62D6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_CompareTo_m48E8E70F5EC08F0B2764E1FA714A0E6B42AD79B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList32Bytes_1_t7AAD6CEC30726A322BBECE5EF36547B20FE7474E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_mA097DF642E512753B3F3819A63A991273FB15433 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList64Bytes_1_tA47527956352165EF643C47FD1BC7C6169E29EBC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_m3F25D402683E10A10CC6E899C3C5F3242C07DE65 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList128Bytes_1_t79918BA354DF7C9EED2BB2E611792E496C73C747 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_mA57897971800CECFA745EAA611995A129370DE0E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList512Bytes_1_t3AB2AD5617F05D853E1819914CDD7FE040D0A863 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_m234039E2C015B564CDC7962B8ECA3F6161456BC2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FixedList4096Bytes_1_tDD8407366F29BD7A6221ED46D0353F2A5DEB8D87 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FixedList4096Bytes_1_Equals_m79776FC49E1BE2ECE4CD5A12AB1AD9E67199A5B6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Array_Resize_TisT_tF0EA25DBB8912A5E4D30E25258B0340FC0E6C1DF_mB3EF764F125583719B1046AFF5AED53619481EBB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_t260C192D738187423EDFCEA90B05305D55738382_m199E8C87D0434BBA321B5FA85B90CF3C7142BB5B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AlignOf_TisT_t260C192D738187423EDFCEA90B05305D55738382_mC30B16102C53F6FBE9F546209B7B1F6FCCCA47DE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeListUnsafeUtility_GetUnsafeReadOnlyPtr_TisT_t046230885067ECA54CAE5D7117DAE9280DB4E001_mB1418C0F7C717CD8A2EB26AD3D8972D38E20E670 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeList_1_get_Length_mE5D74C349E4F451D8AF2C3893F2C820DB6D5DF7C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeArrayExtensions_IndexOf_TisT_t046230885067ECA54CAE5D7117DAE9280DB4E001_TisU_t92832E71C581F55509A6BD304BD9924D0B60026B_m4136F385A98F4B08C0C5EA4585F9093F72069EC3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_ReadArrayElement_TisT_tA3239173928377A1C9F2B31A07E401AFD65BCEA3_m07A3C9F89CF728E646F0CE771E50FCB7623FE33B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tA3239173928377A1C9F2B31A07E401AFD65BCEA3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEquatable_1_t0375C16189D590B1C771AB8F17F9F196007432B6 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tA3239173928377A1C9F2B31A07E401AFD65BCEA3_IEquatable_1_Equals_m5D9113F0C0FCF17B07AC67D77DE768C1E878828E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeList_1__ctor_mFC02027D535FF8FA6DA0D2F3FF28BE9C3C22FA0D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnsafeList_1_t62C841C6D06562004B617CB8FEB154768A22A448 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeList_1_Initialize_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mDA27076ECD04FDDCE4F08EC240944ED85C58EA1F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_get_Item_m3A75728B303CDC6919167D5BFCD56D9BAE755F4A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_set_Item_m55F6D1F1AE6B627E9916AC7867161D4DFA6EB267 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_get_Length_mBB48D1B7E16C1A3EFC1FECFAE979F4AC003C5BA7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Add_m31E9C9CB6476E5AF889F68A699B2DE541626AE2D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_RemoveAtSwapBack_mACD31FE8F0282A96901562DFFED349749A9CD451 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Destroy_mD69F4CF3284228DB52BEB4640DB01E1585165137 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Clear_m763F409F9070AAB6B2E20A3952CED497999D10B5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeList_1_AsArray_mF7F649295B1EB59DCF87D80023CDC9825B535243 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisT_t86F43EBF284E6FC6FD87B54AE593FF12A96EACEA_m1F161EA757F0C007614975D1B377327C48EB34A1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Create_TisU_t8D9513FF7045C2A2417339533F96C0B604BC6DE3_m26B4374274F92E900410C0AC3772BD733A13F0E9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U_t8D9513FF7045C2A2417339533F96C0B604BC6DE3 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_U_t8D9513FF7045C2A2417339533F96C0B604BC6DE3_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Unmanaged_Free_TisT_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F_mF973BCD6CB4AF991D834D40E8AEBC6CEF351E161 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t5BC8A3A1143355B7F5A74A86A9F4AD760F016F3F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t6368C7377A351E8DAE030B3776E2EAB48430F6A1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_get_Capacity_mE30AE2BB42DF086225C6BEEACED7A1E66EAC91ED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Dispose_mA9C46557DD7D143A317FDF3F55E3DB921A44125C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Free_TisUnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF_mF47548FD834BA2A679D9442028E131468CF63713 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Free_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_m89B9D8AB4597F6B56846D2DB25514A55028F0286 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_SetCapacity_mC9FF72A63AF11927A72AFC4491824A38C3741104 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_AlignOf_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_mA0C412E421457A2C706A3F144111D61E75B029EE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_SetCapacity_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_mB514D6019190B92124D1A238FB222C812F7CC09F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Resize_mD2E7D06E288A389059211E1D82BA7DB35F3AF301 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_WriteArrayElement_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_mA745AD61EEFAE4EB27E7502F964A94E8A1561CE8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_RemoveRangeSwapBack_m044959544E6E74EB834CB3CC17A49A9191FCB5F9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Allocate_TisU_tFA7E35DF34A5C45378D5003B997EE708CAA867A0_TisUnsafeList_1_t620A94D0181E3DFEF514032D62F7285F783817BF_m337ECDA3B82EF30B262EB27FEA7E8903F4485252 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U_tFA7E35DF34A5C45378D5003B997EE708CAA867A0 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_U_tFA7E35DF34A5C45378D5003B997EE708CAA867A0_IAllocator_get_Handle_m54F384A4E6B7365849D3462AA309C77F8D9E9E6C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_SetCapacity_TisU_tFA7E35DF34A5C45378D5003B997EE708CAA867A0_m9D36F321305B7E32DD2BBDAFCCCD256D7CB27AA4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Allocate_TisU_tD4E7F950E65E51D0FFB646539AFA97213F18FDCB_mCAA09AFAE50E5C38BE63024CFE677C22C9407EC2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AllocatorManager_Free_TisU_tD4E7F950E65E51D0FFB646539AFA97213F18FDCB_TisT_t6368C7377A351E8DAE030B3776E2EAB48430F6A1_mE48401D508A917A70C8392F08322626D516716DD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeList_1_Realloc_TisU_t74C7EABD355F620088583D354F66E077F74C2116_m601210D03B7815AC3291C90C7517E1FCEB210612 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Collections_CodeGenModule = 
{
	"Unity.Collections.dll",
	264,
	s_methodPointers,
	32,
	s_adjustorThunks,
	s_InvokerIndices,
	6,
	s_reversePInvokeIndices,
	25,
	s_rgctxIndices,
	190,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
