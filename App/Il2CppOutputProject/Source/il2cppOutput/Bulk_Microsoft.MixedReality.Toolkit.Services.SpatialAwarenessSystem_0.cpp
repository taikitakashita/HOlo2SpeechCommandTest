﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC;
// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tCFBF28688CCD3ADC2D0EE8F88464DF1EA65FE30F;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tA8F67CB2C442808E11CAA63ABD09B8423BEE3920;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>
struct MixedRealitySpatialAwarenessEventData_1_t77F073E9A7FA28EB909476C096F52E273C3D9B2B;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t9FB3ABFE1BC4A547C119B52383A8584E51149A6F;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t221C96B2303D03C27DF921FD9A7C68D5BC70F512;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>
struct IReadOnlyList_1_t9E1EC9C7C1A2A13E8D28C6CF689DBD4C523DDE27;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_tDA3F52DEDA94448A670102A7F21D44D0F7B368D2;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t9DD78767DB410DDD7307AB15999B900FC7C3FF4A;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t30D15F249725DA2DE68DBB33F5C80D8EE98D0AEA;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

extern RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_tD5AA969B13679BD8810074C4790D30D2BAF6A7DE_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t7FD37E520ADB7A3B5EDF093107170B5D596D9EC6_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityCapabilityCheck_t9B775BE2AAE7C57BB6F20C03DF7F975B7B27D510_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tA1A29ADD033F62FD18107C745EFA29E12378169E_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_t9E1EC9C7C1A2A13E8D28C6CF689DBD4C523DDE27_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityPlayspace_tF427C0C90F020A6DEA420D40C7BBADE13037782A_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral306293B4D4A8E6238C3F25BB12EF44DF6E94C8B3;
extern String_t* _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028;
extern const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_mAD4025AD79B2039DAF0B1F1D217D35158AD5B202_RuntimeMethod_var;
extern const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_mD487F570C46A36FFA319D6996032DD3173538CFA_RuntimeMethod_var;
extern const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_m3124E50B4A2802B9B1C29A36A02C12CA82DC7DF0_RuntimeMethod_var;
extern const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1__ctor_mE42A0DA83DCAD35B6EA56ED88E2CAC5B00E9A437_RuntimeMethod_var;
extern const uint32_t MixedRealitySpatialAwarenessSystem_CheckCapability_m7E4DF3E75E1C5227EF606D946870E949680A64C2_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_ClearObservations_m6E0AA2C60E0E595354E6EECABE8500103DC6B38D_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_m61A4C9FE46B68B9CB2643A2BD7A02E46818C5D58_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_Destroy_m7A8350659EA2FAF44109F6FB20444ED084730C1D_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_Disable_m5C38F7743332F4360C027E4C5624DB589B91AE77_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_GetObserver_m80222B619DB0FCD6F3FB328CFB0F187F0063488E_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_GetObservers_m99417C89E928263CB22FF326CC745DD90D5E7079_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_InitializeInternal_m37B80818FE035B64CEE642CA8513A0647E07F9E3_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_Initialize_mA23DD8797EA88F2B1A653B6FDB7E24E162819A95_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_ResumeObservers_mA4801E629E65CC1237B68D21F2FDB427923342A7_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_SuspendObservers_mB930242CA924C586848EE9903D12D0F4F9570388_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem__ctor_mB40AB7A4AE17C8D5F9DD252768E7A8E7336EE5DC_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m8C36D679D12DF6BF9B205BFA25D9552442D79ECA_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_mC76D880EC45DF35AD27C370ABC89255A96D636F0_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_mD217657B4CC7BCF58E2E3F06D4321491A5851AAE_MetadataUsageId;

struct MixedRealitySpatialObserverConfigurationU5BU5D_t9FB3ABFE1BC4A547C119B52383A8584E51149A6F;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;


