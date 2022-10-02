#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent>
struct Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49;
// System.Lazy`1<UnityEngine.Rendering.VolumeManager>
struct Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>
struct List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Subsystem>
struct List_1_t58BB84B47855540E6D2640B387506E01436DCF82;
// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>
struct List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A;
// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>
struct List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter>
struct ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>[]
struct EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302;
// System.Collections.Generic.List`1<System.Int32>[]
struct List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.IntegratedSubsystem[]
struct IntegratedSubsystemU5BU5D_t1CDC088E79AAF042898970524412BC793663F481;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Subsystem[]
struct SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider[]
struct SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF;
// UnityEngine.Rendering.Volume[]
struct VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288;
// UnityEngine.Rendering.VolumeComponent[]
struct VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.ISubsystem
struct ISubsystem_t64464AB5EA37383499172853FA932A96C7841789;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Rendering.Volume
struct Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E;
// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E;
// UnityEngine.Rendering.VolumeManager
struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181;
// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB;
// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821;
// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider
struct Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mAD339CA933DF8B8D705E23C725E78FF7599EC36F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___entries_1)); }
	inline EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___keys_7)); }
	inline KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___values_8)); }
	inline ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___entries_1)); }
	inline EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___keys_7)); }
	inline KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___values_8)); }
	inline ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>
struct List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IntegratedSubsystemU5BU5D_t1CDC088E79AAF042898970524412BC793663F481* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF, ____items_1)); }
	inline IntegratedSubsystemU5BU5D_t1CDC088E79AAF042898970524412BC793663F481* get__items_1() const { return ____items_1; }
	inline IntegratedSubsystemU5BU5D_t1CDC088E79AAF042898970524412BC793663F481** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IntegratedSubsystemU5BU5D_t1CDC088E79AAF042898970524412BC793663F481* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IntegratedSubsystemU5BU5D_t1CDC088E79AAF042898970524412BC793663F481* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF_StaticFields, ____emptyArray_5)); }
	inline IntegratedSubsystemU5BU5D_t1CDC088E79AAF042898970524412BC793663F481* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IntegratedSubsystemU5BU5D_t1CDC088E79AAF042898970524412BC793663F481** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IntegratedSubsystemU5BU5D_t1CDC088E79AAF042898970524412BC793663F481* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Subsystem>
struct List_1_t58BB84B47855540E6D2640B387506E01436DCF82  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t58BB84B47855540E6D2640B387506E01436DCF82, ____items_1)); }
	inline SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED* get__items_1() const { return ____items_1; }
	inline SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t58BB84B47855540E6D2640B387506E01436DCF82, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t58BB84B47855540E6D2640B387506E01436DCF82, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t58BB84B47855540E6D2640B387506E01436DCF82, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t58BB84B47855540E6D2640B387506E01436DCF82_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t58BB84B47855540E6D2640B387506E01436DCF82_StaticFields, ____emptyArray_5)); }
	inline SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SubsystemU5BU5D_t4353D7C1DD71692C1BF7D355ADCB47DBD6DB91ED* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>
struct List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41, ____items_1)); }
	inline SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB* get__items_1() const { return ____items_1; }
	inline SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41_StaticFields, ____emptyArray_5)); }
	inline SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SubsystemWithProviderU5BU5D_t8A3DC7B8FFB1D676FD165C6B1FFE6DC8DF52CFCB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____items_1)); }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* get__items_1() const { return ____items_1; }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A_StaticFields, ____emptyArray_5)); }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____items_1)); }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* get__items_1() const { return ____items_1; }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_StaticFields, ____emptyArray_5)); }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.SubsystemManager
struct SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9  : public RuntimeObject
{
public:

public:
};

struct SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_StaticFields
{
public:
	// System.Action UnityEngine.SubsystemManager::beforeReloadSubsystems
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___beforeReloadSubsystems_0;
	// System.Action UnityEngine.SubsystemManager::afterReloadSubsystems
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___afterReloadSubsystems_1;
	// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem> UnityEngine.SubsystemManager::s_IntegratedSubsystems
	List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF * ___s_IntegratedSubsystems_2;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider> UnityEngine.SubsystemManager::s_StandaloneSubsystems
	List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41 * ___s_StandaloneSubsystems_3;
	// System.Collections.Generic.List`1<UnityEngine.Subsystem> UnityEngine.SubsystemManager::s_DeprecatedSubsystems
	List_1_t58BB84B47855540E6D2640B387506E01436DCF82 * ___s_DeprecatedSubsystems_4;
	// System.Action UnityEngine.SubsystemManager::reloadSubsytemsStarted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___reloadSubsytemsStarted_5;
	// System.Action UnityEngine.SubsystemManager::reloadSubsytemsCompleted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___reloadSubsytemsCompleted_6;

public:
	inline static int32_t get_offset_of_beforeReloadSubsystems_0() { return static_cast<int32_t>(offsetof(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_StaticFields, ___beforeReloadSubsystems_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_beforeReloadSubsystems_0() const { return ___beforeReloadSubsystems_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_beforeReloadSubsystems_0() { return &___beforeReloadSubsystems_0; }
	inline void set_beforeReloadSubsystems_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___beforeReloadSubsystems_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beforeReloadSubsystems_0), (void*)value);
	}

	inline static int32_t get_offset_of_afterReloadSubsystems_1() { return static_cast<int32_t>(offsetof(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_StaticFields, ___afterReloadSubsystems_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_afterReloadSubsystems_1() const { return ___afterReloadSubsystems_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_afterReloadSubsystems_1() { return &___afterReloadSubsystems_1; }
	inline void set_afterReloadSubsystems_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___afterReloadSubsystems_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___afterReloadSubsystems_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_IntegratedSubsystems_2() { return static_cast<int32_t>(offsetof(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_StaticFields, ___s_IntegratedSubsystems_2)); }
	inline List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF * get_s_IntegratedSubsystems_2() const { return ___s_IntegratedSubsystems_2; }
	inline List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF ** get_address_of_s_IntegratedSubsystems_2() { return &___s_IntegratedSubsystems_2; }
	inline void set_s_IntegratedSubsystems_2(List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF * value)
	{
		___s_IntegratedSubsystems_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IntegratedSubsystems_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_StandaloneSubsystems_3() { return static_cast<int32_t>(offsetof(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_StaticFields, ___s_StandaloneSubsystems_3)); }
	inline List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41 * get_s_StandaloneSubsystems_3() const { return ___s_StandaloneSubsystems_3; }
	inline List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41 ** get_address_of_s_StandaloneSubsystems_3() { return &___s_StandaloneSubsystems_3; }
	inline void set_s_StandaloneSubsystems_3(List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41 * value)
	{
		___s_StandaloneSubsystems_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StandaloneSubsystems_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeprecatedSubsystems_4() { return static_cast<int32_t>(offsetof(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_StaticFields, ___s_DeprecatedSubsystems_4)); }
	inline List_1_t58BB84B47855540E6D2640B387506E01436DCF82 * get_s_DeprecatedSubsystems_4() const { return ___s_DeprecatedSubsystems_4; }
	inline List_1_t58BB84B47855540E6D2640B387506E01436DCF82 ** get_address_of_s_DeprecatedSubsystems_4() { return &___s_DeprecatedSubsystems_4; }
	inline void set_s_DeprecatedSubsystems_4(List_1_t58BB84B47855540E6D2640B387506E01436DCF82 * value)
	{
		___s_DeprecatedSubsystems_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeprecatedSubsystems_4), (void*)value);
	}

	inline static int32_t get_offset_of_reloadSubsytemsStarted_5() { return static_cast<int32_t>(offsetof(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_StaticFields, ___reloadSubsytemsStarted_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_reloadSubsytemsStarted_5() const { return ___reloadSubsytemsStarted_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_reloadSubsytemsStarted_5() { return &___reloadSubsytemsStarted_5; }
	inline void set_reloadSubsytemsStarted_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___reloadSubsytemsStarted_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reloadSubsytemsStarted_5), (void*)value);
	}

	inline static int32_t get_offset_of_reloadSubsytemsCompleted_6() { return static_cast<int32_t>(offsetof(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_StaticFields, ___reloadSubsytemsCompleted_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_reloadSubsytemsCompleted_6() const { return ___reloadSubsytemsCompleted_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_reloadSubsytemsCompleted_6() { return &___reloadSubsytemsCompleted_6; }
	inline void set_reloadSubsytemsCompleted_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___reloadSubsytemsCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reloadSubsytemsCompleted_6), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
	}
};


// System.ThrowHelper
struct ThrowHelper_t396052A7B504E698E9DF1B91F7A52F4D2EA47246  : public RuntimeObject
{
public:

public:
};


// System.Tuple
struct Tuple_t04ED51FC9876E74A8E2D69E20EC4D89DAF554A9F  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Threading.Volatile
struct Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.VolumeManager
struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.VolumeManager::<stack>k__BackingField
	VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * ___U3CstackU3Ek__BackingField_1;
	// System.Type[] UnityEngine.Rendering.VolumeManager::<baseComponentTypeArray>k__BackingField
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___U3CbaseComponentTypeArrayU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>> UnityEngine.Rendering.VolumeManager::m_SortedVolumes
	Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * ___m_SortedVolumes_4;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> UnityEngine.Rendering.VolumeManager::m_Volumes
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___m_Volumes_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.VolumeManager::m_SortNeeded
	Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___m_SortNeeded_6;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeManager::m_ComponentsDefaultState
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___m_ComponentsDefaultState_7;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.Rendering.VolumeManager::m_TempColliders
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___m_TempColliders_8;
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.VolumeManager::m_DefaultStack
	VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * ___m_DefaultStack_9;

public:
	inline static int32_t get_offset_of_U3CstackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___U3CstackU3Ek__BackingField_1)); }
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * get_U3CstackU3Ek__BackingField_1() const { return ___U3CstackU3Ek__BackingField_1; }
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC ** get_address_of_U3CstackU3Ek__BackingField_1() { return &___U3CstackU3Ek__BackingField_1; }
	inline void set_U3CstackU3Ek__BackingField_1(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * value)
	{
		___U3CstackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstackU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbaseComponentTypeArrayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___U3CbaseComponentTypeArrayU3Ek__BackingField_2)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_U3CbaseComponentTypeArrayU3Ek__BackingField_2() const { return ___U3CbaseComponentTypeArrayU3Ek__BackingField_2; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_U3CbaseComponentTypeArrayU3Ek__BackingField_2() { return &___U3CbaseComponentTypeArrayU3Ek__BackingField_2; }
	inline void set_U3CbaseComponentTypeArrayU3Ek__BackingField_2(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___U3CbaseComponentTypeArrayU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbaseComponentTypeArrayU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SortedVolumes_4() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_SortedVolumes_4)); }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * get_m_SortedVolumes_4() const { return ___m_SortedVolumes_4; }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D ** get_address_of_m_SortedVolumes_4() { return &___m_SortedVolumes_4; }
	inline void set_m_SortedVolumes_4(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * value)
	{
		___m_SortedVolumes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SortedVolumes_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Volumes_5() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_Volumes_5)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_m_Volumes_5() const { return ___m_Volumes_5; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_m_Volumes_5() { return &___m_Volumes_5; }
	inline void set_m_Volumes_5(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___m_Volumes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Volumes_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SortNeeded_6() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_SortNeeded_6)); }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * get_m_SortNeeded_6() const { return ___m_SortNeeded_6; }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 ** get_address_of_m_SortNeeded_6() { return &___m_SortNeeded_6; }
	inline void set_m_SortNeeded_6(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * value)
	{
		___m_SortNeeded_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SortNeeded_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComponentsDefaultState_7() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_ComponentsDefaultState_7)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_m_ComponentsDefaultState_7() const { return ___m_ComponentsDefaultState_7; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_m_ComponentsDefaultState_7() { return &___m_ComponentsDefaultState_7; }
	inline void set_m_ComponentsDefaultState_7(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___m_ComponentsDefaultState_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentsDefaultState_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_TempColliders_8() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_TempColliders_8)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_m_TempColliders_8() const { return ___m_TempColliders_8; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_m_TempColliders_8() { return &___m_TempColliders_8; }
	inline void set_m_TempColliders_8(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___m_TempColliders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempColliders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultStack_9() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_DefaultStack_9)); }
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * get_m_DefaultStack_9() const { return ___m_DefaultStack_9; }
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC ** get_address_of_m_DefaultStack_9() { return &___m_DefaultStack_9; }
	inline void set_m_DefaultStack_9(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * value)
	{
		___m_DefaultStack_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultStack_9), (void*)value);
	}
};

struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181_StaticFields
{
public:
	// System.Lazy`1<UnityEngine.Rendering.VolumeManager> UnityEngine.Rendering.VolumeManager::s_Instance
	Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181_StaticFields, ___s_Instance_0)); }
	inline Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_0), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.VolumeParameter::m_OverrideState
	bool ___m_OverrideState_1;

public:
	inline static int32_t get_offset_of_m_OverrideState_1() { return static_cast<int32_t>(offsetof(VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB, ___m_OverrideState_1)); }
	inline bool get_m_OverrideState_1() const { return ___m_OverrideState_1; }
	inline bool* get_address_of_m_OverrideState_1() { return &___m_OverrideState_1; }
	inline void set_m_OverrideState_1(bool value)
	{
		___m_OverrideState_1 = value;
	}
};


// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeStack::components
	Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * ___components_0;

public:
	inline static int32_t get_offset_of_components_0() { return static_cast<int32_t>(offsetof(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC, ___components_0)); }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * get_components_0() const { return ___components_0; }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 ** get_address_of_components_0() { return &___components_0; }
	inline void set_components_0(Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * value)
	{
		___components_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___components_0), (void*)value);
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>
struct AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___data_1)); }
	inline uint8_t get_data_1() const { return ___data_1; }
	inline uint8_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint8_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>
struct AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___data_1)); }
	inline int32_t get_data_1() const { return ___data_1; }
	inline int32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(int32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>
struct AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	float ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97, ___data_1)); }
	inline float get_data_1() const { return ___data_1; }
	inline float* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(float value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt16>
struct AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint16_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863, ___data_1)); }
	inline uint16_t get_data_1() const { return ___data_1; }
	inline uint16_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint16_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>
struct AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0, ___data_1)); }
	inline uint32_t get_data_1() const { return ___data_1; }
	inline uint32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>
struct AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint64_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D, ___data_1)); }
	inline uint64_t get_data_1() const { return ___data_1; }
	inline uint64_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint64_t value)
	{
		___data_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>
struct Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___list_0)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_list_0() const { return ___list_0; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___current_3)); }
	inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * get_current_3() const { return ___current_3; }
	inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>
struct Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___list_0)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_list_0() const { return ___list_0; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___current_3)); }
	inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * get_current_3() const { return ___current_3; }
	inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117, ___value_1)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_value_1() const { return ___value_1; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Unity.Collections.NativeSlice`1<System.Byte>
struct NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// Unity.Collections.NativeSlice`1<System.UInt32>
struct NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// Unity.Collections.NativeSlice`1<UnityEngine.Vector3>
struct NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo<System.Object>
struct ResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63 
{
public:
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo::name
	String_t* ___name_0;
	// System.Int64 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo::size
	int64_t ___size_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(ResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63, ___size_1)); }
	inline int64_t get_size_1() const { return ___size_1; }
	inline int64_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int64_t value)
	{
		___size_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo
#ifndef ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_pinvoke_define
#define ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_pinvoke_define
struct ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_pinvoke
{
	char* ___name_0;
	int64_t ___size_1;
};
#endif
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo
#ifndef ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_com_define
#define ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_com_define
struct ResourceLogInfo_t5BC0D8D6F533AE3729F9348805509530E759A4AB_marshaled_com
{
	Il2CppChar* ___name_0;
	int64_t ___size_1;
};
#endif

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tB30A449BCFE0FA82C8183709FCA73609BEF8497F  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem,UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t43C05E9C3928E04822F2DA791FFAC4C140DF10A5  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// System.ValueTuple`2<System.Int32,System.Object>
struct ValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Object,System.Int32>
struct ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Boolean>
struct VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	bool ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201, ___m_Value_2)); }
	inline bool get_m_Value_2() const { return ___m_Value_2; }
	inline bool* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(bool value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Int32>
struct VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7, ___m_Value_2)); }
	inline int32_t get_m_Value_2() const { return ___m_Value_2; }
	inline int32_t* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(int32_t value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Object>
struct VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	RuntimeObject * ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0, ___m_Value_2)); }
	inline RuntimeObject * get_m_Value_2() const { return ___m_Value_2; }
	inline RuntimeObject ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(RuntimeObject * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_2), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Single>
struct VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	float ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7, ___m_Value_2)); }
	inline float get_m_Value_2() const { return ___m_Value_2; }
	inline float* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(float value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
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

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// UnityEngine.Rendering.DepthState
struct DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA 
{
public:
	// System.Byte UnityEngine.Rendering.DepthState::m_WriteEnabled
	uint8_t ___m_WriteEnabled_0;
	// System.SByte UnityEngine.Rendering.DepthState::m_CompareFunction
	int8_t ___m_CompareFunction_1;

public:
	inline static int32_t get_offset_of_m_WriteEnabled_0() { return static_cast<int32_t>(offsetof(DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA, ___m_WriteEnabled_0)); }
	inline uint8_t get_m_WriteEnabled_0() const { return ___m_WriteEnabled_0; }
	inline uint8_t* get_address_of_m_WriteEnabled_0() { return &___m_WriteEnabled_0; }
	inline void set_m_WriteEnabled_0(uint8_t value)
	{
		___m_WriteEnabled_0 = value;
	}

	inline static int32_t get_offset_of_m_CompareFunction_1() { return static_cast<int32_t>(offsetof(DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA, ___m_CompareFunction_1)); }
	inline int8_t get_m_CompareFunction_1() const { return ___m_CompareFunction_1; }
	inline int8_t* get_address_of_m_CompareFunction_1() { return &___m_CompareFunction_1; }
	inline void set_m_CompareFunction_1(int8_t value)
	{
		___m_CompareFunction_1 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.FrustumPlanes
struct FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C 
{
public:
	// System.Single UnityEngine.FrustumPlanes::left
	float ___left_0;
	// System.Single UnityEngine.FrustumPlanes::right
	float ___right_1;
	// System.Single UnityEngine.FrustumPlanes::bottom
	float ___bottom_2;
	// System.Single UnityEngine.FrustumPlanes::top
	float ___top_3;
	// System.Single UnityEngine.FrustumPlanes::zNear
	float ___zNear_4;
	// System.Single UnityEngine.FrustumPlanes::zFar
	float ___zFar_5;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___left_0)); }
	inline float get_left_0() const { return ___left_0; }
	inline float* get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(float value)
	{
		___left_0 = value;
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___right_1)); }
	inline float get_right_1() const { return ___right_1; }
	inline float* get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(float value)
	{
		___right_1 = value;
	}

	inline static int32_t get_offset_of_bottom_2() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___bottom_2)); }
	inline float get_bottom_2() const { return ___bottom_2; }
	inline float* get_address_of_bottom_2() { return &___bottom_2; }
	inline void set_bottom_2(float value)
	{
		___bottom_2 = value;
	}

	inline static int32_t get_offset_of_top_3() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___top_3)); }
	inline float get_top_3() const { return ___top_3; }
	inline float* get_address_of_top_3() { return &___top_3; }
	inline void set_top_3(float value)
	{
		___top_3 = value;
	}

	inline static int32_t get_offset_of_zNear_4() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___zNear_4)); }
	inline float get_zNear_4() const { return ___zNear_4; }
	inline float* get_address_of_zNear_4() { return &___zNear_4; }
	inline void set_zNear_4(float value)
	{
		___zNear_4 = value;
	}

	inline static int32_t get_offset_of_zFar_5() { return static_cast<int32_t>(offsetof(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C, ___zFar_5)); }
	inline float get_zFar_5() const { return ___zFar_5; }
	inline float* get_address_of_zFar_5() { return &___zFar_5; }
	inline void set_zFar_5(float value)
	{
		___zFar_5 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// UnityEngine.Hash128
struct Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A 
{
public:
	// System.UInt32 UnityEngine.Hash128::m_u32_0
	uint32_t ___m_u32_0_0;
	// System.UInt32 UnityEngine.Hash128::m_u32_1
	uint32_t ___m_u32_1_1;
	// System.UInt32 UnityEngine.Hash128::m_u32_2
	uint32_t ___m_u32_2_2;
	// System.UInt32 UnityEngine.Hash128::m_u32_3
	uint32_t ___m_u32_3_3;

public:
	inline static int32_t get_offset_of_m_u32_0_0() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_0_0)); }
	inline uint32_t get_m_u32_0_0() const { return ___m_u32_0_0; }
	inline uint32_t* get_address_of_m_u32_0_0() { return &___m_u32_0_0; }
	inline void set_m_u32_0_0(uint32_t value)
	{
		___m_u32_0_0 = value;
	}

	inline static int32_t get_offset_of_m_u32_1_1() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_1_1)); }
	inline uint32_t get_m_u32_1_1() const { return ___m_u32_1_1; }
	inline uint32_t* get_address_of_m_u32_1_1() { return &___m_u32_1_1; }
	inline void set_m_u32_1_1(uint32_t value)
	{
		___m_u32_1_1 = value;
	}

	inline static int32_t get_offset_of_m_u32_2_2() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_2_2)); }
	inline uint32_t get_m_u32_2_2() const { return ___m_u32_2_2; }
	inline uint32_t* get_address_of_m_u32_2_2() { return &___m_u32_2_2; }
	inline void set_m_u32_2_2(uint32_t value)
	{
		___m_u32_2_2 = value;
	}

	inline static int32_t get_offset_of_m_u32_3_3() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_3_3)); }
	inline uint32_t get_m_u32_3_3() const { return ___m_u32_3_3; }
	inline uint32_t* get_address_of_m_u32_3_3() { return &___m_u32_3_3; }
	inline void set_m_u32_3_3(uint32_t value)
	{
		___m_u32_3_3 = value;
	}
};


// UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.XR.MeshId
struct MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 
{
public:
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_StaticFields
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_StaticFields, ___s_InvalidId_0)); }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  value)
	{
		___s_InvalidId_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Rendering.RenderTargetBlendState
struct RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD 
{
public:
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_WriteMask
	uint8_t ___m_WriteMask_0;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_SourceColorBlendMode
	uint8_t ___m_SourceColorBlendMode_1;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_DestinationColorBlendMode
	uint8_t ___m_DestinationColorBlendMode_2;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_SourceAlphaBlendMode
	uint8_t ___m_SourceAlphaBlendMode_3;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_DestinationAlphaBlendMode
	uint8_t ___m_DestinationAlphaBlendMode_4;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_ColorBlendOperation
	uint8_t ___m_ColorBlendOperation_5;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_AlphaBlendOperation
	uint8_t ___m_AlphaBlendOperation_6;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_Padding
	uint8_t ___m_Padding_7;

public:
	inline static int32_t get_offset_of_m_WriteMask_0() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_WriteMask_0)); }
	inline uint8_t get_m_WriteMask_0() const { return ___m_WriteMask_0; }
	inline uint8_t* get_address_of_m_WriteMask_0() { return &___m_WriteMask_0; }
	inline void set_m_WriteMask_0(uint8_t value)
	{
		___m_WriteMask_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceColorBlendMode_1() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_SourceColorBlendMode_1)); }
	inline uint8_t get_m_SourceColorBlendMode_1() const { return ___m_SourceColorBlendMode_1; }
	inline uint8_t* get_address_of_m_SourceColorBlendMode_1() { return &___m_SourceColorBlendMode_1; }
	inline void set_m_SourceColorBlendMode_1(uint8_t value)
	{
		___m_SourceColorBlendMode_1 = value;
	}

	inline static int32_t get_offset_of_m_DestinationColorBlendMode_2() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_DestinationColorBlendMode_2)); }
	inline uint8_t get_m_DestinationColorBlendMode_2() const { return ___m_DestinationColorBlendMode_2; }
	inline uint8_t* get_address_of_m_DestinationColorBlendMode_2() { return &___m_DestinationColorBlendMode_2; }
	inline void set_m_DestinationColorBlendMode_2(uint8_t value)
	{
		___m_DestinationColorBlendMode_2 = value;
	}

	inline static int32_t get_offset_of_m_SourceAlphaBlendMode_3() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_SourceAlphaBlendMode_3)); }
	inline uint8_t get_m_SourceAlphaBlendMode_3() const { return ___m_SourceAlphaBlendMode_3; }
	inline uint8_t* get_address_of_m_SourceAlphaBlendMode_3() { return &___m_SourceAlphaBlendMode_3; }
	inline void set_m_SourceAlphaBlendMode_3(uint8_t value)
	{
		___m_SourceAlphaBlendMode_3 = value;
	}

	inline static int32_t get_offset_of_m_DestinationAlphaBlendMode_4() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_DestinationAlphaBlendMode_4)); }
	inline uint8_t get_m_DestinationAlphaBlendMode_4() const { return ___m_DestinationAlphaBlendMode_4; }
	inline uint8_t* get_address_of_m_DestinationAlphaBlendMode_4() { return &___m_DestinationAlphaBlendMode_4; }
	inline void set_m_DestinationAlphaBlendMode_4(uint8_t value)
	{
		___m_DestinationAlphaBlendMode_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorBlendOperation_5() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_ColorBlendOperation_5)); }
	inline uint8_t get_m_ColorBlendOperation_5() const { return ___m_ColorBlendOperation_5; }
	inline uint8_t* get_address_of_m_ColorBlendOperation_5() { return &___m_ColorBlendOperation_5; }
	inline void set_m_ColorBlendOperation_5(uint8_t value)
	{
		___m_ColorBlendOperation_5 = value;
	}

	inline static int32_t get_offset_of_m_AlphaBlendOperation_6() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_AlphaBlendOperation_6)); }
	inline uint8_t get_m_AlphaBlendOperation_6() const { return ___m_AlphaBlendOperation_6; }
	inline uint8_t* get_address_of_m_AlphaBlendOperation_6() { return &___m_AlphaBlendOperation_6; }
	inline void set_m_AlphaBlendOperation_6(uint8_t value)
	{
		___m_AlphaBlendOperation_6 = value;
	}

	inline static int32_t get_offset_of_m_Padding_7() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_Padding_7)); }
	inline uint8_t get_m_Padding_7() const { return ___m_Padding_7; }
	inline uint8_t* get_address_of_m_Padding_7() { return &___m_Padding_7; }
	inline void set_m_Padding_7(uint8_t value)
	{
		___m_Padding_7 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle
struct RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F 
{
public:
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle::m_IsValid
	bool ___m_IsValid_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle::<handle>k__BackingField
	int32_t ___U3ChandleU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_IsValid_0() { return static_cast<int32_t>(offsetof(RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F, ___m_IsValid_0)); }
	inline bool get_m_IsValid_0() const { return ___m_IsValid_0; }
	inline bool* get_address_of_m_IsValid_0() { return &___m_IsValid_0; }
	inline void set_m_IsValid_0(bool value)
	{
		___m_IsValid_0 = value;
	}

	inline static int32_t get_offset_of_U3ChandleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F, ___U3ChandleU3Ek__BackingField_1)); }
	inline int32_t get_U3ChandleU3Ek__BackingField_1() const { return ___U3ChandleU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3ChandleU3Ek__BackingField_1() { return &___U3ChandleU3Ek__BackingField_1; }
	inline void set_U3ChandleU3Ek__BackingField_1(int32_t value)
	{
		___U3ChandleU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle
struct RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshaled_pinvoke
{
	int32_t ___m_IsValid_0;
	int32_t ___U3ChandleU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle
struct RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_marshaled_com
{
	int32_t ___m_IsValid_0;
	int32_t ___U3ChandleU3Ek__BackingField_1;
};

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;

public:
	inline static int32_t get_offset_of_m_GuidLow_1() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC, ___m_GuidLow_1)); }
	inline uint64_t get_m_GuidLow_1() const { return ___m_GuidLow_1; }
	inline uint64_t* get_address_of_m_GuidLow_1() { return &___m_GuidLow_1; }
	inline void set_m_GuidLow_1(uint64_t value)
	{
		___m_GuidLow_1 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_2() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC, ___m_GuidHigh_2)); }
	inline uint64_t get_m_GuidHigh_2() const { return ___m_GuidHigh_2; }
	inline uint64_t* get_address_of_m_GuidHigh_2() { return &___m_GuidHigh_2; }
	inline void set_m_GuidHigh_2(uint64_t value)
	{
		___m_GuidHigh_2 = value;
	}
};

struct SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___k_Empty_0;

public:
	inline static int32_t get_offset_of_k_Empty_0() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC_StaticFields, ___k_Empty_0)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_k_Empty_0() const { return ___k_Empty_0; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_k_Empty_0() { return &___k_Empty_0; }
	inline void set_k_Empty_0(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___k_Empty_0 = value;
	}
};


// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 
{
public:
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795, ___m_Id_1)); }
	inline int32_t get_m_Id_1() const { return ___m_Id_1; }
	inline int32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(int32_t value)
	{
		___m_Id_1 = value;
	}
};

struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields, ___none_0)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_none_0() const { return ___none_0; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___none_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Rendering.StencilState
struct StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007 
{
public:
	// System.Byte UnityEngine.Rendering.StencilState::m_Enabled
	uint8_t ___m_Enabled_0;
	// System.Byte UnityEngine.Rendering.StencilState::m_ReadMask
	uint8_t ___m_ReadMask_1;
	// System.Byte UnityEngine.Rendering.StencilState::m_WriteMask
	uint8_t ___m_WriteMask_2;
	// System.Byte UnityEngine.Rendering.StencilState::m_Padding
	uint8_t ___m_Padding_3;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionFront
	uint8_t ___m_CompareFunctionFront_4;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationFront
	uint8_t ___m_PassOperationFront_5;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationFront
	uint8_t ___m_FailOperationFront_6;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationFront
	uint8_t ___m_ZFailOperationFront_7;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionBack
	uint8_t ___m_CompareFunctionBack_8;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationBack
	uint8_t ___m_PassOperationBack_9;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationBack
	uint8_t ___m_FailOperationBack_10;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationBack
	uint8_t ___m_ZFailOperationBack_11;

public:
	inline static int32_t get_offset_of_m_Enabled_0() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_Enabled_0)); }
	inline uint8_t get_m_Enabled_0() const { return ___m_Enabled_0; }
	inline uint8_t* get_address_of_m_Enabled_0() { return &___m_Enabled_0; }
	inline void set_m_Enabled_0(uint8_t value)
	{
		___m_Enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_ReadMask_1() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ReadMask_1)); }
	inline uint8_t get_m_ReadMask_1() const { return ___m_ReadMask_1; }
	inline uint8_t* get_address_of_m_ReadMask_1() { return &___m_ReadMask_1; }
	inline void set_m_ReadMask_1(uint8_t value)
	{
		___m_ReadMask_1 = value;
	}

	inline static int32_t get_offset_of_m_WriteMask_2() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_WriteMask_2)); }
	inline uint8_t get_m_WriteMask_2() const { return ___m_WriteMask_2; }
	inline uint8_t* get_address_of_m_WriteMask_2() { return &___m_WriteMask_2; }
	inline void set_m_WriteMask_2(uint8_t value)
	{
		___m_WriteMask_2 = value;
	}

	inline static int32_t get_offset_of_m_Padding_3() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_Padding_3)); }
	inline uint8_t get_m_Padding_3() const { return ___m_Padding_3; }
	inline uint8_t* get_address_of_m_Padding_3() { return &___m_Padding_3; }
	inline void set_m_Padding_3(uint8_t value)
	{
		___m_Padding_3 = value;
	}

	inline static int32_t get_offset_of_m_CompareFunctionFront_4() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_CompareFunctionFront_4)); }
	inline uint8_t get_m_CompareFunctionFront_4() const { return ___m_CompareFunctionFront_4; }
	inline uint8_t* get_address_of_m_CompareFunctionFront_4() { return &___m_CompareFunctionFront_4; }
	inline void set_m_CompareFunctionFront_4(uint8_t value)
	{
		___m_CompareFunctionFront_4 = value;
	}

	inline static int32_t get_offset_of_m_PassOperationFront_5() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_PassOperationFront_5)); }
	inline uint8_t get_m_PassOperationFront_5() const { return ___m_PassOperationFront_5; }
	inline uint8_t* get_address_of_m_PassOperationFront_5() { return &___m_PassOperationFront_5; }
	inline void set_m_PassOperationFront_5(uint8_t value)
	{
		___m_PassOperationFront_5 = value;
	}

	inline static int32_t get_offset_of_m_FailOperationFront_6() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_FailOperationFront_6)); }
	inline uint8_t get_m_FailOperationFront_6() const { return ___m_FailOperationFront_6; }
	inline uint8_t* get_address_of_m_FailOperationFront_6() { return &___m_FailOperationFront_6; }
	inline void set_m_FailOperationFront_6(uint8_t value)
	{
		___m_FailOperationFront_6 = value;
	}

	inline static int32_t get_offset_of_m_ZFailOperationFront_7() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ZFailOperationFront_7)); }
	inline uint8_t get_m_ZFailOperationFront_7() const { return ___m_ZFailOperationFront_7; }
	inline uint8_t* get_address_of_m_ZFailOperationFront_7() { return &___m_ZFailOperationFront_7; }
	inline void set_m_ZFailOperationFront_7(uint8_t value)
	{
		___m_ZFailOperationFront_7 = value;
	}

	inline static int32_t get_offset_of_m_CompareFunctionBack_8() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_CompareFunctionBack_8)); }
	inline uint8_t get_m_CompareFunctionBack_8() const { return ___m_CompareFunctionBack_8; }
	inline uint8_t* get_address_of_m_CompareFunctionBack_8() { return &___m_CompareFunctionBack_8; }
	inline void set_m_CompareFunctionBack_8(uint8_t value)
	{
		___m_CompareFunctionBack_8 = value;
	}

	inline static int32_t get_offset_of_m_PassOperationBack_9() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_PassOperationBack_9)); }
	inline uint8_t get_m_PassOperationBack_9() const { return ___m_PassOperationBack_9; }
	inline uint8_t* get_address_of_m_PassOperationBack_9() { return &___m_PassOperationBack_9; }
	inline void set_m_PassOperationBack_9(uint8_t value)
	{
		___m_PassOperationBack_9 = value;
	}

	inline static int32_t get_offset_of_m_FailOperationBack_10() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_FailOperationBack_10)); }
	inline uint8_t get_m_FailOperationBack_10() const { return ___m_FailOperationBack_10; }
	inline uint8_t* get_address_of_m_FailOperationBack_10() { return &___m_FailOperationBack_10; }
	inline void set_m_FailOperationBack_10(uint8_t value)
	{
		___m_FailOperationBack_10 = value;
	}

	inline static int32_t get_offset_of_m_ZFailOperationBack_11() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ZFailOperationBack_11)); }
	inline uint8_t get_m_ZFailOperationBack_11() const { return ___m_ZFailOperationBack_11; }
	inline uint8_t* get_address_of_m_ZFailOperationBack_11() { return &___m_ZFailOperationBack_11; }
	inline void set_m_ZFailOperationBack_11(uint8_t value)
	{
		___m_ZFailOperationBack_11 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.UILineInfo
struct UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3
struct Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 
{
public:
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Z
	float ___Z_3;

public:
	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___X_1)); }
	inline float get_X_1() const { return ___X_1; }
	inline float* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(float value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___Y_2)); }
	inline float get_Y_2() const { return ___Y_2; }
	inline float* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(float value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Z_3() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1, ___Z_3)); }
	inline float get_Z_3() const { return ___Z_3; }
	inline float* get_address_of_Z_3() { return &___Z_3; }
	inline void set_Z_3(float value)
	{
		___Z_3 = value;
	}
};

struct Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3::Zero
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1_StaticFields, ___Zero_0)); }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  get_Zero_0() const { return ___Zero_0; }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  value)
	{
		___Zero_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidLow
	uint64_t ___m_GuidLow_0;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidHigh
	uint64_t ___m_GuidHigh_1;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Name
	String_t* ___m_Name_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry> UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Entries
	List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * ___m_Entries_3;

public:
	inline static int32_t get_offset_of_m_GuidLow_0() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_GuidLow_0)); }
	inline uint64_t get_m_GuidLow_0() const { return ___m_GuidLow_0; }
	inline uint64_t* get_address_of_m_GuidLow_0() { return &___m_GuidLow_0; }
	inline void set_m_GuidLow_0(uint64_t value)
	{
		___m_GuidLow_0 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_1() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_GuidHigh_1)); }
	inline uint64_t get_m_GuidHigh_1() const { return ___m_GuidHigh_1; }
	inline uint64_t* get_address_of_m_GuidHigh_1() { return &___m_GuidHigh_1; }
	inline void set_m_GuidHigh_1(uint64_t value)
	{
		___m_GuidHigh_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Entries_3() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_Entries_3)); }
	inline List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * get_m_Entries_3() const { return ___m_Entries_3; }
	inline List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A ** get_address_of_m_Entries_3() { return &___m_Entries_3; }
	inline void set_m_Entries_3(List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * value)
	{
		___m_Entries_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Entries_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE_marshaled_pinvoke
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	char* ___m_Name_2;
	List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * ___m_Entries_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE_marshaled_com
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	Il2CppChar* ___m_Name_2;
	List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * ___m_Entries_3;
};

// Unity.Mathematics.float2
struct float2_t11F5F2974404951113DDC4E13EEB6E2456295547 
{
public:
	// System.Single Unity.Mathematics.float2::x
	float ___x_0;
	// System.Single Unity.Mathematics.float2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float2_t11F5F2974404951113DDC4E13EEB6E2456295547, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float2_t11F5F2974404951113DDC4E13EEB6E2456295547, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// Unity.Mathematics.float3
struct float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D 
{
public:
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D_StaticFields
{
public:
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  ___zero_3;

public:
	inline static int32_t get_offset_of_zero_3() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D_StaticFields, ___zero_3)); }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  get_zero_3() const { return ___zero_3; }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D * get_address_of_zero_3() { return &___zero_3; }
	inline void set_zero_3(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  value)
	{
		___zero_3 = value;
	}
};


// Unity.Mathematics.float4
struct float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883 
{
public:
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// Unity.Mathematics.uint4
struct uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 
{
public:
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92, ___x_0)); }
	inline uint32_t get_x_0() const { return ___x_0; }
	inline uint32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92, ___y_1)); }
	inline uint32_t get_y_1() const { return ___y_1; }
	inline uint32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92, ___z_2)); }
	inline uint32_t get_z_2() const { return ___z_2; }
	inline uint32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(uint32_t value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92, ___w_3)); }
	inline uint32_t get_w_3() const { return ___w_3; }
	inline uint32_t* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(uint32_t value)
	{
		___w_3 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo
struct PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo::distance
	float ___distance_0;
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo::cosineAngleWithRay
	float ___cosineAngleWithRay_1;

public:
	inline static int32_t get_offset_of_distance_0() { return static_cast<int32_t>(offsetof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1, ___distance_0)); }
	inline float get_distance_0() const { return ___distance_0; }
	inline float* get_address_of_distance_0() { return &___distance_0; }
	inline void set_distance_0(float value)
	{
		___distance_0 = value;
	}

	inline static int32_t get_offset_of_cosineAngleWithRay_1() { return static_cast<int32_t>(offsetof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1, ___cosineAngleWithRay_1)); }
	inline float get_cosineAngleWithRay_1() const { return ___cosineAngleWithRay_1; }
	inline float* get_address_of_cosineAngleWithRay_1() { return &___cosineAngleWithRay_1; }
	inline void set_cosineAngleWithRay_1(float value)
	{
		___cosineAngleWithRay_1 = value;
	}
};


// UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___callback_1)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData
struct PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C 
{
public:
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData::name
	String_t* ___name_0;
	// System.Collections.Generic.List`1<System.Int32>[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData::resourceReadLists
	List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* ___resourceReadLists_1;
	// System.Collections.Generic.List`1<System.Int32>[] UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData::resourceWriteLists
	List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* ___resourceWriteLists_2;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData::culled
	bool ___culled_3;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData::generateDebugData
	bool ___generateDebugData_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_resourceReadLists_1() { return static_cast<int32_t>(offsetof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C, ___resourceReadLists_1)); }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* get_resourceReadLists_1() const { return ___resourceReadLists_1; }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C** get_address_of_resourceReadLists_1() { return &___resourceReadLists_1; }
	inline void set_resourceReadLists_1(List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* value)
	{
		___resourceReadLists_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceReadLists_1), (void*)value);
	}

	inline static int32_t get_offset_of_resourceWriteLists_2() { return static_cast<int32_t>(offsetof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C, ___resourceWriteLists_2)); }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* get_resourceWriteLists_2() const { return ___resourceWriteLists_2; }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C** get_address_of_resourceWriteLists_2() { return &___resourceWriteLists_2; }
	inline void set_resourceWriteLists_2(List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* value)
	{
		___resourceWriteLists_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceWriteLists_2), (void*)value);
	}

	inline static int32_t get_offset_of_culled_3() { return static_cast<int32_t>(offsetof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C, ___culled_3)); }
	inline bool get_culled_3() const { return ___culled_3; }
	inline bool* get_address_of_culled_3() { return &___culled_3; }
	inline void set_culled_3(bool value)
	{
		___culled_3 = value;
	}

	inline static int32_t get_offset_of_generateDebugData_4() { return static_cast<int32_t>(offsetof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C, ___generateDebugData_4)); }
	inline bool get_generateDebugData_4() const { return ___generateDebugData_4; }
	inline bool* get_address_of_generateDebugData_4() { return &___generateDebugData_4; }
	inline void set_generateDebugData_4(bool value)
	{
		___generateDebugData_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData
struct PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshaled_pinvoke
{
	char* ___name_0;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___resourceReadLists_1;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___resourceWriteLists_2;
	int32_t ___culled_3;
	int32_t ___generateDebugData_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData
struct PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_marshaled_com
{
	Il2CppChar* ___name_0;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___resourceReadLists_1;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** ___resourceWriteLists_2;
	int32_t ___culled_3;
	int32_t ___generateDebugData_4;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData
struct ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F 
{
public:
	// System.String UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::name
	String_t* ___name_0;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::imported
	bool ___imported_1;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::creationPassIndex
	int32_t ___creationPassIndex_2;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::releasePassIndex
	int32_t ___releasePassIndex_3;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::consumerList
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___consumerList_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData::producerList
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___producerList_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_imported_1() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___imported_1)); }
	inline bool get_imported_1() const { return ___imported_1; }
	inline bool* get_address_of_imported_1() { return &___imported_1; }
	inline void set_imported_1(bool value)
	{
		___imported_1 = value;
	}

	inline static int32_t get_offset_of_creationPassIndex_2() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___creationPassIndex_2)); }
	inline int32_t get_creationPassIndex_2() const { return ___creationPassIndex_2; }
	inline int32_t* get_address_of_creationPassIndex_2() { return &___creationPassIndex_2; }
	inline void set_creationPassIndex_2(int32_t value)
	{
		___creationPassIndex_2 = value;
	}

	inline static int32_t get_offset_of_releasePassIndex_3() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___releasePassIndex_3)); }
	inline int32_t get_releasePassIndex_3() const { return ___releasePassIndex_3; }
	inline int32_t* get_address_of_releasePassIndex_3() { return &___releasePassIndex_3; }
	inline void set_releasePassIndex_3(int32_t value)
	{
		___releasePassIndex_3 = value;
	}

	inline static int32_t get_offset_of_consumerList_4() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___consumerList_4)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_consumerList_4() const { return ___consumerList_4; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_consumerList_4() { return &___consumerList_4; }
	inline void set_consumerList_4(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___consumerList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consumerList_4), (void*)value);
	}

	inline static int32_t get_offset_of_producerList_5() { return static_cast<int32_t>(offsetof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F, ___producerList_5)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_producerList_5() const { return ___producerList_5; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_producerList_5() { return &___producerList_5; }
	inline void set_producerList_5(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___producerList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___producerList_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData
struct ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___imported_1;
	int32_t ___creationPassIndex_2;
	int32_t ___releasePassIndex_3;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___consumerList_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___producerList_5;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData
struct ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___imported_1;
	int32_t ___creationPassIndex_2;
	int32_t ___releasePassIndex_3;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___consumerList_4;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___producerList_5;
};

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3 
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::PoseNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::Poses
	List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * ___Poses_1;

public:
	inline static int32_t get_offset_of_PoseNames_0() { return static_cast<int32_t>(offsetof(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3, ___PoseNames_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_PoseNames_0() const { return ___PoseNames_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_PoseNames_0() { return &___PoseNames_0; }
	inline void set_PoseNames_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___PoseNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PoseNames_0), (void*)value);
	}

	inline static int32_t get_offset_of_Poses_1() { return static_cast<int32_t>(offsetof(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3, ___Poses_1)); }
	inline List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * get_Poses_1() const { return ___Poses_1; }
	inline List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 ** get_address_of_Poses_1() { return &___Poses_1; }
	inline void set_Poses_1(List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * value)
	{
		___Poses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Poses_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_pinvoke
{
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___PoseNames_0;
	List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_com
{
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___PoseNames_0;
	List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * ___Poses_1;
};

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities
struct Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685__padding[1];
	};

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>
struct AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___data_1)); }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  get_data_1() const { return ___data_1; }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Quaternion>
struct AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA, ___data_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_data_1() const { return ___data_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.ShaderTagId>
struct AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC, ___data_1)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_data_1() const { return ___data_1; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59, ___data_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_data_1() const { return ___data_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector2>
struct AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF, ___data_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_data_1() const { return ___data_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>
struct AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F, ___data_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_data_1() const { return ___data_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>
struct AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F, ___data_1)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_data_1() const { return ___data_1; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.uint4>
struct AlignOfHelper_1_tD1FAAB900EAA9C85D383FA2EFE082138B27FB0FB 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD1FAAB900EAA9C85D383FA2EFE082138B27FB0FB, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD1FAAB900EAA9C85D383FA2EFE082138B27FB0FB, ___data_1)); }
	inline uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  get_data_1() const { return ___data_1; }
	inline uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>
struct AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84, ___data_1)); }
	inline PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  get_data_1() const { return ___data_1; }
	inline PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  value)
	{
		___data_1 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___dictionary_0)); }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___current_3)); }
	inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>
struct KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___key_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_key_0() const { return ___key_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct TrackingSubsystem_4_t1E41FDFF37B1529EED554D89481040B067E300EB  : public SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB
{
public:

public:
};


// System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>
struct ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00  ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793, ___Item2_1)); }
	inline ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00  get_Item2_1() const { return ___Item2_1; }
	inline ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00 * get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00  value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Item2_1))->___Item1_0), (void*)NULL);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Color>
struct VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A, ___m_Value_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Value_2() const { return ___m_Value_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>
struct VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D, ___m_Value_2)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_Value_2() const { return ___m_Value_2; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>
struct VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7, ___m_Value_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>
struct VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F, ___m_Value_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>
struct VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C, ___m_Value_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_Value_2 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.AvailableTrackingData
struct AvailableTrackingData_tECF9F41E063E32F92AF43156E0C61190C82B47FC 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvailableTrackingData_tECF9F41E063E32F92AF43156E0C61190C82B47FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.BlendState
struct BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34 
{
public:
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState0
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState0_0;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState1
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState1_1;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState2
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState2_2;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState3
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState3_3;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState4
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState4_4;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState5
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState5_5;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState6
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState6_6;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState7
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState7_7;
	// System.Byte UnityEngine.Rendering.BlendState::m_SeparateMRTBlendStates
	uint8_t ___m_SeparateMRTBlendStates_8;
	// System.Byte UnityEngine.Rendering.BlendState::m_AlphaToMask
	uint8_t ___m_AlphaToMask_9;
	// System.Int16 UnityEngine.Rendering.BlendState::m_Padding
	int16_t ___m_Padding_10;

public:
	inline static int32_t get_offset_of_m_BlendState0_0() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState0_0)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState0_0() const { return ___m_BlendState0_0; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState0_0() { return &___m_BlendState0_0; }
	inline void set_m_BlendState0_0(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState0_0 = value;
	}

	inline static int32_t get_offset_of_m_BlendState1_1() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState1_1)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState1_1() const { return ___m_BlendState1_1; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState1_1() { return &___m_BlendState1_1; }
	inline void set_m_BlendState1_1(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState1_1 = value;
	}

	inline static int32_t get_offset_of_m_BlendState2_2() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState2_2)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState2_2() const { return ___m_BlendState2_2; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState2_2() { return &___m_BlendState2_2; }
	inline void set_m_BlendState2_2(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState2_2 = value;
	}

	inline static int32_t get_offset_of_m_BlendState3_3() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState3_3)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState3_3() const { return ___m_BlendState3_3; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState3_3() { return &___m_BlendState3_3; }
	inline void set_m_BlendState3_3(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState3_3 = value;
	}

	inline static int32_t get_offset_of_m_BlendState4_4() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState4_4)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState4_4() const { return ___m_BlendState4_4; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState4_4() { return &___m_BlendState4_4; }
	inline void set_m_BlendState4_4(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState4_4 = value;
	}

	inline static int32_t get_offset_of_m_BlendState5_5() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState5_5)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState5_5() const { return ___m_BlendState5_5; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState5_5() { return &___m_BlendState5_5; }
	inline void set_m_BlendState5_5(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState5_5 = value;
	}

	inline static int32_t get_offset_of_m_BlendState6_6() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState6_6)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState6_6() const { return ___m_BlendState6_6; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState6_6() { return &___m_BlendState6_6; }
	inline void set_m_BlendState6_6(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState6_6 = value;
	}

	inline static int32_t get_offset_of_m_BlendState7_7() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState7_7)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState7_7() const { return ___m_BlendState7_7; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState7_7() { return &___m_BlendState7_7; }
	inline void set_m_BlendState7_7(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState7_7 = value;
	}

	inline static int32_t get_offset_of_m_SeparateMRTBlendStates_8() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_SeparateMRTBlendStates_8)); }
	inline uint8_t get_m_SeparateMRTBlendStates_8() const { return ___m_SeparateMRTBlendStates_8; }
	inline uint8_t* get_address_of_m_SeparateMRTBlendStates_8() { return &___m_SeparateMRTBlendStates_8; }
	inline void set_m_SeparateMRTBlendStates_8(uint8_t value)
	{
		___m_SeparateMRTBlendStates_8 = value;
	}

	inline static int32_t get_offset_of_m_AlphaToMask_9() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_AlphaToMask_9)); }
	inline uint8_t get_m_AlphaToMask_9() const { return ___m_AlphaToMask_9; }
	inline uint8_t* get_address_of_m_AlphaToMask_9() { return &___m_AlphaToMask_9; }
	inline void set_m_AlphaToMask_9(uint8_t value)
	{
		___m_AlphaToMask_9 = value;
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_Padding_10)); }
	inline int16_t get_m_Padding_10() const { return ___m_Padding_10; }
	inline int16_t* get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(int16_t value)
	{
		___m_Padding_10 = value;
	}
};


// System.ByteEnum
struct ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 
{
public:
	// UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex::Position
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	// System.Object UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex::Data
	RuntimeObject * ___Data_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536, ___Position_0)); }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  get_Position_0() const { return ___Position_0; }
	inline Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536, ___Data_1)); }
	inline RuntimeObject * get_Data_1() const { return ___Data_1; }
	inline RuntimeObject ** get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(RuntimeObject * value)
	{
		___Data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshaled_pinvoke
{
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_marshaled_com
{
	Vec3_tDD913B31171F6A37E61E4625FEA6C7901A6B1BC1  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};

// UnityEngine.Rendering.CullMode
struct CullMode_t2217CE70E9A8E268EDDDB71F28D7F456E767C135 
{
public:
	// System.Int32 UnityEngine.Rendering.CullMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CullMode_t2217CE70E9A8E268EDDDB71F28D7F456E767C135, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.ExceptionArgument
struct ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Feature
struct Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LightType
struct LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14 
{
public:
	// System.Int32 UnityEngine.LightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ManagedReferenceImage
struct ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 
{
public:
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::guid
	Guid_t  ___guid_0;
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::textureGuid
	Guid_t  ___textureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARKit.ManagedReferenceImage::size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_2;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::name
	intptr_t ___name_3;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::texture
	intptr_t ___texture_4;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_textureGuid_1() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___textureGuid_1)); }
	inline Guid_t  get_textureGuid_1() const { return ___textureGuid_1; }
	inline Guid_t * get_address_of_textureGuid_1() { return &___textureGuid_1; }
	inline void set_textureGuid_1(Guid_t  value)
	{
		___textureGuid_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___size_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_size_2() const { return ___size_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___name_3)); }
	inline intptr_t get_name_3() const { return ___name_3; }
	inline intptr_t* get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(intptr_t value)
	{
		___name_3 = value;
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___texture_4)); }
	inline intptr_t get_texture_4() const { return ___texture_4; }
	inline intptr_t* get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(intptr_t value)
	{
		___texture_4 = value;
	}
};


// UnityEngine.XR.MeshChangeState
struct MeshChangeState_t577B449627A869D7B8E062F9D9C218418790E046 
{
public:
	// System.Int32 UnityEngine.XR.MeshChangeState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshChangeState_t577B449627A869D7B8E062F9D9C218418790E046, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Rendering.Universal.PreTile
struct PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 
{
public:
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeLeft
	float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  ___planeLeft_0;
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeRight
	float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  ___planeRight_1;
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeBottom
	float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  ___planeBottom_2;
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeTop
	float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  ___planeTop_3;

public:
	inline static int32_t get_offset_of_planeLeft_0() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeLeft_0)); }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  get_planeLeft_0() const { return ___planeLeft_0; }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883 * get_address_of_planeLeft_0() { return &___planeLeft_0; }
	inline void set_planeLeft_0(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  value)
	{
		___planeLeft_0 = value;
	}

	inline static int32_t get_offset_of_planeRight_1() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeRight_1)); }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  get_planeRight_1() const { return ___planeRight_1; }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883 * get_address_of_planeRight_1() { return &___planeRight_1; }
	inline void set_planeRight_1(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  value)
	{
		___planeRight_1 = value;
	}

	inline static int32_t get_offset_of_planeBottom_2() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeBottom_2)); }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  get_planeBottom_2() const { return ___planeBottom_2; }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883 * get_address_of_planeBottom_2() { return &___planeBottom_2; }
	inline void set_planeBottom_2(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  value)
	{
		___planeBottom_2 = value;
	}

	inline static int32_t get_offset_of_planeTop_3() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeTop_3)); }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  get_planeTop_3() const { return ___planeTop_3; }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883 * get_address_of_planeTop_3() { return &___planeTop_3; }
	inline void set_planeTop_3(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  value)
	{
		___planeTop_3 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType
struct RenderGraphResourceType_tADC2B9FB2D4F19BE4A86D67644FBA60047190FD3 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderGraphResourceType_tADC2B9FB2D4F19BE4A86D67644FBA60047190FD3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.RenderStateMask
struct RenderStateMask_t3501AB292C3334281865DF8E5CA5BF67C687AF35 
{
public:
	// System.Int32 UnityEngine.Rendering.RenderStateMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderStateMask_t3501AB292C3334281865DF8E5CA5BF67C687AF35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UICharInfo
struct UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A, ___cursorPos_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};


// UnityEngine.UIVertex
struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___color_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_3() const { return ___color_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv0_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv0_4() const { return ___uv0_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv1_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv1_5() const { return ___uv1_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv2_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv2_6() const { return ___uv2_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv3_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv3_7() const { return ___uv3_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___simpleVert_10)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___simpleVert_10 = value;
	}
};


// UnityEngine.Rendering.VisibleLightFlags
struct VisibleLightFlags_tDB755E7201CE7B38D58CC4524920ACDABC292EC0 
{
public:
	// System.Int32 UnityEngine.Rendering.VisibleLightFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisibleLightFlags_tDB755E7201CE7B38D58CC4524920ACDABC292EC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_NativeConfigurationHandle
	intptr_t ___m_NativeConfigurationHandle_2;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Resolution_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeConfigurationHandle_2() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_NativeConfigurationHandle_2)); }
	inline intptr_t get_m_NativeConfigurationHandle_2() const { return ___m_NativeConfigurationHandle_2; }
	inline intptr_t* get_address_of_m_NativeConfigurationHandle_2() { return &___m_NativeConfigurationHandle_2; }
	inline void set_m_NativeConfigurationHandle_2(intptr_t value)
	{
		___m_NativeConfigurationHandle_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint
struct XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Tracked
	int32_t ___m_Tracked_3;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Position_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_3() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Tracked_3)); }
	inline int32_t get_m_Tracked_3() const { return ___m_Tracked_3; }
	inline int32_t* get_address_of_m_Tracked_3() { return &___m_Tracked_3; }
	inline void set_m_Tracked_3(int32_t value)
	{
		___m_Tracked_3 = value;
	}
};


// UnityEngine.XR.XRNode
struct XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472  : public SubsystemDescriptorWithProvider_2_tB30A449BCFE0FA82C8183709FCA73609BEF8497F
{
public:
	// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::<capabilities>k__BackingField
	Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___U3CcapabilitiesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472, ___U3CcapabilitiesU3Ek__BackingField_3)); }
	inline Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  get_U3CcapabilitiesU3Ek__BackingField_3() const { return ___U3CcapabilitiesU3Ek__BackingField_3; }
	inline Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * get_address_of_U3CcapabilitiesU3Ek__BackingField_3() { return &___U3CcapabilitiesU3Ek__BackingField_3; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_3(Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  value)
	{
		___U3CcapabilitiesU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;

public:
	inline static int32_t get_offset_of_m_SerializedGuid_0() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SerializedGuid_0)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_m_SerializedGuid_0() const { return ___m_SerializedGuid_0; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_m_SerializedGuid_0() { return &___m_SerializedGuid_0; }
	inline void set_m_SerializedGuid_0(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___m_SerializedGuid_0 = value;
	}

	inline static int32_t get_offset_of_m_SerializedTextureGuid_1() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SerializedTextureGuid_1)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_m_SerializedTextureGuid_1() const { return ___m_SerializedTextureGuid_1; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_m_SerializedTextureGuid_1() { return &___m_SerializedTextureGuid_1; }
	inline void set_m_SerializedTextureGuid_1(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___m_SerializedTextureGuid_1 = value;
	}

	inline static int32_t get_offset_of_m_Size_2() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Size_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_2() const { return ___m_Size_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_2() { return &___m_Size_2; }
	inline void set_m_Size_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_2 = value;
	}

	inline static int32_t get_offset_of_m_SpecifySize_3() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SpecifySize_3)); }
	inline bool get_m_SpecifySize_3() const { return ___m_SpecifySize_3; }
	inline bool* get_address_of_m_SpecifySize_3() { return &___m_SpecifySize_3; }
	inline void set_m_SpecifySize_3(bool value)
	{
		___m_SpecifySize_3 = value;
	}

	inline static int32_t get_offset_of_m_Name_4() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Name_4)); }
	inline String_t* get_m_Name_4() const { return ___m_Name_4; }
	inline String_t** get_address_of_m_Name_4() { return &___m_Name_4; }
	inline void set_m_Name_4(String_t* value)
	{
		___m_Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Texture_5() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Texture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_Texture_5() const { return ___m_Texture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_Texture_5() { return &___m_Texture_5; }
	inline void set_m_Texture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_Texture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_marshaled_pinvoke
{
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_marshaled_com
{
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;
};

// UnityEngine.Rendering.Universal.XRView
struct XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.XRView::projMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projMatrix_0;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.XRView::viewMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___viewMatrix_1;
	// UnityEngine.Rect UnityEngine.Rendering.Universal.XRView::viewport
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	// UnityEngine.Mesh UnityEngine.Rendering.Universal.XRView::occlusionMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	// System.Int32 UnityEngine.Rendering.Universal.XRView::textureArraySlice
	int32_t ___textureArraySlice_4;

public:
	inline static int32_t get_offset_of_projMatrix_0() { return static_cast<int32_t>(offsetof(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027, ___projMatrix_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_projMatrix_0() const { return ___projMatrix_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_projMatrix_0() { return &___projMatrix_0; }
	inline void set_projMatrix_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___projMatrix_0 = value;
	}

	inline static int32_t get_offset_of_viewMatrix_1() { return static_cast<int32_t>(offsetof(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027, ___viewMatrix_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_viewMatrix_1() const { return ___viewMatrix_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_viewMatrix_1() { return &___viewMatrix_1; }
	inline void set_viewMatrix_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___viewMatrix_1 = value;
	}

	inline static int32_t get_offset_of_viewport_2() { return static_cast<int32_t>(offsetof(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027, ___viewport_2)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_viewport_2() const { return ___viewport_2; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_viewport_2() { return &___viewport_2; }
	inline void set_viewport_2(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___viewport_2 = value;
	}

	inline static int32_t get_offset_of_occlusionMesh_3() { return static_cast<int32_t>(offsetof(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027, ___occlusionMesh_3)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_occlusionMesh_3() const { return ___occlusionMesh_3; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_occlusionMesh_3() { return &___occlusionMesh_3; }
	inline void set_occlusionMesh_3(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___occlusionMesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_textureArraySlice_4() { return static_cast<int32_t>(offsetof(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027, ___textureArraySlice_4)); }
	inline int32_t get_textureArraySlice_4() const { return ___textureArraySlice_4; }
	inline int32_t* get_address_of_textureArraySlice_4() { return &___textureArraySlice_4; }
	inline void set_textureArraySlice_4(int32_t value)
	{
		___textureArraySlice_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.XRView
struct XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshaled_pinvoke
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projMatrix_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___viewMatrix_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	int32_t ___textureArraySlice_4;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.XRView
struct XRView_tE7BCF62BA1242C287E38539553B57AE70B687027_marshaled_com
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projMatrix_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___viewMatrix_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	int32_t ___textureArraySlice_4;
};

// UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job
struct ConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78 
{
public:
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job::rgbaImage
	NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  ___rgbaImage_0;
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job::argbImage
	NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  ___argbImage_1;

public:
	inline static int32_t get_offset_of_rgbaImage_0() { return static_cast<int32_t>(offsetof(ConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78, ___rgbaImage_0)); }
	inline NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  get_rgbaImage_0() const { return ___rgbaImage_0; }
	inline NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A * get_address_of_rgbaImage_0() { return &___rgbaImage_0; }
	inline void set_rgbaImage_0(NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  value)
	{
		___rgbaImage_0 = value;
	}

	inline static int32_t get_offset_of_argbImage_1() { return static_cast<int32_t>(offsetof(ConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78, ___argbImage_1)); }
	inline NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  get_argbImage_1() const { return ___argbImage_1; }
	inline NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A * get_address_of_argbImage_1() { return &___argbImage_1; }
	inline void set_argbImage_1(NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  value)
	{
		___argbImage_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitImageDatabase/ReleaseDatabaseJob
struct ReleaseDatabaseJob_t2712527A976BD231EF32DCEAAAF276FC834E8DA1 
{
public:
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase/ReleaseDatabaseJob::database
	intptr_t ___database_0;

public:
	inline static int32_t get_offset_of_database_0() { return static_cast<int32_t>(offsetof(ReleaseDatabaseJob_t2712527A976BD231EF32DCEAAAF276FC834E8DA1, ___database_0)); }
	inline intptr_t get_database_0() const { return ___database_0; }
	inline intptr_t* get_address_of_database_0() { return &___database_0; }
	inline void set_database_0(intptr_t value)
	{
		___database_0 = value;
	}
};


// UnityEngine.Camera/RenderRequestMode
struct RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestOutputSpace
struct RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestOutputSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight
struct PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 
{
public:
	// Unity.Mathematics.float3 UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::posVS
	float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  ___posVS_0;
	// System.Single UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::radius
	float ___radius_1;
	// System.Single UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::minDist
	float ___minDist_2;
	// Unity.Mathematics.float2 UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::screenPos
	float2_t11F5F2974404951113DDC4E13EEB6E2456295547  ___screenPos_3;
	// System.UInt16 UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::visLightIndex
	uint16_t ___visLightIndex_4;

public:
	inline static int32_t get_offset_of_posVS_0() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___posVS_0)); }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  get_posVS_0() const { return ___posVS_0; }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D * get_address_of_posVS_0() { return &___posVS_0; }
	inline void set_posVS_0(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  value)
	{
		___posVS_0 = value;
	}

	inline static int32_t get_offset_of_radius_1() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___radius_1)); }
	inline float get_radius_1() const { return ___radius_1; }
	inline float* get_address_of_radius_1() { return &___radius_1; }
	inline void set_radius_1(float value)
	{
		___radius_1 = value;
	}

	inline static int32_t get_offset_of_minDist_2() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___minDist_2)); }
	inline float get_minDist_2() const { return ___minDist_2; }
	inline float* get_address_of_minDist_2() { return &___minDist_2; }
	inline void set_minDist_2(float value)
	{
		___minDist_2 = value;
	}

	inline static int32_t get_offset_of_screenPos_3() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___screenPos_3)); }
	inline float2_t11F5F2974404951113DDC4E13EEB6E2456295547  get_screenPos_3() const { return ___screenPos_3; }
	inline float2_t11F5F2974404951113DDC4E13EEB6E2456295547 * get_address_of_screenPos_3() { return &___screenPos_3; }
	inline void set_screenPos_3(float2_t11F5F2974404951113DDC4E13EEB6E2456295547  value)
	{
		___screenPos_3 = value;
	}

	inline static int32_t get_offset_of_visLightIndex_4() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___visLightIndex_4)); }
	inline uint16_t get_visLightIndex_4() const { return ___visLightIndex_4; }
	inline uint16_t* get_address_of_visLightIndex_4() { return &___visLightIndex_4; }
	inline void set_visLightIndex_4(uint16_t value)
	{
		___visLightIndex_4 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex
struct ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 
{
public:
	// Unity.Mathematics.float3 UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex::position
	float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  ___position_0;
	// UnityEngine.Color UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893, ___position_0)); }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  get_position_0() const { return ___position_0; }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}
};

struct ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893_StaticFields
{
public:
	// UnityEngine.Rendering.VertexAttributeDescriptor[] UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex::VertexLayout
	VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* ___VertexLayout_2;

public:
	inline static int32_t get_offset_of_VertexLayout_2() { return static_cast<int32_t>(offsetof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893_StaticFields, ___VertexLayout_2)); }
	inline VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* get_VertexLayout_2() const { return ___VertexLayout_2; }
	inline VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF** get_address_of_VertexLayout_2() { return &___VertexLayout_2; }
	inline void set_VertexLayout_2(VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* value)
	{
		___VertexLayout_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VertexLayout_2), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex
struct SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC 
{
public:
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Color UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	// UnityEngine.Vector2 UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_uv_2() { return static_cast<int32_t>(offsetof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC, ___uv_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_2() const { return ___uv_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_2() { return &___uv_2; }
	inline void set_uv_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_2 = value;
	}
};

struct SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC_StaticFields
{
public:
	// UnityEngine.Rendering.VertexAttributeDescriptor[] UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex::VertexLayout
	VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* ___VertexLayout_3;

public:
	inline static int32_t get_offset_of_VertexLayout_3() { return static_cast<int32_t>(offsetof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC_StaticFields, ___VertexLayout_3)); }
	inline VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* get_VertexLayout_3() const { return ___VertexLayout_3; }
	inline VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF** get_address_of_VertexLayout_3() { return &___VertexLayout_3; }
	inline void set_VertexLayout_3(VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* value)
	{
		___VertexLayout_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VertexLayout_3), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ShaderInput/LightData
struct LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 
{
public:
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::position
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___position_0;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::color
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___color_1;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::attenuation
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___attenuation_2;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::spotDirection
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___spotDirection_3;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::occlusionProbeChannels
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___occlusionProbeChannels_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___position_0)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_position_0() const { return ___position_0; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___color_1)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_color_1() const { return ___color_1; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_attenuation_2() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___attenuation_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_attenuation_2() const { return ___attenuation_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_attenuation_2() { return &___attenuation_2; }
	inline void set_attenuation_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___attenuation_2 = value;
	}

	inline static int32_t get_offset_of_spotDirection_3() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___spotDirection_3)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_spotDirection_3() const { return ___spotDirection_3; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_spotDirection_3() { return &___spotDirection_3; }
	inline void set_spotDirection_3(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___spotDirection_3 = value;
	}

	inline static int32_t get_offset_of_occlusionProbeChannels_4() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___occlusionProbeChannels_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_occlusionProbeChannels_4() const { return ___occlusionProbeChannels_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_occlusionProbeChannels_4() { return &___occlusionProbeChannels_4; }
	inline void set_occlusionProbeChannels_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___occlusionProbeChannels_4 = value;
	}
};


// UnityEngine.Rendering.Universal.ShaderInput/ShadowData
struct ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.ShaderInput/ShadowData::worldToShadowMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___worldToShadowMatrix_0;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/ShadowData::shadowParams
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___shadowParams_1;

public:
	inline static int32_t get_offset_of_worldToShadowMatrix_0() { return static_cast<int32_t>(offsetof(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701, ___worldToShadowMatrix_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_worldToShadowMatrix_0() const { return ___worldToShadowMatrix_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_worldToShadowMatrix_0() { return &___worldToShadowMatrix_0; }
	inline void set_worldToShadowMatrix_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___worldToShadowMatrix_0 = value;
	}

	inline static int32_t get_offset_of_shadowParams_1() { return static_cast<int32_t>(offsetof(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701, ___shadowParams_1)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_shadowParams_1() const { return ___shadowParams_1; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_shadowParams_1() { return &___shadowParams_1; }
	inline void set_shadowParams_1(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___shadowParams_1 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
struct Edge_tC11235216D5E71087549B2CB09A27043F02FB278 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::vertexIndex0
	int32_t ___vertexIndex0_0;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::vertexIndex1
	int32_t ___vertexIndex1_1;
	// UnityEngine.Vector4 UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge::compareReversed
	bool ___compareReversed_3;

public:
	inline static int32_t get_offset_of_vertexIndex0_0() { return static_cast<int32_t>(offsetof(Edge_tC11235216D5E71087549B2CB09A27043F02FB278, ___vertexIndex0_0)); }
	inline int32_t get_vertexIndex0_0() const { return ___vertexIndex0_0; }
	inline int32_t* get_address_of_vertexIndex0_0() { return &___vertexIndex0_0; }
	inline void set_vertexIndex0_0(int32_t value)
	{
		___vertexIndex0_0 = value;
	}

	inline static int32_t get_offset_of_vertexIndex1_1() { return static_cast<int32_t>(offsetof(Edge_tC11235216D5E71087549B2CB09A27043F02FB278, ___vertexIndex1_1)); }
	inline int32_t get_vertexIndex1_1() const { return ___vertexIndex1_1; }
	inline int32_t* get_address_of_vertexIndex1_1() { return &___vertexIndex1_1; }
	inline void set_vertexIndex1_1(int32_t value)
	{
		___vertexIndex1_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(Edge_tC11235216D5E71087549B2CB09A27043F02FB278, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_compareReversed_3() { return static_cast<int32_t>(offsetof(Edge_tC11235216D5E71087549B2CB09A27043F02FB278, ___compareReversed_3)); }
	inline bool get_compareReversed_3() const { return ___compareReversed_3; }
	inline bool* get_address_of_compareReversed_3() { return &___compareReversed_3; }
	inline void set_compareReversed_3(bool value)
	{
		___compareReversed_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
struct Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshaled_pinvoke
{
	int32_t ___vertexIndex0_0;
	int32_t ___vertexIndex1_1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	int32_t ___compareReversed_3;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge
struct Edge_tC11235216D5E71087549B2CB09A27043F02FB278_marshaled_com
{
	int32_t ___vertexIndex0_0;
	int32_t ___vertexIndex1_1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	int32_t ___compareReversed_3;
};

// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities
struct Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.ByteEnum>
struct AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58, ___data_1)); }
	inline uint8_t get_data_1() const { return ___data_1; }
	inline uint8_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint8_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32Enum>
struct AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9, ___data_1)); }
	inline int32_t get_data_1() const { return ___data_1; }
	inline int32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(int32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Jobs.JobHandle>
struct AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599, ___data_1)); }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  get_data_1() const { return ___data_1; }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ManagedReferenceImage>
struct AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE, ___data_1)); }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  get_data_1() const { return ___data_1; }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>
struct AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___data_1)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_data_1() const { return ___data_1; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.PreTile>
struct AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E, ___data_1)); }
	inline PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  get_data_1() const { return ___data_1; }
	inline PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF, ___data_1)); }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  get_data_1() const { return ___data_1; }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>