#ifndef U3CMODULEU3E_TC05347D6EBD271781C34D7D6C43A56B4FFEEDB29_H
#define U3CMODULEU3E_TC05347D6EBD271781C34D7D6C43A56B4FFEEDB29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tC05347D6EBD271781C34D7D6C43A56B4FFEEDB29 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TC05347D6EBD271781C34D7D6C43A56B4FFEEDB29_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef BASESERVICE_T36F2CDECE3A85454DBE01298EA436EFD3BB1F96D_H
#define BASESERVICE_T36F2CDECE3A85454DBE01298EA436EFD3BB1F96D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConfigurationProfileU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASESERVICE_T36F2CDECE3A85454DBE01298EA436EFD3BB1F96D_H
#ifndef SYSTEMTYPE_TCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262_H
#define SYSTEMTYPE_TCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct  SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMTYPE_TCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#define ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifndef BASEEVENTSYSTEM_TB60CCFC587E31E20691D93800C3CE93C95CD1E15_H
#define BASEEVENTSYSTEM_TB60CCFC587E31E20691D93800C3CE93C95CD1E15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct  BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15  : public BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D
{
public:
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_7;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t30D15F249725DA2DE68DBB33F5C80D8EE98D0AEA * ___postponedActions_8;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t9DD78767DB410DDD7307AB15999B900FC7C3FF4A * ___postponedObjectActions_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem_EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t221C96B2303D03C27DF921FD9A7C68D5BC70F512 * ___U3CEventHandlersByTypeU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eventSystemHandlerType_7() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___eventSystemHandlerType_7)); }
	inline Type_t * get_eventSystemHandlerType_7() const { return ___eventSystemHandlerType_7; }
	inline Type_t ** get_address_of_eventSystemHandlerType_7() { return &___eventSystemHandlerType_7; }
	inline void set_eventSystemHandlerType_7(Type_t * value)
	{
		___eventSystemHandlerType_7 = value;
		Il2CppCodeGenWriteBarrier((&___eventSystemHandlerType_7), value);
	}

	inline static int32_t get_offset_of_postponedActions_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___postponedActions_8)); }
	inline List_1_t30D15F249725DA2DE68DBB33F5C80D8EE98D0AEA * get_postponedActions_8() const { return ___postponedActions_8; }
	inline List_1_t30D15F249725DA2DE68DBB33F5C80D8EE98D0AEA ** get_address_of_postponedActions_8() { return &___postponedActions_8; }
	inline void set_postponedActions_8(List_1_t30D15F249725DA2DE68DBB33F5C80D8EE98D0AEA * value)
	{
		___postponedActions_8 = value;
		Il2CppCodeGenWriteBarrier((&___postponedActions_8), value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___postponedObjectActions_9)); }
	inline List_1_t9DD78767DB410DDD7307AB15999B900FC7C3FF4A * get_postponedObjectActions_9() const { return ___postponedObjectActions_9; }
	inline List_1_t9DD78767DB410DDD7307AB15999B900FC7C3FF4A ** get_address_of_postponedObjectActions_9() { return &___postponedObjectActions_9; }
	inline void set_postponedObjectActions_9(List_1_t9DD78767DB410DDD7307AB15999B900FC7C3FF4A * value)
	{
		___postponedObjectActions_9 = value;
		Il2CppCodeGenWriteBarrier((&___postponedObjectActions_9), value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___U3CEventHandlersByTypeU3Ek__BackingField_10)); }
	inline Dictionary_2_t221C96B2303D03C27DF921FD9A7C68D5BC70F512 * get_U3CEventHandlersByTypeU3Ek__BackingField_10() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline Dictionary_2_t221C96B2303D03C27DF921FD9A7C68D5BC70F512 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return &___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_10(Dictionary_2_t221C96B2303D03C27DF921FD9A7C68D5BC70F512 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventHandlersByTypeU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15, ___U3CEventListenersU3Ek__BackingField_11)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_11() const { return ___U3CEventListenersU3Ek__BackingField_11; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_11() { return &___U3CEventListenersU3Ek__BackingField_11; }
	inline void set_U3CEventListenersU3Ek__BackingField_11(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventListenersU3Ek__BackingField_11), value);
	}
};