struct AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93, ___data_1)); }
	inline XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  get_data_1() const { return ___data_1; }
	inline XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>
struct AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE, ___data_1)); }
	inline PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  get_data_1() const { return ___data_1; }
	inline PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex>
struct AlignOfHelper_1_t8A44F087C4667982392B6430319A3508103E5799 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8A44F087C4667982392B6430319A3508103E5799, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8A44F087C4667982392B6430319A3508103E5799, ___data_1)); }
	inline ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  get_data_1() const { return ___data_1; }
	inline ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex>
struct AlignOfHelper_1_tE51A42CDF939261B479B3E0EE4FD18B36B7C1D95 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE51A42CDF939261B479B3E0EE4FD18B36B7C1D95, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE51A42CDF939261B479B3E0EE4FD18B36B7C1D95, ___data_1)); }
	inline SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  get_data_1() const { return ___data_1; }
	inline SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.ShaderInput/LightData>
struct AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE, ___data_1)); }
	inline LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  get_data_1() const { return ___data_1; }
	inline LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.ShaderInput/ShadowData>
struct AlignOfHelper_1_tC90B8A600D3C4DEC6CD533824B027FEE08718DFA 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC90B8A600D3C4DEC6CD533824B027FEE08718DFA, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC90B8A600D3C4DEC6CD533824B027FEE08718DFA, ___data_1)); }
	inline ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  get_data_1() const { return ___data_1; }
	inline ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.PreTile>
struct NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt16>
struct NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt32>
struct NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>
struct NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>
struct NativeArray_1_tD88DD90821BE793C67689A7EA613AF5701123AA7 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD88DD90821BE793C67689A7EA613AF5701123AA7, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD88DD90821BE793C67689A7EA613AF5701123AA7, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD88DD90821BE793C67689A7EA613AF5701123AA7, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>
struct VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740, ___m_Value_2)); }
	inline int32_t get_m_Value_2() const { return ___m_Value_2; }
	inline int32_t* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(int32_t value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Identifier_0)); }
	inline intptr_t get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline intptr_t* get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(intptr_t value)
	{
		___m_Identifier_0 = value;
	}

	inline static int32_t get_offset_of_m_Capabilities_1() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Capabilities_1)); }
	inline uint64_t get_m_Capabilities_1() const { return ___m_Capabilities_1; }
	inline uint64_t* get_address_of_m_Capabilities_1() { return &___m_Capabilities_1; }
	inline void set_m_Capabilities_1(uint64_t value)
	{
		___m_Capabilities_1 = value;
	}

	inline static int32_t get_offset_of_m_Rank_2() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Rank_2)); }
	inline int32_t get_m_Rank_2() const { return ___m_Rank_2; }
	inline int32_t* get_address_of_m_Rank_2() { return &___m_Rank_2; }
	inline void set_m_Rank_2(int32_t value)
	{
		___m_Rank_2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// UnityEngine.XR.MeshInfo
struct MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CChangeStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611, ___U3CChangeStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CChangeStateU3Ek__BackingField_1() const { return ___U3CChangeStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChangeStateU3Ek__BackingField_1() { return &___U3CChangeStateU3Ek__BackingField_1; }
	inline void set_U3CChangeStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CChangeStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPriorityHintU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611, ___U3CPriorityHintU3Ek__BackingField_2)); }
	inline int32_t get_U3CPriorityHintU3Ek__BackingField_2() const { return ___U3CPriorityHintU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPriorityHintU3Ek__BackingField_2() { return &___U3CPriorityHintU3Ek__BackingField_2; }
	inline void set_U3CPriorityHintU3Ek__BackingField_2(int32_t value)
	{
		___U3CPriorityHintU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.Rendering.RasterState
struct RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E 
{
public:
	// UnityEngine.Rendering.CullMode UnityEngine.Rendering.RasterState::m_CullingMode
	int32_t ___m_CullingMode_1;
	// System.Int32 UnityEngine.Rendering.RasterState::m_OffsetUnits
	int32_t ___m_OffsetUnits_2;
	// System.Single UnityEngine.Rendering.RasterState::m_OffsetFactor
	float ___m_OffsetFactor_3;
	// System.Byte UnityEngine.Rendering.RasterState::m_DepthClip
	uint8_t ___m_DepthClip_4;
	// System.Byte UnityEngine.Rendering.RasterState::m_Conservative
	uint8_t ___m_Conservative_5;
	// System.Byte UnityEngine.Rendering.RasterState::m_Padding1
	uint8_t ___m_Padding1_6;
	// System.Byte UnityEngine.Rendering.RasterState::m_Padding2
	uint8_t ___m_Padding2_7;

public:
	inline static int32_t get_offset_of_m_CullingMode_1() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_CullingMode_1)); }
	inline int32_t get_m_CullingMode_1() const { return ___m_CullingMode_1; }
	inline int32_t* get_address_of_m_CullingMode_1() { return &___m_CullingMode_1; }
	inline void set_m_CullingMode_1(int32_t value)
	{
		___m_CullingMode_1 = value;
	}

	inline static int32_t get_offset_of_m_OffsetUnits_2() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_OffsetUnits_2)); }
	inline int32_t get_m_OffsetUnits_2() const { return ___m_OffsetUnits_2; }
	inline int32_t* get_address_of_m_OffsetUnits_2() { return &___m_OffsetUnits_2; }
	inline void set_m_OffsetUnits_2(int32_t value)
	{
		___m_OffsetUnits_2 = value;
	}

	inline static int32_t get_offset_of_m_OffsetFactor_3() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_OffsetFactor_3)); }
	inline float get_m_OffsetFactor_3() const { return ___m_OffsetFactor_3; }
	inline float* get_address_of_m_OffsetFactor_3() { return &___m_OffsetFactor_3; }
	inline void set_m_OffsetFactor_3(float value)
	{
		___m_OffsetFactor_3 = value;
	}

	inline static int32_t get_offset_of_m_DepthClip_4() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_DepthClip_4)); }
	inline uint8_t get_m_DepthClip_4() const { return ___m_DepthClip_4; }
	inline uint8_t* get_address_of_m_DepthClip_4() { return &___m_DepthClip_4; }
	inline void set_m_DepthClip_4(uint8_t value)
	{
		___m_DepthClip_4 = value;
	}

	inline static int32_t get_offset_of_m_Conservative_5() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_Conservative_5)); }
	inline uint8_t get_m_Conservative_5() const { return ___m_Conservative_5; }
	inline uint8_t* get_address_of_m_Conservative_5() { return &___m_Conservative_5; }
	inline void set_m_Conservative_5(uint8_t value)
	{
		___m_Conservative_5 = value;
	}

	inline static int32_t get_offset_of_m_Padding1_6() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_Padding1_6)); }
	inline uint8_t get_m_Padding1_6() const { return ___m_Padding1_6; }
	inline uint8_t* get_address_of_m_Padding1_6() { return &___m_Padding1_6; }
	inline void set_m_Padding1_6(uint8_t value)
	{
		___m_Padding1_6 = value;
	}

	inline static int32_t get_offset_of_m_Padding2_7() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_Padding2_7)); }
	inline uint8_t get_m_Padding2_7() const { return ___m_Padding2_7; }
	inline uint8_t* get_address_of_m_Padding2_7() { return &___m_Padding2_7; }
	inline void set_m_Padding2_7(uint8_t value)
	{
		___m_Padding2_7 = value;
	}
};

struct RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E_StaticFields
{
public:
	// UnityEngine.Rendering.RasterState UnityEngine.Rendering.RasterState::defaultValue
	RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  ___defaultValue_0;

public:
	inline static int32_t get_offset_of_defaultValue_0() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E_StaticFields, ___defaultValue_0)); }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  get_defaultValue_0() const { return ___defaultValue_0; }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E * get_address_of_defaultValue_0() { return &___defaultValue_0; }
	inline void set_defaultValue_0(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  value)
	{
		___defaultValue_0 = value;
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle
struct ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948 
{
public:
	// System.UInt32 UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle::m_Value
	uint32_t ___m_Value_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceType UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948, ___m_Value_2)); }
	inline uint32_t get_m_Value_2() const { return ___m_Value_2; }
	inline uint32_t* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(uint32_t value)
	{
		___m_Value_2 = value;
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948, ___U3CtypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_4() const { return ___U3CtypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_4() { return &___U3CtypeU3Ek__BackingField_4; }
	inline void set_U3CtypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_4 = value;
	}
};

struct ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948_StaticFields
{
public:
	// System.UInt32 UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle::s_CurrentValidBit
	uint32_t ___s_CurrentValidBit_3;

public:
	inline static int32_t get_offset_of_s_CurrentValidBit_3() { return static_cast<int32_t>(offsetof(ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948_StaticFields, ___s_CurrentValidBit_3)); }
	inline uint32_t get_s_CurrentValidBit_3() const { return ___s_CurrentValidBit_3; }
	inline uint32_t* get_address_of_s_CurrentValidBit_3() { return &___s_CurrentValidBit_3; }
	inline void set_s_CurrentValidBit_3(uint32_t value)
	{
		___s_CurrentValidBit_3 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// UnityEngine.Rendering.VisibleLight
struct VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B 
{
public:
	// UnityEngine.LightType UnityEngine.Rendering.VisibleLight::m_LightType
	int32_t ___m_LightType_0;
	// UnityEngine.Color UnityEngine.Rendering.VisibleLight::m_FinalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_FinalColor_1;
	// UnityEngine.Rect UnityEngine.Rendering.VisibleLight::m_ScreenRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_ScreenRect_2;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.VisibleLight::m_LocalToWorldMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_LocalToWorldMatrix_3;
	// System.Single UnityEngine.Rendering.VisibleLight::m_Range
	float ___m_Range_4;
	// System.Single UnityEngine.Rendering.VisibleLight::m_SpotAngle
	float ___m_SpotAngle_5;
	// System.Int32 UnityEngine.Rendering.VisibleLight::m_InstanceId
	int32_t ___m_InstanceId_6;
	// UnityEngine.Rendering.VisibleLightFlags UnityEngine.Rendering.VisibleLight::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_LightType_0() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_LightType_0)); }
	inline int32_t get_m_LightType_0() const { return ___m_LightType_0; }
	inline int32_t* get_address_of_m_LightType_0() { return &___m_LightType_0; }
	inline void set_m_LightType_0(int32_t value)
	{
		___m_LightType_0 = value;
	}

	inline static int32_t get_offset_of_m_FinalColor_1() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_FinalColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_FinalColor_1() const { return ___m_FinalColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_FinalColor_1() { return &___m_FinalColor_1; }
	inline void set_m_FinalColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_FinalColor_1 = value;
	}

	inline static int32_t get_offset_of_m_ScreenRect_2() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_ScreenRect_2)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_ScreenRect_2() const { return ___m_ScreenRect_2; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_ScreenRect_2() { return &___m_ScreenRect_2; }
	inline void set_m_ScreenRect_2(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_ScreenRect_2 = value;
	}

	inline static int32_t get_offset_of_m_LocalToWorldMatrix_3() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_LocalToWorldMatrix_3)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_LocalToWorldMatrix_3() const { return ___m_LocalToWorldMatrix_3; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_LocalToWorldMatrix_3() { return &___m_LocalToWorldMatrix_3; }
	inline void set_m_LocalToWorldMatrix_3(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_LocalToWorldMatrix_3 = value;
	}

	inline static int32_t get_offset_of_m_Range_4() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_Range_4)); }
	inline float get_m_Range_4() const { return ___m_Range_4; }
	inline float* get_address_of_m_Range_4() { return &___m_Range_4; }
	inline void set_m_Range_4(float value)
	{
		___m_Range_4 = value;
	}

	inline static int32_t get_offset_of_m_SpotAngle_5() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_SpotAngle_5)); }
	inline float get_m_SpotAngle_5() const { return ___m_SpotAngle_5; }
	inline float* get_address_of_m_SpotAngle_5() { return &___m_SpotAngle_5; }
	inline void set_m_SpotAngle_5(float value)
	{
		___m_SpotAngle_5 = value;
	}

	inline static int32_t get_offset_of_m_InstanceId_6() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_InstanceId_6)); }
	inline int32_t get_m_InstanceId_6() const { return ___m_InstanceId_6; }
	inline int32_t* get_address_of_m_InstanceId_6() { return &___m_InstanceId_6; }
	inline void set_m_InstanceId_6(int32_t value)
	{
		___m_InstanceId_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFace
struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_LeftEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LeftEyePose_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_RightEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_RightEyePose_5;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRFace::m_FixationPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_FixationPoint_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_LeftEyePose_4() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_LeftEyePose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LeftEyePose_4() const { return ___m_LeftEyePose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LeftEyePose_4() { return &___m_LeftEyePose_4; }
	inline void set_m_LeftEyePose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LeftEyePose_4 = value;
	}

	inline static int32_t get_offset_of_m_RightEyePose_5() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_RightEyePose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_RightEyePose_5() const { return ___m_RightEyePose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_RightEyePose_5() { return &___m_RightEyePose_5; }
	inline void set_m_RightEyePose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_RightEyePose_5 = value;
	}

	inline static int32_t get_offset_of_m_FixationPoint_6() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_FixationPoint_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_FixationPoint_6() const { return ___m_FixationPoint_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_FixationPoint_6() { return &___m_FixationPoint_6; }
	inline void set_m_FixationPoint_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_FixationPoint_6 = value;
	}
};

struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRFace UnityEngine.XR.ARSubsystems.XRFace::s_Default
	XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___s_Default_7;

public:
	inline static int32_t get_offset_of_s_Default_7() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields, ___s_Default_7)); }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  get_s_Default_7() const { return ___s_Default_7; }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * get_address_of_s_Default_7() { return &___s_Default_7; }
	inline void set_s_Default_7(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  value)
	{
		___s_Default_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBody
struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBody::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRHumanBody::m_EstimatedHeightScaleFactor
	float ___m_EstimatedHeightScaleFactor_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRHumanBody::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_EstimatedHeightScaleFactor_2() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_EstimatedHeightScaleFactor_2)); }
	inline float get_m_EstimatedHeightScaleFactor_2() const { return ___m_EstimatedHeightScaleFactor_2; }
	inline float* get_address_of_m_EstimatedHeightScaleFactor_2() { return &___m_EstimatedHeightScaleFactor_2; }
	inline void set_m_EstimatedHeightScaleFactor_2(float value)
	{
		___m_EstimatedHeightScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRHumanBody UnityEngine.XR.ARSubsystems.XRHumanBody::s_Default
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields, ___s_Default_5)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_s_Default_5() const { return ___s_Default_5; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyJoint
struct XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LocalScale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LocalPose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AnchorScale_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_AnchorPose_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Tracked
	int32_t ___m_Tracked_6;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_LocalScale_2() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_LocalScale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LocalScale_2() const { return ___m_LocalScale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LocalScale_2() { return &___m_LocalScale_2; }
	inline void set_m_LocalScale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LocalScale_2 = value;
	}

	inline static int32_t get_offset_of_m_LocalPose_3() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_LocalPose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LocalPose_3() const { return ___m_LocalPose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LocalPose_3() { return &___m_LocalPose_3; }
	inline void set_m_LocalPose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LocalPose_3 = value;
	}

	inline static int32_t get_offset_of_m_AnchorScale_4() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_AnchorScale_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AnchorScale_4() const { return ___m_AnchorScale_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AnchorScale_4() { return &___m_AnchorScale_4; }
	inline void set_m_AnchorScale_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AnchorScale_4 = value;
	}

	inline static int32_t get_offset_of_m_AnchorPose_5() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_AnchorPose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_AnchorPose_5() const { return ___m_AnchorPose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_AnchorPose_5() { return &___m_AnchorPose_5; }
	inline void set_m_AnchorPose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_AnchorPose_5 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_6() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_Tracked_6)); }
	inline int32_t get_m_Tracked_6() const { return ___m_Tracked_6; }
	inline int32_t* get_address_of_m_Tracked_6() { return &___m_Tracked_6; }
	inline void set_m_Tracked_6(int32_t value)
	{
		___m_Tracked_6 = value;
	}
};


// UnityEngine.XR.XRNodeState
struct XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Rotation_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Velocity_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AngularVelocity_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Acceleration_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AngularAcceleration_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem
struct XRObjectTrackingSubsystem_t3F31F4C8BCA868FE69BD8EC75BA5A1116026C881  : public TrackingSubsystem_4_t1E41FDFF37B1529EED554D89481040B067E300EB
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::m_Library
	XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * ___m_Library_4;

public:
	inline static int32_t get_offset_of_m_Library_4() { return static_cast<int32_t>(offsetof(XRObjectTrackingSubsystem_t3F31F4C8BCA868FE69BD8EC75BA5A1116026C881, ___m_Library_4)); }
	inline XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * get_m_Library_4() const { return ___m_Library_4; }
	inline XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C ** get_address_of_m_Library_4() { return &___m_Library_4; }
	inline void set_m_Library_4(XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * value)
	{
		___m_Library_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Library_4), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipant
struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRParticipant::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRParticipant::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRParticipant::m_SessionId
	Guid_t  ___m_SessionId_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_4() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_SessionId_4)); }
	inline Guid_t  get_m_SessionId_4() const { return ___m_SessionId_4; }
	inline Guid_t * get_address_of_m_SessionId_4() { return &___m_SessionId_4; }
	inline void set_m_SessionId_4(Guid_t  value)
	{
		___m_SessionId_4 = value;
	}
};

struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipant UnityEngine.XR.ARSubsystems.XRParticipant::k_Default
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___k_Default_5;

public:
	inline static int32_t get_offset_of_k_Default_5() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields, ___k_Default_5)); }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  get_k_Default_5() const { return ___k_Default_5; }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * get_address_of_k_Default_5() { return &___k_Default_5; }
	inline void set_k_Default_5(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  value)
	{
		___k_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55  : public SubsystemDescriptorWithProvider_2_t43C05E9C3928E04822F2DA791FFAC4C140DF10A5
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55, ___U3CcapabilitiesU3Ek__BackingField_3)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_3() const { return ___U3CcapabilitiesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_3() { return &___U3CcapabilitiesU3Ek__BackingField_3; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_3(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields, ___s_Default_0)); }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  get_s_Default_0() const { return ___s_Default_0; }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_HitTrackableId_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_Distance_5() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Distance_5)); }
	inline float get_m_Distance_5() const { return ___m_Distance_5; }
	inline float* get_address_of_m_Distance_5() { return &___m_Distance_5; }
	inline void set_m_Distance_5(float value)
	{
		___m_Distance_5 = value;
	}

	inline static int32_t get_offset_of_m_HitTrackableId_6() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_HitTrackableId_6)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_HitTrackableId_6() const { return ___m_HitTrackableId_6; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_HitTrackableId_6() { return &___m_HitTrackableId_6; }
	inline void set_m_HitTrackableId_6(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_HitTrackableId_6 = value;
	}
};

struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields, ___s_Default_0)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::s_Default
	XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields, ___s_Default_0)); }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  get_s_Default_0() const { return ___s_Default_0; }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}

	inline static int32_t get_offset_of_m_Depth_6() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Depth_6)); }
	inline int32_t get_m_Depth_6() const { return ___m_Depth_6; }
	inline int32_t* get_address_of_m_Depth_6() { return &___m_Depth_6; }
	inline void set_m_Depth_6(int32_t value)
	{
		___m_Depth_6 = value;
	}

	inline static int32_t get_offset_of_m_Dimension_7() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Dimension_7)); }
	inline int32_t get_m_Dimension_7() const { return ___m_Dimension_7; }
	inline int32_t* get_address_of_m_Dimension_7() { return &___m_Dimension_7; }
	inline void set_m_Dimension_7(int32_t value)
	{
		___m_Dimension_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_SourceImageId_2)); }
	inline Guid_t  get_m_SourceImageId_2() const { return ___m_SourceImageId_2; }
	inline Guid_t * get_address_of_m_SourceImageId_2() { return &___m_SourceImageId_2; }
	inline void set_m_SourceImageId_2(Guid_t  value)
	{
		___m_SourceImageId_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Size_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};

struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields, ___s_Default_0)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_s_Default_0() const { return ___s_Default_0; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t  ___m_ReferenceObjectGuid_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjectGuid_4() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_ReferenceObjectGuid_4)); }
	inline Guid_t  get_m_ReferenceObjectGuid_4() const { return ___m_ReferenceObjectGuid_4; }
	inline Guid_t * get_address_of_m_ReferenceObjectGuid_4() { return &___m_ReferenceObjectGuid_4; }
	inline void set_m_ReferenceObjectGuid_4(Guid_t  value)
	{
		___m_ReferenceObjectGuid_4 = value;
	}
};

struct XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::s_Default
	XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields, ___s_Default_5)); }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  get_s_Default_5() const { return ___s_Default_5; }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob
struct AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5 
{
public:
	// Unity.Collections.NativeSlice`1<System.Byte> UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::image
	NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  ___image_0;
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::database
	intptr_t ___database_1;
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::validator
	intptr_t ___validator_2;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::width
	int32_t ___width_3;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::height
	int32_t ___height_4;
	// System.Single UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::physicalWidth
	float ___physicalWidth_5;
	// UnityEngine.TextureFormat UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::format
	int32_t ___format_6;
	// UnityEngine.XR.ARKit.ManagedReferenceImage UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::managedReferenceImage
	ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  ___managedReferenceImage_7;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___image_0)); }
	inline NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  get_image_0() const { return ___image_0; }
	inline NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B * get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  value)
	{
		___image_0 = value;
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___database_1)); }
	inline intptr_t get_database_1() const { return ___database_1; }
	inline intptr_t* get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(intptr_t value)
	{
		___database_1 = value;
	}

	inline static int32_t get_offset_of_validator_2() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___validator_2)); }
	inline intptr_t get_validator_2() const { return ___validator_2; }
	inline intptr_t* get_address_of_validator_2() { return &___validator_2; }
	inline void set_validator_2(intptr_t value)
	{
		___validator_2 = value;
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___width_3)); }
	inline int32_t get_width_3() const { return ___width_3; }
	inline int32_t* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(int32_t value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___height_4)); }
	inline int32_t get_height_4() const { return ___height_4; }
	inline int32_t* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(int32_t value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_physicalWidth_5() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___physicalWidth_5)); }
	inline float get_physicalWidth_5() const { return ___physicalWidth_5; }
	inline float* get_address_of_physicalWidth_5() { return &___physicalWidth_5; }
	inline void set_physicalWidth_5(float value)
	{
		___physicalWidth_5 = value;
	}

	inline static int32_t get_offset_of_format_6() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___format_6)); }
	inline int32_t get_format_6() const { return ___format_6; }
	inline int32_t* get_address_of_format_6() { return &___format_6; }
	inline void set_format_6(int32_t value)
	{
		___format_6 = value;
	}

	inline static int32_t get_offset_of_managedReferenceImage_7() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___managedReferenceImage_7)); }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  get_managedReferenceImage_7() const { return ___managedReferenceImage_7; }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * get_address_of_managedReferenceImage_7() { return &___managedReferenceImage_7; }
	inline void set_managedReferenceImage_7(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  value)
	{
		___managedReferenceImage_7 = value;
	}
};


// UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 
{
public:
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;

public:
	inline static int32_t get_offset_of_m_CameraRenderMode_0() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_CameraRenderMode_0)); }
	inline int32_t get_m_CameraRenderMode_0() const { return ___m_CameraRenderMode_0; }
	inline int32_t* get_address_of_m_CameraRenderMode_0() { return &___m_CameraRenderMode_0; }
	inline void set_m_CameraRenderMode_0(int32_t value)
	{
		___m_CameraRenderMode_0 = value;
	}

	inline static int32_t get_offset_of_m_ResultRT_1() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_ResultRT_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_ResultRT_1() const { return ___m_ResultRT_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_ResultRT_1() { return &___m_ResultRT_1; }
	inline void set_m_ResultRT_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_ResultRT_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResultRT_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputSpace_2() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_OutputSpace_2)); }
	inline int32_t get_m_OutputSpace_2() const { return ___m_OutputSpace_2; }
	inline int32_t* get_address_of_m_OutputSpace_2() { return &___m_OutputSpace_2; }
	inline void set_m_OutputSpace_2(int32_t value)
	{
		___m_OutputSpace_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C, ___data_1)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_data_1() const { return ___data_1; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768, ___data_1)); }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  get_data_1() const { return ___data_1; }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___data_1)); }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  get_data_1() const { return ___data_1; }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.VisibleLight>
struct AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C, ___data_1)); }
	inline VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  get_data_1() const { return ___data_1; }
	inline VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843, ___data_1)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_data_1() const { return ___data_1; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRFace>
struct AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6, ___data_1)); }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  get_data_1() const { return ___data_1; }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7, ___data_1)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_data_1() const { return ___data_1; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7, ___data_1)); }
	inline XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  get_data_1() const { return ___data_1; }
	inline XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD, ___data_1)); }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  get_data_1() const { return ___data_1; }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800, ___data_1)); }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  get_data_1() const { return ___data_1; }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62, ___data_1)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_data_1() const { return ___data_1; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310, ___data_1)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_data_1() const { return ___data_1; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728, ___data_1)); }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  get_data_1() const { return ___data_1; }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180, ___data_1)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_data_1() const { return ___data_1; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372, ___data_1)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_data_1() const { return ___data_1; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E, ___data_1)); }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  get_data_1() const { return ___data_1; }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  value)
	{
		___data_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitImageDatabase/DeallocateNativeArrayJob`1<System.Byte>
struct DeallocateNativeArrayJob_1_t2A6BBDEB793D693B1E240D595DD0217524A5092C 
{
public:
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARKit.ARKitImageDatabase/DeallocateNativeArrayJob`1::array
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(DeallocateNativeArrayJob_1_t2A6BBDEB793D693B1E240D595DD0217524A5092C, ___array_0)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_array_0() const { return ___array_0; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___array_0 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;

public:
	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CdistanceU3Ek__BackingField_0)); }
	inline float get_U3CdistanceU3Ek__BackingField_0() const { return ___U3CdistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_0() { return &___U3CdistanceU3Ek__BackingField_0; }
	inline void set_U3CdistanceU3Ek__BackingField_0(float value)
	{
		___U3CdistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtrackableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___U3CtrackableU3Ek__BackingField_1)); }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * get_U3CtrackableU3Ek__BackingField_1() const { return ___U3CtrackableU3Ek__BackingField_1; }
	inline ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 ** get_address_of_U3CtrackableU3Ek__BackingField_1() { return &___U3CtrackableU3Ek__BackingField_1; }
	inline void set_U3CtrackableU3Ek__BackingField_1(ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * value)
	{
		___U3CtrackableU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtrackableU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hit_2() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Hit_2)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_m_Hit_2() const { return ___m_Hit_2; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_m_Hit_2() { return &___m_Hit_2; }
	inline void set_m_Hit_2(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___m_Hit_2 = value;
	}

	inline static int32_t get_offset_of_m_Transform_3() { return static_cast<int32_t>(offsetof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E, ___m_Transform_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Transform_3() const { return ___m_Transform_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Transform_3() { return &___m_Transform_3; }
	inline void set_m_Transform_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Transform_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3 * ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___m_Hit_2;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Transform_3;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 
{
public:
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;

public:
	inline static int32_t get_offset_of_m_Descriptor_1() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Descriptor_1)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_Descriptor_1() const { return ___m_Descriptor_1; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_Descriptor_1() { return &___m_Descriptor_1; }
	inline void set_m_Descriptor_1(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_Descriptor_1 = value;
	}

	inline static int32_t get_offset_of_m_Texture_2() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Texture_2)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_2() const { return ___m_Texture_2; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_2() { return &___m_Texture_2; }
	inline void set_m_Texture_2(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_pinvoke
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_com
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};

// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rendering.Universal.Internal.DeferredTiler
struct DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372 
{
public:
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TilePixelWidth
	int32_t ___m_TilePixelWidth_0;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TilePixelHeight
	int32_t ___m_TilePixelHeight_1;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TileXCount
	int32_t ___m_TileXCount_2;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TileYCount
	int32_t ___m_TileYCount_3;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TileHeaderSize
	int32_t ___m_TileHeaderSize_4;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_AvgLightPerTile
	int32_t ___m_AvgLightPerTile_5;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TilerLevel
	int32_t ___m_TilerLevel_6;
	// UnityEngine.FrustumPlanes UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_FrustumPlanes
	FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C  ___m_FrustumPlanes_7;
	// System.Boolean UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_IsOrthographic
	bool ___m_IsOrthographic_8;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_Counters
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Counters_9;
	// Unity.Collections.NativeArray`1<System.UInt16> UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TileData
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  ___m_TileData_10;
	// Unity.Collections.NativeArray`1<System.UInt32> UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_TileHeaders
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___m_TileHeaders_11;
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.PreTile> UnityEngine.Rendering.Universal.Internal.DeferredTiler::m_PreTiles
	NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA  ___m_PreTiles_12;

public:
	inline static int32_t get_offset_of_m_TilePixelWidth_0() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TilePixelWidth_0)); }
	inline int32_t get_m_TilePixelWidth_0() const { return ___m_TilePixelWidth_0; }
	inline int32_t* get_address_of_m_TilePixelWidth_0() { return &___m_TilePixelWidth_0; }
	inline void set_m_TilePixelWidth_0(int32_t value)
	{
		___m_TilePixelWidth_0 = value;
	}

	inline static int32_t get_offset_of_m_TilePixelHeight_1() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TilePixelHeight_1)); }
	inline int32_t get_m_TilePixelHeight_1() const { return ___m_TilePixelHeight_1; }
	inline int32_t* get_address_of_m_TilePixelHeight_1() { return &___m_TilePixelHeight_1; }
	inline void set_m_TilePixelHeight_1(int32_t value)
	{
		___m_TilePixelHeight_1 = value;
	}

	inline static int32_t get_offset_of_m_TileXCount_2() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TileXCount_2)); }
	inline int32_t get_m_TileXCount_2() const { return ___m_TileXCount_2; }
	inline int32_t* get_address_of_m_TileXCount_2() { return &___m_TileXCount_2; }
	inline void set_m_TileXCount_2(int32_t value)
	{
		___m_TileXCount_2 = value;
	}

	inline static int32_t get_offset_of_m_TileYCount_3() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TileYCount_3)); }
	inline int32_t get_m_TileYCount_3() const { return ___m_TileYCount_3; }
	inline int32_t* get_address_of_m_TileYCount_3() { return &___m_TileYCount_3; }
	inline void set_m_TileYCount_3(int32_t value)
	{
		___m_TileYCount_3 = value;
	}

	inline static int32_t get_offset_of_m_TileHeaderSize_4() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TileHeaderSize_4)); }
	inline int32_t get_m_TileHeaderSize_4() const { return ___m_TileHeaderSize_4; }
	inline int32_t* get_address_of_m_TileHeaderSize_4() { return &___m_TileHeaderSize_4; }
	inline void set_m_TileHeaderSize_4(int32_t value)
	{
		___m_TileHeaderSize_4 = value;
	}

	inline static int32_t get_offset_of_m_AvgLightPerTile_5() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_AvgLightPerTile_5)); }
	inline int32_t get_m_AvgLightPerTile_5() const { return ___m_AvgLightPerTile_5; }
	inline int32_t* get_address_of_m_AvgLightPerTile_5() { return &___m_AvgLightPerTile_5; }
	inline void set_m_AvgLightPerTile_5(int32_t value)
	{
		___m_AvgLightPerTile_5 = value;
	}

	inline static int32_t get_offset_of_m_TilerLevel_6() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TilerLevel_6)); }
	inline int32_t get_m_TilerLevel_6() const { return ___m_TilerLevel_6; }
	inline int32_t* get_address_of_m_TilerLevel_6() { return &___m_TilerLevel_6; }
	inline void set_m_TilerLevel_6(int32_t value)
	{
		___m_TilerLevel_6 = value;
	}

	inline static int32_t get_offset_of_m_FrustumPlanes_7() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_FrustumPlanes_7)); }
	inline FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C  get_m_FrustumPlanes_7() const { return ___m_FrustumPlanes_7; }
	inline FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C * get_address_of_m_FrustumPlanes_7() { return &___m_FrustumPlanes_7; }
	inline void set_m_FrustumPlanes_7(FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C  value)
	{
		___m_FrustumPlanes_7 = value;
	}

	inline static int32_t get_offset_of_m_IsOrthographic_8() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_IsOrthographic_8)); }
	inline bool get_m_IsOrthographic_8() const { return ___m_IsOrthographic_8; }
	inline bool* get_address_of_m_IsOrthographic_8() { return &___m_IsOrthographic_8; }
	inline void set_m_IsOrthographic_8(bool value)
	{
		___m_IsOrthographic_8 = value;
	}

	inline static int32_t get_offset_of_m_Counters_9() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_Counters_9)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_Counters_9() const { return ___m_Counters_9; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_Counters_9() { return &___m_Counters_9; }
	inline void set_m_Counters_9(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_Counters_9 = value;
	}

	inline static int32_t get_offset_of_m_TileData_10() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TileData_10)); }
	inline NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  get_m_TileData_10() const { return ___m_TileData_10; }
	inline NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A * get_address_of_m_TileData_10() { return &___m_TileData_10; }
	inline void set_m_TileData_10(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  value)
	{
		___m_TileData_10 = value;
	}

	inline static int32_t get_offset_of_m_TileHeaders_11() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_TileHeaders_11)); }
	inline NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  get_m_TileHeaders_11() const { return ___m_TileHeaders_11; }
	inline NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * get_address_of_m_TileHeaders_11() { return &___m_TileHeaders_11; }
	inline void set_m_TileHeaders_11(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  value)
	{
		___m_TileHeaders_11 = value;
	}

	inline static int32_t get_offset_of_m_PreTiles_12() { return static_cast<int32_t>(offsetof(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372, ___m_PreTiles_12)); }
	inline NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA  get_m_PreTiles_12() const { return ___m_PreTiles_12; }
	inline NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA * get_address_of_m_PreTiles_12() { return &___m_PreTiles_12; }
	inline void set_m_PreTiles_12(NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA  value)
	{
		___m_PreTiles_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.Internal.DeferredTiler
struct DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshaled_pinvoke
{
	int32_t ___m_TilePixelWidth_0;
	int32_t ___m_TilePixelHeight_1;
	int32_t ___m_TileXCount_2;
	int32_t ___m_TileYCount_3;
	int32_t ___m_TileHeaderSize_4;
	int32_t ___m_AvgLightPerTile_5;
	int32_t ___m_TilerLevel_6;
	FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C  ___m_FrustumPlanes_7;
	int32_t ___m_IsOrthographic_8;
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Counters_9;
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  ___m_TileData_10;
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___m_TileHeaders_11;
	NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA  ___m_PreTiles_12;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.Internal.DeferredTiler
struct DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshaled_com
{
	int32_t ___m_TilePixelWidth_0;
	int32_t ___m_TilePixelHeight_1;
	int32_t ___m_TileXCount_2;
	int32_t ___m_TileYCount_3;
	int32_t ___m_TileHeaderSize_4;
	int32_t ___m_AvgLightPerTile_5;
	int32_t ___m_TilerLevel_6;
	FrustumPlanes_t04DCFA7A13B132C73BC888D7ABBC4C6C40CDC40C  ___m_FrustumPlanes_7;
	int32_t ___m_IsOrthographic_8;
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Counters_9;
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  ___m_TileData_10;
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___m_TileHeaders_11;
	NativeArray_1_tCD004FBD9F8C000DD43B8D3D4AD6D1FE8D058ECA  ___m_PreTiles_12;
};

// UnityEngine.Rendering.RenderStateBlock
struct RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D 
{
public:
	// UnityEngine.Rendering.BlendState UnityEngine.Rendering.RenderStateBlock::m_BlendState
	BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34  ___m_BlendState_0;
	// UnityEngine.Rendering.RasterState UnityEngine.Rendering.RenderStateBlock::m_RasterState
	RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  ___m_RasterState_1;
	// UnityEngine.Rendering.DepthState UnityEngine.Rendering.RenderStateBlock::m_DepthState
	DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA  ___m_DepthState_2;
	// UnityEngine.Rendering.StencilState UnityEngine.Rendering.RenderStateBlock::m_StencilState
	StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  ___m_StencilState_3;
	// System.Int32 UnityEngine.Rendering.RenderStateBlock::m_StencilReference
	int32_t ___m_StencilReference_4;
	// UnityEngine.Rendering.RenderStateMask UnityEngine.Rendering.RenderStateBlock::m_Mask
	int32_t ___m_Mask_5;

public:
	inline static int32_t get_offset_of_m_BlendState_0() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_BlendState_0)); }
	inline BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34  get_m_BlendState_0() const { return ___m_BlendState_0; }
	inline BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34 * get_address_of_m_BlendState_0() { return &___m_BlendState_0; }
	inline void set_m_BlendState_0(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34  value)
	{
		___m_BlendState_0 = value;
	}

	inline static int32_t get_offset_of_m_RasterState_1() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_RasterState_1)); }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  get_m_RasterState_1() const { return ___m_RasterState_1; }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E * get_address_of_m_RasterState_1() { return &___m_RasterState_1; }
	inline void set_m_RasterState_1(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  value)
	{
		___m_RasterState_1 = value;
	}

	inline static int32_t get_offset_of_m_DepthState_2() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_DepthState_2)); }
	inline DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA  get_m_DepthState_2() const { return ___m_DepthState_2; }
	inline DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA * get_address_of_m_DepthState_2() { return &___m_DepthState_2; }
	inline void set_m_DepthState_2(DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA  value)
	{
		___m_DepthState_2 = value;
	}

	inline static int32_t get_offset_of_m_StencilState_3() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_StencilState_3)); }
	inline StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  get_m_StencilState_3() const { return ___m_StencilState_3; }
	inline StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007 * get_address_of_m_StencilState_3() { return &___m_StencilState_3; }
	inline void set_m_StencilState_3(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  value)
	{
		___m_StencilState_3 = value;
	}

	inline static int32_t get_offset_of_m_StencilReference_4() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_StencilReference_4)); }
	inline int32_t get_m_StencilReference_4() const { return ___m_StencilReference_4; }
	inline int32_t* get_address_of_m_StencilReference_4() { return &___m_StencilReference_4; }
	inline void set_m_StencilReference_4(int32_t value)
	{
		___m_StencilReference_4 = value;
	}

	inline static int32_t get_offset_of_m_Mask_5() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_Mask_5)); }
	inline int32_t get_m_Mask_5() const { return ___m_Mask_5; }
	inline int32_t* get_address_of_m_Mask_5() { return &___m_Mask_5; }
	inline void set_m_Mask_5(int32_t value)
	{
		___m_Mask_5 = value;
	}
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.Rendering.VolumeComponent::active
	bool ___active_4;
	// System.String UnityEngine.Rendering.VolumeComponent::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter> UnityEngine.Rendering.VolumeComponent::<parameters>k__BackingField
	ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * ___U3CparametersU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.VolumeComponent::m_AdvancedMode
	bool ___m_AdvancedMode_7;

public:
	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___active_4)); }
	inline bool get_active_4() const { return ___active_4; }
	inline bool* get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(bool value)
	{
		___active_4 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___U3CdisplayNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_5() const { return ___U3CdisplayNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_5() { return &___U3CdisplayNameU3Ek__BackingField_5; }
	inline void set_U3CdisplayNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CparametersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___U3CparametersU3Ek__BackingField_6)); }
	inline ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * get_U3CparametersU3Ek__BackingField_6() const { return ___U3CparametersU3Ek__BackingField_6; }
	inline ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 ** get_address_of_U3CparametersU3Ek__BackingField_6() { return &___U3CparametersU3Ek__BackingField_6; }
	inline void set_U3CparametersU3Ek__BackingField_6(ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * value)
	{
		___U3CparametersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CparametersU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_AdvancedMode_7() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___m_AdvancedMode_7)); }
	inline bool get_m_AdvancedMode_7() const { return ___m_AdvancedMode_7; }
	inline bool* get_address_of_m_AdvancedMode_7() { return &___m_AdvancedMode_7; }
	inline void set_m_AdvancedMode_7(bool value)
	{
		___m_AdvancedMode_7 = value;
	}
};


// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeProfile::components
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___components_4;
	// System.Boolean UnityEngine.Rendering.VolumeProfile::isDirty
	bool ___isDirty_5;

public:
	inline static int32_t get_offset_of_components_4() { return static_cast<int32_t>(offsetof(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821, ___components_4)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_components_4() const { return ___components_4; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_components_4() { return &___components_4; }
	inline void set_components_4(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___components_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___components_4), (void*)value);
	}

	inline static int32_t get_offset_of_isDirty_5() { return static_cast<int32_t>(offsetof(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821, ___isDirty_5)); }
	inline bool get_isDirty_5() const { return ___isDirty_5; }
	inline bool* get_address_of_isDirty_5() { return &___isDirty_5; }
	inline void set_isDirty_5(bool value)
	{
		___isDirty_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Scale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_TextureDescriptor_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Scale_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Scale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Scale_2() const { return ___m_Scale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Scale_2() { return &___m_Scale_2; }
	inline void set_m_Scale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Scale_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Size_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TextureDescriptor_5)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_TextureDescriptor_5() const { return ___m_TextureDescriptor_5; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_TextureDescriptor_5() { return &___m_TextureDescriptor_5; }
	inline void set_m_TextureDescriptor_5(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_TextureDescriptor_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};

struct XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbe UnityEngine.XR.ARSubsystems.XREnvironmentProbe::s_Default
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields, ___s_Default_0)); }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  get_s_Default_0() const { return ___s_Default_0; }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsIn
	NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsOut
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468, ___positionsIn_0)); }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468, ___positionsOut_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___positionsOut_1 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob
struct PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D 
{
public:
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::points
	NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  ___points_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::infos
	NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  ___infos_1;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::hits
	NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  ___hits_2;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::count
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___count_3;
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::cosineThreshold
	float ___cosineThreshold_4;
	// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::trackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId_6;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___points_0)); }
	inline NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  get_points_0() const { return ___points_0; }
	inline NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125 * get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  value)
	{
		___points_0 = value;
	}

	inline static int32_t get_offset_of_infos_1() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___infos_1)); }
	inline NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  get_infos_1() const { return ___infos_1; }
	inline NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD * get_address_of_infos_1() { return &___infos_1; }
	inline void set_infos_1(NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  value)
	{
		___infos_1 = value;
	}

	inline static int32_t get_offset_of_hits_2() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___hits_2)); }
	inline NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  get_hits_2() const { return ___hits_2; }
	inline NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB * get_address_of_hits_2() { return &___hits_2; }
	inline void set_hits_2(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  value)
	{
		___hits_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___count_3)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_count_3() const { return ___count_3; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_cosineThreshold_4() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___cosineThreshold_4)); }
	inline float get_cosineThreshold_4() const { return ___cosineThreshold_4; }
	inline float* get_address_of_cosineThreshold_4() { return &___cosineThreshold_4; }
	inline void set_cosineThreshold_4(float value)
	{
		___cosineThreshold_4 = value;
	}

	inline static int32_t get_offset_of_pose_5() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___pose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_pose_5() const { return ___pose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_pose_5() { return &___pose_5; }
	inline void set_pose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___pose_5 = value;
	}

	inline static int32_t get_offset_of_trackableId_6() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___trackableId_6)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_trackableId_6() const { return ___trackableId_6; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_trackableId_6() { return &___trackableId_6; }
	inline void set_trackableId_6(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___trackableId_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob
struct PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270 
{
public:
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::points
	NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  ___points_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::infoOut
	NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  ___infoOut_1;
	// UnityEngine.Ray UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::ray
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray_2;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270, ___points_0)); }
	inline NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  get_points_0() const { return ___points_0; }
	inline NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125 * get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  value)
	{
		___points_0 = value;
	}

	inline static int32_t get_offset_of_infoOut_1() { return static_cast<int32_t>(offsetof(PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270, ___infoOut_1)); }
	inline NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  get_infoOut_1() const { return ___infoOut_1; }
	inline NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD * get_address_of_infoOut_1() { return &___infoOut_1; }
	inline void set_infoOut_1(NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  value)
	{
		___infoOut_1 = value;
	}

	inline static int32_t get_offset_of_ray_2() { return static_cast<int32_t>(offsetof(PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270, ___ray_2)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_ray_2() const { return ___ray_2; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_ray_2() { return &___ray_2; }
	inline void set_ray_2(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___ray_2 = value;
	}
};


// UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob
struct DeallocateJob_tF0BF8A44A01B3EF170E51703A5B2977021DD76CF 
{
public:
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob::data
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(DeallocateJob_tF0BF8A44A01B3EF170E51703A5B2977021DD76CF, ___data_0)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_data_0() const { return ___data_0; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___data_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob
struct FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob::positions
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___positions_0;

public:
	inline static int32_t get_offset_of_positions_0() { return static_cast<int32_t>(offsetof(FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA, ___positions_0)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_positions_0() const { return ___positions_0; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_positions_0() { return &___positions_0; }
	inline void set_positions_0(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___positions_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob
struct TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::positionsIn
	NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::positionsOut
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE, ___positionsIn_0)); }
	inline NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE, ___positionsOut_1)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___positionsOut_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.RenderStateBlock>
struct AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5, ___data_1)); }
	inline RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  get_data_1() const { return ___data_1; }
	inline RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690, ___data_1)); }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  get_data_1() const { return ___data_1; }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  value)
	{
		___data_1 = value;
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013  : public XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob
struct CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6 
{
public:
	// UnityEngine.Rendering.Universal.Internal.DeferredTiler UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob::tiler
	DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372  ___tiler_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight> UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob::prePunctualLights
	NativeArray_1_tD88DD90821BE793C67689A7EA613AF5701123AA7  ___prePunctualLights_1;
	// Unity.Collections.NativeArray`1<System.UInt16> UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob::coarseTiles
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  ___coarseTiles_2;
	// Unity.Collections.NativeArray`1<System.UInt32> UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob::coarseTileHeaders
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___coarseTileHeaders_3;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob::coarseHeaderOffset
	int32_t ___coarseHeaderOffset_4;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob::istart
	int32_t ___istart_5;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob::iend
	int32_t ___iend_6;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob::jstart
	int32_t ___jstart_7;
	// System.Int32 UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob::jend
	int32_t ___jend_8;

public:
	inline static int32_t get_offset_of_tiler_0() { return static_cast<int32_t>(offsetof(CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6, ___tiler_0)); }
	inline DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372  get_tiler_0() const { return ___tiler_0; }
	inline DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372 * get_address_of_tiler_0() { return &___tiler_0; }
	inline void set_tiler_0(DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372  value)
	{
		___tiler_0 = value;
	}

	inline static int32_t get_offset_of_prePunctualLights_1() { return static_cast<int32_t>(offsetof(CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6, ___prePunctualLights_1)); }
	inline NativeArray_1_tD88DD90821BE793C67689A7EA613AF5701123AA7  get_prePunctualLights_1() const { return ___prePunctualLights_1; }
	inline NativeArray_1_tD88DD90821BE793C67689A7EA613AF5701123AA7 * get_address_of_prePunctualLights_1() { return &___prePunctualLights_1; }
	inline void set_prePunctualLights_1(NativeArray_1_tD88DD90821BE793C67689A7EA613AF5701123AA7  value)
	{
		___prePunctualLights_1 = value;
	}

	inline static int32_t get_offset_of_coarseTiles_2() { return static_cast<int32_t>(offsetof(CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6, ___coarseTiles_2)); }
	inline NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  get_coarseTiles_2() const { return ___coarseTiles_2; }
	inline NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A * get_address_of_coarseTiles_2() { return &___coarseTiles_2; }
	inline void set_coarseTiles_2(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  value)
	{
		___coarseTiles_2 = value;
	}

	inline static int32_t get_offset_of_coarseTileHeaders_3() { return static_cast<int32_t>(offsetof(CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6, ___coarseTileHeaders_3)); }
	inline NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  get_coarseTileHeaders_3() const { return ___coarseTileHeaders_3; }
	inline NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * get_address_of_coarseTileHeaders_3() { return &___coarseTileHeaders_3; }
	inline void set_coarseTileHeaders_3(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  value)
	{
		___coarseTileHeaders_3 = value;
	}

	inline static int32_t get_offset_of_coarseHeaderOffset_4() { return static_cast<int32_t>(offsetof(CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6, ___coarseHeaderOffset_4)); }
	inline int32_t get_coarseHeaderOffset_4() const { return ___coarseHeaderOffset_4; }
	inline int32_t* get_address_of_coarseHeaderOffset_4() { return &___coarseHeaderOffset_4; }
	inline void set_coarseHeaderOffset_4(int32_t value)
	{
		___coarseHeaderOffset_4 = value;
	}

	inline static int32_t get_offset_of_istart_5() { return static_cast<int32_t>(offsetof(CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6, ___istart_5)); }
	inline int32_t get_istart_5() const { return ___istart_5; }
	inline int32_t* get_address_of_istart_5() { return &___istart_5; }
	inline void set_istart_5(int32_t value)
	{
		___istart_5 = value;
	}

	inline static int32_t get_offset_of_iend_6() { return static_cast<int32_t>(offsetof(CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6, ___iend_6)); }
	inline int32_t get_iend_6() const { return ___iend_6; }
	inline int32_t* get_address_of_iend_6() { return &___iend_6; }
	inline void set_iend_6(int32_t value)
	{
		___iend_6 = value;
	}

	inline static int32_t get_offset_of_jstart_7() { return static_cast<int32_t>(offsetof(CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6, ___jstart_7)); }
	inline int32_t get_jstart_7() const { return ___jstart_7; }
	inline int32_t* get_address_of_jstart_7() { return &___jstart_7; }
	inline void set_jstart_7(int32_t value)
	{
		___jstart_7 = value;
	}

	inline static int32_t get_offset_of_jend_8() { return static_cast<int32_t>(offsetof(CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6, ___jend_8)); }
	inline int32_t get_jend_8() const { return ___jend_8; }
	inline int32_t* get_address_of_jend_8() { return &___jend_8; }
	inline void set_jend_8(int32_t value)
	{
		___jend_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob
struct CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshaled_pinvoke
{
	DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshaled_pinvoke ___tiler_0;
	NativeArray_1_tD88DD90821BE793C67689A7EA613AF5701123AA7  ___prePunctualLights_1;
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  ___coarseTiles_2;
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___coarseTileHeaders_3;
	int32_t ___coarseHeaderOffset_4;
	int32_t ___istart_5;
	int32_t ___iend_6;
	int32_t ___jstart_7;
	int32_t ___jend_8;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob
struct CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_marshaled_com
{
	DeferredTiler_tFBDEC2ED9B79F74D4AF97826AF601C8EC12FD372_marshaled_com ___tiler_0;
	NativeArray_1_tD88DD90821BE793C67689A7EA613AF5701123AA7  ___prePunctualLights_1;
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  ___coarseTiles_2;
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___coarseTileHeaders_3;
	int32_t ___coarseHeaderOffset_4;
	int32_t ___istart_5;
	int32_t ___iend_6;
	int32_t ___jstart_7;
	int32_t ___jend_8;
};

// UnityEngine.Rendering.Volume
struct Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.Rendering.Volume::isGlobal
	bool ___isGlobal_4;
	// System.Single UnityEngine.Rendering.Volume::priority
	float ___priority_5;
	// System.Single UnityEngine.Rendering.Volume::blendDistance
	float ___blendDistance_6;
	// System.Single UnityEngine.Rendering.Volume::weight
	float ___weight_7;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::sharedProfile
	VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * ___sharedProfile_8;
	// System.Int32 UnityEngine.Rendering.Volume::m_PreviousLayer
	int32_t ___m_PreviousLayer_9;
	// System.Single UnityEngine.Rendering.Volume::m_PreviousPriority
	float ___m_PreviousPriority_10;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::m_InternalProfile
	VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * ___m_InternalProfile_11;

public:
	inline static int32_t get_offset_of_isGlobal_4() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___isGlobal_4)); }
	inline bool get_isGlobal_4() const { return ___isGlobal_4; }
	inline bool* get_address_of_isGlobal_4() { return &___isGlobal_4; }
	inline void set_isGlobal_4(bool value)
	{
		___isGlobal_4 = value;
	}

	inline static int32_t get_offset_of_priority_5() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___priority_5)); }
	inline float get_priority_5() const { return ___priority_5; }
	inline float* get_address_of_priority_5() { return &___priority_5; }
	inline void set_priority_5(float value)
	{
		___priority_5 = value;
	}

	inline static int32_t get_offset_of_blendDistance_6() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___blendDistance_6)); }
	inline float get_blendDistance_6() const { return ___blendDistance_6; }
	inline float* get_address_of_blendDistance_6() { return &___blendDistance_6; }
	inline void set_blendDistance_6(float value)
	{
		___blendDistance_6 = value;
	}

	inline static int32_t get_offset_of_weight_7() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___weight_7)); }
	inline float get_weight_7() const { return ___weight_7; }
	inline float* get_address_of_weight_7() { return &___weight_7; }
	inline void set_weight_7(float value)
	{
		___weight_7 = value;
	}

	inline static int32_t get_offset_of_sharedProfile_8() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___sharedProfile_8)); }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * get_sharedProfile_8() const { return ___sharedProfile_8; }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 ** get_address_of_sharedProfile_8() { return &___sharedProfile_8; }
	inline void set_sharedProfile_8(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * value)
	{
		___sharedProfile_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedProfile_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousLayer_9() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_PreviousLayer_9)); }
	inline int32_t get_m_PreviousLayer_9() const { return ___m_PreviousLayer_9; }
	inline int32_t* get_address_of_m_PreviousLayer_9() { return &___m_PreviousLayer_9; }
	inline void set_m_PreviousLayer_9(int32_t value)
	{
		___m_PreviousLayer_9 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPriority_10() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_PreviousPriority_10)); }
	inline float get_m_PreviousPriority_10() const { return ___m_PreviousPriority_10; }
	inline float* get_address_of_m_PreviousPriority_10() { return &___m_PreviousPriority_10; }
	inline void set_m_PreviousPriority_10(float value)
	{
		___m_PreviousPriority_10 = value;
	}

	inline static int32_t get_offset_of_m_InternalProfile_11() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_InternalProfile_11)); }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * get_m_InternalProfile_11() const { return ___m_InternalProfile_11; }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 ** get_address_of_m_InternalProfile_11() { return &___m_InternalProfile_11; }
	inline void set_m_InternalProfile_11(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * value)
	{
		___m_InternalProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalProfile_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);

// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * Texture_CreateNonReadableException_m5BFE30599C50688EEDE149FB1CEF834BE1633306 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___t0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture2D_GetWritableImageData_m9CD85D0E659C6BCF58A6559F70AE4484EA0A0562 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___frame0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Texture2D_GetRawImageDataSize_m80AED06866925594D48E624AD7B4D5ADFA733B8B (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.String Unity.Collections.LowLevel.Unsafe.UnsafeUtility::GetReasonForTypeNonBlittableImpl(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtility_GetReasonForTypeNonBlittableImpl_mCB0D7E72BB113F1628B2FEFDEB175FDC1A6ED5DF (Type_t * ___t0, String_t* ___name1, const RuntimeMethod* method);
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsBlittable(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsBlittable_mC76E5617EC7CA98CC232702004D71915DDBF1D47 (Type_t * ___type0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::GetEnumerator()
inline Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2 (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  (*) (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Current()
inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_inline (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  (*) (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_inline (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Value()
inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_inline (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * __this, const RuntimeMethod* method)
{
	return ((  List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * (*) (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>::GetEnumerator()
inline Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8 (List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  (*) (List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>::get_Current()
inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_inline (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 * __this, const RuntimeMethod* method)
{
	return ((  Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * (*) (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::get_profileRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C (Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>::MoveNext()
inline bool Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692 (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::MoveNext()
inline bool Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// UnityEngine.Rendering.VolumeComponent UnityEngine.Rendering.VolumeProfile::Add(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * VolumeProfile_Add_m79223D2CF959C9E6D63D9FF846FF1B6A3B00FD10 (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, bool ___overrides1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.VolumeProfile::Has(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_m4B7E73066F4F7D7A45656DA57A7C994260BD089D (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.VolumeProfile::Remove(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_m932397236384F0E991CE7113270E019856DB5E86 (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>::GetEnumerator()
inline Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42 (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  (*) (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>::get_Current()
inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB * __this, const RuntimeMethod* method)
{
	return ((  VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * (*) (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>::MoveNext()
inline bool Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143 (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// UnityEngine.Rendering.VolumeComponent UnityEngine.Rendering.VolumeStack::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * VolumeStack_GetComponent_m2C8AE635D2EE506EE0C2C436D6F5017DB10B288E (VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610 (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6 (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystemDescriptor__ctor_mE44B346A0A5A035B7DFC7430336DDADED7A4F6A5 (XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * __this, String_t* ___id0, Type_t * ___providerType1, Type_t * ___subsystemTypeOverride2, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___capabilities3, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688 (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * ___descriptor0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor__ctor_m83A6821A71C68D58354ACE8289E8F621F2E183DC (XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * __this, String_t* ___subsystemId0, Type_t * ___providerType1, Type_t * ___subsystemTypeOverride2, int32_t ___capabilities3, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729 (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void UnityEngine.SubsystemManager::AddSubsystemSubset<System.Object,System.Object>(System.Collections.Generic.List`1<TBaseTypeInList>,System.Collections.Generic.List`1<TQueryType>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_AddSubsystemSubset_TisRuntimeObject_TisRuntimeObject_mD3E8833E4C266F4CD52DAA9B3604953AFE5C48F1_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___copyFrom0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___copyTo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B5_0 = 0;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___copyFrom0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_1;
		L_1 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 )L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0043;
		}

IL_000b:
		{
			RuntimeObject * L_2;
			L_2 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
			V_1 = (RuntimeObject *)L_2;
			RuntimeObject * L_3 = V_1;
			if (!((RuntimeObject *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 3))))
			{
				goto IL_0035;
			}
		}

IL_0021:
		{
			RuntimeObject * L_4 = V_1;
			V_2 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 3))), IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
			G_B5_0 = 1;
			goto IL_0036;
		}

IL_0035:
		{
			G_B5_0 = 0;
		}

IL_0036:
		{
			V_3 = (bool)G_B5_0;
			bool L_5 = V_3;
			if (!L_5)
			{
				goto IL_0042;
			}
		}

IL_003a:
		{
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_6 = ___copyTo1;
			RuntimeObject * L_7 = V_2;
			NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_6);
			((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		}

IL_0042:
		{
		}

IL_0043:
		{
			bool L_8;
			L_8 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5));
			if (L_8)
			{
				goto IL_000b;
			}
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Il2CppMetadataObject L_9(IL2CPP_RGCTX_DATA(method->rgctx_data, 6));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__86 = il2cpp_codegen_get_interface_invoke_data(0, (&L_9), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__86.methodPtr)((RuntimeObject*)((RuntimeObject*)(&V_0))-1, /*hidden argument*/il2cpp_virtual_invoke_data__86.method);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___subsystems0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_m1C971E03781D2FF28AC5BC61B2C2491D27A73060_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::GetSubsystems<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystems_TisRuntimeObject_mF44FE0268DBF5D054895EFFF704A401735780BC1_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___subsystems0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF * L_1 = ((SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var))->get_s_IntegratedSubsystems_2();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = ___subsystems0;
		((  void (*) (List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t2DAF7481782912A6F8E6180AC19B83A5EEFEE9EF *)L_1, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41 * L_3 = ((SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var))->get_s_StandaloneSubsystems_3();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4 = ___subsystems0;
		((  void (*) (List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t6E613DAFFAFE896B759F1C5260D6234F04C9DD41 *)L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		List_1_t58BB84B47855540E6D2640B387506E01436DCF82 * L_5 = ((SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var))->get_s_DeprecatedSubsystems_4();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_6 = ___subsystems0;
		((  void (*) (List_1_t58BB84B47855540E6D2640B387506E01436DCF82 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t58BB84B47855540E6D2640B387506E01436DCF82 *)L_5, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Boolean>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_gshared (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken0;
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_4 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, bool, bool, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (bool)1, (bool)L_2, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Object>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_gshared (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken0;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_4 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, RuntimeObject *, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (bool)1, (RuntimeObject *)L_2, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_gshared (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)__this);
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)__this);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		NullCheck((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)__this);
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_2;
		L_2 = Texture_CreateNonReadableException_m5BFE30599C50688EEDE149FB1CEF834BE1633306((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)__this, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2D_GetRawTextureData_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB4716238DF06B95C983D997EAC9BA4B8C814794C_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_3;
		NullCheck((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)__this);
		intptr_t L_4;
		L_4 = Texture2D_GetWritableImageData_m9CD85D0E659C6BCF58A6559F70AE4484EA0A0562((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)__this, (int32_t)0, /*hidden argument*/NULL);
		void* L_5;
		L_5 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_4, /*hidden argument*/NULL);
		NullCheck((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)__this);
		int64_t L_6;
		L_6 = Texture2D_GetRawImageDataSize_m80AED06866925594D48E624AD7B4D5ADFA733B8B((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_8;
		L_8 = ((  NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_5, (int32_t)((int32_t)((int32_t)((int64_t)((int64_t)L_6/(int64_t)((int64_t)((int64_t)L_7)))))), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_8;
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_9 = V_1;
		V_3 = (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_9;
		goto IL_003d;
	}

IL_003d:
	{
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_10 = V_3;
		return (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 )L_10;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57_mA4806A887115203276C18C332B40C1DAC07D5497_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisNativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB_m3BA2CF2CFCF371E9539283AFEAF419D7695F20AF_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourcePool`1/ResourceLogInfo<System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63_m6D6CDFACED96ED80E3F77A7C843A4972D0604BF7_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceLogInfo_t313421642EB49F359C7638B1E201D81C1EEA2D63 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.ValueTuple`2<System.Int32,System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173_mF6A2B9734372B8405B59746F568CBD0428FA0B3F_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tA26D3A4C20B6E6F61C01B309B632FC717E2B9173 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.ValueTuple`2<System.Object,System.ValueTuple`2<System.Object,System.Int32>>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793_m8AB5966162D675EB7E7E1F77270250318BAFFE69_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t39C25CAE4F6CA469E896F7BC1066EE78949FD793 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.ValueTuple`2<System.Object,System.Int32>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00_m6275ABEFC8747D4832593060B30B479BD794059F_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_tA372AD60186562EAB001D5060A8DA062D95A5A00 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARFoundation.ARRaycastHit>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E_m8CCDC90E9939ECCD73EB43F772A7D26EEFC6C4BA_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ARRaycastHit_t2B16118C3B5F17B237335D69B1CA9C27474B621E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARFoundation.ARTextureInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_m0DB03DDBA3E547A36A4824E26F797A0AFE1A41AA_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Color>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m85650456548033FB62E0DED8F9071C9975E401C9_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Color32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_mB86B8897F2F4044A68F9A3B03DDED5ADB01A7274_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.Universal.LibTessDotNet.ContourVertex>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536_mDD1B8C01A903B2A1B9D37ED8A5CE4564BA0EE414_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ContourVertex_tF9E27CB6BCC62DF5F4202153BBBECDE5E3283536 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.InputDevice>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mCFB4432AF09A5AB8390DAD8EA15C9EEAB7EB1896_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5865AA873219669B49B7CD22B8F5037B78624444_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32Enum>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m09C495E3282F1EB4D86AFD41E4A1D71D28013202_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int64>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m5FB8D40F4ADF9EFCBA227C516C4F150DE2078355_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.MeshInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611_mE625E89FA1810D59D4A88B87E26A3D5F4B743892_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MeshInfo_tD0E09CA3A2260A509C063BF0C8FDAC8D138FC611 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Object>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m539AEA437A51B6A554E8ADD3076EDA49258FFF2F_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.RaycastHit2D>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4_mACCA4234150FCFC9F678AB4A55C779DBB0A9427D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.EventSystems.RaycastResult>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_m7B6AFD6EC684F98352846D8662E379807D36BFF4_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.RenderGraphModule.RendererListHandle>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F_m0188861E2916AD94B322A6F6A6485DD93FF41225_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RendererListHandle_tE01EAF5A0A5029E4F66F3500446764B8D7D3224F ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.RenderGraphModule.ResourceHandle>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948_m43D04E3ADC1328B66C43C37D2FE537BEA3FA06CE_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceHandle_t671576C75E4BF9E42997795BD60D96FCA88AB948 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Rendering.ShaderTagId>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_mE29F5BEE8051BEE84E357B0373844EE0629A9D18_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UICharInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A_m7DF5C6239E156DBE1471885B9B0A2EF4978325C9_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UILineInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C_mF9A73CFD6E0760C7690ED5253A743B30172980F6_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIVertex>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_m50A402D6DF7FC7FCBAE5AF5C0D055FF2C5A2D94E_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.UInt64>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m0E6CA329D38368376166EA8A57A241DE4AE5EEE7_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector2>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mC42556DEFBEF6FFAD69BEF457B15E484D2A3855D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector3>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE2606512887650500549E97A027D886C84CBF61C_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector4>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mA932D671F9BE87E641DB0FCC8E2DB6C52EA4A76D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.XRNodeState>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33_m9721EE6AB51926BB4E60490D608359DC6B3A4B41_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARSubsystems.XRReferenceImage>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_mCCBDCBAA0634D3FB48550FEF08BA31F8DA411774_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARSubsystems.XRReferenceObject>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE_m37141F8EC79D2458F30CD53EC4A7B416BD427614_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Rendering.Universal.XRView>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRView_tE7BCF62BA1242C287E38539553B57AE70B687027_m0CA1B1D4305D094111A3B0F0CF0CC7579CE92C7A_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	XRView_tE7BCF62BA1242C287E38539553B57AE70B687027  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRView_tE7BCF62BA1242C287E38539553B57AE70B687027 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_m524E3CF7C698B1C70A686928AF4E31E0FB01FD6D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Camera/RenderRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_m8CC8BBE8B343B5710C3AA0F32012D23AC131AFFD_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/PassDebugData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C_m413E720584128D73313DD6B61F3AD8087F8CB6A2_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PassDebugData_tC12278805134DC7DE74B6B94B45CAFC38B45A11C ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphDebugData/ResourceDebugData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F_m5E1D190556D9E2C8D14CDF1517563FC1C4597B9D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceDebugData_t4C1DEFEADE2FEC9CD7CCB9C177ADD26F3D14DA0F ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Experimental.Rendering.Universal.ShadowUtility/Edge>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEdge_tC11235216D5E71087549B2CB09A27043F02FB278_m70EE99184B5753BD83DB0D92A2C80189E3CCFE15_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Edge_tC11235216D5E71087549B2CB09A27043F02FB278  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Edge_tC11235216D5E71087549B2CB09A27043F02FB278 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_mF1626B5F534FA4F2EA1360451FE46E976EA66FE7_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_mAA66AF0A6DC5C07BA4B170C83C4E741F47BDED75_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * Tuple_Create_TisRuntimeObject_TisRuntimeObject_mF386334EA2E5B5781A35A5D57F090EF2A1C6BAD0_gshared (RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		RuntimeObject * L_1 = ___item21;
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/DeallocateNativeArrayJob`1<System.Byte>>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDeallocateNativeArrayJob_1_t2A6BBDEB793D693B1E240D595DD0217524A5092C_m459ED93034F71C90200E56A908137F31AF278DE5_gshared (DeallocateNativeArrayJob_1_t2A6BBDEB793D693B1E240D595DD0217524A5092C * ___output0, const RuntimeMethod* method)
{
	{
		DeallocateNativeArrayJob_1_t2A6BBDEB793D693B1E240D595DD0217524A5092C * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.BoundedPlane>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_mC9A858BF185278EC562A6F9D8E8458B327DFCAEF_gshared (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * ___output0, const RuntimeMethod* method)
{
	{
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRAnchor>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m5CD1B8A7CD124A610853D0B5E27D1B11E5E65124_gshared (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___output0, const RuntimeMethod* method)
{
	{
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m8564FEA1891F71988A4C9BC5B6AF5BEDE36E932A_gshared (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * ___output0, const RuntimeMethod* method)
{
	{
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_m4A1CE6780AB9CE4CB3805E6DF2490A7162DF791F_gshared (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * ___output0, const RuntimeMethod* method)
{
	{
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRFace>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_mEF6151572AEAA88081C547929522D3E71C052BB1_gshared (XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * ___output0, const RuntimeMethod* method)
{
	{
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRHumanBody>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_m2EB00BF995546AE7DA776F4482FA126C8246511F_gshared (XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * ___output0, const RuntimeMethod* method)
{
	{
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_m802134CFA101318D44F3FAC460C835D85E83AA0D_gshared (XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 * ___output0, const RuntimeMethod* method)
{
	{
		XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRParticipant>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mF5070241EDCF2DD95B8DFC20D33962C0CF4FD3C4_gshared (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * ___output0, const RuntimeMethod* method)
{
	{
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRPointCloud>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m856282CB715153235C61D5465C1DDD4F968D3CE0_gshared (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * ___output0, const RuntimeMethod* method)
{
	{
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycast>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_mABBF9CBA24FC9A983C2B5E569D8471E0D6AE04B6_gshared (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___output0, const RuntimeMethod* method)
{
	{
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_mCFB5A27460535DA449EA9CD73BE6BE4955FEC37B_gshared (XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * ___output0, const RuntimeMethod* method)
{
	{
		XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_mCACD12B6E806B0DE04B21B602E71C2A1213AEF89_gshared (XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * ___output0, const RuntimeMethod* method)
{
	{
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mC71B261BC3F757C64DE114C09D05E687F228F01E_gshared (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * ___output0, const RuntimeMethod* method)
{
	{
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_m8CA1B165C8C749BB981880D4C3EC96C4404E70BE_gshared (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * ___output0, const RuntimeMethod* method)
{
	{
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_mBF0311A39B5E64EADA0A15B610596C556A31CEEF_gshared (XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * ___output0, const RuntimeMethod* method)
{
	{
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisAddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5_mFC482211FD04BCD49084DA80DFC89D1CD8C586F4_gshared (AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5 * ___output0, const RuntimeMethod* method)
{
	{
		AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78_m1DB814CB7334A55FA9835A189AF849876121A24B_gshared (ConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78 * ___output0, const RuntimeMethod* method)
{
	{
		ConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/ReleaseDatabaseJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisReleaseDatabaseJob_t2712527A976BD231EF32DCEAAAF276FC834E8DA1_m95B5281A60708C7DE5DC2FB16087C0E5764951CD_gshared (ReleaseDatabaseJob_t2712527A976BD231EF32DCEAAAF276FC834E8DA1 * ___output0, const RuntimeMethod* method)
{
	{
		ReleaseDatabaseJob_t2712527A976BD231EF32DCEAAAF276FC834E8DA1 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468_m1B898A2AD63AAB5F3EC6DAD8197B1C47C37C0DA3_gshared (TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 * ___output0, const RuntimeMethod* method)
{
	{
		TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisPointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D_m68F3E158496B9C8A949017325F128E76BBFD0238_gshared (PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D * ___output0, const RuntimeMethod* method)
{
	{
		PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisPointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270_mB52C7F259B11B928D05729315A0A999AA91D9351_gshared (PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270 * ___output0, const RuntimeMethod* method)
{
	{
		PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.Rendering.Universal.Internal.DeferredLights/CullLightsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisCullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6_m389C7F19BDB700A37CAC47506EB1AF77284CF44B_gshared (CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6 * ___output0, const RuntimeMethod* method)
{
	{
		CullLightsJob_t58BF1046AAF0A176B8C1610E1F21BDBDF5C002D6 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDeallocateJob_tF0BF8A44A01B3EF170E51703A5B2977021DD76CF_m3747F1E684B7FDFED0EE0408A9B52C672656F525_gshared (DeallocateJob_tF0BF8A44A01B3EF170E51703A5B2977021DD76CF * ___output0, const RuntimeMethod* method)
{
	{
		DeallocateJob_tF0BF8A44A01B3EF170E51703A5B2977021DD76CF * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisFlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA_mEADA6CB2FAA2D28F5741C3C3379A7F1656C72AD7_gshared (FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA * ___output0, const RuntimeMethod* method)
{
	{
		FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE_mB11D34D65978696E615E52CA75F7671DE935BCCF_gshared (TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE * ___output0, const RuntimeMethod* method)
{
	{
		TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m64B7496928323FC31813F990FE5AC06057213ABD_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.BoundedPlane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_mC8164B56E6D8C6801E9B52E1AD031767699C7AC3_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB20DF48ED17C5C1B91F7B365DA01C9D9883CE22D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.ByteEnum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307_mC0311816FE1BEEF9D25339C81F10A0F3A9D1B608_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m02D937C4B17C1F7CCA0192EBCCD7F32A3B178678_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4DA9BD8ABD57EA456BBBF0DB0A9917AE7A67806D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m531729A97D188ADB6442A7C8DD8FB607464401C7_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Jobs.JobHandle>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisJobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847_m54068B600180C7C4B0B3CEE8C09CEDB46BDE454B_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mD39AE841C76B62A720795E45A9CAB847804CDBD2_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARKit.ManagedReferenceImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1_m3D645D41465377C7404BAAE297F7A38BADECA58D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mF71D0A0AD3A01326E5D0D9C4D78FFE82E985A28E_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.Universal.PreTile>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36_mA6BECA7E15FB56436BF976505DAAC578369055B8_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m95584A51D5993FC51974EAA74C464A18C7B7F934_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.RenderStateBlock>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisRenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D_m521EE9703AD08932F8A11B4E104FCB9F3561BA65_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.ShaderTagId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_mBC4E2345BBB132672C9CD126D6787EFC485F2826_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mE315887DE03400FCE9403368BCED5BE94F438E8B_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_mB00562AFC649C09061CC751E3CD0123509583D9D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m91E8D0A3C94BCBC6792CD44EF85D7E2E39376662_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m09F25FBB56E0C6D47B13ED9CC53D648A87BE56E3_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6600143AD86280DD50C787F98E3B3DD98A429D39_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mA85A5A1241E310F0593062E0BA89FADD1417702E_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m37A5C2CAF53990153CF7045B3AFD5E037FE1CFB0_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m7E2F75DBB01FF25E5793D08AACB3A92F8F0561D5_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.VisibleLight>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B_m2CD074C59169CEF9591B386BF2D5C6D680981861_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRAnchor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m54029F5B0FEF960F2B7AF74CB0D27821D1835298_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_mEC4710E8D43B94CFD03A6F510D2B96CD362EB13B_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_m6A6A58846290D55F17BCED404CFE38C487840D06_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRFace>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_m89962646B7C5B59B1C9D5C4C2412C5B6285EE589_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBody>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_mFC3B17E6F77101F9DEFDA56E6FD26266593DF55B_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4_mB883FBA5A6DFB61E881CF4E94F03E780E58B9CB6_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_mFB38B27CD813036134BD7582A348E0CCA9E39327_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRParticipant>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m5C965E69BAA831916EA628929AF83517C29CEB50_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRPointCloud>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m40904FD9E865920D7DBD9E8877B730A17A2F6905_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRRaycast>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_m5B8EA96775DCE01BCC4CD55FD34E2B45A0708B45_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m77658C06116FC1925F12808CD94B42C74296C78F_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_m66E11B84ED5A3379F959BDE194177DC7B2EAF3BE_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mE3DD666AF9235E7CDE1726888159E12A81914DA9_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_m9B806FEB65F8C39EDB94F207AA8F3212C0F33E49_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_mDBAC049417B78C4EE62A04CDA695D936F1E7F0EE_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Mathematics.uint4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisuint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92_mF35B9A7B2BA6891BD6C569044B0EEFB06F661EF2_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_m329A06B7212770880375D68FDFC58FEB58094C67_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609_m2C5A59E3B3A4E88AA6ACA60266D98DF28CBB0CC1_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893_m44C8BC88FF6E4BE42B40F354327F90474E758433_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC_m94C85880A89E2A054BCA3739FF6D6D004C1C5DA0_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.Universal.ShaderInput/LightData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135_m23F32A40FD96832FA9583CA288997FF619660362_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.Universal.ShaderInput/ShadowData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701_m17D4EC9218A773F2649D5EFEB511BF31519D99ED_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.String Unity.Collections.LowLevel.Unsafe.UnsafeUtility::GetReasonForGenericListNonBlittable<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtility_GetReasonForGenericListNonBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mCC83A9760B2E3C913AC6C892916C8EE90DB35B0D_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		Type_t * L_2 = V_0;
		Type_t * L_3 = V_0;
		NullCheck((MemberInfo_t *)L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_3);
		String_t* L_5;
		L_5 = UnsafeUtility_GetReasonForTypeNonBlittableImpl_mCB0D7E72BB113F1628B2FEFDEB175FDC1A6ED5DF((Type_t *)L_2, (String_t*)L_4, /*hidden argument*/NULL);
		V_1 = (String_t*)L_5;
		goto IL_001b;
	}

IL_001b:
	{
		String_t* L_6 = V_1;
		return (String_t*)L_6;
	}
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsBlittable<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m35CC48CA2D9B6745FF006CF1EE99BFEAD424490D_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = UnsafeUtility_IsBlittable_mC76E5617EC7CA98CC232702004D71915DDBF1D47((Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsGenericListBlittable<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsGenericListBlittable_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m87725B7621D8557D1A7D44E4FC77A37E78B0DEB1_gshared (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = ((  bool (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (bool)L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return (bool)L_1;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  UnsafeUtility_ReadArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mF1E1FA0E9424F2F320E9B0339FC687ADF10BCBA9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = (*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.BoundedPlane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  UnsafeUtility_ReadArrayElement_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m534964C998AA9A86387E0AED392964D80BCFB37D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 );
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_3 = (*(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3A787297B1A91CA14E1AA3B0034A681D407C2C6F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.ByteEnum>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307_mA9111A70DA24105AE68CEF4912F4419C06E177BA_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  UnsafeUtility_ReadArrayElement_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m7A844C2AC0AC03BCB2EFE0E432323DB691903C24_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 );
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = (*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Hash128>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  UnsafeUtility_ReadArrayElement_TisHash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A_m8765EABA42CF12CC70789C92D4B6F8162E07476E_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A );
		Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  L_3 = (*(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB96EA425698FAC912FBF9F171D49A9115BBC6D3B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32Enum>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m401E8F650EF4FA57E4FCEEF00612917440B958CC_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.Jobs.JobHandle>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  UnsafeUtility_ReadArrayElement_TisJobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847_m271C43A3E1E86997A9234F90C6948950584EECEA_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 );
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_3 = (*(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  UnsafeUtility_ReadArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_m4E2C63FA44B1C28449F8F4BB7905B51D78AE236D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = (*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ManagedReferenceImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  UnsafeUtility_ReadArrayElement_TisManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1_mEC5718769208BF3BFC74DE7F574175DAB81CCC0A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 );
		ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  L_3 = (*(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElement_TisRuntimeObject_mF01BC97D058E55A4713C93F8CB551700296191ED_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  UnsafeUtility_ReadArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mEECC8D753A2ECD36000F48387C6A2D1D4E564F62_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = (*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.Universal.PreTile>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  UnsafeUtility_ReadArrayElement_TisPreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36_mF7AABFA51DB839F297ECE907AC7996AE7911E181_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 );
		PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  L_3 = (*(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Quaternion>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  UnsafeUtility_ReadArrayElement_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m13EED3AD1F56E82EA4EDC48D2FF36F64BAE09E22_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.RenderStateBlock>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  UnsafeUtility_ReadArrayElement_TisRenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D_mFBE5BE7FF39A7AC11E4C880161A2F47F67528EAB_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D );
		RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  L_3 = (*(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.ShaderTagId>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  UnsafeUtility_ReadArrayElement_TisShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_mD7A3CB1DA7D933A5FD5A3A5A50AF375C37A58B89_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 );
		ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  L_3 = (*(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Single>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m8B2A0C00FBC036E8B110BF77197B74EB86CDCD78_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (float)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  UnsafeUtility_ReadArrayElement_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m4540A81E5C9B6696C7A03B208B964E9A245E314B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = (*(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt16>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m437E620086BA4C6B58E2748F294D1CEF240FA3CE_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint16_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE811E8D32BDD37FAA30D65CCC1FCD5CF752FC61D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt64>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m31B60AC4311A7041BA0F9FEDD78EEFBD66E26E3D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint64_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector2>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UnsafeUtility_ReadArrayElement_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m01A0E46439C1E898A9249C556A7372F93A369167_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UnsafeUtility_ReadArrayElement_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m19B2467463C1EB03064DF2F7CDBC81F62901E0E1_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  UnsafeUtility_ReadArrayElement_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD12908659FA08F8E3CEFF115DDD57C374F0A0641_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = (*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  UnsafeUtility_ReadArrayElement_TisVisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B_mA1324B8AB6F36FFE7FD2D8010087C50511415B94_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B );
		VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  L_3 = (*(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  UnsafeUtility_ReadArrayElement_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m64D5D8ACC532B8BE51A3C3E4B9BFFCACB2D1D8C5_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C );
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_3 = (*(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  UnsafeUtility_ReadArrayElement_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m1AE452F7C55400C380FCECFC216A078B09EA96F1_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A );
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_3 = (*(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  UnsafeUtility_ReadArrayElement_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_mDA35AFD0F29DCC4B766B7B3613C2885603C4F314_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C );
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  L_3 = (*(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRFace>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  UnsafeUtility_ReadArrayElement_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_m4033736941460E97FE9A1AEAF3D235AE0A5C3638_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 );
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  L_3 = (*(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBody>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  UnsafeUtility_ReadArrayElement_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_m4A9A83E42604AF14FB9B3FD786F746258144B16D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B );
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  L_3 = (*(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  UnsafeUtility_ReadArrayElement_TisXRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4_mA71F70344B6D02F9508CC7707D69B13EF524F1B8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 );
		XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  L_3 = (*(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  UnsafeUtility_ReadArrayElement_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_mBEE9AD82F562AAD80C542E051D5DCCAAFE9F1F1D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 );
		XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  L_3 = (*(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  UnsafeUtility_ReadArrayElement_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m4CAD859F3DBF6140C0015F055E97F141DF6F1062_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F );
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_3 = (*(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  UnsafeUtility_ReadArrayElement_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m480F925856704EE38D7E6EBEED0BE9858C872500_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 );
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_3 = (*(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  UnsafeUtility_ReadArrayElement_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_mE11DAD7493FB277991DB430FEAC04601EA8647D5_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 );
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_3 = (*(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  UnsafeUtility_ReadArrayElement_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m22DB79C445532F42531A8BF23921A045510B4752_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB );
		XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  L_3 = (*(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRReferencePoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  UnsafeUtility_ReadArrayElement_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_m9ABD3615E83E8850E63002767B641FA4C6CD276A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 );
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  L_3 = (*(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  UnsafeUtility_ReadArrayElement_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mF1632477894E09DBD51B2D6FEAA00D5A92EC2034_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 );
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_3 = (*(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  UnsafeUtility_ReadArrayElement_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_m0B522CE8CABAB7E68B30917D8CC1F4F274C03FA0_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F );
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_3 = (*(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  UnsafeUtility_ReadArrayElement_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_mB0C402BE0144FE101D9E107CA6478EFDF64A6DE9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 );
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  L_3 = (*(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.Mathematics.uint4>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  UnsafeUtility_ReadArrayElement_Tisuint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92_mE13D93A40878C6C7133CEA5B9F21C107C2E4F212_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 );
		uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  L_3 = (*(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  UnsafeUtility_ReadArrayElement_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_mD8970F506C3F72ED972C1DBADD25172A9C78465D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 );
		PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  L_3 = (*(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  UnsafeUtility_ReadArrayElement_TisPrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609_m41CE69BC7A22EF963229E3E1F1E9C46C7D701748_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 );
		PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  L_3 = (*(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  UnsafeUtility_ReadArrayElement_TisParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893_mEA4B211431E0AADF6E9A6EB676518AC0F2CC368D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 );
		ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  L_3 = (*(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  UnsafeUtility_ReadArrayElement_TisSpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC_m1BF032187974283A00A4BC60D30D1F819CB64606_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC );
		SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  L_3 = (*(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.Universal.ShaderInput/LightData>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  UnsafeUtility_ReadArrayElement_TisLightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135_mD52FC20EBF30668DAC51B69F751DE8FD0BC6EAEC_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 );
		LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  L_3 = (*(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.Universal.ShaderInput/ShadowData>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  UnsafeUtility_ReadArrayElement_TisShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701_m65D9D5FA749135EE82D49AFBA60E259FB6A1442B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 );
		ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  L_3 = (*(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Byte>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElementWithStride_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m84D9D467BD22B76776D4D25F8BD2D8DB6FADBAEC_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  UnsafeUtility_ReadArrayElementWithStride_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m9365BDEA16B0DA4FC9662B1E10A91374B55A30B3_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = (*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElementWithStride_TisRuntimeObject_mF8EABB0D4879066BA75A629F50475A868FFD74DE_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt32>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElementWithStride_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mD7585D80F075413E17211308ED32CD0671992BC3_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (uint32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt64>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElementWithStride_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mA347F306B7E702FB8FEA4ED68ED64795192B7D65_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (uint64_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.Vector2>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UnsafeUtility_ReadArrayElementWithStride_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m023D2F4D8C9081130593445A6603DACFA5E863DD_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.Vector3>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UnsafeUtility_ReadArrayElementWithStride_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m603AFD29C1F76DAAE7C65D53BBD207AA4E1C9CD3_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F_m4F09A05D3DD170DFA1F796E0A8FA0B313C65725B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.BoundedPlane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C_mA64E3CCD92517DB285018B2C95FE3C5C3768B2D9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A_m483AA7FC51E6A112FC0A4D06D38B11D37DFEF879_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.ByteEnum>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58_mD9F6A2CB4A46FD7B82AA05D7197BEDE69C405754_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768_m7D53536259B12A47029CBB9483C4DDE72004C4CB_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1_mDA545781E7F1E51EA4B8806FE9681D3A0680C2BF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32Enum>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9_mA0E7E6DAD0CC9A9A8B9E1D78178F760C37DA4F0E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Jobs.JobHandle>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599_m33EE3278DDDF83B87C75ADBE8CD81340537E48BA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17_m78DEA1E58B4D9D6E271BFF9B14011D45ED34B031_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ManagedReferenceImage>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE_m47C80949673574FFDC0715CC25CA1665E15B03C8_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893_m7C04B3AA1BAA024C62459AAFF0C635C222310A16_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.PreTile>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0903321CE301477697201BC084A409846158443E_m9C459E8F6999C891DF925B0C49C093CDB5F20895_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Quaternion>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA_m7A2454EEDB5DE110EBD417432FD26467F92598EC_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.RenderStateBlock>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5_m884F709E2A71175E8EFB0B158C0B0772F4BC23DA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.ShaderTagId>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC_mE7A004863EFAA62A2EC22E6A1D0B8232CB402446_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97_m2A6A36BAEBCA035917F5792AFD65A42AD49D730E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.TrackableId>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59_mA7B11AB04F014A55CC6FFA4457454187CE470D15_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863_m6084EEE82C0053C6CC1377753D3FE05B38701259_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0_m63AA9F73125758E2B2AE66DB1D84431649E73D40_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D_mDC03CB15A108E86CF91BE61A0D5DD966741B6F0D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector2>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF_m2A6D4614157CA5FEC4539AFBC5CA2D801D56C40F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F_m60083E9F92A736196324FA983CE4F4A61CDC71BC_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F_m439A38DEF378CB03DBCA2BCBE18927753E8A2C85_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.VisibleLight>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C_m26E2230C824055D0B19E9272DE0AF27CBA1B4528_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRAnchor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843_m05A6DEEA3D1D58D4AE1FB691C66BED3BBFB0F6AE_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF_mA13F6109B6FA1C99D9DEEAB354342753651A5FDA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690_mF0636F3AD1B53A5074F2AA6EF7BE0878FDE6314D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRFace>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6_m01DAB809A1C73F2A1C8D0B4D039B44A723A4DAD6_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBody>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7_m84384054B4D4FFA84A4BDECD0BF6063C5CE3852B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7_m79C653217E17BD7509955AFFDB74FA383DE09007_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93_mCFE622E1C528733548274EA4919CC9BFAF73F855_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRParticipant>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD_mAFC4872F555B724057B9427660070C5BBF15CF0B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRPointCloud>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800_mFB28FE12CB4E30C6E853F91D5ED172B05377DC46_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycast>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62_m864E71C1868B063F1B4003D49C02F13215067048_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310_m758AEB002D445E212D55AA2EF491A2A0592EC96F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728_m0EC216D4CB0391551CCA5C1B2B4DF80B67F45931_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180_mF765BBDFBB2A5013BC0DAE7D4AE9E18471167449_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372_m15AB926960198E0D74115D992395C2F213E80C45_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E_m74EE532469B6962BD204CCFDB8754CBDDB2DFAE5_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.uint4>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD1FAAB900EAA9C85D383FA2EFE082138B27FB0FB_mC2D30E442BBFD7178BA02BABC2FF2CB6BDEC30A9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD1FAAB900EAA9C85D383FA2EFE082138B27FB0FB );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84_m6E923C741770063B5E7B03A3C016D5316A0FC1DA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE_mD9B7F883AC8C804D135B24E7C8EE7619B9AD5B0B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8A44F087C4667982392B6430319A3508103E5799_mC65B2603F981B1E4C0DE2C323DD8B55FC3FD9D90_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8A44F087C4667982392B6430319A3508103E5799 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE51A42CDF939261B479B3E0EE4FD18B36B7C1D95_mAEE2D7D1A1831CBE94BD39A5AEE400FF3E63D006_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE51A42CDF939261B479B3E0EE4FD18B36B7C1D95 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.ShaderInput/LightData>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE_m8ADFB5C08222255666FEC07791A5D227F3D8B8B9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.ShaderInput/ShadowData>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC90B8A600D3C4DEC6CD533824B027FEE08718DFA_mEBB544E7529F745B13531FD475FBE9BB351B4CEB_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC90B8A600D3C4DEC6CD533824B027FEE08718DFA );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m59EADA64485304CCC918007EE51D37E128AB411D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.BoundedPlane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m192B25183D0B9501F76EA99217C064F648F6B1F3_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC38689A53E959AC0D3F9C9BF89F277C4A1D23BBF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.ByteEnum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307_m3F6ED40E476C50572652C4C043A96A2405F6678C_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_mD1FC31D13212054222438A163DB26F8D6BFB3A5C_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC154751B6ED1926446C432F482791D0C5D3F663A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mFC3373190B3BE1CF7E7594D8E6A3FBC6251EA6DB_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Jobs.JobHandle>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847_mB8BE33706393D81F4A306DC4F21101B9984790B9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mBBB6CBF143991B044213D375125D1E6F3352FF81_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARKit.ManagedReferenceImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1_m2A727E794855FD1178EE52363D8306959B217286_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_m223C8A2842490CA74E75B2180AEE83873D0A4696_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.Universal.PreTile>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36_m41D2920E7AA1DE26CB4F157F35FB633311906DDF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mAC8905497A863AD87BFE65762297003BA81AB81F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.RenderStateBlock>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisRenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D_m3F52D380A8E021AC8C3ADA685D00806AAE67C0A2_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.ShaderTagId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_m70E058D6701D167F8354DD4CEE2D914E4FC6C4E8_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m62538C9CC88C24C00F26BFEDEFDDF192DF3D7074_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_mF697624F82B05F48FEBCA43CAC7120F74662F09B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m9B19BBBE3E9CCFB3A08C9D69CB28B95159A85CE8_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mF52F526110B94ADBF53DDE17836AA18E0295A75B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mDBC64421AD01832F8501B6A63808B500603B0428_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mB0BA7AC549DE2A13AFD6C8FAF906DFABF03C148D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m8508D752DDCACDDA57921C7B14C2ABAB9E07C134_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mFA1DB8F130AAD9A5A0EAA97B9F2CCA33EFDF55FA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.VisibleLight>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B_m646EEDD295B5FD3B9B23942BF10F0E1CC6AFEFFE_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRAnchor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m5694802E457D329AED739F913B78C59EA39212DC_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m598EC6E91AC0754DAC422344E0C8158EDC7032CD_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_mF943BAC56EED045786692CD920E8EAD14B260C08_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRFace>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_mC5134E039EBB8AC07E8A42A3A0DEFAE4D14BAC4A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBody>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_mA9742BC88C2B0F89C00F4A400F83FDFB4B921651_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4_m9695C40EEE8B447D5298BEF655C0BEC376A94729_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_m17445EC9BA2AF840DBA4F74645589F0991414309_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRParticipant>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m00E843B9705969489FCA43AAF5B4BDF0DAE674C9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRPointCloud>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m49A388008D2C378ACD6453EDC658C82BBE51FA72_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycast>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_mCE9C5E920BABDE0E31F29FA16BCA806F7FE5CE04_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m51E2C6221DC8163F580478B984D0562A95A715BA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_mB974E1B31017770FEFBFEA1C4BED09DD79AA0FBA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mB4D6CFBA997B6392985F8F34935536E547A6A928_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_mB89CD595084C74E9E0110166B3F14FBE349D9006_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_m0EE2A462A71CC22147609194E7FC01E8F60A5144_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Mathematics.uint4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisuint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92_m34261319E0C0223774E92DBB420EDEDFF460D296_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_m6DB7D8796FC1D3CE8F96532B9D69B9AB7205D8AD_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609_m45201220267E0F6FE36D6C25A8687DB158DC73B1_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893_m14FA8C16B323E3429CB38287D45070ADF3DB8B91_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC_m27894ED816D7D61CD418120118B6F56D88F316D4_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.Universal.ShaderInput/LightData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135_m735CE9946766A6D6AA7AC4CAF90B6C19691B38E7_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.Universal.ShaderInput/ShadowData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701_m0DD8A6529DF0ED869908650B2762C4F2A6D50750_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 );
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mC2658E4BCDD5CB7B35E546FAE518CF3C4102626E_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = ___value2;
		*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.BoundedPlane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m0EA199B728F342780D5FF3360AA535EBC3F81F80_gshared (void* ___destination0, int32_t ___index1, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 );
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_3 = ___value2;
		*(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB82F9E11B8FEC9E090AEA6C9C2C8A611682E7825_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.ByteEnum>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307_mBCD9E52F8A417B917B35F56980EA4C003A440A96_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m66A11A0D0EEDB9BAD04ED17211374B91A938CC5D_gshared (void* ___destination0, int32_t ___index1, ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 );
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = ___value2;
		*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32Enum>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m91AF1394BF925AC69C4DB49A768CE325DCEC86F7_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.Jobs.JobHandle>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847_m9550EC6555F13E73171430AE37B9CE94FD028933_gshared (void* ___destination0, int32_t ___index1, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 );
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_3 = ___value2;
		*(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mB7E008D6D4C2008C47D4D71528F6AE7AFCF0B7CB_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = ___value2;
		*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARKit.ManagedReferenceImage>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1_m5FC5B5ACE8413D4FE8CD2BA161269005F890C539_gshared (void* ___destination0, int32_t ___index1, ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 );
		ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  L_3 = ___value2;
		*(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mA6478546A0D6B20061E1DAF0862A895CF5D8C044_gshared (void* ___destination0, int32_t ___index1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = ___value2;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mB75E0A57B03F72BC1744169D7F4F8CF73AD98915_gshared (void* ___destination0, int32_t ___index1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = ___value2;
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.Universal.PreTile>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36_mB212BA28988EFB69FE48BB056D8A9CB84B735C35_gshared (void* ___destination0, int32_t ___index1, PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 );
		PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  L_3 = ___value2;
		*(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Quaternion>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mFEA1EE338AAC863BEA2AF2134D3D22ED93E013BB_gshared (void* ___destination0, int32_t ___index1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = ___value2;
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.RenderStateBlock>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D_m9A96A6D9077362448A097F104D28577AAD0DED7C_gshared (void* ___destination0, int32_t ___index1, RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D );
		RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  L_3 = ___value2;
		*(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.ShaderTagId>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_mC64EA71F5974E291357EA90886B310D25753E16A_gshared (void* ___destination0, int32_t ___index1, ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 );
		ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  L_3 = ___value2;
		*(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Single>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E_gshared (void* ___destination0, int32_t ___index1, float ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = ___value2;
		*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m8C51761306DE70EA0C6A7660F9128F7E981F6927_gshared (void* ___destination0, int32_t ___index1, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = ___value2;
		*(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt16>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m3B55A7136E970C6B720C970679FAEBCBA17BE71B_gshared (void* ___destination0, int32_t ___index1, uint16_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = ___value2;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mD0CF58950EF1EBF39DB359EBC77FF0DC6582778F_gshared (void* ___destination0, int32_t ___index1, uint32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = ___value2;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt64>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m108F557D18F2F5C93557B2FED6ABADA10061283C_gshared (void* ___destination0, int32_t ___index1, uint64_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = ___value2;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector2>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mBFF73AAEB90319D383F131CB86FCA21CF7D1B7F2_gshared (void* ___destination0, int32_t ___index1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___value2;
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m0236C8B08D58538865ACC8B7EE0340EBD16B4C28_gshared (void* ___destination0, int32_t ___index1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___value2;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mA54583EE7B17CB1CE1F1E15C0E4BF37FD832DAED_gshared (void* ___destination0, int32_t ___index1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___value2;
		*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B_mA1CEF75704B5BF5CDE5604984A607303955B6588_gshared (void* ___destination0, int32_t ___index1, VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B );
		VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  L_3 = ___value2;
		*(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m08AB8CBC42639026E724CDF29FC91B40F7BBAD1A_gshared (void* ___destination0, int32_t ___index1, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C );
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_3 = ___value2;
		*(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_mFB4DA713B013D3E2AF58EFAFC41E5ABA84F8EA52_gshared (void* ___destination0, int32_t ___index1, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A );
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_3 = ___value2;
		*(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_m329166067149C70014E219272B24DD2840E00A42_gshared (void* ___destination0, int32_t ___index1, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C );
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  L_3 = ___value2;
		*(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRFace>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_m00375AE9882AF97AB80C4727C635FA220E86A9E7_gshared (void* ___destination0, int32_t ___index1, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 );
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  L_3 = ___value2;
		*(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBody>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_m0C0CB49C2DB8B431F3695D780A110DFBAEA942A6_gshared (void* ___destination0, int32_t ___index1, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B );
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  L_3 = ___value2;
		*(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4_mE19E4A84AC4D223278D9D9BA308B91BED6487530_gshared (void* ___destination0, int32_t ___index1, XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 );
		XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  L_3 = ___value2;
		*(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_mF6DF2A567603B19D05A548044E8114AF0225C16B_gshared (void* ___destination0, int32_t ___index1, XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 );
		XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  L_3 = ___value2;
		*(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mB8BB0897B5B47E1455974276FB5EAE29E8DC0A0F_gshared (void* ___destination0, int32_t ___index1, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F );
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_3 = ___value2;
		*(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m2CEE2DC3D3C26CC00857D772EBB9D6E52502C201_gshared (void* ___destination0, int32_t ___index1, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 );
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_3 = ___value2;
		*(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_mD93BEBBABA5176F89C09EE0552F18F8DEF208136_gshared (void* ___destination0, int32_t ___index1, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 );
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_3 = ___value2;
		*(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_mFA6C745BE6AE995172B636D1D95228F3A7C02D65_gshared (void* ___destination0, int32_t ___index1, XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB );
		XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  L_3 = ___value2;
		*(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRReferencePoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_m47646223E229C369B4496607B3CE71D9E54C5115_gshared (void* ___destination0, int32_t ___index1, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 );
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  L_3 = ___value2;
		*(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_m5BAD03709BF4D17F6E0A3F7420B5FFD56E888299_gshared (void* ___destination0, int32_t ___index1, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 );
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_3 = ___value2;
		*(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_m715899D3134DF4C3443F563160F867B1CA94E0C1_gshared (void* ___destination0, int32_t ___index1, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F );
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_3 = ___value2;
		*(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_m59B714FE0669A026C08B8F912F99BAF850ADA405_gshared (void* ___destination0, int32_t ___index1, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 );
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  L_3 = ___value2;
		*(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.Mathematics.uint4>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisuint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92_mD2690690426D5884D6D437DE7FE8D5AF25846A03_gshared (void* ___destination0, int32_t ___index1, uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 );
		uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  L_3 = ___value2;
		*(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_m5037A3832D0DC667BD9E0DB275381DCDCC3455DA_gshared (void* ___destination0, int32_t ___index1, PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 );
		PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  L_3 = ___value2;
		*(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609_m4208DE708137931352D8E02E9DCD22B2E54EC3F1_gshared (void* ___destination0, int32_t ___index1, PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 );
		PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  L_3 = ___value2;
		*(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893_m8937218D0C2E9C95A58E45929A2C3D27E58DBD5E_gshared (void* ___destination0, int32_t ___index1, ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 );
		ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  L_3 = ___value2;
		*(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC_mD633B97175476F53CECECED1C86682D7E743150A_gshared (void* ___destination0, int32_t ___index1, SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC );
		SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  L_3 = ___value2;
		*(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.Universal.ShaderInput/LightData>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135_m4BCD116E1E24B10396499A3EF69B31A294B2B23A_gshared (void* ___destination0, int32_t ___index1, LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 );
		LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  L_3 = ___value2;
		*(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.Universal.ShaderInput/ShadowData>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701_m0FE05FD848EB300682CC74355DEFDA88F093FCC3_gshared (void* ___destination0, int32_t ___index1, ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 );
		ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  L_3 = ___value2;
		*(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Byte>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m157CC165ACC8F56460E95DB6D992377A023BB576_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint8_t ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint8_t L_3 = ___value3;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m6ADF9908AA103A6BBAC6D056FC0AB67752FD3154_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = ___value3;
		*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisRuntimeObject_m182506AFA387937C398582D7CBE0188587DB7958_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, RuntimeObject * ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject * L_3 = ___value3;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt32>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m2885227038FEBBD4418A596B3A29673C8B82F775_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint32_t ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint32_t L_3 = ___value3;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt64>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB4D919C75E1B8674DB63205106D46C6B0CC06677_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint64_t ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint64_t L_3 = ___value3;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.Vector2>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m3D7A7F72D127EBD036DF402368F763721F44FE39_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___value3;
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.Vector3>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m4CD1706941D9FEC400F23BE4BA6A7F489F7F1AC6_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___value3;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_m34EC4B420E3B86C8B06957C02A3FDD87D674E50E_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m3392CE290ADB37963BB566664A63096AF6DABAE4_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
// System.Boolean UnityEngine.Rendering.VolumeManager::IsComponentActiveInMask<System.Object>(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeManager_IsComponentActiveInMask_TisRuntimeObject_m1E6203C9BCF6BAA2CB860F2CAD52304B1C4FC7E2_gshared (VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181 * __this, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// int mask = layerMask.value;
		int32_t L_0;
		L_0 = LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9((LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)(&___layerMask0), /*hidden argument*/NULL);
		V_0 = (int32_t)L_0;
		// foreach (var kvp in m_SortedVolumes)
		Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * L_1 = (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *)__this->get_m_SortedVolumes_4();
		NullCheck((Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *)L_1);
		Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  L_2;
		L_2 = Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2((Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2_RuntimeMethod_var);
		V_1 = (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 )L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0094;
		}

IL_0016:
		{
			// foreach (var kvp in m_SortedVolumes)
			KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  L_3;
			L_3 = Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_inline((Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 )L_3;
			// if (kvp.Key != mask)
			int32_t L_4;
			L_4 = KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_inline((KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_RuntimeMethod_var);
			int32_t L_5 = V_0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0094;
			}
		}

IL_0028:
		{
			// foreach (var volume in kvp.Value)
			List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * L_6;
			L_6 = KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_inline((KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_RuntimeMethod_var);
			NullCheck((List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A *)L_6);
			Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  L_7;
			L_7 = List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8((List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A *)L_6, /*hidden argument*/List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8_RuntimeMethod_var);
			V_3 = (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 )L_7;
		}

IL_0035:
		try
		{ // begin try (depth: 2)
			{
				goto IL_007b;
			}

IL_0037:
			{
				// foreach (var volume in kvp.Value)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_8;
				L_8 = Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_inline((Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(&V_3), /*hidden argument*/Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_RuntimeMethod_var);
				V_4 = (Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_8;
				// if (!volume.enabled || volume.profileRef == null)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_9 = V_4;
				NullCheck((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)L_9);
				bool L_10;
				L_10 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)L_9, /*hidden argument*/NULL);
				if (!L_10)
				{
					goto IL_007b;
				}
			}

IL_0049:
			{
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_11 = V_4;
				NullCheck((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_11);
				VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * L_12;
				L_12 = Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_11, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				if (L_13)
				{
					goto IL_007b;
				}
			}

IL_0058:
			{
				// if (volume.profileRef.TryGet(out T component) && component.active)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_14 = V_4;
				NullCheck((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_14);
				VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * L_15;
				L_15 = Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_14, /*hidden argument*/NULL);
				NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)L_15);
				bool L_16;
				L_16 = ((  bool (*) (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)L_15, (RuntimeObject **)(RuntimeObject **)(&V_5), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
				if (!L_16)
				{
					goto IL_007b;
				}
			}

IL_0068:
			{
				RuntimeObject * L_17 = V_5;
				NullCheck(L_17);
				bool L_18 = (bool)((VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_17)->get_active_4();
				if (!L_18)
				{
					goto IL_007b;
				}
			}

IL_0076:
			{
				// return true;
				V_6 = (bool)1;
				IL2CPP_LEAVE(0xB2, FINALLY_0086);
			}

IL_007b:
			{
				// foreach (var volume in kvp.Value)
				bool L_19;
				L_19 = Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692((Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0037;
				}
			}

IL_0084:
			{
				IL2CPP_LEAVE(0x94, FINALLY_0086);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0086;
		}

FINALLY_0086:
		{ // begin finally (depth: 2)
			Il2CppMetadataObject L_20(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var);
			const VirtualInvokeData& il2cpp_virtual_invoke_data__142 = il2cpp_codegen_get_interface_invoke_data(0, (&L_20), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__142.methodPtr)((RuntimeObject*)((RuntimeObject*)(&V_3))-1, /*hidden argument*/il2cpp_virtual_invoke_data__142.method);
			IL2CPP_END_FINALLY(134)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(134)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xB2, FINALLY_00a2);
			IL2CPP_JUMP_TBL(0x94, IL_0094)
		}

IL_0094:
		{
			// foreach (var kvp in m_SortedVolumes)
			bool L_21;
			L_21 = Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B((Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0016;
			}
		}

IL_00a0:
		{
			IL2CPP_LEAVE(0xB0, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		Il2CppMetadataObject L_22(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__170 = il2cpp_codegen_get_interface_invoke_data(0, (&L_22), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__170.methodPtr)((RuntimeObject*)((RuntimeObject*)(&V_1))-1, /*hidden argument*/il2cpp_virtual_invoke_data__170.method);
		IL2CPP_END_FINALLY(162)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
	}

IL_00b0:
	{
		// return false;
		return (bool)0;
	}

IL_00b2:
	{
		// }
		bool L_23 = V_6;
		return (bool)L_23;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_GetValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mA77C6BDE8438CBC4A62266045DD63FD9142AD02D_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)((VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Boolean>::get_value() */, (VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)((VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (bool)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Color>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  VolumeParameter_GetValue_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_mF25E7DF7C52C71A95E527DF529EB7EE4BD41167A_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)((VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Color>::get_value() */, (VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)((VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m100ED1424F5963AB5C56D61C97B3427E6F264E6E_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value() */, (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (int32_t)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m3C2FA8119D66B4C3DCD206194A2C58B37156AF2F_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::get_value() */, (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (int32_t)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.LayerMask>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  VolumeParameter_GetValue_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mF8A79B835E8726F18021939CBB42AAE21BC856FF_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0;
		L_0 = VirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::get_value() */, (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeParameter_GetValue_TisRuntimeObject_mC69574109E6EFA56FF44E63DCFE350FA0CC099AB_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		RuntimeObject * L_0;
		L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (RuntimeObject *)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_GetValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m71A3CFF33EDE42C9127D094FE7BD9808E667AD6C_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		float L_0;
		L_0 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (float)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  VolumeParameter_GetValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m0E3F548FE9AC793809DC3C8DBE87742A114FF199_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VolumeParameter_GetValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m2483CFA48EA8E00EFA323A101A08322806931A02_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  VolumeParameter_GetValue_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m8B862B97BA0B205CF27280AC2F68D801241F333A_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0;
		L_0 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeProfile::Add<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeProfile_Add_TisRuntimeObject_mCE1E1F8B084190E209D0A8F8237FA7F83751D962_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, bool ___overrides0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (T)Add(typeof(T), overrides);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___overrides0;
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
		L_3 = VolumeProfile_Add_m79223D2CF959C9E6D63D9FF846FF1B6A3B00FD10((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::Has<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_TisRuntimeObject_mDB54341DE40B45F7005866878043CF31DBA99100_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Has(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		bool L_2;
		L_2 = VolumeProfile_Has_m4B7E73066F4F7D7A45656DA57A7C994260BD089D((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return (bool)L_2;
	}
}
// System.Void UnityEngine.Rendering.VolumeProfile::Remove<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_TisRuntimeObject_mF7D69686CD890F54D2E0F7E551EA8543DEB45291_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Remove(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		VolumeProfile_Remove_m932397236384F0E991CE7113270E019856DB5E86((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_mC7E64B2A6DC984083DED5D6F3E4FDCF0CE5D6026_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TryGet(typeof(T), out component);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RuntimeObject ** L_2 = ___component0;
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		bool L_3;
		L_3 = ((  bool (*) (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *, Type_t *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, (RuntimeObject **)(RuntimeObject **)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (bool)L_3;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<System.Object>(System.Type,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m4332B8785159649FB61B32048D85429ADD228254_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, RuntimeObject ** ___component1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// component = null;
		RuntimeObject ** L_0 = ___component1;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject *));
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_1 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		NullCheck((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1);
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_2;
		L_2 = List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1, /*hidden argument*/List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		V_0 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0015:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
			L_3 = Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
			V_1 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_3;
			// if (comp.GetType() == type)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_4 = V_1;
			NullCheck((RuntimeObject *)L_4);
			Type_t * L_5;
			L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
			Type_t * L_6 = ___type0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_7;
			L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_5, (Type_t *)L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_002b:
		{
			// component = (T)comp;
			RuntimeObject ** L_8 = ___component1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_9 = V_1;
			*(RuntimeObject **)L_8 = ((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x56, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (var comp in components)
			bool L_10;
			L_10 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0015;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Il2CppMetadataObject L_11(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__78 = il2cpp_codegen_get_interface_invoke_data(0, (&L_11), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__78.methodPtr)((RuntimeObject*)((RuntimeObject*)(&V_0))-1, /*hidden argument*/il2cpp_virtual_invoke_data__78.method);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// return false;
		return (bool)0;
	}

IL_0056:
	{
		// }
		bool L_12 = V_2;
		return (bool)L_12;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGetAllSubclassOf<System.Object>(System.Type,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetAllSubclassOf_TisRuntimeObject_mB3CC30C673E5FE2BA12751E91C01F1DC34D5BDC6_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int count = result.Count;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___result1;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_1;
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_2 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		NullCheck((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_2);
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_3;
		L_3 = List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_2, /*hidden argument*/List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		V_1 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0015:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_4;
			L_4 = Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
			V_2 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_4;
			// if (comp.GetType().IsSubclassOf(type))
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_5 = V_2;
			NullCheck((RuntimeObject *)L_5);
			Type_t * L_6;
			L_6 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_5, /*hidden argument*/NULL);
			Type_t * L_7 = ___type0;
			NullCheck((Type_t *)L_6);
			bool L_8;
			L_8 = VirtFuncInvoker1< bool, Type_t * >::Invoke(103 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, (Type_t *)L_6, (Type_t *)L_7);
			if (!L_8)
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			// result.Add((T)comp);
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = ___result1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_10 = V_2;
			NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_9);
			((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_9, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		}

IL_0037:
		{
			// foreach (var comp in components)
			bool L_11;
			L_11 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0015;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Il2CppMetadataObject L_12(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__74 = il2cpp_codegen_get_interface_invoke_data(0, (&L_12), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__74.methodPtr)((RuntimeObject*)((RuntimeObject*)(&V_1))-1, /*hidden argument*/il2cpp_virtual_invoke_data__74.method);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// return count != result.Count;
		int32_t L_13 = V_0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = ___result1;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14);
		int32_t L_15;
		L_15 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGetSubclassOf<System.Object>(System.Type,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetSubclassOf_TisRuntimeObject_mE8153CC3B89807700D2B70752C6840FAE4135D47_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, RuntimeObject ** ___component1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// component = null;
		RuntimeObject ** L_0 = ___component1;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject *));
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_1 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		NullCheck((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1);
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_2;
		L_2 = List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1, /*hidden argument*/List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		V_0 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0015:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
			L_3 = Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
			V_1 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_3;
			// if (comp.GetType().IsSubclassOf(type))
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_4 = V_1;
			NullCheck((RuntimeObject *)L_4);
			Type_t * L_5;
			L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
			Type_t * L_6 = ___type0;
			NullCheck((Type_t *)L_5);
			bool L_7;
			L_7 = VirtFuncInvoker1< bool, Type_t * >::Invoke(103 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, (Type_t *)L_5, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_002b:
		{
			// component = (T)comp;
			RuntimeObject ** L_8 = ___component1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_9 = V_1;
			*(RuntimeObject **)L_8 = ((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x56, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (var comp in components)
			bool L_10;
			L_10 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0015;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Il2CppMetadataObject L_11(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		const VirtualInvokeData& il2cpp_virtual_invoke_data__78 = il2cpp_codegen_get_interface_invoke_data(0, (&L_11), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__78.methodPtr)((RuntimeObject*)((RuntimeObject*)(&V_0))-1, /*hidden argument*/il2cpp_virtual_invoke_data__78.method);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// return false;
		return (bool)0;
	}

IL_0056:
	{
		// }
		bool L_12 = V_2;
		return (bool)L_12;
	}
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeStack_GetComponent_TisRuntimeObject_m38AF7B6B1BA6854A1DB152DEEA9E04079D5DFCD6_gshared (VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var comp = GetComponent(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC *)__this);
		VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_2;
		L_2 = VolumeStack_GetComponent_m2C8AE635D2EE506EE0C2C436D6F5017DB10B288E((VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// return (T)comp;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateIntegratedSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateIntegratedSubsystem_TisRuntimeObject_TisRuntimeObject_m672A1EDBF16B4851FBD595CA8F87AFD098F5FD86_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		NullCheck((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this);
		((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateStandaloneSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateStandaloneSubsystem_TisRuntimeObject_TisRuntimeObject_m62F75FC416AB1701E6DEBDC00F95AB1AA2A9CA95_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		NullCheck((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this);
		((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (descriptors == null)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("descriptors");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemManager.GetSubsystemDescriptors<TDescriptor>(descriptors);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = ___descriptors0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// if (descriptors.Count > 0)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___descriptors0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// foreach (var descriptor in descriptors)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___descriptors0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_6;
		L_6 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_0 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 )L_6;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_0026:
		{
			// foreach (var descriptor in descriptors)
			RuntimeObject * L_7;
			L_7 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (RuntimeObject *)L_7;
			// ISubsystem subsys = null;
			V_2 = (RuntimeObject*)NULL;
			// if (String.Compare(descriptor.id, id, true) == 0)
			NullCheck((RuntimeObject*)(V_1));
			String_t* L_8;
			L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
			String_t* L_9 = ___id1;
			int32_t L_10;
			L_10 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62((String_t*)L_8, (String_t*)L_9, (bool)1, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0054;
			}
		}

IL_0046:
		{
			// subsys = descriptor.Create();
			NullCheck((RuntimeObject*)(V_1));
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor::Create() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
			V_2 = (RuntimeObject*)L_11;
		}

IL_0054:
		{
			// if (subsys != null)
			RuntimeObject* L_12 = V_2;
			if (!L_12)
			{
				goto IL_006f;
			}
		}

IL_0057:
		{
			// m_SubsystemInstanceMap[typeof(TSubsystem)] = subsys;
			Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_13 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 5)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_15;
			L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
			RuntimeObject* L_16 = V_2;
			NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_13);
			Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_13, (Type_t *)L_15, (RuntimeObject*)L_16, /*hidden argument*/Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x88, FINALLY_007a);
		}

IL_006f:
		{
			// foreach (var descriptor in descriptors)
			bool L_17;
			L_17 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
			if (L_17)
			{
				goto IL_0026;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x88, FINALLY_007a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007a;
	}

FINALLY_007a:
	{ // begin finally (depth: 1)
		Il2CppMetadataObject L_18(IL2CPP_RGCTX_DATA(method->rgctx_data, 7));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__130 = il2cpp_codegen_get_interface_invoke_data(0, (&L_18), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__130.methodPtr)((RuntimeObject*)((RuntimeObject*)(&V_0))-1, /*hidden argument*/il2cpp_virtual_invoke_data__130.method);
		IL2CPP_END_FINALLY(122)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(122)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x88, IL_0088)
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Destroy();
		RuntimeObject * L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRLoaderHelper::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_mBD860AFFF9C98273DF11CF62C6A588FBA4429779_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// Type subsystemType = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// m_SubsystemInstanceMap.TryGetValue(subsystemType, out subsystem);
		Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_2 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
		Type_t * L_3 = V_0;
		NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_2, (Type_t *)L_3, (RuntimeObject**)(RuntimeObject**)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6_RuntimeMethod_var);
		// return subsystem as T;
		RuntimeObject* L_5 = V_1;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Start();
		RuntimeObject * L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Stop();
		RuntimeObject * L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRManagerSettings::ActiveLoaderAs<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRManagerSettings_ActiveLoaderAs_TisRuntimeObject_m85FCC9024CB82ED7C4E28EFC4DE4F14484ADAB8F_gshared (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// return activeLoader as T;
		NullCheck((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F *)__this);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0;
		L_0 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F *)__this, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mAD339CA933DF8B8D705E23C725E78FF7599EC36F_gshared (String_t* ___id0, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___capabilities1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (id == null)
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(id));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mAD339CA933DF8B8D705E23C725E78FF7599EC36F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRObjectTrackingSubsystemDescriptor(id, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_2 = ___id0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  L_7 = ___capabilities1;
		XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * L_8 = (XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 *)il2cpp_codegen_object_new(XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472_il2cpp_TypeInfo_var);
		XRObjectTrackingSubsystemDescriptor__ctor_mE44B346A0A5A035B7DFC7430336DDADED7A4F6A5(L_8, (String_t*)L_2, (Type_t *)L_4, (Type_t *)L_6, (Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 )L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688((SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E *)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_TisRuntimeObject_m77779CD44165EB52B7D758C6A46D010D3BCCB1FA_gshared (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_0 = ___subsystemId0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___capabilities1;
		XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * L_6 = (XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 *)il2cpp_codegen_object_new(XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55_il2cpp_TypeInfo_var);
		XRParticipantSubsystemDescriptor__ctor_m83A6821A71C68D58354ACE8289E8F621F2E183DC(L_6, (String_t*)L_0, (Type_t *)L_2, (Type_t *)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688((SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E *)L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, const RuntimeMethod* method)
{
	{
		// if (array.IsCreated)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_2 = ___array2;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_2)->___m_Length_1);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_5 = ___array2;
		NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_6 = ___array2;
		int32_t L_7 = ___length0;
		int32_t L_8 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_9), (int32_t)L_7, (int32_t)L_8, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_6 = L_9;
		// }
		return;
	}

IL_0026:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_10 = ___array2;
		int32_t L_11 = ___length0;
		int32_t L_12 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_13), (int32_t)L_11, (int32_t)L_12, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_10 = L_13;
	}

IL_0034:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