struct BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_6;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15_StaticFields, ___enableDanglingHandlerDiagnostics_5)); }
	inline bool get_enableDanglingHandlerDiagnostics_5() const { return ___enableDanglingHandlerDiagnostics_5; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_5() { return &___enableDanglingHandlerDiagnostics_5; }
	inline void set_enableDanglingHandlerDiagnostics_5(bool value)
	{
		___enableDanglingHandlerDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_eventExecutionDepth_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15_StaticFields, ___eventExecutionDepth_6)); }
	inline int32_t get_eventExecutionDepth_6() const { return ___eventExecutionDepth_6; }
	inline int32_t* get_address_of_eventExecutionDepth_6() { return &___eventExecutionDepth_6; }
	inline void set_eventExecutionDepth_6(int32_t value)
	{
		___eventExecutionDepth_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTSYSTEM_TB60CCFC587E31E20691D93800C3CE93C95CD1E15_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#define BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef BASECORESYSTEM_TE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC_H
#define BASECORESYSTEM_TE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct  BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC  : public BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRegistrarU3Ek__BackingField_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECORESYSTEM_TE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC_H
#ifndef GENERICBASEEVENTDATA_T0BDC9C4DB1A3D049B22D338500BE361724980E6A_H
#define GENERICBASEEVENTDATA_T0BDC9C4DB1A3D049B22D338500BE361724980E6A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct  GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventSourceU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICBASEEVENTDATA_T0BDC9C4DB1A3D049B22D338500BE361724980E6A_H
#ifndef MIXEDREALITYCAPABILITY_T640F18A34CA2280C67DB228DF2EA211F52BE36F5_H
#define MIXEDREALITYCAPABILITY_T640F18A34CA2280C67DB228DF2EA211F52BE36F5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct  MixedRealityCapability_t640F18A34CA2280C67DB228DF2EA211F52BE36F5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_t640F18A34CA2280C67DB228DF2EA211F52BE36F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYCAPABILITY_T640F18A34CA2280C67DB228DF2EA211F52BE36F5_H
#ifndef AUTOSTARTBEHAVIOR_T85B76025C4C4B2D8E9300642318F97EAC977CA6C_H
#define AUTOSTARTBEHAVIOR_T85B76025C4C4B2D8E9300642318F97EAC977CA6C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct  AutoStartBehavior_t85B76025C4C4B2D8E9300642318F97EAC977CA6C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t85B76025C4C4B2D8E9300642318F97EAC977CA6C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOSTARTBEHAVIOR_T85B76025C4C4B2D8E9300642318F97EAC977CA6C_H
#ifndef SUPPORTEDPLATFORMS_TF7E6BC415D6BE4AE8FAA5BA365A9955E36A0CFB4_H
#define SUPPORTEDPLATFORMS_TF7E6BC415D6BE4AE8FAA5BA365A9955E36A0CFB4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms
struct  SupportedPlatforms_tF7E6BC415D6BE4AE8FAA5BA365A9955E36A0CFB4 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedPlatforms_tF7E6BC415D6BE4AE8FAA5BA365A9955E36A0CFB4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTEDPLATFORMS_TF7E6BC415D6BE4AE8FAA5BA365A9955E36A0CFB4_H
#ifndef VOLUMETYPE_TB6B6A8BA2A08A32219B3C79023A74ED8BCD7CAAA_H
#define VOLUMETYPE_TB6B6A8BA2A08A32219B3C79023A74ED8BCD7CAAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct  VolumeType_tB6B6A8BA2A08A32219B3C79023A74ED8BCD7CAAA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_tB6B6A8BA2A08A32219B3C79023A74ED8BCD7CAAA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOLUMETYPE_TB6B6A8BA2A08A32219B3C79023A74ED8BCD7CAAA_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef BASEDATAPROVIDERACCESSCORESYSTEM_T5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF_H
#define BASEDATAPROVIDERACCESSCORESYSTEM_T5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct  BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF  : public BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_tDA3F52DEDA94448A670102A7F21D44D0F7B368D2 * ___dataProviders_13;

public:
	inline static int32_t get_offset_of_dataProviders_13() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF, ___dataProviders_13)); }
	inline List_1_tDA3F52DEDA94448A670102A7F21D44D0F7B368D2 * get_dataProviders_13() const { return ___dataProviders_13; }
	inline List_1_tDA3F52DEDA94448A670102A7F21D44D0F7B368D2 ** get_address_of_dataProviders_13() { return &___dataProviders_13; }
	inline void set_dataProviders_13(List_1_tDA3F52DEDA94448A670102A7F21D44D0F7B368D2 * value)
	{
		___dataProviders_13 = value;
		Il2CppCodeGenWriteBarrier((&___dataProviders_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEDATAPROVIDERACCESSCORESYSTEM_T5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF_H
#ifndef MIXEDREALITYSPATIALAWARENESSEVENTDATA_TCB0675DB9E82AC42353A04D7938B2912B719FF64_H
#define MIXEDREALITYSPATIALAWARENESSEVENTDATA_TCB0675DB9E82AC42353A04D7938B2912B719FF64_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct  MixedRealitySpatialAwarenessEventData_tCB0675DB9E82AC42353A04D7938B2912B719FF64  : public GenericBaseEventData_t0BDC9C4DB1A3D049B22D338500BE361724980E6A
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_tCB0675DB9E82AC42353A04D7938B2912B719FF64, ___U3CIdU3Ek__BackingField_4)); }
	inline int32_t get_U3CIdU3Ek__BackingField_4() const { return ___U3CIdU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_4() { return &___U3CIdU3Ek__BackingField_4; }
	inline void set_U3CIdU3Ek__BackingField_4(int32_t value)
	{
		___U3CIdU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSEVENTDATA_TCB0675DB9E82AC42353A04D7938B2912B719FF64_H
#ifndef MIXEDREALITYSPATIALOBSERVERCONFIGURATION_T2B43AC57A9724AB6566CE0B3324DCC6A570D17F8_H
#define MIXEDREALITYSPATIALOBSERVERCONFIGURATION_T2B43AC57A9724AB6566CE0B3324DCC6A570D17F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct  MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentType
	SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::observerProfile
	BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE * ___observerProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8, ___componentType_0)); }
	inline SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___componentType_0), value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___componentName_1), value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_observerProfile_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8, ___observerProfile_4)); }
	inline BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE * get_observerProfile_4() const { return ___observerProfile_4; }
	inline BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE ** get_address_of_observerProfile_4() { return &___observerProfile_4; }
	inline void set_observerProfile_4(BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE * value)
	{
		___observerProfile_4 = value;
		Il2CppCodeGenWriteBarrier((&___observerProfile_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8_marshaled_pinvoke
{
	SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE * ___observerProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8_marshaled_com
{
	SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE * ___observerProfile_4;
};
#endif // MIXEDREALITYSPATIALOBSERVERCONFIGURATION_T2B43AC57A9724AB6566CE0B3324DCC6A570D17F8_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef BASEMIXEDREALITYPROFILE_TBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23_H
#define BASEMIXEDREALITYPROFILE_TBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMIXEDREALITYPROFILE_TBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23_H
#ifndef MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_TD55C53BD6032741CA0A57BF901F2827A81C5F75C_H
#define MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_TD55C53BD6032741CA0A57BF901F2827A81C5F75C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct  MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C  : public MixedRealitySpatialAwarenessEventData_tCB0675DB9E82AC42353A04D7938B2912B719FF64
{
public:
	// T Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * ___U3CSpatialObjectU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSpatialObjectU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C, ___U3CSpatialObjectU3Ek__BackingField_5)); }
	inline SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * get_U3CSpatialObjectU3Ek__BackingField_5() const { return ___U3CSpatialObjectU3Ek__BackingField_5; }
	inline SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 ** get_address_of_U3CSpatialObjectU3Ek__BackingField_5() { return &___U3CSpatialObjectU3Ek__BackingField_5; }
	inline void set_U3CSpatialObjectU3Ek__BackingField_5(SpatialAwarenessMeshObject_tAEBD1829082B876AA8314382EDD6CC5DA5290CF0 * value)
	{
		___U3CSpatialObjectU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSpatialObjectU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_TD55C53BD6032741CA0A57BF901F2827A81C5F75C_H
#ifndef MIXEDREALITYSPATIALAWARENESSSYSTEM_T25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA_H
#define MIXEDREALITYSPATIALAWARENESSSYSTEM_T25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct  MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA  : public BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * ___meshEventData_15;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessObjectParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spatialAwarenessObjectParent_16;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::nextSourceId
	uint32_t ___nextSourceId_17;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * ___spatialAwarenessSystemProfile_18;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA, ___U3CNameU3Ek__BackingField_14)); }
	inline String_t* get_U3CNameU3Ek__BackingField_14() const { return ___U3CNameU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_14() { return &___U3CNameU3Ek__BackingField_14; }
	inline void set_U3CNameU3Ek__BackingField_14(String_t* value)
	{
		___U3CNameU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_meshEventData_15() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA, ___meshEventData_15)); }
	inline MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * get_meshEventData_15() const { return ___meshEventData_15; }
	inline MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C ** get_address_of_meshEventData_15() { return &___meshEventData_15; }
	inline void set_meshEventData_15(MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * value)
	{
		___meshEventData_15 = value;
		Il2CppCodeGenWriteBarrier((&___meshEventData_15), value);
	}

	inline static int32_t get_offset_of_spatialAwarenessObjectParent_16() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA, ___spatialAwarenessObjectParent_16)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_spatialAwarenessObjectParent_16() const { return ___spatialAwarenessObjectParent_16; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_spatialAwarenessObjectParent_16() { return &___spatialAwarenessObjectParent_16; }
	inline void set_spatialAwarenessObjectParent_16(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___spatialAwarenessObjectParent_16 = value;
		Il2CppCodeGenWriteBarrier((&___spatialAwarenessObjectParent_16), value);
	}

	inline static int32_t get_offset_of_nextSourceId_17() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA, ___nextSourceId_17)); }
	inline uint32_t get_nextSourceId_17() const { return ___nextSourceId_17; }
	inline uint32_t* get_address_of_nextSourceId_17() { return &___nextSourceId_17; }
	inline void set_nextSourceId_17(uint32_t value)
	{
		___nextSourceId_17 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemProfile_18() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA, ___spatialAwarenessSystemProfile_18)); }
	inline MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * get_spatialAwarenessSystemProfile_18() const { return ___spatialAwarenessSystemProfile_18; }
	inline MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 ** get_address_of_spatialAwarenessSystemProfile_18() { return &___spatialAwarenessSystemProfile_18; }
	inline void set_spatialAwarenessSystemProfile_18(MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * value)
	{
		___spatialAwarenessSystemProfile_18 = value;
		Il2CppCodeGenWriteBarrier((&___spatialAwarenessSystemProfile_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSSYSTEM_T25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef BASESPATIALAWARENESSOBSERVERPROFILE_T520299F7AC6C1F02669CCA06865BE3E283640DAE_H
#define BASESPATIALAWARENESSOBSERVERPROFILE_T520299F7AC6C1F02669CCA06865BE3E283640DAE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct  BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::startupBehavior
	int32_t ___startupBehavior_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::isStationaryObserver
	bool ___isStationaryObserver_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observationExtents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___observationExtents_7;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observerVolumeType
	int32_t ___observerVolumeType_8;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::updateInterval
	float ___updateInterval_9;

public:
	inline static int32_t get_offset_of_startupBehavior_5() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE, ___startupBehavior_5)); }
	inline int32_t get_startupBehavior_5() const { return ___startupBehavior_5; }
	inline int32_t* get_address_of_startupBehavior_5() { return &___startupBehavior_5; }
	inline void set_startupBehavior_5(int32_t value)
	{
		___startupBehavior_5 = value;
	}

	inline static int32_t get_offset_of_isStationaryObserver_6() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE, ___isStationaryObserver_6)); }
	inline bool get_isStationaryObserver_6() const { return ___isStationaryObserver_6; }
	inline bool* get_address_of_isStationaryObserver_6() { return &___isStationaryObserver_6; }
	inline void set_isStationaryObserver_6(bool value)
	{
		___isStationaryObserver_6 = value;
	}

	inline static int32_t get_offset_of_observationExtents_7() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE, ___observationExtents_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_observationExtents_7() const { return ___observationExtents_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_observationExtents_7() { return &___observationExtents_7; }
	inline void set_observationExtents_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___observationExtents_7 = value;
	}

	inline static int32_t get_offset_of_observerVolumeType_8() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE, ___observerVolumeType_8)); }
	inline int32_t get_observerVolumeType_8() const { return ___observerVolumeType_8; }
	inline int32_t* get_address_of_observerVolumeType_8() { return &___observerVolumeType_8; }
	inline void set_observerVolumeType_8(int32_t value)
	{
		___observerVolumeType_8 = value;
	}

	inline static int32_t get_offset_of_updateInterval_9() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE, ___updateInterval_9)); }
	inline float get_updateInterval_9() const { return ___updateInterval_9; }
	inline float* get_address_of_updateInterval_9() { return &___updateInterval_9; }
	inline void set_updateInterval_9(float value)
	{
		___updateInterval_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASESPATIALAWARENESSOBSERVERPROFILE_T520299F7AC6C1F02669CCA06865BE3E283640DAE_H
#ifndef MIXEDREALITYSPATIALAWARENESSSYSTEMPROFILE_TEE5CC9D39053417AE9E1FCD08A68AF6821E45329_H
#define MIXEDREALITYSPATIALAWARENESSSYSTEMPROFILE_TEE5CC9D39053417AE9E1FCD08A68AF6821E45329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct  MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::observerConfigurations
	MixedRealitySpatialObserverConfigurationU5BU5D_t9FB3ABFE1BC4A547C119B52383A8584E51149A6F* ___observerConfigurations_5;

public:
	inline static int32_t get_offset_of_observerConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329, ___observerConfigurations_5)); }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_t9FB3ABFE1BC4A547C119B52383A8584E51149A6F* get_observerConfigurations_5() const { return ___observerConfigurations_5; }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_t9FB3ABFE1BC4A547C119B52383A8584E51149A6F** get_address_of_observerConfigurations_5() { return &___observerConfigurations_5; }
	inline void set_observerConfigurations_5(MixedRealitySpatialObserverConfigurationU5BU5D_t9FB3ABFE1BC4A547C119B52383A8584E51149A6F* value)
	{
		___observerConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((&___observerConfigurations_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSSYSTEMPROFILE_TEE5CC9D39053417AE9E1FCD08A68AF6821E45329_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef EVENTSYSTEM_T06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_H
#define EVENTSYSTEM_T06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_4), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_5), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_7), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_10), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_13), value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___s_RaycastComparer_14;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mgU24cache0
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_6), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_H
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t9FB3ABFE1BC4A547C119B52383A8584E51149A6F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8  m_Items[1];

public:
	inline MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8  value)
	{
		m_Items[index] = value;
	}
};


// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1__ctor_mD82505D09FAE0796751DD5E5E41307A6E16CF7D7_gshared (MixedRealitySpatialAwarenessEventData_1_t77F073E9A7FA28EB909476C096F52E273C3D9B2B * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
extern "C" IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m4E469AC2C15B4C66D25578FA20502210B98B7A57_gshared (BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF * __this, Type_t * p0, int32_t p1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m4C4121A9C5F501FE74883999F94E194FD88E28C8_gshared (BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_mB40AB7A4AE17C8D5F9DD252768E7A8E7336EE5DC (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
extern "C" IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mD03338CC48C07F211029BACE0E7A7793150413B2 (BaseCoreSystem_tE79DB891D5ABBFE0CE7A1949FE021DFB0781A1FC * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
extern "C" IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_mE7C2A004CBDB8FE16560EB9221531E02A228C7E6 (BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF * __this, BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
extern "C" IL2CPP_METHOD_ATTR void BaseService_Initialize_m5CF8B5D67913C274CADDE9B4691CD7D0CA10B9F8 (BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::.ctor(UnityEngine.EventSystems.EventSystem)
inline void MixedRealitySpatialAwarenessEventData_1__ctor_mE42A0DA83DCAD35B6EA56ED88E2CAC5B00E9A437 (MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * p0, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C *, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 *, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1__ctor_mD82505D09FAE0796751DD5E5E41307A6E16CF7D7_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m37B80818FE035B64CEE642CA8513A0647E07F9E3 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::get_ObserverConfigurations()
extern "C" IL2CPP_METHOD_ATTR MixedRealitySpatialObserverConfigurationU5BU5D_t9FB3ABFE1BC4A547C119B52383A8584E51149A6F* MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_mFA71572458BBC60F362283DA4B188A9B3AD47976 (MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentName()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_m61B62091C349CEDD4113A81525CF309C3D6BE4C9 (MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_Priority()
extern "C" IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_m83E09CB56679B133B1F38ABEAD64D63863E42FE8 (MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ObserverProfile()
extern "C" IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE * MixedRealitySpatialObserverConfiguration_get_ObserverProfile_mF6A3F66CE58D19222EFC0594424375DD20E5892D (MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentType()
extern "C" IL2CPP_METHOD_ATTR SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * MixedRealitySpatialObserverConfiguration_get_ComponentType_mA1C62B369EE302C8DBEB31F11D1830DAEA1AC3F9 (MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
extern "C" IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m7804F50FE1B735A1748961C51DDFE870D4F3259B (SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_RuntimePlatform()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m701C0DDEDFDF064EA7C8EC763400882AD601B7C8 (MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(System.Type,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_mD487F570C46A36FFA319D6996032DD3173538CFA (BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF * __this, Type_t * p0, int32_t p1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p2, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF *, Type_t *, int32_t, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m4E469AC2C15B4C66D25578FA20502210B98B7A57_gshared)(__this, p0, p1, p2, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
extern "C" IL2CPP_METHOD_ATTR void BaseService_Disable_m2FD93B1BE4E56E02A7E17547D0B6D755ACE5FDE0 (BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(!!0)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_m3124E50B4A2802B9B1C29A36A02C12CA82DC7DF0 (BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF *, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m4C4121A9C5F501FE74883999F94E194FD88E28C8_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
extern "C" IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_m899B39F051BA5C13BFCA34081BFB31377FA6F937 (BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Reset()
extern "C" IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Reset_m5C4DCEBF5FEA5BEE32C7E54E141B8A218E0EF5C9 (BaseDataProviderAccessCoreSystem_t5D33FA872454EEA6B3DC7B9A5AB590AAAD7392CF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
extern "C" IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
extern "C" IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m3B94282DD84FF967251F1F9B80E47AAFDC47D92F (BaseEventSystem_tB60CCFC587E31E20691D93800C3CE93C95CD1E15 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m8C36D679D12DF6BF9B205BFA25D9552442D79ECA (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::AddChild(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityPlayspace_AddChild_mDF4BC791D4C6362B5200D09DF7866CAEC8149D12 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_mC76D880EC45DF35AD27C370ABC89255A96D636F0 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m382B5A6B5AC73CEF04830EF437758ADBB6C4535D (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, RuntimeObject* ___registrar0, MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * ___profile1, const RuntimeMethod* method)
{
	{
		MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * L_0 = ___profile1;
		MixedRealitySpatialAwarenessSystem__ctor_mB40AB7A4AE17C8D5F9DD252768E7A8E7336EE5DC(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_mD03338CC48C07F211029BACE0E7A7793150413B2(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_mB40AB7A4AE17C8D5F9DD252768E7A8E7336EE5DC (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__ctor_mB40AB7A4AE17C8D5F9DD252768E7A8E7336EE5DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CNameU3Ek__BackingField_14(_stringLiteral306293B4D4A8E6238C3F25BB12EF44DF6E94C8B3);
		__this->set_meshEventData_15((MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C *)NULL);
		__this->set_spatialAwarenessObjectParent_16((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		__this->set_nextSourceId_17(0);
		__this->set_spatialAwarenessSystemProfile_18((MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 *)NULL);
		MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * L_0 = ___profile0;
		BaseDataProviderAccessCoreSystem__ctor_mE7C2A004CBDB8FE16560EB9221531E02A228C7E6(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialAwarenessSystem_get_Name_m7C5DD58FEF69B7AE0F3AB2E179490CD709536314 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_set_Name_mF3E2CF4978A0DEB8518C2D042B6053E7F9FB9F38 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealitySpatialAwarenessSystem_CheckCapability_m7E4DF3E75E1C5227EF606D946870E949680A64C2 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CheckCapability_m7E4DF3E75E1C5227EF606D946870E949680A64C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_mAD4025AD79B2039DAF0B1F1D217D35158AD5B202_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_tD5AA969B13679BD8810074C4790D30D2BAF6A7DE_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0010:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_t7FD37E520ADB7A3B5EDF093107170B5D596D9EC6_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			RuntimeObject* L_4 = V_1;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMixedRealityCapabilityCheck_t9B775BE2AAE7C57BB6F20C03DF7F975B7B27D510_il2cpp_TypeInfo_var));
			RuntimeObject* L_5 = V_2;
			if (!L_5)
			{
				goto IL_002b;
			}
		}

IL_0022:
		{
			RuntimeObject* L_6 = V_2;
			int32_t L_7 = ___capability0;
			NullCheck(L_6);
			bool L_8 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.IMixedRealityCapabilityCheck::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability) */, IMixedRealityCapabilityCheck_t9B775BE2AAE7C57BB6F20C03DF7F975B7B27D510_il2cpp_TypeInfo_var, L_6, L_7);
			G_B5_0 = ((int32_t)(L_8));
			goto IL_002c;
		}

IL_002b:
		{
			G_B5_0 = 0;
		}

IL_002c:
		{
			V_3 = (bool)G_B5_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			V_4 = (bool)1;
			IL2CPP_LEAVE(0x51, FINALLY_0041);
		}

IL_0036:
		{
		}

IL_0037:
		{
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0010;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_0;
			if (!L_12)
			{
				goto IL_004b;
			}
		}

IL_0044:
		{
			RuntimeObject* L_13 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(65)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		V_4 = (bool)0;
		goto IL_0051;
	}

IL_0051:
	{
		bool L_14 = V_4;
		return L_14;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Initialize()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Initialize_mA23DD8797EA88F2B1A653B6FDB7E24E162819A95 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Initialize_mA23DD8797EA88F2B1A653B6FDB7E24E162819A95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseService_Initialize_m5CF8B5D67913C274CADDE9B4691CD7D0CA10B9F8(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C * L_1 = (MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C *)il2cpp_codegen_object_new(MixedRealitySpatialAwarenessEventData_1_tD55C53BD6032741CA0A57BF901F2827A81C5F75C_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1__ctor_mE42A0DA83DCAD35B6EA56ED88E2CAC5B00E9A437(L_1, L_0, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1__ctor_mE42A0DA83DCAD35B6EA56ED88E2CAC5B00E9A437_RuntimeMethod_var);
		__this->set_meshEventData_15(L_1);
		MixedRealitySpatialAwarenessSystem_InitializeInternal_m37B80818FE035B64CEE642CA8513A0647E07F9E3(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m37B80818FE035B64CEE642CA8513A0647E07F9E3 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_InitializeInternal_m37B80818FE035B64CEE642CA8513A0647E07F9E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_4 = NULL;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 *)IsInstClass((RuntimeObject*)L_0, MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329_il2cpp_TypeInfo_var));
		MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_mAD4025AD79B2039DAF0B1F1D217D35158AD5B202_RuntimeMethod_var, __this);
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Count() */, IReadOnlyCollection_1_tA1A29ADD033F62FD18107C745EFA29E12378169E_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00a0;
		}
	}
	{
		V_2 = 0;
		goto IL_008e;
	}

IL_0030:
	{
		MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * L_6 = V_0;
		NullCheck(L_6);
		MixedRealitySpatialObserverConfigurationU5BU5D_t9FB3ABFE1BC4A547C119B52383A8584E51149A6F* L_7 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_mFA71572458BBC60F362283DA4B188A9B3AD47976(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, __this);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		String_t* L_14 = MixedRealitySpatialObserverConfiguration_get_ComponentName_m61B62091C349CEDD4113A81525CF309C3D6BE4C9((MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_13;
		uint32_t L_16 = MixedRealitySpatialObserverConfiguration_get_Priority_m83E09CB56679B133B1F38ABEAD64D63863E42FE8((MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 *)(&V_3), /*hidden argument*/NULL);
		uint32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_15;
		BaseSpatialAwarenessObserverProfile_t520299F7AC6C1F02669CCA06865BE3E283640DAE * L_20 = MixedRealitySpatialObserverConfiguration_get_ObserverProfile_mF6A3F66CE58D19222EFC0594424375DD20E5892D((MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
		V_4 = L_19;
		SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * L_21 = MixedRealitySpatialObserverConfiguration_get_ComponentType_mA1C62B369EE302C8DBEB31F11D1830DAEA1AC3F9((MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_21);
		Type_t * L_22 = SystemType_get_Type_m7804F50FE1B735A1748961C51DDFE870D4F3259B(L_21, /*hidden argument*/NULL);
		int32_t L_23 = MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m701C0DDEDFDF064EA7C8EC763400882AD601B7C8((MixedRealitySpatialObserverConfiguration_t2B43AC57A9724AB6566CE0B3324DCC6A570D17F8 *)(&V_3), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = V_4;
		BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_mD487F570C46A36FFA319D6996032DD3173538CFA(__this, L_22, L_23, L_24, /*hidden argument*/BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_mD487F570C46A36FFA319D6996032DD3173538CFA_RuntimeMethod_var);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_008e:
	{
		int32_t L_26 = V_2;
		MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * L_27 = V_0;
		NullCheck(L_27);
		MixedRealitySpatialObserverConfigurationU5BU5D_t9FB3ABFE1BC4A547C119B52383A8584E51149A6F* L_28 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_mFA71572458BBC60F362283DA4B188A9B3AD47976(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		V_5 = (bool)((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length))))))? 1 : 0);
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0030;
		}
	}
	{
	}

IL_00a0:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Disable()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Disable_m5C38F7743332F4360C027E4C5624DB589B91AE77 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Disable_m5C38F7743332F4360C027E4C5624DB589B91AE77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		BaseService_Disable_m2FD93B1BE4E56E02A7E17547D0B6D755ACE5FDE0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_mAD4025AD79B2039DAF0B1F1D217D35158AD5B202_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_tD5AA969B13679BD8810074C4790D30D2BAF6A7DE_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0017:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_t7FD37E520ADB7A3B5EDF093107170B5D596D9EC6_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			RuntimeObject* L_4 = V_1;
			BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_m3124E50B4A2802B9B1C29A36A02C12CA82DC7DF0(__this, L_4, /*hidden argument*/BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_m3124E50B4A2802B9B1C29A36A02C12CA82DC7DF0_RuntimeMethod_var);
		}

IL_0028:
		{
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_0017;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0035:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(50)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003d:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Enable()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Enable_m71C56728D508101BB0C9BAC26C797B5B600ED166 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	{
		MixedRealitySpatialAwarenessSystem_InitializeInternal_m37B80818FE035B64CEE642CA8513A0647E07F9E3(__this, /*hidden argument*/NULL);
		BaseDataProviderAccessCoreSystem_Enable_m899B39F051BA5C13BFCA34081BFB31377FA6F937(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Reset()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Reset_mB9AB4CCD7B6FFF9FB4CE284938922ECD8C299433 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	{
		BaseDataProviderAccessCoreSystem_Reset_m5C4DCEBF5FEA5BEE32C7E54E141B8A218E0EF5C9(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable() */, __this);
		VirtActionInvoker0::Invoke(21 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize() */, __this);
		VirtActionInvoker0::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, __this);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Destroy()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Destroy_m7A8350659EA2FAF44109F6FB20444ED084730C1D (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Destroy_m7A8350659EA2FAF44109F6FB20444ED084730C1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_spatialAwarenessObjectParent_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		bool L_5 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_spatialAwarenessObjectParent_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_7, /*hidden argument*/NULL);
		goto IL_0054;
	}

IL_0035:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_spatialAwarenessObjectParent_16();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_9, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_spatialAwarenessObjectParent_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_10, /*hidden argument*/NULL);
	}

IL_0054:
	{
		__this->set_spatialAwarenessObjectParent_16((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_005c:
	{
	}

IL_005d:
	{
		BaseEventSystem_Destroy_m3B94282DD84FF967251F1F9B80E47AAFDC47D92F(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_mC76D880EC45DF35AD27C370ABC89255A96D636F0 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_mC76D880EC45DF35AD27C370ABC89255A96D636F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B3_0 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_spatialAwarenessObjectParent_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m8C36D679D12DF6BF9B205BFA25D9552442D79ECA(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_2;
		V_0 = L_3;
		__this->set_spatialAwarenessObjectParent_16(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		G_B3_0 = L_4;
		goto IL_0025;
	}

IL_001f:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_spatialAwarenessObjectParent_16();
		G_B3_0 = L_5;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m8C36D679D12DF6BF9B205BFA25D9552442D79ECA (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m8C36D679D12DF6BF9B205BFA25D9552442D79ECA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tF427C0C90F020A6DEA420D40C7BBADE13037782A_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_AddChild_mDF4BC791D4C6362B5200D09DF7866CAEC8149D12(L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		V_1 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CreateSpatialAwarenessObservationParent(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_m61A4C9FE46B68B9CB2643A2BD7A02E46818C5D58 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_m61A4C9FE46B68B9CB2643A2BD7A02E46818C5D58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	{
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_mC76D880EC45DF35AD27C370ABC89255A96D636F0(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_3, L_5, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		V_1 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_1;
		return L_7;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GenerateNewSourceId()
extern "C" IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_m7C5654DE8DA4194AB4B598AE10B9B41F77BC38F3 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = __this->get_nextSourceId_17();
		V_0 = L_0;
		uint32_t L_1 = V_0;
		__this->set_nextSourceId_17(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		uint32_t L_2 = V_0;
		V_1 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		uint32_t L_3 = V_1;
		return L_3;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessSystemProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_mD217657B4CC7BCF58E2E3F06D4321491A5851AAE (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_mD217657B4CC7BCF58E2E3F06D4321491A5851AAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * V_1 = NULL;
	{
		MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * L_0 = __this->get_spatialAwarenessSystemProfile_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * L_3 = VirtFuncInvoker0< BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		__this->set_spatialAwarenessSystemProfile_18(((MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 *)IsInstClass((RuntimeObject*)L_3, MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329_il2cpp_TypeInfo_var)));
	}

IL_0024:
	{
		MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * L_4 = __this->get_spatialAwarenessSystemProfile_18();
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		MixedRealitySpatialAwarenessSystemProfile_tEE5CC9D39053417AE9E1FCD08A68AF6821E45329 * L_5 = V_1;
		return L_5;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObservers()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObservers_m99417C89E928263CB22FF326CC745DD90D5E7079 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObservers_m99417C89E928263CB22FF326CC745DD90D5E7079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = VirtFuncInvoker0< RuntimeObject* >::Invoke(44 /* System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProviders() */, __this);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IReadOnlyList_1_t9E1EC9C7C1A2A13E8D28C6CF689DBD4C523DDE27_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserver(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObserver_m80222B619DB0FCD6F3FB328CFB0F187F0063488E (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObserver_m80222B619DB0FCD6F3FB328CFB0F187F0063488E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		RuntimeObject* L_1 = VirtFuncInvoker1< RuntimeObject*, String_t* >::Invoke(46 /* Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProvider(System.String) */, __this, L_0);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_il2cpp_TypeInfo_var));
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObservers()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ResumeObservers_mA4801E629E65CC1237B68D21F2FDB427923342A7 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ResumeObservers_mA4801E629E65CC1237B68D21F2FDB427923342A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_mAD4025AD79B2039DAF0B1F1D217D35158AD5B202_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_tD5AA969B13679BD8810074C4790D30D2BAF6A7DE_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0010:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_t7FD37E520ADB7A3B5EDF093107170B5D596D9EC6_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Resume() */, IMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_il2cpp_TypeInfo_var, L_4);
		}

IL_0020:
		{
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_0010;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0034;
			}
		}

IL_002d:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObservers()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_SuspendObservers_mB930242CA924C586848EE9903D12D0F4F9570388 (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_SuspendObservers_mB930242CA924C586848EE9903D12D0F4F9570388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_mAD4025AD79B2039DAF0B1F1D217D35158AD5B202_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_tD5AA969B13679BD8810074C4790D30D2BAF6A7DE_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0010:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_t7FD37E520ADB7A3B5EDF093107170B5D596D9EC6_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(17 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Suspend() */, IMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_il2cpp_TypeInfo_var, L_4);
		}

IL_0020:
		{
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_0010;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0034;
			}
		}

IL_002d:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservations()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ClearObservations_m6E0AA2C60E0E595354E6EECABE8500103DC6B38D (MixedRealitySpatialAwarenessSystem_t25305CD599C140B610FA6DE3E2ACB5C66BEA5BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ClearObservations_m6E0AA2C60E0E595354E6EECABE8500103DC6B38D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_mAD4025AD79B2039DAF0B1F1D217D35158AD5B202_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_tD5AA969B13679BD8810074C4790D30D2BAF6A7DE_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0010:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_t7FD37E520ADB7A3B5EDF093107170B5D596D9EC6_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::ClearObservations() */, IMixedRealitySpatialAwarenessObserver_tDEF8CD2739799660E4F18F43D7FE4C4F8193A477_il2cpp_TypeInfo_var, L_4);
		}

IL_0020:
		{
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_0010;
			}
		}

IL_0028:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0034;
			}
		}

IL_002d:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
