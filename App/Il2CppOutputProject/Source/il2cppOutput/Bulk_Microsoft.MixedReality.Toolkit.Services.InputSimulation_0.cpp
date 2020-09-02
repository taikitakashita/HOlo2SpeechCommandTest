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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E;
// Microsoft.MixedReality.Toolkit.Input.BaseHand
struct BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D;
// Microsoft.MixedReality.Toolkit.Input.HandRay
struct HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t9E81483FCAEC076EED74FDFBB3093033CED734B3;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7;
// Microsoft.MixedReality.Toolkit.Input.KeyBinding/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_tC5F6AD6A484C6DAF77E5FFE8A0E04A86F7E498AE;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_t9CC41F1E9889534D711E4E717D6CA6A8ACD0B35B;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_tACABC5B25A2CC3286D152A57F4EED7194845E0AA;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t0F3AEFAECBFE12E6EDD34076D417A17DA883ACF6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_tE8DE3FFF09D96426A5D46793E940300312A5FD39;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_t4DB9FE68E064D5A7DFABE564B3A47E6C3E6B6C36;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile
struct MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_t624E085F471DA1AC12BF16507CBF152D1FBEEBFC;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_t313A5AE54CD60130CE65107078F9A0C803D39EBA;
// Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand
struct SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532;
// Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand
struct SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHand
struct SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData
struct SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData/HandJointDataGenerator
struct HandJointDataGenerator_tE04953526CC42763EDBBB8F8D14871BB5D0906FA;
// Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils
struct SimulatedHandUtils_tCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762;
// Microsoft.MixedReality.Toolkit.Input.StabilizedRay
struct StabilizedRay_t4F09BCC321C03AB46E3188D5E59237E44878D99F;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262;
// System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>
struct Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD;
// System.Action`2<System.Int32Enum,System.Int32>
struct Action_2_tCB4135AD949FF94D36EC745430DB40677EE86A3A;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_t137217C94D8CD3EB5BACDBB8DD2C7C3F7DDB8DEA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>[]
struct EntryU5BU5D_t3CBD88F0B1B9C839CEF984EC5D6B7FAFEFCE569D;
// System.Collections.Generic.Dictionary`2/Entry<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>[]
struct EntryU5BU5D_tD6E6322910234A954E771E0DF3752DEC9CC14403;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_t102E3D1C13E776552F232C7BAB847639B3A7CC4A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct KeyCollection_t50B5EF6005EB67ABED1D8502F50D40A4AE3D2E7A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct KeyCollection_t11F6D4BC56130B975ADAC346C2137993716065F4;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t7E74F88627F2A65F5D6F2CA700E0BC2DC3941776;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct ValueCollection_tADDB9524918904C268248A6BFDE104D7043D1AE8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct ValueCollection_tCC6591841FD4A4A2A43AD80F6733241F96000F75;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t13485ACAFA396442F64BDF056CAFB0CFD4535B47;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1AE8F03F101BA7578AF3A97EF1EBE8DB5FF31215;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_t4CEBE23321125B6E8D8B4B82EA2D83BCE8ADE39E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>
struct IEqualityComparer_1_tFDCB35733DEF0F3B26197C8BBE935C407527E6C5;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_t74F59DD36FAE0CFB087612565C42CAD359647832;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>
struct Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C;
// System.Tuple`2<System.Int32Enum,System.Int32>
struct Tuple_2_t166F12DD341E435950E61C76D51556A00D292F7F;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

extern RuntimeClass* Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD_il2cpp_TypeInfo_var;
extern RuntimeClass* CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
extern RuntimeClass* IInputSimulationService_t9AB23BF0767DC26ADF597BE3F4D97186A9D575A5_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityDataProviderAccess_t63F3E16981AF92E0A01138E618F95865C1185D1E_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyType_tF5A78BC09383A2ED02EED8E2F3CA2F3445018F58_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var;
extern RuntimeClass* MouseButtonU5BU5D_t14C6EC4510926DD3FA9CAFA4757AA63EF63D3361_il2cpp_TypeInfo_var;
extern RuntimeClass* MouseButton_t637324A94BEA705710DF895A72C46D4623AEBC79_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B_il2cpp_TypeInfo_var;
extern RuntimeClass* SimulatedHandUtils_tCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762_il2cpp_TypeInfo_var;
extern RuntimeClass* SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t25BC860F7304EF534C1885BF63F52330F1DA6BF6____6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0_FieldInfo_var;
extern String_t* _stringLiteral04734178D407F1573AAACEB7E086B11BCFABD7FF;
extern String_t* _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E;
extern String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
extern String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
extern String_t* _stringLiteral2FEED76F1368917E9E5273B5D3B77EC607649D4D;
extern String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
extern String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
extern String_t* _stringLiteral561DDB78EA3339033D719AFAA6980160DC8D88CB;
extern String_t* _stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31;
extern String_t* _stringLiteral66654F3A427908EF2AB0102919620271D634DA8A;
extern String_t* _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A;
extern String_t* _stringLiteral8B7970623A806CC748C1B218861BE920B011B98C;
extern String_t* _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77;
extern String_t* _stringLiteralCF673A9C875D20DCDA8A5C0D7A2E5C60A940DB8E;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC;
extern const RuntimeMethod* Action_2_Invoke_mF38507A8EAFBB63630A7E24B202171022626FEDE_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_mD36E57B91464B82ADBEFF1EEF7E9D941C3702D69_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_mD7555736C5613A79BF41250898CE50B6081D5A64_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m333D3C686DCC6485E954F9C76679E8632E844B77_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m8784F4D5D46630F0AE1F0866B9DE0C557B0005E4_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m41A63AF2047471085D2D3017054B4CE9053C842F_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m9F0E904C69CAFA29E3BDC894848BAB6A70816325_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mBBCE1B97FE2FCC4424D0A6738758339782735F51_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m3BAD98FBDF97B4A32E77BA3433091475E39C8AC9_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m1A6741EFB5760E7A362D89DA95E03E9659AAACD9_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m6D0921490F3AAFC95C6DBC2AEB293FFA7DFE8F9F_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_mAC10F1CE6FD9EE89E58F31BC20189A0B89E30ECA_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mA9BB7B50ACACE431FE69D6C4718231443A3868EC_RuntimeMethod_var;
extern const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProvider_TisIInputSimulationService_t9AB23BF0767DC26ADF597BE3F4D97186A9D575A5_mC51573EFDAA7817C0837F735BCB142EE2398F097_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
extern const RuntimeMethod* Tuple_Create_TisKeyType_tF5A78BC09383A2ED02EED8E2F3CA2F3445018F58_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC10F042C6AD415B1040430EC4D3D76046ED557D6_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m9D102086429130390E2CCA06B1632598A17A8EB2_RuntimeMethod_var;
extern const RuntimeType* KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_0_0_0_var;
extern const RuntimeType* MouseButton_t637324A94BEA705710DF895A72C46D4623AEBC79_0_0_0_var;
extern const RuntimeType* TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648_0_0_0_var;
extern const uint32_t KeyBinding_FromMouseButton_mD56F414DB2608A6532A4CB14DBFC1661AA80923F_MetadataUsageId;
extern const uint32_t KeyBinding_ToString_mD37DE208A22A14A83B128852B8D7BEA29819B955_MetadataUsageId;
extern const uint32_t KeyBinding__cctor_m1AAA8D84540F637A120AA1AC2C5095F0167B6417_MetadataUsageId;
extern const uint32_t MixedRealityInputSimulationProfile__ctor_m63CE6731F3B936DDFABA29DCD7F7C4B1F6369F36_MetadataUsageId;
extern const uint32_t SimulatedArticulatedHand_UpdateInteractions_mA999A5D98CFD765ED3670A6E2D3C7E60711B9921_MetadataUsageId;
extern const uint32_t SimulatedArticulatedHand__ctor_m95DA511427D21F85AA69C93B90925240E3A4DDDF_MetadataUsageId;
extern const uint32_t SimulatedArticulatedHand_get_DefaultInteractions_mFB69DD1D81AF0F6E632B330D71964BA632A12C7A_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_EnsureProfileSettings_mF24D746CF95BAD9EDC8A711BCDB98D95E19BE40B_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCancelHold_mAE3A4BB547C0FC869E1CF0163B44C4C87A7C827A_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCancelManipulation_mC0FC31068B4BEC9E66E472D5BE9E024180ADAF88_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCancelNavigation_m7D43D519F1596528C2268E862D3B1869CC00C5A5_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCompleteHold_mA3CECE70227149ADD36FA2BA1D2A707253C2C8B0_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCompleteManipulation_m38916F79C8AE4B1ABD4EBF271CE04F66956024F9_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCompleteNavigation_m4A7919C0F67FAD492696053D6BC88C14166E90AD_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryCompleteSelect_mD65DDDA160775409F300FDAB683BFD57013C344D_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryStartHold_m65B73E38DC49C7CB701D9FC4E319771182626B4E_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryStartManipulation_m7AAD3F01B1474AB282CED27A6D5250DCF43A7DEE_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_TryStartNavigation_m3003BA7F41386ED68B46FE614DBF60C101E68A35_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_UpdateInteractions_mE57D6AD1D72C7FF5C6CF101D87E22DF56C3EA8B4_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_UpdateManipulation_mC084DDE25A78F60DD90F45C17605D869D50ACEF7_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_UpdateNavigationRails_m9F0288BF7ADEE81E87F10002F4E40AF4EF0F321E_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_UpdateNavigation_m54497EA8A92B98D8140CC7F3A3E218C9B7231DF9_MetadataUsageId;
extern const uint32_t SimulatedGestureHand__ctor_m5B71DA1966149FC17D2AC52BD6804DE26F689A3A_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_get_DefaultInteractions_m329B653DBA0B7E213864C91CD6B978A4A9512915_MetadataUsageId;
extern const uint32_t SimulatedGestureHand_get_NavigationDelta_m78455B0026EC6EC96AC09450639E9416A23003F7_MetadataUsageId;
extern const uint32_t SimulatedHandData_Copy_m0EA614233CBA21972CBCBDD593E7CCF76ABBF524_MetadataUsageId;
extern const uint32_t SimulatedHandData__cctor_m5D62473AAEB6D685A87564C688A043899210C1AC_MetadataUsageId;
extern const uint32_t SimulatedHandData__ctor_m8559F0E533C6ECE4071564BB71E7C75D4F304F05_MetadataUsageId;
extern const uint32_t SimulatedHandUtils_CalculateJointRotations_mEE39826C5DD54918D0B408A034A1BDD8B7A564DD_MetadataUsageId;
extern const uint32_t SimulatedHandUtils_GetPalmForwardVector_m15EB17483C8EC70A332C3293B6B98F69A7502870_MetadataUsageId;
extern const uint32_t SimulatedHandUtils_GetPalmRightVector_m3F111C14D6DB3C581BFC8710180C3963F8DB68A3_MetadataUsageId;
extern const uint32_t SimulatedHandUtils_GetPalmUpVector_m960906B962EEB6085D531560164B893014484826_MetadataUsageId;
extern const uint32_t SimulatedHandUtils__cctor_mA81393C80ED60FB7279FDDD48C24C6526BD76431_MetadataUsageId;
extern const uint32_t SimulatedHand_TryGetJoint_mC673CBEDCF2ED6841D6B96B4003F478A0E91684B_MetadataUsageId;
extern const uint32_t SimulatedHand_UpdateState_m40161D069FD52829F19691128A617608F37CF3D3_MetadataUsageId;
extern const uint32_t SimulatedHand__cctor_m1BF0027BF427C60AD3073973916B9AEAB40EE14C_MetadataUsageId;
extern const uint32_t SimulatedHand__ctor_m8C3FC7C2B7496A32E014232A26201192E827D803_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m9D102086429130390E2CCA06B1632598A17A8EB2_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct MouseButtonU5BU5D_t14C6EC4510926DD3FA9CAFA4757AA63EF63D3361;
struct MixedRealityGestureMappingU5BU5D_tACABC5B25A2CC3286D152A57F4EED7194845E0AA;
struct MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379;
struct MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F;
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


#ifndef U3CMODULEU3E_TE524FFA14AB75C0995DC2A736FDF3B811479FF55_H
#define U3CMODULEU3E_TE524FFA14AB75C0995DC2A736FDF3B811479FF55_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE524FFA14AB75C0995DC2A736FDF3B811479FF55 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TE524FFA14AB75C0995DC2A736FDF3B811479FF55_H
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
#ifndef U3CU3EC__DISPLAYCLASS5_0_TD98ECAEC49D61FCB7B505A2838D208DD57B31D9D_H
#define U3CU3EC__DISPLAYCLASS5_0_TD98ECAEC49D61FCB7B505A2838D208DD57B31D9D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::names
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___names_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_names_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D, ___names_0)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_names_0() const { return ___names_0; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_names_0() { return &___names_0; }
	inline void set_names_0(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___names_0 = value;
		Il2CppCodeGenWriteBarrier((&___names_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS5_0_TD98ECAEC49D61FCB7B505A2838D208DD57B31D9D_H
#ifndef KEYINPUTSYSTEM_TBF74E5907BFCACA647DCF7199433EB4CBD4A7EE9_H
#define KEYINPUTSYSTEM_TBF74E5907BFCACA647DCF7199433EB4CBD4A7EE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.KeyInputSystem
struct  KeyInputSystem_tBF74E5907BFCACA647DCF7199433EB4CBD4A7EE9  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYINPUTSYSTEM_TBF74E5907BFCACA647DCF7199433EB4CBD4A7EE9_H
#ifndef SIMULATEDHANDDATA_TADEEECB947181E040DFF54C89F97361F9082566B_H
#define SIMULATEDHANDDATA_TADEEECB947181E040DFF54C89F97361F9082566B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData
struct  SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::isTracked
	bool ___isTracked_1;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::joints
	MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* ___joints_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::isPinching
	bool ___isPinching_3;

public:
	inline static int32_t get_offset_of_isTracked_1() { return static_cast<int32_t>(offsetof(SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B, ___isTracked_1)); }
	inline bool get_isTracked_1() const { return ___isTracked_1; }
	inline bool* get_address_of_isTracked_1() { return &___isTracked_1; }
	inline void set_isTracked_1(bool value)
	{
		___isTracked_1 = value;
	}

	inline static int32_t get_offset_of_joints_2() { return static_cast<int32_t>(offsetof(SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B, ___joints_2)); }
	inline MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* get_joints_2() const { return ___joints_2; }
	inline MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA** get_address_of_joints_2() { return &___joints_2; }
	inline void set_joints_2(MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* value)
	{
		___joints_2 = value;
		Il2CppCodeGenWriteBarrier((&___joints_2), value);
	}

	inline static int32_t get_offset_of_isPinching_3() { return static_cast<int32_t>(offsetof(SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B, ___isPinching_3)); }
	inline bool get_isPinching_3() const { return ___isPinching_3; }
	inline bool* get_address_of_isPinching_3() { return &___isPinching_3; }
	inline void set_isPinching_3(bool value)
	{
		___isPinching_3 = value;
	}
};

struct SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDHANDDATA_TADEEECB947181E040DFF54C89F97361F9082566B_H
#ifndef SIMULATEDHANDUTILS_TCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762_H
#define SIMULATEDHANDUTILS_TCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils
struct  SimulatedHandUtils_tCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762  : public RuntimeObject
{
public:

public:
};

struct SimulatedHandUtils_tCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::jointCount
	int32_t ___jointCount_0;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(SimulatedHandUtils_tCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDHANDUTILS_TCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762_H
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
#ifndef DICTIONARY_2_TA034E2E8F152D6364476C8F480B88A7E107A0AF3_H
#define DICTIONARY_2_TA034E2E8F152D6364476C8F480B88A7E107A0AF3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct  Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t137217C94D8CD3EB5BACDBB8DD2C7C3F7DDB8DEA* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t102E3D1C13E776552F232C7BAB847639B3A7CC4A * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7E74F88627F2A65F5D6F2CA700E0BC2DC3941776 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___entries_1)); }
	inline EntryU5BU5D_t137217C94D8CD3EB5BACDBB8DD2C7C3F7DDB8DEA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t137217C94D8CD3EB5BACDBB8DD2C7C3F7DDB8DEA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t137217C94D8CD3EB5BACDBB8DD2C7C3F7DDB8DEA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___keys_7)); }
	inline KeyCollection_t102E3D1C13E776552F232C7BAB847639B3A7CC4A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t102E3D1C13E776552F232C7BAB847639B3A7CC4A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t102E3D1C13E776552F232C7BAB847639B3A7CC4A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___values_8)); }
	inline ValueCollection_t7E74F88627F2A65F5D6F2CA700E0BC2DC3941776 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7E74F88627F2A65F5D6F2CA700E0BC2DC3941776 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7E74F88627F2A65F5D6F2CA700E0BC2DC3941776 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TA034E2E8F152D6364476C8F480B88A7E107A0AF3_H
#ifndef DICTIONARY_2_T9D7C731D29E782E90EFDA440E0343041E1FDE746_H
#define DICTIONARY_2_T9D7C731D29E782E90EFDA440E0343041E1FDE746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>>
struct  Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3CBD88F0B1B9C839CEF984EC5D6B7FAFEFCE569D* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t50B5EF6005EB67ABED1D8502F50D40A4AE3D2E7A * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tADDB9524918904C268248A6BFDE104D7043D1AE8 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746, ___entries_1)); }
	inline EntryU5BU5D_t3CBD88F0B1B9C839CEF984EC5D6B7FAFEFCE569D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3CBD88F0B1B9C839CEF984EC5D6B7FAFEFCE569D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3CBD88F0B1B9C839CEF984EC5D6B7FAFEFCE569D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746, ___keys_7)); }
	inline KeyCollection_t50B5EF6005EB67ABED1D8502F50D40A4AE3D2E7A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t50B5EF6005EB67ABED1D8502F50D40A4AE3D2E7A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t50B5EF6005EB67ABED1D8502F50D40A4AE3D2E7A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746, ___values_8)); }
	inline ValueCollection_tADDB9524918904C268248A6BFDE104D7043D1AE8 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tADDB9524918904C268248A6BFDE104D7043D1AE8 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tADDB9524918904C268248A6BFDE104D7043D1AE8 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T9D7C731D29E782E90EFDA440E0343041E1FDE746_H
#ifndef DICTIONARY_2_T9D794908D80E123F18CE843F67B1F3C4584FD500_H
#define DICTIONARY_2_T9D794908D80E123F18CE843F67B1F3C4584FD500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>,System.Int32>
struct  Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD6E6322910234A954E771E0DF3752DEC9CC14403* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t11F6D4BC56130B975ADAC346C2137993716065F4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCC6591841FD4A4A2A43AD80F6733241F96000F75 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500, ___entries_1)); }
	inline EntryU5BU5D_tD6E6322910234A954E771E0DF3752DEC9CC14403* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD6E6322910234A954E771E0DF3752DEC9CC14403** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD6E6322910234A954E771E0DF3752DEC9CC14403* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500, ___keys_7)); }
	inline KeyCollection_t11F6D4BC56130B975ADAC346C2137993716065F4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t11F6D4BC56130B975ADAC346C2137993716065F4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t11F6D4BC56130B975ADAC346C2137993716065F4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500, ___values_8)); }
	inline ValueCollection_tCC6591841FD4A4A2A43AD80F6733241F96000F75 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCC6591841FD4A4A2A43AD80F6733241F96000F75 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCC6591841FD4A4A2A43AD80F6733241F96000F75 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T9D794908D80E123F18CE843F67B1F3C4584FD500_H
#ifndef LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#define LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TE8032E48C661C350FF9550E9063D595C0AB25CD3_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D20_T1AF9E8D6C05B439FBFD680CA624960F851D6ED50_H
#define __STATICARRAYINITTYPESIZEU3D20_T1AF9E8D6C05B439FBFD680CA624960F851D6ED50_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20
struct  __StaticArrayInitTypeSizeU3D20_t1AF9E8D6C05B439FBFD680CA624960F851D6ED50 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t1AF9E8D6C05B439FBFD680CA624960F851D6ED50__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D20_T1AF9E8D6C05B439FBFD680CA624960F851D6ED50_H
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
#ifndef NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#define NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
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
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T25BC860F7304EF534C1885BF63F52330F1DA6BF6_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T25BC860F7304EF534C1885BF63F52330F1DA6BF6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t25BC860F7304EF534C1885BF63F52330F1DA6BF6  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t25BC860F7304EF534C1885BF63F52330F1DA6BF6_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20 <PrivateImplementationDetails>::6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED
	__StaticArrayInitTypeSizeU3D20_t1AF9E8D6C05B439FBFD680CA624960F851D6ED50  ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0;

public:
	inline static int32_t get_offset_of_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t25BC860F7304EF534C1885BF63F52330F1DA6BF6_StaticFields, ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0)); }
	inline __StaticArrayInitTypeSizeU3D20_t1AF9E8D6C05B439FBFD680CA624960F851D6ED50  get_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() const { return ___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0; }
	inline __StaticArrayInitTypeSizeU3D20_t1AF9E8D6C05B439FBFD680CA624960F851D6ED50 * get_address_of_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0() { return &___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0; }
	inline void set_U36AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0(__StaticArrayInitTypeSizeU3D20_t1AF9E8D6C05B439FBFD680CA624960F851D6ED50  value)
	{
		___6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T25BC860F7304EF534C1885BF63F52330F1DA6BF6_H
#ifndef DEVICEINPUTTYPE_TB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E_H
#define DEVICEINPUTTYPE_TB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct  DeviceInputType_tB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_tB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E, ___value___2)); }
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
#endif // DEVICEINPUTTYPE_TB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E_H
#ifndef GESTUREINPUTTYPE_T5B1B9E20C9EA9B3E4567F60E93B3D468F29CF237_H
#define GESTUREINPUTTYPE_T5B1B9E20C9EA9B3E4567F60E93B3D468F29CF237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.GestureInputType
struct  GestureInputType_t5B1B9E20C9EA9B3E4567F60E93B3D468F29CF237 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.GestureInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureInputType_t5B1B9E20C9EA9B3E4567F60E93B3D468F29CF237, ___value___2)); }
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
#endif // GESTUREINPUTTYPE_T5B1B9E20C9EA9B3E4567F60E93B3D468F29CF237_H
#ifndef HANDSIMULATIONMODE_T3E8910E1199345C59E6E865BF4746148E739B504_H
#define HANDSIMULATIONMODE_T3E8910E1199345C59E6E865BF4746148E739B504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode
struct  HandSimulationMode_t3E8910E1199345C59E6E865BF4746148E739B504 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.HandSimulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandSimulationMode_t3E8910E1199345C59E6E865BF4746148E739B504, ___value___2)); }
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
#endif // HANDSIMULATIONMODE_T3E8910E1199345C59E6E865BF4746148E739B504_H
#ifndef INPUTSIMULATIONCONTROLMODE_T5E5A0C6747EEEDB4C38CF828B50E3C41B6E359C3_H
#define INPUTSIMULATIONCONTROLMODE_T5E5A0C6747EEEDB4C38CF828B50E3C41B6E359C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode
struct  InputSimulationControlMode_t5E5A0C6747EEEDB4C38CF828B50E3C41B6E359C3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSimulationControlMode_t5E5A0C6747EEEDB4C38CF828B50E3C41B6E359C3, ___value___2)); }
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
#endif // INPUTSIMULATIONCONTROLMODE_T5E5A0C6747EEEDB4C38CF828B50E3C41B6E359C3_H
#ifndef KEYTYPE_TF5A78BC09383A2ED02EED8E2F3CA2F3445018F58_H
#define KEYTYPE_TF5A78BC09383A2ED02EED8E2F3CA2F3445018F58_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType
struct  KeyType_tF5A78BC09383A2ED02EED8E2F3CA2F3445018F58 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyType_tF5A78BC09383A2ED02EED8E2F3CA2F3445018F58, ___value___2)); }
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
#endif // KEYTYPE_TF5A78BC09383A2ED02EED8E2F3CA2F3445018F58_H
#ifndef MOUSEBUTTON_T637324A94BEA705710DF895A72C46D4623AEBC79_H
#define MOUSEBUTTON_T637324A94BEA705710DF895A72C46D4623AEBC79_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton
struct  MouseButton_t637324A94BEA705710DF895A72C46D4623AEBC79 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MouseButton_t637324A94BEA705710DF895A72C46D4623AEBC79, ___value___2)); }
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
#endif // MOUSEBUTTON_T637324A94BEA705710DF895A72C46D4623AEBC79_H
#ifndef TRACKINGSTATE_TD0332F2AFF8035708A8141F7EFEF682A6F8D7B98_H
#define TRACKINGSTATE_TD0332F2AFF8035708A8141F7EFEF682A6F8D7B98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.TrackingState
struct  TrackingState_tD0332F2AFF8035708A8141F7EFEF682A6F8D7B98 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tD0332F2AFF8035708A8141F7EFEF682A6F8D7B98, ___value___2)); }
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
#endif // TRACKINGSTATE_TD0332F2AFF8035708A8141F7EFEF682A6F8D7B98_H
#ifndef GESTUREID_TC5726A1088EDD365E45F9071C2DC967829749CAD_H
#define GESTUREID_TC5726A1088EDD365E45F9071C2DC967829749CAD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId
struct  GestureId_tC5726A1088EDD365E45F9071C2DC967829749CAD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureId_tC5726A1088EDD365E45F9071C2DC967829749CAD, ___value___2)); }
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
#endif // GESTUREID_TC5726A1088EDD365E45F9071C2DC967829749CAD_H
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
#ifndef AXISTYPE_TB81D0BD797A06C1EC90AB774C86C9B50F9787A3F_H
#define AXISTYPE_TB81D0BD797A06C1EC90AB774C86C9B50F9787A3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F, ___value___2)); }
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
#endif // AXISTYPE_TB81D0BD797A06C1EC90AB774C86C9B50F9787A3F_H
#ifndef HANDEDNESS_TC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_H
#define HANDEDNESS_TC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDEDNESS_TC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00_H
#ifndef MIXEDREALITYPOSE_T244D55491B07E2511AF67FE856B430109C716148_H
#define MIXEDREALITYPOSE_T244D55491B07E2511AF67FE856B430109C716148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYPOSE_T244D55491B07E2511AF67FE856B430109C716148_H
#ifndef TRACKEDHANDJOINT_TF44A8730AA131ACE1D217F560801A72245D48648_H
#define TRACKEDHANDJOINT_TF44A8730AA131ACE1D217F560801A72245D48648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648, ___value___2)); }
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
#endif // TRACKEDHANDJOINT_TF44A8730AA131ACE1D217F560801A72245D48648_H
#ifndef WINDOWSGESTURESETTINGS_T293FD6FA3A0AE208AD0F138337865D636815484D_H
#define WINDOWSGESTURESETTINGS_T293FD6FA3A0AE208AD0F138337865D636815484D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings
struct  WindowsGestureSettings_t293FD6FA3A0AE208AD0F138337865D636815484D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindowsGestureSettings_t293FD6FA3A0AE208AD0F138337865D636815484D, ___value___2)); }
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
#endif // WINDOWSGESTURESETTINGS_T293FD6FA3A0AE208AD0F138337865D636815484D_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
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
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
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
#ifndef RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#define RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T844BDF00E8E6FE69D9AEAA7657F09018B864F4EF_H
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
#ifndef KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#define KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
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
#endif // KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
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
#ifndef RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#define RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifndef BASECONTROLLER_TF65634423B3DF3D4318A0B17E0270CA70DA5F00E_H
#define BASECONTROLLER_TF65634423B3DF3D4318A0B17E0270CA70DA5F00E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.BaseController
struct  BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___U3CDefaultInteractionsU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultLeftHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<DefaultRightHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___U3CInteractionsU3Ek__BackingField_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CAngularVelocityU3Ek__BackingField_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CVelocityU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CDefaultInteractionsU3Ek__BackingField_0)); }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* get_U3CDefaultInteractionsU3Ek__BackingField_0() const { return ___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return &___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_0(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultInteractionsU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1)); }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* get_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() const { return ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379** get_address_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return &___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline void set_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* value)
	{
		___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2)); }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* get_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() const { return ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379** get_address_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return &___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline void set_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* value)
	{
		___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CEnabledU3Ek__BackingField_3)); }
	inline bool get_U3CEnabledU3Ek__BackingField_3() const { return ___U3CEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_3() { return &___U3CEnabledU3Ek__BackingField_3; }
	inline void set_U3CEnabledU3Ek__BackingField_3(bool value)
	{
		___U3CEnabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CTrackingStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_4() const { return ___U3CTrackingStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_4() { return &___U3CTrackingStateU3Ek__BackingField_4; }
	inline void set_U3CTrackingStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CControllerHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_5() const { return ___U3CControllerHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_5() { return &___U3CControllerHandednessU3Ek__BackingField_5; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CInputSourceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_6() const { return ___U3CInputSourceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_6() { return &___U3CInputSourceU3Ek__BackingField_6; }
	inline void set_U3CInputSourceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CVisualizerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_7() const { return ___U3CVisualizerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_7() { return &___U3CVisualizerU3Ek__BackingField_7; }
	inline void set_U3CVisualizerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVisualizerU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CIsPositionAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_8() const { return ___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return &___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CIsPositionApproximateU3Ek__BackingField_9)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_9() const { return ___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return &___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_9(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CIsRotationAvailableU3Ek__BackingField_10)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_10() const { return ___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return &___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_10(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CInteractionsU3Ek__BackingField_11)); }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* get_U3CInteractionsU3Ek__BackingField_11() const { return ___U3CInteractionsU3Ek__BackingField_11; }
	inline MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379** get_address_of_U3CInteractionsU3Ek__BackingField_11() { return &___U3CInteractionsU3Ek__BackingField_11; }
	inline void set_U3CInteractionsU3Ek__BackingField_11(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* value)
	{
		___U3CInteractionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInteractionsU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CAngularVelocityU3Ek__BackingField_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CAngularVelocityU3Ek__BackingField_12() const { return ___U3CAngularVelocityU3Ek__BackingField_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CAngularVelocityU3Ek__BackingField_12() { return &___U3CAngularVelocityU3Ek__BackingField_12; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E, ___U3CVelocityU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CVelocityU3Ek__BackingField_13() const { return ___U3CVelocityU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CVelocityU3Ek__BackingField_13() { return &___U3CVelocityU3Ek__BackingField_13; }
	inline void set_U3CVelocityU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CVelocityU3Ek__BackingField_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECONTROLLER_TF65634423B3DF3D4318A0B17E0270CA70DA5F00E_H
#ifndef HANDRAY_T70420D5B9875B79EEBDC064812C068B78EF095CF_H
#define HANDRAY_T70420D5B9875B79EEBDC064812C068B78EF095CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.HandRay
struct  HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF  : public RuntimeObject
{
public:
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.HandRay::ray
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray_0;
	// System.Single Microsoft.MixedReality.Toolkit.Input.HandRay::CursorBeamBackwardTolerance
	float ___CursorBeamBackwardTolerance_10;
	// System.Single Microsoft.MixedReality.Toolkit.Input.HandRay::CursorBeamUpTolerance
	float ___CursorBeamUpTolerance_11;
	// Microsoft.MixedReality.Toolkit.Input.StabilizedRay Microsoft.MixedReality.Toolkit.Input.HandRay::stabilizedRay
	StabilizedRay_t4F09BCC321C03AB46E3188D5E59237E44878D99F * ___stabilizedRay_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandRay::palmNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___palmNormal_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandRay::headForward
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___headForward_15;

public:
	inline static int32_t get_offset_of_ray_0() { return static_cast<int32_t>(offsetof(HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF, ___ray_0)); }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  get_ray_0() const { return ___ray_0; }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * get_address_of_ray_0() { return &___ray_0; }
	inline void set_ray_0(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  value)
	{
		___ray_0 = value;
	}

	inline static int32_t get_offset_of_CursorBeamBackwardTolerance_10() { return static_cast<int32_t>(offsetof(HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF, ___CursorBeamBackwardTolerance_10)); }
	inline float get_CursorBeamBackwardTolerance_10() const { return ___CursorBeamBackwardTolerance_10; }
	inline float* get_address_of_CursorBeamBackwardTolerance_10() { return &___CursorBeamBackwardTolerance_10; }
	inline void set_CursorBeamBackwardTolerance_10(float value)
	{
		___CursorBeamBackwardTolerance_10 = value;
	}

	inline static int32_t get_offset_of_CursorBeamUpTolerance_11() { return static_cast<int32_t>(offsetof(HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF, ___CursorBeamUpTolerance_11)); }
	inline float get_CursorBeamUpTolerance_11() const { return ___CursorBeamUpTolerance_11; }
	inline float* get_address_of_CursorBeamUpTolerance_11() { return &___CursorBeamUpTolerance_11; }
	inline void set_CursorBeamUpTolerance_11(float value)
	{
		___CursorBeamUpTolerance_11 = value;
	}

	inline static int32_t get_offset_of_stabilizedRay_13() { return static_cast<int32_t>(offsetof(HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF, ___stabilizedRay_13)); }
	inline StabilizedRay_t4F09BCC321C03AB46E3188D5E59237E44878D99F * get_stabilizedRay_13() const { return ___stabilizedRay_13; }
	inline StabilizedRay_t4F09BCC321C03AB46E3188D5E59237E44878D99F ** get_address_of_stabilizedRay_13() { return &___stabilizedRay_13; }
	inline void set_stabilizedRay_13(StabilizedRay_t4F09BCC321C03AB46E3188D5E59237E44878D99F * value)
	{
		___stabilizedRay_13 = value;
		Il2CppCodeGenWriteBarrier((&___stabilizedRay_13), value);
	}

	inline static int32_t get_offset_of_palmNormal_14() { return static_cast<int32_t>(offsetof(HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF, ___palmNormal_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_palmNormal_14() const { return ___palmNormal_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_palmNormal_14() { return &___palmNormal_14; }
	inline void set_palmNormal_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___palmNormal_14 = value;
	}

	inline static int32_t get_offset_of_headForward_15() { return static_cast<int32_t>(offsetof(HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF, ___headForward_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_headForward_15() const { return ___headForward_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_headForward_15() { return &___headForward_15; }
	inline void set_headForward_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___headForward_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDRAY_T70420D5B9875B79EEBDC064812C068B78EF095CF_H
#ifndef KEYBINDING_TDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_H
#define KEYBINDING_TDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.KeyBinding
struct  KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 
{
public:
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType Microsoft.MixedReality.Toolkit.Input.KeyBinding::bindingType
	int32_t ___bindingType_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.KeyBinding::code
	int32_t ___code_4;

public:
	inline static int32_t get_offset_of_bindingType_3() { return static_cast<int32_t>(offsetof(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65, ___bindingType_3)); }
	inline int32_t get_bindingType_3() const { return ___bindingType_3; }
	inline int32_t* get_address_of_bindingType_3() { return &___bindingType_3; }
	inline void set_bindingType_3(int32_t value)
	{
		___bindingType_3 = value;
	}

	inline static int32_t get_offset_of_code_4() { return static_cast<int32_t>(offsetof(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65, ___code_4)); }
	inline int32_t get_code_4() const { return ___code_4; }
	inline int32_t* get_address_of_code_4() { return &___code_4; }
	inline void set_code_4(int32_t value)
	{
		___code_4 = value;
	}
};

struct KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_StaticFields
{
public:
	// System.String[] Microsoft.MixedReality.Toolkit.Input.KeyBinding::AllCodeNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___AllCodeNames_0;
	// System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>,System.Int32> Microsoft.MixedReality.Toolkit.Input.KeyBinding::KeyBindingToEnumMap
	Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500 * ___KeyBindingToEnumMap_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>> Microsoft.MixedReality.Toolkit.Input.KeyBinding::EnumToKeyBindingMap
	Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746 * ___EnumToKeyBindingMap_2;

public:
	inline static int32_t get_offset_of_AllCodeNames_0() { return static_cast<int32_t>(offsetof(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_StaticFields, ___AllCodeNames_0)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_AllCodeNames_0() const { return ___AllCodeNames_0; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_AllCodeNames_0() { return &___AllCodeNames_0; }
	inline void set_AllCodeNames_0(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___AllCodeNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___AllCodeNames_0), value);
	}

	inline static int32_t get_offset_of_KeyBindingToEnumMap_1() { return static_cast<int32_t>(offsetof(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_StaticFields, ___KeyBindingToEnumMap_1)); }
	inline Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500 * get_KeyBindingToEnumMap_1() const { return ___KeyBindingToEnumMap_1; }
	inline Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500 ** get_address_of_KeyBindingToEnumMap_1() { return &___KeyBindingToEnumMap_1; }
	inline void set_KeyBindingToEnumMap_1(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500 * value)
	{
		___KeyBindingToEnumMap_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyBindingToEnumMap_1), value);
	}

	inline static int32_t get_offset_of_EnumToKeyBindingMap_2() { return static_cast<int32_t>(offsetof(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_StaticFields, ___EnumToKeyBindingMap_2)); }
	inline Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746 * get_EnumToKeyBindingMap_2() const { return ___EnumToKeyBindingMap_2; }
	inline Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746 ** get_address_of_EnumToKeyBindingMap_2() { return &___EnumToKeyBindingMap_2; }
	inline void set_EnumToKeyBindingMap_2(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746 * value)
	{
		___EnumToKeyBindingMap_2 = value;
		Il2CppCodeGenWriteBarrier((&___EnumToKeyBindingMap_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBINDING_TDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_H
#ifndef MIXEDREALITYINPUTACTION_T6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_H
#define MIXEDREALITYINPUTACTION_T6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};
#endif // MIXEDREALITYINPUTACTION_T6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TUPLE_2_TF80B4F510194CE2279F1D8301A4350F4EA85C61C_H
#define TUPLE_2_TF80B4F510194CE2279F1D8301A4350F4EA85C61C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>
struct  Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	int32_t ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C, ___m_Item1_0)); }
	inline int32_t get_m_Item1_0() const { return ___m_Item1_0; }
	inline int32_t* get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(int32_t value)
	{
		___m_Item1_0 = value;
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C, ___m_Item2_1)); }
	inline int32_t get_m_Item2_1() const { return ___m_Item2_1; }
	inline int32_t* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(int32_t value)
	{
		___m_Item2_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_2_TF80B4F510194CE2279F1D8301A4350F4EA85C61C_H
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
#ifndef BASEHAND_T82184960FA20C0E20AF3B6A5993362A178E2686D_H
#define BASEHAND_T82184960FA20C0E20AF3B6A5993362A178E2686D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.BaseHand
struct  BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D  : public BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E
{
public:
	// Microsoft.MixedReality.Toolkit.Input.HandRay Microsoft.MixedReality.Toolkit.Input.BaseHand::<HandRay>k__BackingField
	HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF * ___U3CHandRayU3Ek__BackingField_14;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseHand::deltaTimeStart
	float ___deltaTimeStart_15;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.BaseHand::frameOn
	int32_t ___frameOn_17;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityPositionsCache
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___velocityPositionsCache_18;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityNormalsCache
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___velocityNormalsCache_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityPositionsSum
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocityPositionsSum_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::velocityNormalsSum
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocityNormalsSum_21;

public:
	inline static int32_t get_offset_of_U3CHandRayU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D, ___U3CHandRayU3Ek__BackingField_14)); }
	inline HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF * get_U3CHandRayU3Ek__BackingField_14() const { return ___U3CHandRayU3Ek__BackingField_14; }
	inline HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF ** get_address_of_U3CHandRayU3Ek__BackingField_14() { return &___U3CHandRayU3Ek__BackingField_14; }
	inline void set_U3CHandRayU3Ek__BackingField_14(HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF * value)
	{
		___U3CHandRayU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHandRayU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_deltaTimeStart_15() { return static_cast<int32_t>(offsetof(BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D, ___deltaTimeStart_15)); }
	inline float get_deltaTimeStart_15() const { return ___deltaTimeStart_15; }
	inline float* get_address_of_deltaTimeStart_15() { return &___deltaTimeStart_15; }
	inline void set_deltaTimeStart_15(float value)
	{
		___deltaTimeStart_15 = value;
	}

	inline static int32_t get_offset_of_frameOn_17() { return static_cast<int32_t>(offsetof(BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D, ___frameOn_17)); }
	inline int32_t get_frameOn_17() const { return ___frameOn_17; }
	inline int32_t* get_address_of_frameOn_17() { return &___frameOn_17; }
	inline void set_frameOn_17(int32_t value)
	{
		___frameOn_17 = value;
	}

	inline static int32_t get_offset_of_velocityPositionsCache_18() { return static_cast<int32_t>(offsetof(BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D, ___velocityPositionsCache_18)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_velocityPositionsCache_18() const { return ___velocityPositionsCache_18; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_velocityPositionsCache_18() { return &___velocityPositionsCache_18; }
	inline void set_velocityPositionsCache_18(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___velocityPositionsCache_18 = value;
		Il2CppCodeGenWriteBarrier((&___velocityPositionsCache_18), value);
	}

	inline static int32_t get_offset_of_velocityNormalsCache_19() { return static_cast<int32_t>(offsetof(BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D, ___velocityNormalsCache_19)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_velocityNormalsCache_19() const { return ___velocityNormalsCache_19; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_velocityNormalsCache_19() { return &___velocityNormalsCache_19; }
	inline void set_velocityNormalsCache_19(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___velocityNormalsCache_19 = value;
		Il2CppCodeGenWriteBarrier((&___velocityNormalsCache_19), value);
	}

	inline static int32_t get_offset_of_velocityPositionsSum_20() { return static_cast<int32_t>(offsetof(BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D, ___velocityPositionsSum_20)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocityPositionsSum_20() const { return ___velocityPositionsSum_20; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocityPositionsSum_20() { return &___velocityPositionsSum_20; }
	inline void set_velocityPositionsSum_20(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocityPositionsSum_20 = value;
	}

	inline static int32_t get_offset_of_velocityNormalsSum_21() { return static_cast<int32_t>(offsetof(BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D, ___velocityNormalsSum_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocityNormalsSum_21() const { return ___velocityNormalsSum_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocityNormalsSum_21() { return &___velocityNormalsSum_21; }
	inline void set_velocityNormalsSum_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocityNormalsSum_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEHAND_T82184960FA20C0E20AF3B6A5993362A178E2686D_H
#ifndef MIXEDREALITYGESTUREMAPPING_T613348C514CC0BC34F3D5FCCC4549E9C69FBE70B_H
#define MIXEDREALITYGESTUREMAPPING_T613348C514CC0BC34F3D5FCCC4549E9C69FBE70B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct  MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::description
	String_t* ___description_0;
	// Microsoft.MixedReality.Toolkit.Input.GestureInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::gestureType
	int32_t ___gestureType_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::action
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___action_2;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier((&___description_0), value);
	}

	inline static int32_t get_offset_of_gestureType_1() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B, ___gestureType_1)); }
	inline int32_t get_gestureType_1() const { return ___gestureType_1; }
	inline int32_t* get_address_of_gestureType_1() { return &___gestureType_1; }
	inline void set_gestureType_1(int32_t value)
	{
		___gestureType_1 = value;
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B, ___action_2)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_action_2() const { return ___action_2; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___action_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B_marshaled_pinvoke
{
	char* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_pinvoke ___action_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B_marshaled_com
{
	Il2CppChar* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_com ___action_2;
};
#endif // MIXEDREALITYGESTUREMAPPING_T613348C514CC0BC34F3D5FCCC4549E9C69FBE70B_H
#ifndef MIXEDREALITYINTERACTIONMAPPING_TBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_H
#define MIXEDREALITYINTERACTIONMAPPING_TBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct  MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___inputAction_4)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___inputAction_4 = value;
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((&___axisCodeX_6), value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((&___axisCodeY_7), value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((&___rawData_11), value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___poseData_17)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___poseData_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYINTERACTIONMAPPING_TBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_H
#ifndef HANDJOINTDATAGENERATOR_TE04953526CC42763EDBBB8F8D14871BB5D0906FA_H
#define HANDJOINTDATAGENERATOR_TE04953526CC42763EDBBB8F8D14871BB5D0906FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator
struct  HandJointDataGenerator_tE04953526CC42763EDBBB8F8D14871BB5D0906FA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDJOINTDATAGENERATOR_TE04953526CC42763EDBBB8F8D14871BB5D0906FA_H
#ifndef ACTION_2_T40E3C718E230992FB7EDD23A424C1EEF378F21FD_H
#define ACTION_2_T40E3C718E230992FB7EDD23A424C1EEF378F21FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32>
struct  Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T40E3C718E230992FB7EDD23A424C1EEF378F21FD_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
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
#ifndef MIXEDREALITYGESTURESPROFILE_T147529064CC588D70B66A84E1D371EC07B88BC34_H
#define MIXEDREALITYGESTURESPROFILE_T147529064CC588D70B66A84E1D371EC07B88BC34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct  MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::manipulationGestures
	int32_t ___manipulationGestures_5;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::navigationGestures
	int32_t ___navigationGestures_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::useRailsNavigation
	bool ___useRailsNavigation_7;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::railsNavigationGestures
	int32_t ___railsNavigationGestures_8;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::windowsGestureAutoStart
	int32_t ___windowsGestureAutoStart_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[] Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::gestures
	MixedRealityGestureMappingU5BU5D_tACABC5B25A2CC3286D152A57F4EED7194845E0AA* ___gestures_10;

public:
	inline static int32_t get_offset_of_manipulationGestures_5() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34, ___manipulationGestures_5)); }
	inline int32_t get_manipulationGestures_5() const { return ___manipulationGestures_5; }
	inline int32_t* get_address_of_manipulationGestures_5() { return &___manipulationGestures_5; }
	inline void set_manipulationGestures_5(int32_t value)
	{
		___manipulationGestures_5 = value;
	}

	inline static int32_t get_offset_of_navigationGestures_6() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34, ___navigationGestures_6)); }
	inline int32_t get_navigationGestures_6() const { return ___navigationGestures_6; }
	inline int32_t* get_address_of_navigationGestures_6() { return &___navigationGestures_6; }
	inline void set_navigationGestures_6(int32_t value)
	{
		___navigationGestures_6 = value;
	}

	inline static int32_t get_offset_of_useRailsNavigation_7() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34, ___useRailsNavigation_7)); }
	inline bool get_useRailsNavigation_7() const { return ___useRailsNavigation_7; }
	inline bool* get_address_of_useRailsNavigation_7() { return &___useRailsNavigation_7; }
	inline void set_useRailsNavigation_7(bool value)
	{
		___useRailsNavigation_7 = value;
	}

	inline static int32_t get_offset_of_railsNavigationGestures_8() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34, ___railsNavigationGestures_8)); }
	inline int32_t get_railsNavigationGestures_8() const { return ___railsNavigationGestures_8; }
	inline int32_t* get_address_of_railsNavigationGestures_8() { return &___railsNavigationGestures_8; }
	inline void set_railsNavigationGestures_8(int32_t value)
	{
		___railsNavigationGestures_8 = value;
	}

	inline static int32_t get_offset_of_windowsGestureAutoStart_9() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34, ___windowsGestureAutoStart_9)); }
	inline int32_t get_windowsGestureAutoStart_9() const { return ___windowsGestureAutoStart_9; }
	inline int32_t* get_address_of_windowsGestureAutoStart_9() { return &___windowsGestureAutoStart_9; }
	inline void set_windowsGestureAutoStart_9(int32_t value)
	{
		___windowsGestureAutoStart_9 = value;
	}

	inline static int32_t get_offset_of_gestures_10() { return static_cast<int32_t>(offsetof(MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34, ___gestures_10)); }
	inline MixedRealityGestureMappingU5BU5D_tACABC5B25A2CC3286D152A57F4EED7194845E0AA* get_gestures_10() const { return ___gestures_10; }
	inline MixedRealityGestureMappingU5BU5D_tACABC5B25A2CC3286D152A57F4EED7194845E0AA** get_address_of_gestures_10() { return &___gestures_10; }
	inline void set_gestures_10(MixedRealityGestureMappingU5BU5D_tACABC5B25A2CC3286D152A57F4EED7194845E0AA* value)
	{
		___gestures_10 = value;
		Il2CppCodeGenWriteBarrier((&___gestures_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYGESTURESPROFILE_T147529064CC588D70B66A84E1D371EC07B88BC34_H
#ifndef MIXEDREALITYINPUTSIMULATIONPROFILE_T4D10781AAE77C07607694C5D539C7E02DA75EF2D_H
#define MIXEDREALITYINPUTSIMULATIONPROFILE_T4D10781AAE77C07607694C5D539C7E02DA75EF2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile
struct  MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::indicatorsPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___indicatorsPrefab_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseRotationSensitivity
	float ___mouseRotationSensitivity_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseX
	String_t* ___mouseX_7;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseY
	String_t* ___mouseY_8;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseScroll
	String_t* ___mouseScroll_9;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::doublePressTime
	float ___doublePressTime_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::isCameraControlEnabled
	bool ___isCameraControlEnabled_11;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseLookSpeed
	float ___mouseLookSpeed_12;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseLookButton
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  ___mouseLookButton_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseLookToggle
	bool ___mouseLookToggle_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::isControllerLookInverted
	bool ___isControllerLookInverted_15;
	// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::currentControlMode
	int32_t ___currentControlMode_16;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::fastControlKey
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  ___fastControlKey_17;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::controlSlowSpeed
	float ___controlSlowSpeed_18;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::controlFastSpeed
	float ___controlFastSpeed_19;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::moveHorizontal
	String_t* ___moveHorizontal_20;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::moveVertical
	String_t* ___moveVertical_21;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::moveUpDown
	String_t* ___moveUpDown_22;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::lookHorizontal
	String_t* ___lookHorizontal_23;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::lookVertical
	String_t* ___lookVertical_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::simulateEyePosition
	bool ___simulateEyePosition_25;
	// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultHandSimulationMode
	int32_t ___defaultHandSimulationMode_26;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::toggleLeftHandKey
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  ___toggleLeftHandKey_27;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::toggleRightHandKey
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  ___toggleRightHandKey_28;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handHideTimeout
	float ___handHideTimeout_29;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::leftHandManipulationKey
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  ___leftHandManipulationKey_30;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::rightHandManipulationKey
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  ___rightHandManipulationKey_31;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::mouseHandRotationSpeed
	float ___mouseHandRotationSpeed_32;
	// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handRotateButton
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  ___handRotateButton_33;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultHandGesture
	int32_t ___defaultHandGesture_34;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::leftMouseHandGesture
	int32_t ___leftMouseHandGesture_35;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::middleMouseHandGesture
	int32_t ___middleMouseHandGesture_36;
	// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::rightMouseHandGesture
	int32_t ___rightMouseHandGesture_37;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handGestureAnimationSpeed
	float ___handGestureAnimationSpeed_38;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::holdStartDuration
	float ___holdStartDuration_39;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::navigationStartThreshold
	float ___navigationStartThreshold_40;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::defaultHandDistance
	float ___defaultHandDistance_41;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handDepthMultiplier
	float ___handDepthMultiplier_42;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::handJitterAmount
	float ___handJitterAmount_43;

public:
	inline static int32_t get_offset_of_indicatorsPrefab_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___indicatorsPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_indicatorsPrefab_5() const { return ___indicatorsPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_indicatorsPrefab_5() { return &___indicatorsPrefab_5; }
	inline void set_indicatorsPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___indicatorsPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___indicatorsPrefab_5), value);
	}

	inline static int32_t get_offset_of_mouseRotationSensitivity_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___mouseRotationSensitivity_6)); }
	inline float get_mouseRotationSensitivity_6() const { return ___mouseRotationSensitivity_6; }
	inline float* get_address_of_mouseRotationSensitivity_6() { return &___mouseRotationSensitivity_6; }
	inline void set_mouseRotationSensitivity_6(float value)
	{
		___mouseRotationSensitivity_6 = value;
	}

	inline static int32_t get_offset_of_mouseX_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___mouseX_7)); }
	inline String_t* get_mouseX_7() const { return ___mouseX_7; }
	inline String_t** get_address_of_mouseX_7() { return &___mouseX_7; }
	inline void set_mouseX_7(String_t* value)
	{
		___mouseX_7 = value;
		Il2CppCodeGenWriteBarrier((&___mouseX_7), value);
	}

	inline static int32_t get_offset_of_mouseY_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___mouseY_8)); }
	inline String_t* get_mouseY_8() const { return ___mouseY_8; }
	inline String_t** get_address_of_mouseY_8() { return &___mouseY_8; }
	inline void set_mouseY_8(String_t* value)
	{
		___mouseY_8 = value;
		Il2CppCodeGenWriteBarrier((&___mouseY_8), value);
	}

	inline static int32_t get_offset_of_mouseScroll_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___mouseScroll_9)); }
	inline String_t* get_mouseScroll_9() const { return ___mouseScroll_9; }
	inline String_t** get_address_of_mouseScroll_9() { return &___mouseScroll_9; }
	inline void set_mouseScroll_9(String_t* value)
	{
		___mouseScroll_9 = value;
		Il2CppCodeGenWriteBarrier((&___mouseScroll_9), value);
	}

	inline static int32_t get_offset_of_doublePressTime_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___doublePressTime_10)); }
	inline float get_doublePressTime_10() const { return ___doublePressTime_10; }
	inline float* get_address_of_doublePressTime_10() { return &___doublePressTime_10; }
	inline void set_doublePressTime_10(float value)
	{
		___doublePressTime_10 = value;
	}

	inline static int32_t get_offset_of_isCameraControlEnabled_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___isCameraControlEnabled_11)); }
	inline bool get_isCameraControlEnabled_11() const { return ___isCameraControlEnabled_11; }
	inline bool* get_address_of_isCameraControlEnabled_11() { return &___isCameraControlEnabled_11; }
	inline void set_isCameraControlEnabled_11(bool value)
	{
		___isCameraControlEnabled_11 = value;
	}

	inline static int32_t get_offset_of_mouseLookSpeed_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___mouseLookSpeed_12)); }
	inline float get_mouseLookSpeed_12() const { return ___mouseLookSpeed_12; }
	inline float* get_address_of_mouseLookSpeed_12() { return &___mouseLookSpeed_12; }
	inline void set_mouseLookSpeed_12(float value)
	{
		___mouseLookSpeed_12 = value;
	}

	inline static int32_t get_offset_of_mouseLookButton_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___mouseLookButton_13)); }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  get_mouseLookButton_13() const { return ___mouseLookButton_13; }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * get_address_of_mouseLookButton_13() { return &___mouseLookButton_13; }
	inline void set_mouseLookButton_13(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  value)
	{
		___mouseLookButton_13 = value;
	}

	inline static int32_t get_offset_of_mouseLookToggle_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___mouseLookToggle_14)); }
	inline bool get_mouseLookToggle_14() const { return ___mouseLookToggle_14; }
	inline bool* get_address_of_mouseLookToggle_14() { return &___mouseLookToggle_14; }
	inline void set_mouseLookToggle_14(bool value)
	{
		___mouseLookToggle_14 = value;
	}

	inline static int32_t get_offset_of_isControllerLookInverted_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___isControllerLookInverted_15)); }
	inline bool get_isControllerLookInverted_15() const { return ___isControllerLookInverted_15; }
	inline bool* get_address_of_isControllerLookInverted_15() { return &___isControllerLookInverted_15; }
	inline void set_isControllerLookInverted_15(bool value)
	{
		___isControllerLookInverted_15 = value;
	}

	inline static int32_t get_offset_of_currentControlMode_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___currentControlMode_16)); }
	inline int32_t get_currentControlMode_16() const { return ___currentControlMode_16; }
	inline int32_t* get_address_of_currentControlMode_16() { return &___currentControlMode_16; }
	inline void set_currentControlMode_16(int32_t value)
	{
		___currentControlMode_16 = value;
	}

	inline static int32_t get_offset_of_fastControlKey_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___fastControlKey_17)); }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  get_fastControlKey_17() const { return ___fastControlKey_17; }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * get_address_of_fastControlKey_17() { return &___fastControlKey_17; }
	inline void set_fastControlKey_17(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  value)
	{
		___fastControlKey_17 = value;
	}

	inline static int32_t get_offset_of_controlSlowSpeed_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___controlSlowSpeed_18)); }
	inline float get_controlSlowSpeed_18() const { return ___controlSlowSpeed_18; }
	inline float* get_address_of_controlSlowSpeed_18() { return &___controlSlowSpeed_18; }
	inline void set_controlSlowSpeed_18(float value)
	{
		___controlSlowSpeed_18 = value;
	}

	inline static int32_t get_offset_of_controlFastSpeed_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___controlFastSpeed_19)); }
	inline float get_controlFastSpeed_19() const { return ___controlFastSpeed_19; }
	inline float* get_address_of_controlFastSpeed_19() { return &___controlFastSpeed_19; }
	inline void set_controlFastSpeed_19(float value)
	{
		___controlFastSpeed_19 = value;
	}

	inline static int32_t get_offset_of_moveHorizontal_20() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___moveHorizontal_20)); }
	inline String_t* get_moveHorizontal_20() const { return ___moveHorizontal_20; }
	inline String_t** get_address_of_moveHorizontal_20() { return &___moveHorizontal_20; }
	inline void set_moveHorizontal_20(String_t* value)
	{
		___moveHorizontal_20 = value;
		Il2CppCodeGenWriteBarrier((&___moveHorizontal_20), value);
	}

	inline static int32_t get_offset_of_moveVertical_21() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___moveVertical_21)); }
	inline String_t* get_moveVertical_21() const { return ___moveVertical_21; }
	inline String_t** get_address_of_moveVertical_21() { return &___moveVertical_21; }
	inline void set_moveVertical_21(String_t* value)
	{
		___moveVertical_21 = value;
		Il2CppCodeGenWriteBarrier((&___moveVertical_21), value);
	}

	inline static int32_t get_offset_of_moveUpDown_22() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___moveUpDown_22)); }
	inline String_t* get_moveUpDown_22() const { return ___moveUpDown_22; }
	inline String_t** get_address_of_moveUpDown_22() { return &___moveUpDown_22; }
	inline void set_moveUpDown_22(String_t* value)
	{
		___moveUpDown_22 = value;
		Il2CppCodeGenWriteBarrier((&___moveUpDown_22), value);
	}

	inline static int32_t get_offset_of_lookHorizontal_23() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___lookHorizontal_23)); }
	inline String_t* get_lookHorizontal_23() const { return ___lookHorizontal_23; }
	inline String_t** get_address_of_lookHorizontal_23() { return &___lookHorizontal_23; }
	inline void set_lookHorizontal_23(String_t* value)
	{
		___lookHorizontal_23 = value;
		Il2CppCodeGenWriteBarrier((&___lookHorizontal_23), value);
	}

	inline static int32_t get_offset_of_lookVertical_24() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___lookVertical_24)); }
	inline String_t* get_lookVertical_24() const { return ___lookVertical_24; }
	inline String_t** get_address_of_lookVertical_24() { return &___lookVertical_24; }
	inline void set_lookVertical_24(String_t* value)
	{
		___lookVertical_24 = value;
		Il2CppCodeGenWriteBarrier((&___lookVertical_24), value);
	}

	inline static int32_t get_offset_of_simulateEyePosition_25() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___simulateEyePosition_25)); }
	inline bool get_simulateEyePosition_25() const { return ___simulateEyePosition_25; }
	inline bool* get_address_of_simulateEyePosition_25() { return &___simulateEyePosition_25; }
	inline void set_simulateEyePosition_25(bool value)
	{
		___simulateEyePosition_25 = value;
	}

	inline static int32_t get_offset_of_defaultHandSimulationMode_26() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___defaultHandSimulationMode_26)); }
	inline int32_t get_defaultHandSimulationMode_26() const { return ___defaultHandSimulationMode_26; }
	inline int32_t* get_address_of_defaultHandSimulationMode_26() { return &___defaultHandSimulationMode_26; }
	inline void set_defaultHandSimulationMode_26(int32_t value)
	{
		___defaultHandSimulationMode_26 = value;
	}

	inline static int32_t get_offset_of_toggleLeftHandKey_27() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___toggleLeftHandKey_27)); }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  get_toggleLeftHandKey_27() const { return ___toggleLeftHandKey_27; }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * get_address_of_toggleLeftHandKey_27() { return &___toggleLeftHandKey_27; }
	inline void set_toggleLeftHandKey_27(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  value)
	{
		___toggleLeftHandKey_27 = value;
	}

	inline static int32_t get_offset_of_toggleRightHandKey_28() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___toggleRightHandKey_28)); }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  get_toggleRightHandKey_28() const { return ___toggleRightHandKey_28; }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * get_address_of_toggleRightHandKey_28() { return &___toggleRightHandKey_28; }
	inline void set_toggleRightHandKey_28(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  value)
	{
		___toggleRightHandKey_28 = value;
	}

	inline static int32_t get_offset_of_handHideTimeout_29() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___handHideTimeout_29)); }
	inline float get_handHideTimeout_29() const { return ___handHideTimeout_29; }
	inline float* get_address_of_handHideTimeout_29() { return &___handHideTimeout_29; }
	inline void set_handHideTimeout_29(float value)
	{
		___handHideTimeout_29 = value;
	}

	inline static int32_t get_offset_of_leftHandManipulationKey_30() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___leftHandManipulationKey_30)); }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  get_leftHandManipulationKey_30() const { return ___leftHandManipulationKey_30; }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * get_address_of_leftHandManipulationKey_30() { return &___leftHandManipulationKey_30; }
	inline void set_leftHandManipulationKey_30(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  value)
	{
		___leftHandManipulationKey_30 = value;
	}

	inline static int32_t get_offset_of_rightHandManipulationKey_31() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___rightHandManipulationKey_31)); }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  get_rightHandManipulationKey_31() const { return ___rightHandManipulationKey_31; }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * get_address_of_rightHandManipulationKey_31() { return &___rightHandManipulationKey_31; }
	inline void set_rightHandManipulationKey_31(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  value)
	{
		___rightHandManipulationKey_31 = value;
	}

	inline static int32_t get_offset_of_mouseHandRotationSpeed_32() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___mouseHandRotationSpeed_32)); }
	inline float get_mouseHandRotationSpeed_32() const { return ___mouseHandRotationSpeed_32; }
	inline float* get_address_of_mouseHandRotationSpeed_32() { return &___mouseHandRotationSpeed_32; }
	inline void set_mouseHandRotationSpeed_32(float value)
	{
		___mouseHandRotationSpeed_32 = value;
	}

	inline static int32_t get_offset_of_handRotateButton_33() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___handRotateButton_33)); }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  get_handRotateButton_33() const { return ___handRotateButton_33; }
	inline KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * get_address_of_handRotateButton_33() { return &___handRotateButton_33; }
	inline void set_handRotateButton_33(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  value)
	{
		___handRotateButton_33 = value;
	}

	inline static int32_t get_offset_of_defaultHandGesture_34() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___defaultHandGesture_34)); }
	inline int32_t get_defaultHandGesture_34() const { return ___defaultHandGesture_34; }
	inline int32_t* get_address_of_defaultHandGesture_34() { return &___defaultHandGesture_34; }
	inline void set_defaultHandGesture_34(int32_t value)
	{
		___defaultHandGesture_34 = value;
	}

	inline static int32_t get_offset_of_leftMouseHandGesture_35() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___leftMouseHandGesture_35)); }
	inline int32_t get_leftMouseHandGesture_35() const { return ___leftMouseHandGesture_35; }
	inline int32_t* get_address_of_leftMouseHandGesture_35() { return &___leftMouseHandGesture_35; }
	inline void set_leftMouseHandGesture_35(int32_t value)
	{
		___leftMouseHandGesture_35 = value;
	}

	inline static int32_t get_offset_of_middleMouseHandGesture_36() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___middleMouseHandGesture_36)); }
	inline int32_t get_middleMouseHandGesture_36() const { return ___middleMouseHandGesture_36; }
	inline int32_t* get_address_of_middleMouseHandGesture_36() { return &___middleMouseHandGesture_36; }
	inline void set_middleMouseHandGesture_36(int32_t value)
	{
		___middleMouseHandGesture_36 = value;
	}

	inline static int32_t get_offset_of_rightMouseHandGesture_37() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___rightMouseHandGesture_37)); }
	inline int32_t get_rightMouseHandGesture_37() const { return ___rightMouseHandGesture_37; }
	inline int32_t* get_address_of_rightMouseHandGesture_37() { return &___rightMouseHandGesture_37; }
	inline void set_rightMouseHandGesture_37(int32_t value)
	{
		___rightMouseHandGesture_37 = value;
	}

	inline static int32_t get_offset_of_handGestureAnimationSpeed_38() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___handGestureAnimationSpeed_38)); }
	inline float get_handGestureAnimationSpeed_38() const { return ___handGestureAnimationSpeed_38; }
	inline float* get_address_of_handGestureAnimationSpeed_38() { return &___handGestureAnimationSpeed_38; }
	inline void set_handGestureAnimationSpeed_38(float value)
	{
		___handGestureAnimationSpeed_38 = value;
	}

	inline static int32_t get_offset_of_holdStartDuration_39() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___holdStartDuration_39)); }
	inline float get_holdStartDuration_39() const { return ___holdStartDuration_39; }
	inline float* get_address_of_holdStartDuration_39() { return &___holdStartDuration_39; }
	inline void set_holdStartDuration_39(float value)
	{
		___holdStartDuration_39 = value;
	}

	inline static int32_t get_offset_of_navigationStartThreshold_40() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___navigationStartThreshold_40)); }
	inline float get_navigationStartThreshold_40() const { return ___navigationStartThreshold_40; }
	inline float* get_address_of_navigationStartThreshold_40() { return &___navigationStartThreshold_40; }
	inline void set_navigationStartThreshold_40(float value)
	{
		___navigationStartThreshold_40 = value;
	}

	inline static int32_t get_offset_of_defaultHandDistance_41() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___defaultHandDistance_41)); }
	inline float get_defaultHandDistance_41() const { return ___defaultHandDistance_41; }
	inline float* get_address_of_defaultHandDistance_41() { return &___defaultHandDistance_41; }
	inline void set_defaultHandDistance_41(float value)
	{
		___defaultHandDistance_41 = value;
	}

	inline static int32_t get_offset_of_handDepthMultiplier_42() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___handDepthMultiplier_42)); }
	inline float get_handDepthMultiplier_42() const { return ___handDepthMultiplier_42; }
	inline float* get_address_of_handDepthMultiplier_42() { return &___handDepthMultiplier_42; }
	inline void set_handDepthMultiplier_42(float value)
	{
		___handDepthMultiplier_42 = value;
	}

	inline static int32_t get_offset_of_handJitterAmount_43() { return static_cast<int32_t>(offsetof(MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D, ___handJitterAmount_43)); }
	inline float get_handJitterAmount_43() const { return ___handJitterAmount_43; }
	inline float* get_address_of_handJitterAmount_43() { return &___handJitterAmount_43; }
	inline void set_handJitterAmount_43(float value)
	{
		___handJitterAmount_43 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYINPUTSIMULATIONPROFILE_T4D10781AAE77C07607694C5D539C7E02DA75EF2D_H
#ifndef MIXEDREALITYINPUTSYSTEMPROFILE_TEA912CF019C39C02C7DA8C2421A24105685D76B1_H
#define MIXEDREALITYINPUTSYSTEMPROFILE_TEA912CF019C39C02C7DA8C2421A24105685D76B1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct  MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_t4DB9FE68E064D5A7DFABE564B3A47E6C3E6B6C36* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::raycastProviderType
	SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * ___raycastProviderType_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusQueryBufferSize
	int32_t ___focusQueryBufferSize_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_tE8DE3FFF09D96426A5D46793E940300312A5FD39 * ___inputActionsProfile_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_t0F3AEFAECBFE12E6EDD34076D417A17DA883ACF6 * ___inputActionRulesProfile_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_t624E085F471DA1AC12BF16507CBF152D1FBEEBFC * ___pointerProfile_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * ___gesturesProfile_13;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * ___supportedVoiceCultures_14;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_t313A5AE54CD60130CE65107078F9A0C803D39EBA * ___speechCommandsProfile_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_tC5F6AD6A484C6DAF77E5FFE8A0E04A86F7E498AE * ___controllerMappingProfile_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_t9CC41F1E9889534D711E4E717D6CA6A8ACD0B35B * ___controllerVisualizationProfile_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * ___handTrackingProfile_19;

public:
	inline static int32_t get_offset_of_dataProviderConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___dataProviderConfigurations_5)); }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t4DB9FE68E064D5A7DFABE564B3A47E6C3E6B6C36* get_dataProviderConfigurations_5() const { return ___dataProviderConfigurations_5; }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t4DB9FE68E064D5A7DFABE564B3A47E6C3E6B6C36** get_address_of_dataProviderConfigurations_5() { return &___dataProviderConfigurations_5; }
	inline void set_dataProviderConfigurations_5(MixedRealityInputDataProviderConfigurationU5BU5D_t4DB9FE68E064D5A7DFABE564B3A47E6C3E6B6C36* value)
	{
		___dataProviderConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataProviderConfigurations_5), value);
	}

	inline static int32_t get_offset_of_focusProviderType_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___focusProviderType_6)); }
	inline SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * get_focusProviderType_6() const { return ___focusProviderType_6; }
	inline SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 ** get_address_of_focusProviderType_6() { return &___focusProviderType_6; }
	inline void set_focusProviderType_6(SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * value)
	{
		___focusProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((&___focusProviderType_6), value);
	}

	inline static int32_t get_offset_of_raycastProviderType_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___raycastProviderType_7)); }
	inline SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * get_raycastProviderType_7() const { return ___raycastProviderType_7; }
	inline SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 ** get_address_of_raycastProviderType_7() { return &___raycastProviderType_7; }
	inline void set_raycastProviderType_7(SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * value)
	{
		___raycastProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((&___raycastProviderType_7), value);
	}

	inline static int32_t get_offset_of_focusQueryBufferSize_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___focusQueryBufferSize_8)); }
	inline int32_t get_focusQueryBufferSize_8() const { return ___focusQueryBufferSize_8; }
	inline int32_t* get_address_of_focusQueryBufferSize_8() { return &___focusQueryBufferSize_8; }
	inline void set_focusQueryBufferSize_8(int32_t value)
	{
		___focusQueryBufferSize_8 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___focusIndividualCompoundCollider_9)); }
	inline bool get_focusIndividualCompoundCollider_9() const { return ___focusIndividualCompoundCollider_9; }
	inline bool* get_address_of_focusIndividualCompoundCollider_9() { return &___focusIndividualCompoundCollider_9; }
	inline void set_focusIndividualCompoundCollider_9(bool value)
	{
		___focusIndividualCompoundCollider_9 = value;
	}

	inline static int32_t get_offset_of_inputActionsProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___inputActionsProfile_10)); }
	inline MixedRealityInputActionsProfile_tE8DE3FFF09D96426A5D46793E940300312A5FD39 * get_inputActionsProfile_10() const { return ___inputActionsProfile_10; }
	inline MixedRealityInputActionsProfile_tE8DE3FFF09D96426A5D46793E940300312A5FD39 ** get_address_of_inputActionsProfile_10() { return &___inputActionsProfile_10; }
	inline void set_inputActionsProfile_10(MixedRealityInputActionsProfile_tE8DE3FFF09D96426A5D46793E940300312A5FD39 * value)
	{
		___inputActionsProfile_10 = value;
		Il2CppCodeGenWriteBarrier((&___inputActionsProfile_10), value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___inputActionRulesProfile_11)); }
	inline MixedRealityInputActionRulesProfile_t0F3AEFAECBFE12E6EDD34076D417A17DA883ACF6 * get_inputActionRulesProfile_11() const { return ___inputActionRulesProfile_11; }
	inline MixedRealityInputActionRulesProfile_t0F3AEFAECBFE12E6EDD34076D417A17DA883ACF6 ** get_address_of_inputActionRulesProfile_11() { return &___inputActionRulesProfile_11; }
	inline void set_inputActionRulesProfile_11(MixedRealityInputActionRulesProfile_t0F3AEFAECBFE12E6EDD34076D417A17DA883ACF6 * value)
	{
		___inputActionRulesProfile_11 = value;
		Il2CppCodeGenWriteBarrier((&___inputActionRulesProfile_11), value);
	}

	inline static int32_t get_offset_of_pointerProfile_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___pointerProfile_12)); }
	inline MixedRealityPointerProfile_t624E085F471DA1AC12BF16507CBF152D1FBEEBFC * get_pointerProfile_12() const { return ___pointerProfile_12; }
	inline MixedRealityPointerProfile_t624E085F471DA1AC12BF16507CBF152D1FBEEBFC ** get_address_of_pointerProfile_12() { return &___pointerProfile_12; }
	inline void set_pointerProfile_12(MixedRealityPointerProfile_t624E085F471DA1AC12BF16507CBF152D1FBEEBFC * value)
	{
		___pointerProfile_12 = value;
		Il2CppCodeGenWriteBarrier((&___pointerProfile_12), value);
	}

	inline static int32_t get_offset_of_gesturesProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___gesturesProfile_13)); }
	inline MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * get_gesturesProfile_13() const { return ___gesturesProfile_13; }
	inline MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 ** get_address_of_gesturesProfile_13() { return &___gesturesProfile_13; }
	inline void set_gesturesProfile_13(MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * value)
	{
		___gesturesProfile_13 = value;
		Il2CppCodeGenWriteBarrier((&___gesturesProfile_13), value);
	}

	inline static int32_t get_offset_of_supportedVoiceCultures_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___supportedVoiceCultures_14)); }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * get_supportedVoiceCultures_14() const { return ___supportedVoiceCultures_14; }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 ** get_address_of_supportedVoiceCultures_14() { return &___supportedVoiceCultures_14; }
	inline void set_supportedVoiceCultures_14(List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * value)
	{
		___supportedVoiceCultures_14 = value;
		Il2CppCodeGenWriteBarrier((&___supportedVoiceCultures_14), value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___speechCommandsProfile_15)); }
	inline MixedRealitySpeechCommandsProfile_t313A5AE54CD60130CE65107078F9A0C803D39EBA * get_speechCommandsProfile_15() const { return ___speechCommandsProfile_15; }
	inline MixedRealitySpeechCommandsProfile_t313A5AE54CD60130CE65107078F9A0C803D39EBA ** get_address_of_speechCommandsProfile_15() { return &___speechCommandsProfile_15; }
	inline void set_speechCommandsProfile_15(MixedRealitySpeechCommandsProfile_t313A5AE54CD60130CE65107078F9A0C803D39EBA * value)
	{
		___speechCommandsProfile_15 = value;
		Il2CppCodeGenWriteBarrier((&___speechCommandsProfile_15), value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___enableControllerMapping_16)); }
	inline bool get_enableControllerMapping_16() const { return ___enableControllerMapping_16; }
	inline bool* get_address_of_enableControllerMapping_16() { return &___enableControllerMapping_16; }
	inline void set_enableControllerMapping_16(bool value)
	{
		___enableControllerMapping_16 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___controllerMappingProfile_17)); }
	inline MixedRealityControllerMappingProfile_tC5F6AD6A484C6DAF77E5FFE8A0E04A86F7E498AE * get_controllerMappingProfile_17() const { return ___controllerMappingProfile_17; }
	inline MixedRealityControllerMappingProfile_tC5F6AD6A484C6DAF77E5FFE8A0E04A86F7E498AE ** get_address_of_controllerMappingProfile_17() { return &___controllerMappingProfile_17; }
	inline void set_controllerMappingProfile_17(MixedRealityControllerMappingProfile_tC5F6AD6A484C6DAF77E5FFE8A0E04A86F7E498AE * value)
	{
		___controllerMappingProfile_17 = value;
		Il2CppCodeGenWriteBarrier((&___controllerMappingProfile_17), value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___controllerVisualizationProfile_18)); }
	inline MixedRealityControllerVisualizationProfile_t9CC41F1E9889534D711E4E717D6CA6A8ACD0B35B * get_controllerVisualizationProfile_18() const { return ___controllerVisualizationProfile_18; }
	inline MixedRealityControllerVisualizationProfile_t9CC41F1E9889534D711E4E717D6CA6A8ACD0B35B ** get_address_of_controllerVisualizationProfile_18() { return &___controllerVisualizationProfile_18; }
	inline void set_controllerVisualizationProfile_18(MixedRealityControllerVisualizationProfile_t9CC41F1E9889534D711E4E717D6CA6A8ACD0B35B * value)
	{
		___controllerVisualizationProfile_18 = value;
		Il2CppCodeGenWriteBarrier((&___controllerVisualizationProfile_18), value);
	}

	inline static int32_t get_offset_of_handTrackingProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___handTrackingProfile_19)); }
	inline MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * get_handTrackingProfile_19() const { return ___handTrackingProfile_19; }
	inline MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 ** get_address_of_handTrackingProfile_19() { return &___handTrackingProfile_19; }
	inline void set_handTrackingProfile_19(MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * value)
	{
		___handTrackingProfile_19 = value;
		Il2CppCodeGenWriteBarrier((&___handTrackingProfile_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYINPUTSYSTEMPROFILE_TEA912CF019C39C02C7DA8C2421A24105685D76B1_H
#ifndef SIMULATEDHAND_T38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_H
#define SIMULATEDHAND_T38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedHand
struct  SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4  : public BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.SimulatedHand::jointPoses
	Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * ___jointPoses_23;

public:
	inline static int32_t get_offset_of_jointPoses_23() { return static_cast<int32_t>(offsetof(SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4, ___jointPoses_23)); }
	inline Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * get_jointPoses_23() const { return ___jointPoses_23; }
	inline Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 ** get_address_of_jointPoses_23() { return &___jointPoses_23; }
	inline void set_jointPoses_23(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * value)
	{
		___jointPoses_23 = value;
		Il2CppCodeGenWriteBarrier((&___jointPoses_23), value);
	}
};

struct SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SimulatedHand::jointCount
	int32_t ___jointCount_22;

public:
	inline static int32_t get_offset_of_jointCount_22() { return static_cast<int32_t>(offsetof(SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_StaticFields, ___jointCount_22)); }
	inline int32_t get_jointCount_22() const { return ___jointCount_22; }
	inline int32_t* get_address_of_jointCount_22() { return &___jointCount_22; }
	inline void set_jointCount_22(int32_t value)
	{
		___jointCount_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDHAND_T38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_H
#ifndef CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#define CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifndef SIMULATEDARTICULATEDHAND_TAB9D446B9032877A324E191C1999ABC66C887532_H
#define SIMULATEDARTICULATEDHAND_TAB9D446B9032877A324E191C1999ABC66C887532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand
struct  SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532  : public SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentPointerPosition_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___currentPointerRotation_25;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::lastPointerPose
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___lastPointerPose_26;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentPointerPose
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___currentPointerPose_27;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentIndexPose
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___currentIndexPose_28;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::currentGripPose
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___currentGripPose_29;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::lastGripPose
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___lastGripPose_30;

public:
	inline static int32_t get_offset_of_currentPointerPosition_24() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532, ___currentPointerPosition_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentPointerPosition_24() const { return ___currentPointerPosition_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentPointerPosition_24() { return &___currentPointerPosition_24; }
	inline void set_currentPointerPosition_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentPointerPosition_24 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_25() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532, ___currentPointerRotation_25)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_currentPointerRotation_25() const { return ___currentPointerRotation_25; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_currentPointerRotation_25() { return &___currentPointerRotation_25; }
	inline void set_currentPointerRotation_25(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___currentPointerRotation_25 = value;
	}

	inline static int32_t get_offset_of_lastPointerPose_26() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532, ___lastPointerPose_26)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_lastPointerPose_26() const { return ___lastPointerPose_26; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_lastPointerPose_26() { return &___lastPointerPose_26; }
	inline void set_lastPointerPose_26(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___lastPointerPose_26 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_27() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532, ___currentPointerPose_27)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_currentPointerPose_27() const { return ___currentPointerPose_27; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_currentPointerPose_27() { return &___currentPointerPose_27; }
	inline void set_currentPointerPose_27(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___currentPointerPose_27 = value;
	}

	inline static int32_t get_offset_of_currentIndexPose_28() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532, ___currentIndexPose_28)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_currentIndexPose_28() const { return ___currentIndexPose_28; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_currentIndexPose_28() { return &___currentIndexPose_28; }
	inline void set_currentIndexPose_28(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___currentIndexPose_28 = value;
	}

	inline static int32_t get_offset_of_currentGripPose_29() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532, ___currentGripPose_29)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_currentGripPose_29() const { return ___currentGripPose_29; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_currentGripPose_29() { return &___currentGripPose_29; }
	inline void set_currentGripPose_29(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___currentGripPose_29 = value;
	}

	inline static int32_t get_offset_of_lastGripPose_30() { return static_cast<int32_t>(offsetof(SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532, ___lastGripPose_30)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_lastGripPose_30() const { return ___lastGripPose_30; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_lastGripPose_30() { return &___lastGripPose_30; }
	inline void set_lastGripPose_30(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___lastGripPose_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDARTICULATEDHAND_TAB9D446B9032877A324E191C1999ABC66C887532_H
#ifndef SIMULATEDGESTUREHAND_T507199841F8E21858B3FFEEF1A458C9889AA8544_H
#define SIMULATEDGESTUREHAND_T507199841F8E21858B3FFEEF1A458C9889AA8544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand
struct  SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544  : public SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::initializedFromProfile
	bool ___initializedFromProfile_24;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___holdAction_25;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___navigationAction_26;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::manipulationAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___manipulationAction_27;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::selectAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___selectAction_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::useRailsNavigation
	bool ___useRailsNavigation_29;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdStartDuration
	float ___holdStartDuration_30;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationStartThreshold
	float ___navigationStartThreshold_31;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::SelectDownStartTime
	float ___SelectDownStartTime_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::holdInProgress
	bool ___holdInProgress_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::manipulationInProgress
	bool ___manipulationInProgress_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::navigationInProgress
	bool ___navigationInProgress_35;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentRailsUsed
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentRailsUsed_36;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentPosition_37;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::cumulativeDelta
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta_38;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::currentGripPose
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___currentGripPose_39;

public:
	inline static int32_t get_offset_of_initializedFromProfile_24() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___initializedFromProfile_24)); }
	inline bool get_initializedFromProfile_24() const { return ___initializedFromProfile_24; }
	inline bool* get_address_of_initializedFromProfile_24() { return &___initializedFromProfile_24; }
	inline void set_initializedFromProfile_24(bool value)
	{
		___initializedFromProfile_24 = value;
	}

	inline static int32_t get_offset_of_holdAction_25() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___holdAction_25)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_holdAction_25() const { return ___holdAction_25; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_holdAction_25() { return &___holdAction_25; }
	inline void set_holdAction_25(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___holdAction_25 = value;
	}

	inline static int32_t get_offset_of_navigationAction_26() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___navigationAction_26)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_navigationAction_26() const { return ___navigationAction_26; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_navigationAction_26() { return &___navigationAction_26; }
	inline void set_navigationAction_26(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___navigationAction_26 = value;
	}

	inline static int32_t get_offset_of_manipulationAction_27() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___manipulationAction_27)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_manipulationAction_27() const { return ___manipulationAction_27; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_manipulationAction_27() { return &___manipulationAction_27; }
	inline void set_manipulationAction_27(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___manipulationAction_27 = value;
	}

	inline static int32_t get_offset_of_selectAction_28() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___selectAction_28)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_selectAction_28() const { return ___selectAction_28; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_selectAction_28() { return &___selectAction_28; }
	inline void set_selectAction_28(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___selectAction_28 = value;
	}

	inline static int32_t get_offset_of_useRailsNavigation_29() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___useRailsNavigation_29)); }
	inline bool get_useRailsNavigation_29() const { return ___useRailsNavigation_29; }
	inline bool* get_address_of_useRailsNavigation_29() { return &___useRailsNavigation_29; }
	inline void set_useRailsNavigation_29(bool value)
	{
		___useRailsNavigation_29 = value;
	}

	inline static int32_t get_offset_of_holdStartDuration_30() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___holdStartDuration_30)); }
	inline float get_holdStartDuration_30() const { return ___holdStartDuration_30; }
	inline float* get_address_of_holdStartDuration_30() { return &___holdStartDuration_30; }
	inline void set_holdStartDuration_30(float value)
	{
		___holdStartDuration_30 = value;
	}

	inline static int32_t get_offset_of_navigationStartThreshold_31() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___navigationStartThreshold_31)); }
	inline float get_navigationStartThreshold_31() const { return ___navigationStartThreshold_31; }
	inline float* get_address_of_navigationStartThreshold_31() { return &___navigationStartThreshold_31; }
	inline void set_navigationStartThreshold_31(float value)
	{
		___navigationStartThreshold_31 = value;
	}

	inline static int32_t get_offset_of_SelectDownStartTime_32() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___SelectDownStartTime_32)); }
	inline float get_SelectDownStartTime_32() const { return ___SelectDownStartTime_32; }
	inline float* get_address_of_SelectDownStartTime_32() { return &___SelectDownStartTime_32; }
	inline void set_SelectDownStartTime_32(float value)
	{
		___SelectDownStartTime_32 = value;
	}

	inline static int32_t get_offset_of_holdInProgress_33() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___holdInProgress_33)); }
	inline bool get_holdInProgress_33() const { return ___holdInProgress_33; }
	inline bool* get_address_of_holdInProgress_33() { return &___holdInProgress_33; }
	inline void set_holdInProgress_33(bool value)
	{
		___holdInProgress_33 = value;
	}

	inline static int32_t get_offset_of_manipulationInProgress_34() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___manipulationInProgress_34)); }
	inline bool get_manipulationInProgress_34() const { return ___manipulationInProgress_34; }
	inline bool* get_address_of_manipulationInProgress_34() { return &___manipulationInProgress_34; }
	inline void set_manipulationInProgress_34(bool value)
	{
		___manipulationInProgress_34 = value;
	}

	inline static int32_t get_offset_of_navigationInProgress_35() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___navigationInProgress_35)); }
	inline bool get_navigationInProgress_35() const { return ___navigationInProgress_35; }
	inline bool* get_address_of_navigationInProgress_35() { return &___navigationInProgress_35; }
	inline void set_navigationInProgress_35(bool value)
	{
		___navigationInProgress_35 = value;
	}

	inline static int32_t get_offset_of_currentRailsUsed_36() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___currentRailsUsed_36)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentRailsUsed_36() const { return ___currentRailsUsed_36; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentRailsUsed_36() { return &___currentRailsUsed_36; }
	inline void set_currentRailsUsed_36(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentRailsUsed_36 = value;
	}

	inline static int32_t get_offset_of_currentPosition_37() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___currentPosition_37)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentPosition_37() const { return ___currentPosition_37; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentPosition_37() { return &___currentPosition_37; }
	inline void set_currentPosition_37(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentPosition_37 = value;
	}

	inline static int32_t get_offset_of_cumulativeDelta_38() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___cumulativeDelta_38)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_cumulativeDelta_38() const { return ___cumulativeDelta_38; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_cumulativeDelta_38() { return &___cumulativeDelta_38; }
	inline void set_cumulativeDelta_38(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___cumulativeDelta_38 = value;
	}

	inline static int32_t get_offset_of_currentGripPose_39() { return static_cast<int32_t>(offsetof(SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544, ___currentGripPose_39)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_currentGripPose_39() const { return ___currentGripPose_39; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_currentGripPose_39() { return &___currentGripPose_39; }
	inline void set_currentGripPose_39(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___currentGripPose_39 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMULATEDGESTUREHAND_T507199841F8E21858B3FFEEF1A458C9889AA8544_H
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton[]
struct MouseButtonU5BU5D_t14C6EC4510926DD3FA9CAFA4757AA63EF63D3361  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * m_Items[1];

public:
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_tACABC5B25A2CC3286D152A57F4EED7194845E0AA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B  m_Items[1];

public:
	inline MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  m_Items[1];

public:
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  m_Items[1];

public:
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_mC8EDEBA8271E5F828DF08A3B4184FAD6E182C2ED_gshared (Action_2_tCB4135AD949FF94D36EC745430DB40677EE86A3A * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,System.Int32>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m25994447AB28F61211874B9B5D22C994601BC145_gshared (Action_2_tCB4135AD949FF94D36EC745430DB40677EE86A3A * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Tuple`2<!!0,!!1> System.Tuple::Create<System.Int32Enum,System.Int32>(!!0,!!1)
extern "C" IL2CPP_METHOD_ATTR Tuple_2_t166F12DD341E435950E61C76D51556A00D292F7F * Tuple_Create_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m03527F075915A2BB0BDEE9CAE2767DE36A4E7E47_gshared (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC87D8EECD8406043786CC95870458389CEF82CDF_gshared (Dictionary_2_t81923CE2A312318AE13F58085CCF7FA8D879B77A * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  Dictionary_2_get_Item_m0E1CBD44CB9B992AAC80AAB11F3120F2C220C2C8_gshared (Dictionary_2_t13485ACAFA396442F64BDF056CAFB0CFD4535B47 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0C29D230D2995E03EAAD3E847D07DA2228A85C43_gshared (Dictionary_2_t13485ACAFA396442F64BDF056CAFB0CFD4535B47 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m16521BC1E4FE9B32A77366F82D18DCCBA5BC8BE3_gshared (Dictionary_2_t13485ACAFA396442F64BDF056CAFB0CFD4535B47 * __this, int32_t p0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5A5763EC6D17E2513438AE2CBEF386DBF074C8E8_gshared (Dictionary_2_t13485ACAFA396442F64BDF056CAFB0CFD4535B47 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD219D4957AC74E4AC0BA017DE1A918AD61641D2_gshared (Dictionary_2_t13485ACAFA396442F64BDF056CAFB0CFD4535B47 * __this, int32_t p0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mEF48D37391286C7EEE8DF4E046189D16340679E8_gshared (Dictionary_2_t13485ACAFA396442F64BDF056CAFB0CFD4535B47 * __this, int32_t p0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mA9BB7B50ACACE431FE69D6C4718231443A3868EC_gshared (RuntimeObject* p0, int32_t p1, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C (Type_t * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding/<>c__DisplayClass5_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m2AC9A0BCD1DD33DEE0FF185977A6FD9599DEA2BA (U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m41A63AF2047471085D2D3017054B4CE9053C842F (Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500 *, const RuntimeMethod*))Dictionary_2__ctor_m56FBD260A4D190AD833E9B108B1E80A574AA62C4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>::.ctor()
inline void Dictionary_2__ctor_mBBCE1B97FE2FCC4424D0A6738758339782735F51 (Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mD36E57B91464B82ADBEFF1EEF7E9D941C3702D69 (Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mC8EDEBA8271E5F828DF08A3B4184FAD6E182C2ED_gshared)(__this, p0, p1, method);
}
// System.Void System.Action`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>::Invoke(!0,!1)
inline void Action_2_Invoke_mF38507A8EAFBB63630A7E24B202171022626FEDE (Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD *, int32_t, int32_t, const RuntimeMethod*))Action_2_Invoke_m25994447AB28F61211874B9B5D22C994601BC145_gshared)(__this, p0, p1, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType Microsoft.MixedReality.Toolkit.Input.KeyBinding::get_BindingType()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyBinding_get_BindingType_mEA0BBB5D0204974F3DE6DA2CA0BFCDF541B568BD (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.KeyBinding::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* KeyBinding_ToString_mD37DE208A22A14A83B128852B8D7BEA29819B955 (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetKeyCode(UnityEngine.KeyCode&)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetKeyCode_mCAA25A07B478AF8BA432FB4CEA1F636DE06EFE60 (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * __this, int32_t* ___keyCode0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_mB3F3815438F5ACAF457B5488DDA8284318EC6ED4 (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * __this, int32_t* ___mouseButton0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding/MouseButton&)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_m7EC1DA595FE05692B91C77C99B6FA704020BD2FD (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * __this, int32_t* ___mouseButton0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(System.Int32)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  KeyBinding_FromMouseButton_m7D40AF69AA74B4CA9FECCCFB7D8DAD63A450BC2B (int32_t ___mouseButton0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Tuple`2<!!0,!!1> System.Tuple::Create<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>(!!0,!!1)
inline Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C * Tuple_Create_TisKeyType_tF5A78BC09383A2ED02EED8E2F3CA2F3445018F58_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC10F042C6AD415B1040430EC4D3D76046ED557D6 (int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C * (*) (int32_t, int32_t, const RuntimeMethod*))Tuple_Create_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m03527F075915A2BB0BDEE9CAE2767DE36A4E7E47_gshared)(p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mAC10F1CE6FD9EE89E58F31BC20189A0B89E30ECA (Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746 * __this, int32_t p0, Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746 *, int32_t, Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C *, const RuntimeMethod*))Dictionary_2_set_Item_mF9A6FBE4006C89D15B8C88B2CB46E9B24D18B7FC_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1A6741EFB5760E7A362D89DA95E03E9659AAACD9 (Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500 * __this, Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C * p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500 *, Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C *, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mC87D8EECD8406043786CC95870458389CEF82CDF_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mFA83B0C0BABD3113D1AAB38FBB953C91EA7FFA30 (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_mBC5947EA49ED797F0DB1830BFC13AF6514B765FD (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m726EDCD35F8DECF774810AB1E9ED590B85DB10F1 (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m87C9C3E0877717675108A80EC663E60AD4D60D7C (int32_t p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding/MouseButton)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  KeyBinding_FromMouseButton_mD56F414DB2608A6532A4CB14DBFC1661AA80923F (int32_t ___mouseButton0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromKey(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  KeyBinding_FromKey_m8B5E534BD581BA1FEDF53DFB969B6B3A4DB881EC (int32_t ___keyCode0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_m3B19D1B03CAC66A3703F01880F3A8968DF6BA3F4 (BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
extern "C" IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
extern "C" IL2CPP_METHOD_ATTR void SimulatedHand__ctor_m8C3FC7C2B7496A32E014232A26201192E827D803 (SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___interactions3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::.ctor(System.UInt32,System.String,Microsoft.MixedReality.Toolkit.Utilities.AxisType,Microsoft.MixedReality.Toolkit.Input.DeviceInputType,System.String,System.String,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping__ctor_m480D9518380DE6086B79D0088223F89BFA8DF566 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, uint32_t p0, String_t* p1, int32_t p2, int32_t p3, String_t* p4, String_t* p5, bool p6, bool p7, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::get_Item(!0)
inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  Dictionary_2_get_Item_m3BAD98FBDF97B4A32E77BA3433091475E39C8AC9 (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  (*) (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m0E1CBD44CB9B992AAC80AAB11F3120F2C220C2C8_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318 (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsRotationAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BaseController_set_IsRotationAvailable_mA2981A7C18FE8962696F58C150C52A72A233242B (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, bool p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::set_IsPositionAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BaseController_set_IsPositionAvailable_mD6C35886A0441F5D90505065132F851BB9CBA73F (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, bool p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsPositionAvailable()
extern "C" IL2CPP_METHOD_ATTR bool BaseController_get_IsPositionAvailable_m5986783C844D0BAE52F7F7827244F44083C53F41 (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.HandRay Microsoft.MixedReality.Toolkit.Input.BaseHand::get_HandRay()
extern "C" IL2CPP_METHOD_ATTR HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF * BaseHand_get_HandRay_m19D22F2ACA83D5F69C07726091720BE63078BAC1 (BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseHand::GetPalmNormal()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseHand_GetPalmNormal_m4AB806449F48A9A1D2E502B457AD552D4890BEA7 (BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HandRay::Update(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void HandRay_Update_mB6AF12772691B69C4165DE52787D74A2EAC185A9 (HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p2, uint8_t p3, const RuntimeMethod* method);
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.HandRay::get_Ray()
extern "C" IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  HandRay_get_Ray_mCA0E5B7211237B6DFFA3D039592A046A67623462 (HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m5E800C5BCF0CC5847FA550A74A9154866EE245D4 (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m0B174141878A4469C62DF35E3FC2046A48475DD6 (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::op_Inequality(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityPose_op_Inequality_mCA02B87531F3223B293B69AF9A53157501FDB96B (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  p0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_IsRotationAvailable()
extern "C" IL2CPP_METHOD_ATTR bool BaseController_get_IsRotationAvailable_m7CD1F4130C0326153F51B5B7C433A7C049596A2B (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872 (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926 (BaseController_tF65634423B3DF3D4318A0B17E0270CA70DA5F00E * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_m14C728BDE4DD532AA58376A1A09136313917E117 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_m9F35AE4035C112B4C7ACC0AE64636E9D6FC6AEE2 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsPinching()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsPinching_m0E22A8E6AE9676DCB58D8FC777E2A442A981B0F6 (SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_m50CF3568F80193C77755707CE8CB29E8698E7BB2 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, bool p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m9BBBD50DE77D8F569D8B800CB980D07AC77A5445 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, p0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_None()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  MixedRealityInputAction_get_None_mB936666B421F095C01875073AB41805930184E6D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_GesturesProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * MixedRealityInputSystemProfile_get_GesturesProfile_m773E39249F95954826F5FEE76E7140BA1BF6C745 (MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[] Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::get_Gestures()
extern "C" IL2CPP_METHOD_ATTR MixedRealityGestureMappingU5BU5D_tACABC5B25A2CC3286D152A57F4EED7194845E0AA* MixedRealityGesturesProfile_get_Gestures_m7B09BEA494BC93F4BFBFBFDB60204A6FA85A53FE (MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.GestureInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::get_GestureType()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityGestureMapping_get_GestureType_mF4EA84D1E842EECE373A84265F6E7030E703B3C7 (MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::get_Action()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  MixedRealityGestureMapping_get_Action_m41B8C192B67A85F98D040910C00EC83FC3E834C5 (MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::get_UseRailsNavigation()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityGesturesProfile_get_UseRailsNavigation_m0F5F5DA6F75F0C71540A1A70824A1DB624B0288E (MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HoldStartDuration()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HoldStartDuration_m59444C3B4102B2C965138448278D71DE49711CEA (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_NavigationStartThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_NavigationStartThreshold_m247409F64764C43A06308B0B458F77E4A4244E3E (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::EnsureProfileSettings()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_EnsureProfileSettings_mF24D746CF95BAD9EDC8A711BCDB98D95E19BE40B (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteSelect()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteSelect_mD65DDDA160775409F300FDAB683BFD57013C344D (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteHold_mA3CECE70227149ADD36FA2BA1D2A707253C2C8B0 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteManipulation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteManipulation_m38916F79C8AE4B1ABD4EBF271CE04F66956024F9 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteNavigation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteNavigation_m4A7919C0F67FAD492696053D6BC88C14166E90AD (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateManipulation()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateManipulation_mC084DDE25A78F60DD90F45C17605D869D50ACEF7 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigation()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigation_m54497EA8A92B98D8140CC7F3A3E218C9B7231DF9 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelHold_mAE3A4BB547C0FC869E1CF0163B44C4C87A7C827A (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartNavigation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartNavigation_m3003BA7F41386ED68B46FE614DBF60C101E68A35 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartManipulation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartManipulation_m7AAD3F01B1474AB282CED27A6D5250DCF43A7DEE (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartHold_m65B73E38DC49C7CB701D9FC4E319771182626B4E (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigationRails()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigationRails_m9F0288BF7ADEE81E87F10002F4E40AF4EF0F321E (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_NavigationDelta()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedGestureHand_get_NavigationDelta_m78455B0026EC6EC96AC09450639E9416A23003F7 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_m9F0E904C69CAFA29E3BDC894848BAB6A70816325 (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 *, const RuntimeMethod*))Dictionary_2__ctor_m0C29D230D2995E03EAAD3E847D07DA2228A85C43_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
extern "C" IL2CPP_METHOD_ATTR void BaseHand__ctor_m9262ECFCA832FA42D6C4FB3A40015FA6DC224C0C (BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D * __this, int32_t p0, uint8_t p1, RuntimeObject* p2, MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* p3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m8784F4D5D46630F0AE1F0866B9DE0C557B0005E4 (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * __this, int32_t p0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 *, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m16521BC1E4FE9B32A77366F82D18DCCBA5BC8BE3_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m333D3C686DCC6485E954F9C76679E8632E844B77 (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m5A5763EC6D17E2513438AE2CBEF386DBF074C8E8_gshared)(__this, p0, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_Joints()
extern "C" IL2CPP_METHOD_ATTR MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* SimulatedHandData_get_Joints_m4EA3BEFE147AEFA9B429F6E06BE10EFCA1657D8C (SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::Add(!0,!1)
inline void Dictionary_2_Add_mD7555736C5613A79BF41250898CE50B6081D5A64 (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * __this, int32_t p0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 *, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 , const RuntimeMethod*))Dictionary_2_Add_mDD219D4957AC74E4AC0BA017DE1A918AD61641D2_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m6D0921490F3AAFC95C6DBC2AEB293FFA7DFE8F9F (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * __this, int32_t p0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 *, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 , const RuntimeMethod*))Dictionary_2_set_Item_mEF48D37391286C7EEE8DF4E046189D16340679E8_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseHand::UpdateVelocity()
extern "C" IL2CPP_METHOD_ATTR void BaseHand_UpdateVelocity_mF2E34B5C3E973117CDABD373E0BFD38F3ED4CA67 (BaseHand_t82184960FA20C0E20AF3B6A5993362A178E2686D * __this, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C (Type_t * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData/HandJointDataGenerator::Invoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[])
extern "C" IL2CPP_METHOD_ATTR void HandJointDataGenerator_Invoke_mBBB056A0E18520C8312B4D2440FFDD69EC46935A (HandJointDataGenerator_tE04953526CC42763EDBBB8F8D14871BB5D0906FA * __this, MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* ___jointPoses0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * p0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Take<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mA9BB7B50ACACE431FE69D6C4718231443A3868EC (RuntimeObject* p0, int32_t p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mA9BB7B50ACACE431FE69D6C4718231443A3868EC_gshared)(p0, p1, method);
}
// System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_mA81913DBCF3086B4716F692F9DB797D7DD6B7583 (RuntimeObject* p0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmRightVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmRightVector_m3F111C14D6DB3C581BFC8710180C3963F8DB68A3 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmForwardVector(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmForwardVector_m15EB17483C8EC70A332C3293B6B98F69A7502870 (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmUpVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmUpVector_m960906B962EEB6085D531560164B893014484826 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding::.cctor()
extern "C" IL2CPP_METHOD_ATTR void KeyBinding__cctor_m1AAA8D84540F637A120AA1AC2C5095F0167B6417 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBinding__cctor_m1AAA8D84540F637A120AA1AC2C5095F0167B6417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F* V_0 = NULL;
	MouseButtonU5BU5D_t14C6EC4510926DD3FA9CAFA4757AA63EF63D3361* V_1 = NULL;
	U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D * V_2 = NULL;
	Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD * V_3 = NULL;
	MouseButtonU5BU5D_t14C6EC4510926DD3FA9CAFA4757AA63EF63D3361* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeArray * L_2 = Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C(L_1, /*hidden argument*/NULL);
		V_0 = ((KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F*)Castclass((RuntimeObject*)L_2, KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F_il2cpp_TypeInfo_var));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (MouseButton_t637324A94BEA705710DF895A72C46D4623AEBC79_0_0_0_var) };
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		RuntimeArray * L_5 = Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C(L_4, /*hidden argument*/NULL);
		V_1 = ((MouseButtonU5BU5D_t14C6EC4510926DD3FA9CAFA4757AA63EF63D3361*)Castclass((RuntimeObject*)L_5, MouseButtonU5BU5D_t14C6EC4510926DD3FA9CAFA4757AA63EF63D3361_il2cpp_TypeInfo_var));
		U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D * L_6 = (U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m2AC9A0BCD1DD33DEE0FF185977A6FD9599DEA2BA(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
		Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500 * L_7 = (Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500 *)il2cpp_codegen_object_new(Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m41A63AF2047471085D2D3017054B4CE9053C842F(L_7, /*hidden argument*/Dictionary_2__ctor_m41A63AF2047471085D2D3017054B4CE9053C842F_RuntimeMethod_var);
		((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_il2cpp_TypeInfo_var))->set_KeyBindingToEnumMap_1(L_7);
		Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746 * L_8 = (Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746 *)il2cpp_codegen_object_new(Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBBCE1B97FE2FCC4424D0A6738758339782735F51(L_8, /*hidden argument*/Dictionary_2__ctor_mBBCE1B97FE2FCC4424D0A6738758339782735F51_RuntimeMethod_var);
		((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_il2cpp_TypeInfo_var))->set_EnumToKeyBindingMap_2(L_8);
		U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D * L_9 = V_2;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_10 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_10, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_names_0(L_10);
		U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D * L_11 = V_2;
		NullCheck(L_11);
		L_11->set_index_1(0);
		U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D * L_12 = V_2;
		Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD * L_13 = (Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD *)il2cpp_codegen_object_new(Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD_il2cpp_TypeInfo_var);
		Action_2__ctor_mD36E57B91464B82ADBEFF1EEF7E9D941C3702D69(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m9D102086429130390E2CCA06B1632598A17A8EB2_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mD36E57B91464B82ADBEFF1EEF7E9D941C3702D69_RuntimeMethod_var);
		V_3 = L_13;
		Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD * L_14 = V_3;
		NullCheck(L_14);
		Action_2_Invoke_mF38507A8EAFBB63630A7E24B202171022626FEDE(L_14, 0, 0, /*hidden argument*/Action_2_Invoke_mF38507A8EAFBB63630A7E24B202171022626FEDE_RuntimeMethod_var);
		MouseButtonU5BU5D_t14C6EC4510926DD3FA9CAFA4757AA63EF63D3361* L_15 = V_1;
		V_4 = L_15;
		V_5 = 0;
		goto IL_0090;
	}

IL_0077:
	{
		MouseButtonU5BU5D_t14C6EC4510926DD3FA9CAFA4757AA63EF63D3361* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (int32_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_6 = L_19;
		Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD * L_20 = V_3;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		Action_2_Invoke_mF38507A8EAFBB63630A7E24B202171022626FEDE(L_20, 1, L_21, /*hidden argument*/Action_2_Invoke_mF38507A8EAFBB63630A7E24B202171022626FEDE_RuntimeMethod_var);
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0090:
	{
		int32_t L_23 = V_5;
		MouseButtonU5BU5D_t14C6EC4510926DD3FA9CAFA4757AA63EF63D3361* L_24 = V_4;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F* L_25 = V_0;
		V_7 = L_25;
		V_8 = 0;
		goto IL_00ba;
	}

IL_00a1:
	{
		KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F* L_26 = V_7;
		int32_t L_27 = V_8;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (int32_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		Action_2_t40E3C718E230992FB7EDD23A424C1EEF378F21FD * L_30 = V_3;
		int32_t L_31 = V_9;
		NullCheck(L_30);
		Action_2_Invoke_mF38507A8EAFBB63630A7E24B202171022626FEDE(L_30, 2, L_31, /*hidden argument*/Action_2_Invoke_mF38507A8EAFBB63630A7E24B202171022626FEDE_RuntimeMethod_var);
		int32_t L_32 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00ba:
	{
		int32_t L_33 = V_8;
		KeyCodeU5BU5D_tF4382F22534318B6E15A70B33AAF395B3D8D127F* L_34 = V_7;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))))))
		{
			goto IL_00a1;
		}
	}
	{
		U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D * L_35 = V_2;
		NullCheck(L_35);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_36 = L_35->get_names_0();
		NullCheck(L_36);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_37 = List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38(L_36, /*hidden argument*/List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var);
		((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_il2cpp_TypeInfo_var))->set_AllCodeNames_0(L_37);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType Microsoft.MixedReality.Toolkit.Input.KeyBinding::get_BindingType()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyBinding_get_BindingType_mEA0BBB5D0204974F3DE6DA2CA0BFCDF541B568BD (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bindingType_3();
		return L_0;
	}
}
extern "C"  int32_t KeyBinding_get_BindingType_mEA0BBB5D0204974F3DE6DA2CA0BFCDF541B568BD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * _thisAdjusted = reinterpret_cast<KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *>(__this + 1);
	return KeyBinding_get_BindingType_mEA0BBB5D0204974F3DE6DA2CA0BFCDF541B568BD(_thisAdjusted, method);
}
// System.String Microsoft.MixedReality.Toolkit.Input.KeyBinding::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* KeyBinding_ToString_mD37DE208A22A14A83B128852B8D7BEA29819B955 (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBinding_ToString_mD37DE208A22A14A83B128852B8D7BEA29819B955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		String_t* L_0 = V_0;
		int32_t* L_1 = __this->get_address_of_bindingType_3();
		RuntimeObject * L_2 = Box(KeyType_tF5A78BC09383A2ED02EED8E2F3CA2F3445018F58_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		*L_1 = *(int32_t*)UnBox(L_2);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get_bindingType_3();
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_002c;
	}

IL_002c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0076;
	}

IL_0032:
	{
		String_t* L_8 = V_0;
		int32_t L_9 = __this->get_code_4();
		V_2 = L_9;
		RuntimeObject * L_10 = Box(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		V_2 = *(int32_t*)UnBox(L_10);
		String_t* L_12 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_8, _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0076;
	}

IL_0054:
	{
		String_t* L_13 = V_0;
		int32_t L_14 = __this->get_code_4();
		V_3 = L_14;
		RuntimeObject * L_15 = Box(MouseButton_t637324A94BEA705710DF895A72C46D4623AEBC79_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		V_3 = *(int32_t*)UnBox(L_15);
		String_t* L_17 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_13, _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_0076;
	}

IL_0076:
	{
		String_t* L_18 = V_0;
		V_4 = L_18;
		goto IL_007b;
	}

IL_007b:
	{
		String_t* L_19 = V_4;
		return L_19;
	}
}
extern "C"  String_t* KeyBinding_ToString_mD37DE208A22A14A83B128852B8D7BEA29819B955_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * _thisAdjusted = reinterpret_cast<KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *>(__this + 1);
	return KeyBinding_ToString_mD37DE208A22A14A83B128852B8D7BEA29819B955(_thisAdjusted, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetKeyCode(UnityEngine.KeyCodeU26)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetKeyCode_mCAA25A07B478AF8BA432FB4CEA1F636DE06EFE60 (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * __this, int32_t* ___keyCode0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t* L_0 = ___keyCode0;
		int32_t L_1 = __this->get_code_4();
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t L_2 = __this->get_bindingType_3();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool KeyBinding_TryGetKeyCode_mCAA25A07B478AF8BA432FB4CEA1F636DE06EFE60_AdjustorThunk (RuntimeObject * __this, int32_t* ___keyCode0, const RuntimeMethod* method)
{
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * _thisAdjusted = reinterpret_cast<KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *>(__this + 1);
	return KeyBinding_TryGetKeyCode_mCAA25A07B478AF8BA432FB4CEA1F636DE06EFE60(_thisAdjusted, ___keyCode0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(System.Int32U26)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_mB3F3815438F5ACAF457B5488DDA8284318EC6ED4 (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t* L_0 = ___mouseButton0;
		int32_t L_1 = __this->get_code_4();
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t L_2 = __this->get_bindingType_3();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool KeyBinding_TryGetMouseButton_mB3F3815438F5ACAF457B5488DDA8284318EC6ED4_AdjustorThunk (RuntimeObject * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * _thisAdjusted = reinterpret_cast<KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *>(__this + 1);
	return KeyBinding_TryGetMouseButton_mB3F3815438F5ACAF457B5488DDA8284318EC6ED4(_thisAdjusted, ___mouseButton0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyBinding::TryGetMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButtonU26)
extern "C" IL2CPP_METHOD_ATTR bool KeyBinding_TryGetMouseButton_m7EC1DA595FE05692B91C77C99B6FA704020BD2FD (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0 = KeyBinding_TryGetMouseButton_mB3F3815438F5ACAF457B5488DDA8284318EC6ED4((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *)__this, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_2 = ___mouseButton0;
		int32_t L_3 = V_0;
		*((int32_t*)L_2) = (int32_t)L_3;
		V_2 = (bool)1;
		goto IL_001c;
	}

IL_0015:
	{
		int32_t* L_4 = ___mouseButton0;
		*((int32_t*)L_4) = (int32_t)0;
		V_2 = (bool)0;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
extern "C"  bool KeyBinding_TryGetMouseButton_m7EC1DA595FE05692B91C77C99B6FA704020BD2FD_AdjustorThunk (RuntimeObject * __this, int32_t* ___mouseButton0, const RuntimeMethod* method)
{
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 * _thisAdjusted = reinterpret_cast<KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *>(__this + 1);
	return KeyBinding_TryGetMouseButton_m7EC1DA595FE05692B91C77C99B6FA704020BD2FD(_thisAdjusted, ___mouseButton0, method);
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::Unbound()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  KeyBinding_Unbound_m6C720597006615566C1088D4F656511C420587F9 (const RuntimeMethod* method)
{
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  V_0;
	memset(&V_0, 0, sizeof(V_0));
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 ));
		(&V_0)->set_bindingType_3(0);
		(&V_0)->set_code_4(0);
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_0 = V_0;
		V_1 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_1 = V_1;
		return L_1;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromKey(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  KeyBinding_FromKey_m8B5E534BD581BA1FEDF53DFB969B6B3A4DB881EC (int32_t ___keyCode0, const RuntimeMethod* method)
{
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  V_0;
	memset(&V_0, 0, sizeof(V_0));
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 ));
		(&V_0)->set_bindingType_3(2);
		int32_t L_0 = ___keyCode0;
		(&V_0)->set_code_4(L_0);
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_1 = V_0;
		V_1 = L_1;
		goto IL_001d;
	}

IL_001d:
	{
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_2 = V_1;
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(System.Int32)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  KeyBinding_FromMouseButton_m7D40AF69AA74B4CA9FECCCFB7D8DAD63A450BC2B (int32_t ___mouseButton0, const RuntimeMethod* method)
{
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  V_0;
	memset(&V_0, 0, sizeof(V_0));
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 ));
		(&V_0)->set_bindingType_3(1);
		int32_t L_0 = ___mouseButton0;
		(&V_0)->set_code_4(L_0);
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_1 = V_0;
		V_1 = L_1;
		goto IL_001d;
	}

IL_001d:
	{
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_2 = V_1;
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.KeyBinding::FromMouseButton(Microsoft.MixedReality.Toolkit.Input.KeyBinding_MouseButton)
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  KeyBinding_FromMouseButton_mD56F414DB2608A6532A4CB14DBFC1661AA80923F (int32_t ___mouseButton0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBinding_FromMouseButton_mD56F414DB2608A6532A4CB14DBFC1661AA80923F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___mouseButton0;
		IL2CPP_RUNTIME_CLASS_INIT(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_il2cpp_TypeInfo_var);
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_1 = KeyBinding_FromMouseButton_m7D40AF69AA74B4CA9FECCCFB7D8DAD63A450BC2B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_2 = V_0;
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
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m2AC9A0BCD1DD33DEE0FF185977A6FD9599DEA2BA (U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.KeyBinding_<>c__DisplayClass5_0::<.cctor>b__0(Microsoft.MixedReality.Toolkit.Input.KeyBinding_KeyType,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m9D102086429130390E2CCA06B1632598A17A8EB2 (U3CU3Ec__DisplayClass5_0_tD98ECAEC49D61FCB7B505A2838D208DD57B31D9D * __this, int32_t ___bindingType0, int32_t ___code1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass5_0_U3C_cctorU3Eb__0_m9D102086429130390E2CCA06B1632598A17A8EB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  V_0;
	memset(&V_0, 0, sizeof(V_0));
	KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 ));
		int32_t L_0 = ___bindingType0;
		(&V_1)->set_bindingType_3(L_0);
		int32_t L_1 = ___code1;
		(&V_1)->set_code_4(L_1);
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_2 = V_1;
		V_0 = L_2;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_3 = __this->get_names_0();
		String_t* L_4 = KeyBinding_ToString_mD37DE208A22A14A83B128852B8D7BEA29819B955((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_3, L_4, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_il2cpp_TypeInfo_var);
		Dictionary_2_t9D7C731D29E782E90EFDA440E0343041E1FDE746 * L_5 = ((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_il2cpp_TypeInfo_var))->get_EnumToKeyBindingMap_2();
		int32_t L_6 = __this->get_index_1();
		int32_t L_7 = ___bindingType0;
		int32_t L_8 = ___code1;
		Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C * L_9 = Tuple_Create_TisKeyType_tF5A78BC09383A2ED02EED8E2F3CA2F3445018F58_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC10F042C6AD415B1040430EC4D3D76046ED557D6(L_7, L_8, /*hidden argument*/Tuple_Create_TisKeyType_tF5A78BC09383A2ED02EED8E2F3CA2F3445018F58_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC10F042C6AD415B1040430EC4D3D76046ED557D6_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_set_Item_mAC10F1CE6FD9EE89E58F31BC20189A0B89E30ECA(L_5, L_6, L_9, /*hidden argument*/Dictionary_2_set_Item_mAC10F1CE6FD9EE89E58F31BC20189A0B89E30ECA_RuntimeMethod_var);
		Dictionary_2_t9D794908D80E123F18CE843F67B1F3C4584FD500 * L_10 = ((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_StaticFields*)il2cpp_codegen_static_fields_for(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_il2cpp_TypeInfo_var))->get_KeyBindingToEnumMap_1();
		int32_t L_11 = ___bindingType0;
		int32_t L_12 = ___code1;
		Tuple_2_tF80B4F510194CE2279F1D8301A4350F4EA85C61C * L_13 = Tuple_Create_TisKeyType_tF5A78BC09383A2ED02EED8E2F3CA2F3445018F58_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC10F042C6AD415B1040430EC4D3D76046ED557D6(L_11, L_12, /*hidden argument*/Tuple_Create_TisKeyType_tF5A78BC09383A2ED02EED8E2F3CA2F3445018F58_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC10F042C6AD415B1040430EC4D3D76046ED557D6_RuntimeMethod_var);
		int32_t L_14 = __this->get_index_1();
		NullCheck(L_10);
		Dictionary_2_set_Item_m1A6741EFB5760E7A362D89DA95E03E9659AAACD9(L_10, L_13, L_14, /*hidden argument*/Dictionary_2_set_Item_m1A6741EFB5760E7A362D89DA95E03E9659AAACD9_RuntimeMethod_var);
		int32_t L_15 = __this->get_index_1();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		int32_t L_16 = V_2;
		__this->set_index_1(L_16);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyInputSystem::GetKey(Microsoft.MixedReality.Toolkit.Input.KeyBinding)
extern "C" IL2CPP_METHOD_ATTR bool KeyInputSystem_GetKey_m22E9FCAAC592CAA3D0C6874AED48EB988062C831 (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  ___kb0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		bool L_0 = KeyBinding_TryGetMouseButton_mB3F3815438F5ACAF457B5488DDA8284318EC6ED4((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *)(&___kb0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_0;
		bool L_3 = Input_GetMouseButton_mFA83B0C0BABD3113D1AAB38FBB953C91EA7FFA30(L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_0035;
	}

IL_0018:
	{
		bool L_4 = KeyBinding_TryGetKeyCode_mCAA25A07B478AF8BA432FB4CEA1F636DE06EFE60((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *)(&___kb0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_4 = L_4;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = V_1;
		bool L_7 = Input_GetKey_m54DC93F781FFEAB1DCDFAA3D15FA2FC01BF7667A(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		V_3 = (bool)0;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_8 = V_3;
		return L_8;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyInputSystem::GetKeyDown(Microsoft.MixedReality.Toolkit.Input.KeyBinding)
extern "C" IL2CPP_METHOD_ATTR bool KeyInputSystem_GetKeyDown_m7A2F0AB0764EC074BEE6F34922F45B789D913F9A (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  ___kb0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		bool L_0 = KeyBinding_TryGetMouseButton_mB3F3815438F5ACAF457B5488DDA8284318EC6ED4((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *)(&___kb0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_0;
		bool L_3 = Input_GetMouseButtonDown_mBC5947EA49ED797F0DB1830BFC13AF6514B765FD(L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_0035;
	}

IL_0018:
	{
		bool L_4 = KeyBinding_TryGetKeyCode_mCAA25A07B478AF8BA432FB4CEA1F636DE06EFE60((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *)(&___kb0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_4 = L_4;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = V_1;
		bool L_7 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		V_3 = (bool)0;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_8 = V_3;
		return L_8;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.KeyInputSystem::GetKeyUp(Microsoft.MixedReality.Toolkit.Input.KeyBinding)
extern "C" IL2CPP_METHOD_ATTR bool KeyInputSystem_GetKeyUp_m5A0D76ED27E3184901D4B4B039A4DC2249D19D79 (KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  ___kb0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		bool L_0 = KeyBinding_TryGetMouseButton_mB3F3815438F5ACAF457B5488DDA8284318EC6ED4((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *)(&___kb0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_0;
		bool L_3 = Input_GetMouseButtonUp_m726EDCD35F8DECF774810AB1E9ED590B85DB10F1(L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		goto IL_0035;
	}

IL_0018:
	{
		bool L_4 = KeyBinding_TryGetKeyCode_mCAA25A07B478AF8BA432FB4CEA1F636DE06EFE60((KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65 *)(&___kb0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_4 = L_4;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = V_1;
		bool L_7 = Input_GetKeyUp_m87C9C3E0877717675108A80EC663E60AD4D60D7C(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		goto IL_0035;
	}

IL_0031:
	{
		V_3 = (bool)0;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_8 = V_3;
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
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IndicatorsPrefab()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityInputSimulationProfile_get_IndicatorsPrefab_mF9D7A077CFA996A8153E94E4AF2667E451506605 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_indicatorsPrefab_5();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseRotationSensitivity()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_MouseRotationSensitivity_mDF963D7899A6625F1D06906EB2990E32B160D614 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_mouseRotationSensitivity_6();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseX()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseX_mB3AC282244D6D36CF7E693771DFA3D80877F1AD1 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mouseX_7();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseY()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseY_mC599070C0268B2D284DF9258DC6D942FE919B4C7 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mouseY_8();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseScroll()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MouseScroll_mA8B897F0EAE98754FE6FAC9FE0313C998C9F524B (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mouseScroll_9();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DoublePressTime()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DoublePressTime_m598E65CB0F0ACA1578D26778505C963930CDF9ED (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_doublePressTime_10();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IsCameraControlEnabled()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_IsCameraControlEnabled_mDB1ABF89DF915FE01AF74E5359C08B445F571CB1 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isCameraControlEnabled_11();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseLookSpeed()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_MouseLookSpeed_mD6556FB4E4C63ECA6AF869CA2E82B402B3C68F1B (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_mouseLookSpeed_12();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseLookButton()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  MixedRealityInputSimulationProfile_get_MouseLookButton_m8E8B3FCC298B657CC89624AA0E693267B2C1112B (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_0 = __this->get_mouseLookButton_13();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseLookToggle()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_MouseLookToggle_mF7E72A6512A680676C786ABD9A39617D031A0349 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mouseLookToggle_14();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_IsControllerLookInverted()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_IsControllerLookInverted_mBDFCF46E4353619EF61A38F870BB2E984EA8A226 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isControllerLookInverted_15();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSimulationControlMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_CurrentControlMode()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_CurrentControlMode_mEBFE9F6860B906D5D1113B36524EABD832BFB424 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_currentControlMode_16();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_FastControlKey()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  MixedRealityInputSimulationProfile_get_FastControlKey_m32777CAC9D4F173057ABC4F5F34185AC5AA63C63 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_0 = __this->get_fastControlKey_17();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ControlSlowSpeed()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlSlowSpeed_mBCEB0111CE68AD79B1B17C524115EDED1853D496 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_controlSlowSpeed_18();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ControlFastSpeed()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_ControlFastSpeed_m0374E82387E58B167C3D7C54090535CDBD7D3756 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_controlFastSpeed_19();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveHorizontal()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveHorizontal_m3AB8C182E12E3F31DC8FD413CC951B18A2828CF3 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_moveHorizontal_20();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveVertical()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveVertical_m558CB21A2671FC499DC6CB934F65C98E9DC8D3CC (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_moveVertical_21();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MoveUpDown()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_MoveUpDown_mC6BE3F41D2CC5531FCA39441904B1626BA8F38B4 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_moveUpDown_22();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LookHorizontal()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookHorizontal_m512FA4AE76EC5B6B55E37A56FAB3ACF959B222C1 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_lookHorizontal_23();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LookVertical()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealityInputSimulationProfile_get_LookVertical_mE645DD79C8D5D0F5BB35DF4BC02C90727674F314 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_lookVertical_24();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_SimulateEyePosition()
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityInputSimulationProfile_get_SimulateEyePosition_m023CE64EAC17A8121DD1832298BF5C129AE4875A (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_simulateEyePosition_25();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandSimulationMode()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_DefaultHandSimulationMode_mEA09CCCF4A64C209EDB2DF1EAD892E2CEFE494B5 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_defaultHandSimulationMode_26();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ToggleLeftHandKey()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  MixedRealityInputSimulationProfile_get_ToggleLeftHandKey_m4233272BE4B2233A2899DC09D340A9F2DB296A13 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_0 = __this->get_toggleLeftHandKey_27();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_ToggleRightHandKey()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  MixedRealityInputSimulationProfile_get_ToggleRightHandKey_m1A12FD3CC4A07FE77BC9DEDF31581BEDC7CB2472 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_0 = __this->get_toggleRightHandKey_28();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandHideTimeout()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandHideTimeout_m8A859F71F440608A1A2649F9D4F7E05162BDE6CB (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_handHideTimeout_29();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LeftHandManipulationKey()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  MixedRealityInputSimulationProfile_get_LeftHandManipulationKey_mDB2BD5CE3E7F1DB49A122103F42B4B7B87188F0D (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_0 = __this->get_leftHandManipulationKey_30();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RightHandManipulationKey()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  MixedRealityInputSimulationProfile_get_RightHandManipulationKey_mB80A8D0632A63BC90FA9AACCCF88F7F6989AB15E (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_0 = __this->get_rightHandManipulationKey_31();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MouseHandRotationSpeed()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_MouseHandRotationSpeed_mD0B966E0660DF1C419891EBFC85F90973C67113C (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_mouseHandRotationSpeed_32();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Input.KeyBinding Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandRotateButton()
extern "C" IL2CPP_METHOD_ATTR KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  MixedRealityInputSimulationProfile_get_HandRotateButton_mA95CF33EF9780CB3182BB353EB4BFB611A511F26 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_0 = __this->get_handRotateButton_33();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandGesture()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_DefaultHandGesture_m30C8D1863EB9AE9A5C85107B4371625601BC854C (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_defaultHandGesture_34();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_LeftMouseHandGesture()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_LeftMouseHandGesture_m630648BC0C8429D636FF6E77B045D91E431E0388 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_leftMouseHandGesture_35();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_MiddleMouseHandGesture()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_MiddleMouseHandGesture_m82138A6207662BDC0FA9F47B549506E5C0B24A57 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_middleMouseHandGesture_36();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_RightMouseHandGesture()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealityInputSimulationProfile_get_RightMouseHandGesture_m800E1A676BEB5C0B934BE94EB5C1C5C40BC136ED (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_rightMouseHandGesture_37();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandGestureAnimationSpeed()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandGestureAnimationSpeed_mFF8E46DB923DB730B0DD7A5A96BA2F8D0BE672E9 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_handGestureAnimationSpeed_38();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HoldStartDuration()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HoldStartDuration_m59444C3B4102B2C965138448278D71DE49711CEA (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_holdStartDuration_39();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_NavigationStartThreshold()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_NavigationStartThreshold_m247409F64764C43A06308B0B458F77E4A4244E3E (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_navigationStartThreshold_40();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_DefaultHandDistance()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_DefaultHandDistance_m69BCACACA24F5A1273B77F4A478D443269CA5ECF (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_defaultHandDistance_41();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandDepthMultiplier()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandDepthMultiplier_m3018550E006C634230AF09BBAB2D150FC3CDF473 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_handDepthMultiplier_42();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::get_HandJitterAmount()
extern "C" IL2CPP_METHOD_ATTR float MixedRealityInputSimulationProfile_get_HandJitterAmount_m79AB1518EABC98A478213948B0DC9C59FC9B6660 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_handJitterAmount_43();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealityInputSimulationProfile__ctor_m63CE6731F3B936DDFABA29DCD7F7C4B1F6369F36 (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInputSimulationProfile__ctor_m63CE6731F3B936DDFABA29DCD7F7C4B1F6369F36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_indicatorsPrefab_5((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		__this->set_mouseRotationSensitivity_6((0.1f));
		__this->set_mouseX_7(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0);
		__this->set_mouseY_8(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2);
		__this->set_mouseScroll_9(_stringLiteral627A7387C8BDDC7ACFF00D342D3F799DC6C19A31);
		__this->set_doublePressTime_10((0.4f));
		__this->set_isCameraControlEnabled_11((bool)1);
		__this->set_mouseLookSpeed_12((3.0f));
		IL2CPP_RUNTIME_CLASS_INIT(KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65_il2cpp_TypeInfo_var);
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_0 = KeyBinding_FromMouseButton_mD56F414DB2608A6532A4CB14DBFC1661AA80923F(1, /*hidden argument*/NULL);
		__this->set_mouseLookButton_13(L_0);
		__this->set_mouseLookToggle_14((bool)0);
		__this->set_isControllerLookInverted_15((bool)1);
		__this->set_currentControlMode_16(0);
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_1 = KeyBinding_FromKey_m8B5E534BD581BA1FEDF53DFB969B6B3A4DB881EC(((int32_t)305), /*hidden argument*/NULL);
		__this->set_fastControlKey_17(L_1);
		__this->set_controlSlowSpeed_18((0.1f));
		__this->set_controlFastSpeed_19((1.0f));
		__this->set_moveHorizontal_20(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C);
		__this->set_moveVertical_21(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5);
		__this->set_moveUpDown_22(_stringLiteral2FEED76F1368917E9E5273B5D3B77EC607649D4D);
		__this->set_lookHorizontal_23(_stringLiteral8B7970623A806CC748C1B218861BE920B011B98C);
		__this->set_lookVertical_24(_stringLiteral04734178D407F1573AAACEB7E086B11BCFABD7FF);
		__this->set_simulateEyePosition_25((bool)0);
		__this->set_defaultHandSimulationMode_26(2);
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_2 = KeyBinding_FromKey_m8B5E534BD581BA1FEDF53DFB969B6B3A4DB881EC(((int32_t)116), /*hidden argument*/NULL);
		__this->set_toggleLeftHandKey_27(L_2);
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_3 = KeyBinding_FromKey_m8B5E534BD581BA1FEDF53DFB969B6B3A4DB881EC(((int32_t)121), /*hidden argument*/NULL);
		__this->set_toggleRightHandKey_28(L_3);
		__this->set_handHideTimeout_29((0.2f));
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_4 = KeyBinding_FromKey_m8B5E534BD581BA1FEDF53DFB969B6B3A4DB881EC(((int32_t)304), /*hidden argument*/NULL);
		__this->set_leftHandManipulationKey_30(L_4);
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_5 = KeyBinding_FromKey_m8B5E534BD581BA1FEDF53DFB969B6B3A4DB881EC(((int32_t)32), /*hidden argument*/NULL);
		__this->set_rightHandManipulationKey_31(L_5);
		__this->set_mouseHandRotationSpeed_32((6.0f));
		KeyBinding_tDFE60D7D3BA3D3DD1854157EC3A02BFAD791BE65  L_6 = KeyBinding_FromKey_m8B5E534BD581BA1FEDF53DFB969B6B3A4DB881EC(((int32_t)306), /*hidden argument*/NULL);
		__this->set_handRotateButton_33(L_6);
		__this->set_defaultHandGesture_34(2);
		__this->set_leftMouseHandGesture_35(3);
		__this->set_middleMouseHandGesture_36(0);
		__this->set_rightMouseHandGesture_37(0);
		__this->set_handGestureAnimationSpeed_38((8.0f));
		__this->set_holdStartDuration_39((0.5f));
		__this->set_navigationStartThreshold_40((0.03f));
		__this->set_defaultHandDistance_41((0.5f));
		__this->set_handDepthMultiplier_42((0.03f));
		__this->set_handJitterAmount_43((0.0f));
		BaseMixedRealityProfile__ctor_m3B19D1B03CAC66A3703F01880F3A8968DF6BA3F4(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::get_SimulationMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SimulatedArticulatedHand_get_SimulationMode_m6D4D82D5615146E0F663D5DE5FEEF8AED72EA88E (SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
extern "C" IL2CPP_METHOD_ATTR void SimulatedArticulatedHand__ctor_m95DA511427D21F85AA69C93B90925240E3A4DDDF (SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand__ctor_m95DA511427D21F85AA69C93B90925240E3A4DDDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_24(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_25(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_2 = MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD(/*hidden argument*/NULL);
		__this->set_lastPointerPose_26(L_2);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_3 = MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD(/*hidden argument*/NULL);
		__this->set_currentPointerPose_27(L_3);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_4 = MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD(/*hidden argument*/NULL);
		__this->set_currentIndexPose_28(L_4);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_5 = MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD(/*hidden argument*/NULL);
		__this->set_currentGripPose_29(L_5);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_6 = MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD(/*hidden argument*/NULL);
		__this->set_lastGripPose_30(L_6);
		int32_t L_7 = ___trackingState0;
		uint8_t L_8 = ___controllerHandedness1;
		RuntimeObject* L_9 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_10 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_il2cpp_TypeInfo_var);
		SimulatedHand__ctor_m8C3FC7C2B7496A32E014232A26201192E827D803(__this, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::get_DefaultInteractions()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* SimulatedArticulatedHand_get_DefaultInteractions_mFB69DD1D81AF0F6E632B330D71964BA632A12C7A (SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand_get_DefaultInteractions_mFB69DD1D81AF0F6E632B330D71964BA632A12C7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_0 = (MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379_il2cpp_TypeInfo_var, (uint32_t)5);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_1 = L_0;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_2 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m480D9518380DE6086B79D0088223F89BFA8DF566(L_2, 0, _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E, 7, 3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_2);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_3 = L_1;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_4 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m480D9518380DE6086B79D0088223F89BFA8DF566(L_4, 1, _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC, 7, ((int32_t)14), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_4);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_5 = L_3;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_6 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m480D9518380DE6086B79D0088223F89BFA8DF566(L_6, 2, _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A, 2, ((int32_t)25), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_6);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_7 = L_5;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_8 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m480D9518380DE6086B79D0088223F89BFA8DF566(L_8, 3, _stringLiteralCF673A9C875D20DCDA8A5C0D7A2E5C60A940DB8E, 3, ((int32_t)13), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_8);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_9 = L_7;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_10 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m480D9518380DE6086B79D0088223F89BFA8DF566(L_10, 4, _stringLiteral561DDB78EA3339033D719AFAA6980160DC8D88CB, 7, ((int32_t)33), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_10);
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedArticulatedHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
extern "C" IL2CPP_METHOD_ATTR void SimulatedArticulatedHand_UpdateInteractions_mA999A5D98CFD765ED3670A6E2D3C7E60711B9921 (SimulatedArticulatedHand_tAB9D446B9032877A324E191C1999ABC66C887532 * __this, SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedArticulatedHand_UpdateInteractions_mA999A5D98CFD765ED3670A6E2D3C7E60711B9921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_19;
	memset(&V_19, 0, sizeof(V_19));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_20;
	memset(&V_20, 0, sizeof(V_20));
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	int32_t G_B14_0 = 0;
	RuntimeObject* G_B17_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	int32_t G_B22_0 = 0;
	RuntimeObject* G_B25_0 = NULL;
	RuntimeObject* G_B24_0 = NULL;
	RuntimeObject* G_B43_0 = NULL;
	RuntimeObject* G_B42_0 = NULL;
	RuntimeObject* G_B49_0 = NULL;
	RuntimeObject* G_B48_0 = NULL;
	RuntimeObject* G_B56_0 = NULL;
	RuntimeObject* G_B55_0 = NULL;
	RuntimeObject* G_B60_0 = NULL;
	RuntimeObject* G_B59_0 = NULL;
	RuntimeObject* G_B68_0 = NULL;
	RuntimeObject* G_B67_0 = NULL;
	RuntimeObject* G_B72_0 = NULL;
	RuntimeObject* G_B71_0 = NULL;
	RuntimeObject* G_B79_0 = NULL;
	RuntimeObject* G_B78_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* G_B85_0 = NULL;
	int32_t G_B85_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* G_B84_0 = NULL;
	int32_t G_B84_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B86_0;
	memset(&G_B86_0, 0, sizeof(G_B86_0));
	int32_t G_B86_1 = 0;
	{
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_0 = __this->get_currentPointerPose_27();
		__this->set_lastPointerPose_26(L_0);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_1 = __this->get_currentGripPose_29();
		__this->set_lastGripPose_30(L_1);
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_2 = ((SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4 *)__this)->get_jointPoses_23();
		NullCheck(L_2);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_3 = Dictionary_2_get_Item_m3BAD98FBDF97B4A32E77BA3433091475E39C8AC9(L_2, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_m3BAD98FBDF97B4A32E77BA3433091475E39C8AC9_RuntimeMethod_var);
		V_1 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_7 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_5, L_6, /*hidden argument*/NULL);
		bool L_8 = L_7;
		V_2 = L_8;
		BaseController_set_IsRotationAvailable_mA2981A7C18FE8962696F58C150C52A72A233242B(__this, L_8, /*hidden argument*/NULL);
		bool L_9 = V_2;
		BaseController_set_IsPositionAvailable_mD6C35886A0441F5D90505065132F851BB9CBA73F(__this, L_9, /*hidden argument*/NULL);
		bool L_10 = BaseController_get_IsPositionAvailable_m5986783C844D0BAE52F7F7827244F44083C53F41(__this, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_00da;
		}
	}
	{
		HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF * L_12 = BaseHand_get_HandRay_m19D22F2ACA83D5F69C07726091720BE63078BAC1(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = BaseHand_GetPalmNormal_m4AB806449F48A9A1D2E502B457AD552D4890BEA7(__this, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_15 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_15, /*hidden argument*/NULL);
		uint8_t L_17 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		HandRay_Update_mB6AF12772691B69C4165DE52787D74A2EAC185A9(L_12, L_13, L_14, L_16, L_17, /*hidden argument*/NULL);
		HandRay_t70420D5B9875B79EEBDC064812C068B78EF095CF * L_18 = BaseHand_get_HandRay_m19D22F2ACA83D5F69C07726091720BE63078BAC1(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_19 = HandRay_get_Ray_mCA0E5B7211237B6DFFA3D039592A046A67623462(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * L_20 = __this->get_address_of_currentPointerPose_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_4), /*hidden argument*/NULL);
		MixedRealityPose_set_Position_m5E800C5BCF0CC5847FA550A74A9154866EE245D4((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)L_20, L_21, /*hidden argument*/NULL);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * L_22 = __this->get_address_of_currentPointerPose_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_23, /*hidden argument*/NULL);
		MixedRealityPose_set_Rotation_m0B174141878A4469C62DF35E3FC2046A48475DD6((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)L_22, L_24, /*hidden argument*/NULL);
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_25 = ((SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4 *)__this)->get_jointPoses_23();
		NullCheck(L_25);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_26 = Dictionary_2_get_Item_m3BAD98FBDF97B4A32E77BA3433091475E39C8AC9(L_25, 2, /*hidden argument*/Dictionary_2_get_Item_m3BAD98FBDF97B4A32E77BA3433091475E39C8AC9_RuntimeMethod_var);
		__this->set_currentGripPose_29(L_26);
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_27 = ((SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4 *)__this)->get_jointPoses_23();
		NullCheck(L_27);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_28 = Dictionary_2_get_Item_m3BAD98FBDF97B4A32E77BA3433091475E39C8AC9(L_27, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_m3BAD98FBDF97B4A32E77BA3433091475E39C8AC9_RuntimeMethod_var);
		__this->set_currentIndexPose_28(L_28);
	}

IL_00da:
	{
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_29 = __this->get_lastGripPose_30();
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_30 = __this->get_currentGripPose_29();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var);
		bool L_31 = MixedRealityPose_op_Inequality_mCA02B87531F3223B293B69AF9A53157501FDB96B(L_29, L_30, /*hidden argument*/NULL);
		V_5 = L_31;
		bool L_32 = V_5;
		if (!L_32)
		{
			goto IL_01a2;
		}
	}
	{
		bool L_33 = BaseController_get_IsPositionAvailable_m5986783C844D0BAE52F7F7827244F44083C53F41(__this, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0105;
		}
	}
	{
		bool L_34 = BaseController_get_IsRotationAvailable_m7CD1F4130C0326153F51B5B7C433A7C049596A2B(__this, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_34));
		goto IL_0106;
	}

IL_0105:
	{
		G_B6_0 = 0;
	}

IL_0106:
	{
		V_6 = (bool)G_B6_0;
		bool L_35 = V_6;
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_36 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_37 = L_36;
		G_B8_0 = L_37;
		if (L_37)
		{
			G_B9_0 = L_37;
			goto IL_0118;
		}
	}
	{
		goto IL_012b;
	}

IL_0118:
	{
		RuntimeObject* L_38 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_39 = __this->get_currentGripPose_29();
		NullCheck(G_B9_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  >::Invoke(29 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B9_0, L_38, __this, L_39);
	}

IL_012b:
	{
		goto IL_01a1;
	}

IL_012e:
	{
		bool L_40 = BaseController_get_IsPositionAvailable_m5986783C844D0BAE52F7F7827244F44083C53F41(__this, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0141;
		}
	}
	{
		bool L_41 = BaseController_get_IsRotationAvailable_m7CD1F4130C0326153F51B5B7C433A7C049596A2B(__this, /*hidden argument*/NULL);
		G_B14_0 = ((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		goto IL_0142;
	}

IL_0141:
	{
		G_B14_0 = 0;
	}

IL_0142:
	{
		V_7 = (bool)G_B14_0;
		bool L_42 = V_7;
		if (!L_42)
		{
			goto IL_016a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_43 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_44 = L_43;
		G_B16_0 = L_44;
		if (L_44)
		{
			G_B17_0 = L_44;
			goto IL_0154;
		}
	}
	{
		goto IL_0167;
	}

IL_0154:
	{
		RuntimeObject* L_45 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = __this->get_currentPointerPosition_24();
		NullCheck(G_B17_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B17_0, L_45, __this, L_46);
	}

IL_0167:
	{
		goto IL_01a1;
	}

IL_016a:
	{
		bool L_47 = BaseController_get_IsPositionAvailable_m5986783C844D0BAE52F7F7827244F44083C53F41(__this, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_017a;
		}
	}
	{
		bool L_48 = BaseController_get_IsRotationAvailable_m7CD1F4130C0326153F51B5B7C433A7C049596A2B(__this, /*hidden argument*/NULL);
		G_B22_0 = ((int32_t)(L_48));
		goto IL_017b;
	}

IL_017a:
	{
		G_B22_0 = 0;
	}

IL_017b:
	{
		V_8 = (bool)G_B22_0;
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_01a1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_50 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_51 = L_50;
		G_B24_0 = L_51;
		if (L_51)
		{
			G_B25_0 = L_51;
			goto IL_018d;
		}
	}
	{
		goto IL_01a0;
	}

IL_018d:
	{
		RuntimeObject* L_52 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_53 = __this->get_currentPointerRotation_25();
		NullCheck(G_B25_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(28 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceRotationChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Quaternion) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B25_0, L_52, __this, L_53);
	}

IL_01a0:
	{
	}

IL_01a1:
	{
	}

IL_01a2:
	{
		V_9 = 0;
		goto IL_045b;
	}

IL_01aa:
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_54 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_55 = V_9;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		int32_t L_58 = MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411(L_57, /*hidden argument*/NULL);
		V_10 = L_58;
		int32_t L_59 = V_10;
		if ((((int32_t)L_59) > ((int32_t)((int32_t)13))))
		{
			goto IL_01d6;
		}
	}
	{
		int32_t L_60 = V_10;
		if ((((int32_t)L_60) == ((int32_t)3)))
		{
			goto IL_01f7;
		}
	}
	{
		goto IL_01c8;
	}

IL_01c8:
	{
		int32_t L_61 = V_10;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)13))))
		{
			goto IL_0359;
		}
	}
	{
		goto IL_0454;
	}

IL_01d6:
	{
		int32_t L_62 = V_10;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)14))))
		{
			goto IL_0258;
		}
	}
	{
		goto IL_01de;
	}

IL_01de:
	{
		int32_t L_63 = V_10;
		if ((((int32_t)L_63) == ((int32_t)((int32_t)25))))
		{
			goto IL_02b9;
		}
	}
	{
		goto IL_01e9;
	}

IL_01e9:
	{
		int32_t L_64 = V_10;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)33))))
		{
			goto IL_03f6;
		}
	}
	{
		goto IL_0454;
	}

IL_01f7:
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_65 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_66 = V_9;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_69 = __this->get_currentPointerPose_27();
		NullCheck(L_68);
		MixedRealityInteractionMapping_set_PoseData_m14C728BDE4DD532AA58376A1A09136313917E117(L_68, L_69, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_70 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_71 = V_9;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		bool L_74 = MixedRealityInteractionMapping_get_Changed_m9F35AE4035C112B4C7ACC0AE64636E9D6FC6AEE2(L_73, /*hidden argument*/NULL);
		V_11 = L_74;
		bool L_75 = V_11;
		if (!L_75)
		{
			goto IL_0253;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_76 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_77 = L_76;
		G_B42_0 = L_77;
		if (L_77)
		{
			G_B43_0 = L_77;
			goto IL_022c;
		}
	}
	{
		goto IL_0252;
	}

IL_022c:
	{
		RuntimeObject* L_78 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		uint8_t L_79 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_80 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_81 = V_9;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_84 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160(L_83, /*hidden argument*/NULL);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_85 = __this->get_currentPointerPose_27();
		NullCheck(G_B43_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B43_0, L_78, L_79, L_84, L_85);
	}

IL_0252:
	{
	}

IL_0253:
	{
		goto IL_0454;
	}

IL_0258:
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_86 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_87 = V_9;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_90 = __this->get_currentGripPose_29();
		NullCheck(L_89);
		MixedRealityInteractionMapping_set_PoseData_m14C728BDE4DD532AA58376A1A09136313917E117(L_89, L_90, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_91 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_92 = V_9;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_94);
		bool L_95 = MixedRealityInteractionMapping_get_Changed_m9F35AE4035C112B4C7ACC0AE64636E9D6FC6AEE2(L_94, /*hidden argument*/NULL);
		V_12 = L_95;
		bool L_96 = V_12;
		if (!L_96)
		{
			goto IL_02b4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_97 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_98 = L_97;
		G_B48_0 = L_98;
		if (L_98)
		{
			G_B49_0 = L_98;
			goto IL_028d;
		}
	}
	{
		goto IL_02b3;
	}

IL_028d:
	{
		RuntimeObject* L_99 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		uint8_t L_100 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_101 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_102 = V_9;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_104);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_105 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160(L_104, /*hidden argument*/NULL);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_106 = __this->get_currentGripPose_29();
		NullCheck(G_B49_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B49_0, L_99, L_100, L_105, L_106);
	}

IL_02b3:
	{
	}

IL_02b4:
	{
		goto IL_0454;
	}

IL_02b9:
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_107 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_108 = V_9;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * L_111 = ___handData0;
		NullCheck(L_111);
		bool L_112 = SimulatedHandData_get_IsPinching_m0E22A8E6AE9676DCB58D8FC777E2A442A981B0F6(L_111, /*hidden argument*/NULL);
		NullCheck(L_110);
		MixedRealityInteractionMapping_set_BoolData_m50CF3568F80193C77755707CE8CB29E8698E7BB2(L_110, L_112, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_113 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_114 = V_9;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_116);
		bool L_117 = MixedRealityInteractionMapping_get_Changed_m9F35AE4035C112B4C7ACC0AE64636E9D6FC6AEE2(L_116, /*hidden argument*/NULL);
		V_13 = L_117;
		bool L_118 = V_13;
		if (!L_118)
		{
			goto IL_0354;
		}
	}
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_119 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_120 = V_9;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		bool L_123 = MixedRealityInteractionMapping_get_BoolData_m9BBBD50DE77D8F569D8B800CB980D07AC77A5445(L_122, /*hidden argument*/NULL);
		V_14 = L_123;
		bool L_124 = V_14;
		if (!L_124)
		{
			goto IL_0326;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_125 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_126 = L_125;
		G_B55_0 = L_126;
		if (L_126)
		{
			G_B56_0 = L_126;
			goto IL_0303;
		}
	}
	{
		goto IL_0323;
	}

IL_0303:
	{
		RuntimeObject* L_127 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		uint8_t L_128 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_129 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_130 = V_9;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_133 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160(L_132, /*hidden argument*/NULL);
		NullCheck(G_B56_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B56_0, L_127, L_128, L_133);
	}

IL_0323:
	{
		goto IL_0353;
	}

IL_0326:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_134 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_135 = L_134;
		G_B59_0 = L_135;
		if (L_135)
		{
			G_B60_0 = L_135;
			goto IL_0332;
		}
	}
	{
		goto IL_0352;
	}

IL_0332:
	{
		RuntimeObject* L_136 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		uint8_t L_137 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_138 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_139 = V_9;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		NullCheck(L_141);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_142 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160(L_141, /*hidden argument*/NULL);
		NullCheck(G_B60_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B60_0, L_136, L_137, L_142);
	}

IL_0352:
	{
	}

IL_0353:
	{
	}

IL_0354:
	{
		goto IL_0454;
	}

IL_0359:
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_143 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_144 = V_9;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * L_147 = ___handData0;
		NullCheck(L_147);
		bool L_148 = SimulatedHandData_get_IsPinching_m0E22A8E6AE9676DCB58D8FC777E2A442A981B0F6(L_147, /*hidden argument*/NULL);
		NullCheck(L_146);
		MixedRealityInteractionMapping_set_BoolData_m50CF3568F80193C77755707CE8CB29E8698E7BB2(L_146, L_148, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_149 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_150 = V_9;
		NullCheck(L_149);
		int32_t L_151 = L_150;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		NullCheck(L_152);
		bool L_153 = MixedRealityInteractionMapping_get_Changed_m9F35AE4035C112B4C7ACC0AE64636E9D6FC6AEE2(L_152, /*hidden argument*/NULL);
		V_15 = L_153;
		bool L_154 = V_15;
		if (!L_154)
		{
			goto IL_03f4;
		}
	}
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_155 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_156 = V_9;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		NullCheck(L_158);
		bool L_159 = MixedRealityInteractionMapping_get_BoolData_m9BBBD50DE77D8F569D8B800CB980D07AC77A5445(L_158, /*hidden argument*/NULL);
		V_16 = L_159;
		bool L_160 = V_16;
		if (!L_160)
		{
			goto IL_03c6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_161 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_162 = L_161;
		G_B67_0 = L_162;
		if (L_162)
		{
			G_B68_0 = L_162;
			goto IL_03a3;
		}
	}
	{
		goto IL_03c3;
	}

IL_03a3:
	{
		RuntimeObject* L_163 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		uint8_t L_164 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_165 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_166 = V_9;
		NullCheck(L_165);
		int32_t L_167 = L_166;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_168 = (L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_168);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_169 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160(L_168, /*hidden argument*/NULL);
		NullCheck(G_B68_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B68_0, L_163, L_164, L_169);
	}

IL_03c3:
	{
		goto IL_03f3;
	}

IL_03c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_170 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_171 = L_170;
		G_B71_0 = L_171;
		if (L_171)
		{
			G_B72_0 = L_171;
			goto IL_03d2;
		}
	}
	{
		goto IL_03f2;
	}

IL_03d2:
	{
		RuntimeObject* L_172 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		uint8_t L_173 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_174 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_175 = V_9;
		NullCheck(L_174);
		int32_t L_176 = L_175;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		NullCheck(L_177);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_178 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160(L_177, /*hidden argument*/NULL);
		NullCheck(G_B72_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B72_0, L_172, L_173, L_178);
	}

IL_03f2:
	{
	}

IL_03f3:
	{
	}

IL_03f4:
	{
		goto IL_0454;
	}

IL_03f6:
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_179 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_180 = V_9;
		NullCheck(L_179);
		int32_t L_181 = L_180;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_183 = __this->get_currentIndexPose_28();
		NullCheck(L_182);
		MixedRealityInteractionMapping_set_PoseData_m14C728BDE4DD532AA58376A1A09136313917E117(L_182, L_183, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_184 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_185 = V_9;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		NullCheck(L_187);
		bool L_188 = MixedRealityInteractionMapping_get_Changed_m9F35AE4035C112B4C7ACC0AE64636E9D6FC6AEE2(L_187, /*hidden argument*/NULL);
		V_17 = L_188;
		bool L_189 = V_17;
		if (!L_189)
		{
			goto IL_0452;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_190 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_191 = L_190;
		G_B78_0 = L_191;
		if (L_191)
		{
			G_B79_0 = L_191;
			goto IL_042b;
		}
	}
	{
		goto IL_0451;
	}

IL_042b:
	{
		RuntimeObject* L_192 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		uint8_t L_193 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_194 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_195 = V_9;
		NullCheck(L_194);
		int32_t L_196 = L_195;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_197 = (L_194)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		NullCheck(L_197);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_198 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160(L_197, /*hidden argument*/NULL);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_199 = __this->get_currentIndexPose_28();
		NullCheck(G_B79_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B79_0, L_192, L_193, L_198, L_199);
	}

IL_0451:
	{
	}

IL_0452:
	{
		goto IL_0454;
	}

IL_0454:
	{
		int32_t L_200 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_200, (int32_t)1));
	}

IL_045b:
	{
		int32_t L_201 = V_9;
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_202 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_203 = L_202;
		G_B84_0 = L_203;
		G_B84_1 = L_201;
		if (L_203)
		{
			G_B85_0 = L_203;
			G_B85_1 = L_201;
			goto IL_0473;
		}
	}
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_204 = V_20;
		G_B86_0 = L_204;
		G_B86_1 = G_B84_1;
		goto IL_047a;
	}

IL_0473:
	{
		NullCheck(G_B85_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_205;
		memset(&L_205, 0, sizeof(L_205));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_205), (((int32_t)((int32_t)(((RuntimeArray *)G_B85_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B86_0 = L_205;
		G_B86_1 = G_B85_1;
	}

IL_047a:
	{
		V_19 = G_B86_0;
		int32_t L_206 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_19), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_207 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_19), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		V_18 = (bool)((int32_t)((int32_t)((((int32_t)G_B86_1) < ((int32_t)L_206))? 1 : 0)&(int32_t)L_207));
		bool L_208 = V_18;
		if (L_208)
		{
			goto IL_01aa;
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
// Microsoft.MixedReality.Toolkit.Input.HandSimulationMode Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_SimulationMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SimulatedGestureHand_get_SimulationMode_m693753EC22D9947F31FFC534A23105AF274EBDE2 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_NavigationDelta()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedGestureHand_get_NavigationDelta_m78455B0026EC6EC96AC09450639E9416A23003F7 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_get_NavigationDelta_m78455B0026EC6EC96AC09450639E9416A23003F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_cumulativeDelta_38();
		float L_1 = L_0->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_1, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = __this->get_address_of_currentRailsUsed_36();
		float L_4 = L_3->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = __this->get_address_of_cumulativeDelta_38();
		float L_6 = L_5->get_y_3();
		float L_7 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_6, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = __this->get_address_of_currentRailsUsed_36();
		float L_9 = L_8->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_10 = __this->get_address_of_cumulativeDelta_38();
		float L_11 = L_10->get_z_4();
		float L_12 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_11, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_13 = __this->get_address_of_currentRailsUsed_36();
		float L_14 = L_13->get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_4)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_9)), ((float)il2cpp_codegen_multiply((float)L_12, (float)L_14)), /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand__ctor_m5B71DA1966149FC17D2AC52BD6804DE26F689A3A (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand__ctor_m5B71DA1966149FC17D2AC52BD6804DE26F689A3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_initializedFromProfile_24((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_0 = MixedRealityInputAction_get_None_mB936666B421F095C01875073AB41805930184E6D(/*hidden argument*/NULL);
		__this->set_holdAction_25(L_0);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_1 = MixedRealityInputAction_get_None_mB936666B421F095C01875073AB41805930184E6D(/*hidden argument*/NULL);
		__this->set_navigationAction_26(L_1);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_2 = MixedRealityInputAction_get_None_mB936666B421F095C01875073AB41805930184E6D(/*hidden argument*/NULL);
		__this->set_manipulationAction_27(L_2);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_3 = MixedRealityInputAction_get_None_mB936666B421F095C01875073AB41805930184E6D(/*hidden argument*/NULL);
		__this->set_selectAction_28(L_3);
		__this->set_useRailsNavigation_29((bool)0);
		__this->set_holdStartDuration_30((0.0f));
		__this->set_navigationStartThreshold_31((0.0f));
		__this->set_SelectDownStartTime_32((0.0f));
		__this->set_holdInProgress_33((bool)0);
		__this->set_manipulationInProgress_34((bool)0);
		__this->set_navigationInProgress_35((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_currentPosition_37(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_7 = MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD(/*hidden argument*/NULL);
		__this->set_currentGripPose_39(L_7);
		int32_t L_8 = ___trackingState0;
		uint8_t L_9 = ___controllerHandedness1;
		RuntimeObject* L_10 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_11 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_il2cpp_TypeInfo_var);
		SimulatedHand__ctor_m8C3FC7C2B7496A32E014232A26201192E827D803(__this, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::EnsureProfileSettings()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_EnsureProfileSettings_mF24D746CF95BAD9EDC8A711BCDB98D95E19BE40B (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_EnsureProfileSettings_mF24D746CF95BAD9EDC8A711BCDB98D95E19BE40B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * V_0 = NULL;
	MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * V_1 = NULL;
	MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B  V_7;
	memset(&V_7, 0, sizeof(V_7));
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * G_B5_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * G_B22_0 = NULL;
	{
		bool L_0 = __this->get_initializedFromProfile_24();
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0147;
	}

IL_0011:
	{
		__this->set_initializedFromProfile_24((bool)1);
		V_0 = (MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0026;
		}
	}
	{
		G_B5_0 = ((MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 *)(NULL));
		goto IL_002b;
	}

IL_0026:
	{
		NullCheck(G_B4_0);
		MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * L_4 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B4_0);
		G_B5_0 = L_4;
	}

IL_002b:
	{
		V_1 = G_B5_0;
		MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_6;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * L_8 = V_1;
		NullCheck(L_8);
		MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * L_9 = MixedRealityInputSystemProfile_get_GesturesProfile_m773E39249F95954826F5FEE76E7140BA1BF6C745(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0042:
	{
		MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_11;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00f1;
		}
	}
	{
		V_6 = 0;
		goto IL_00cf;
	}

IL_0058:
	{
		MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * L_13 = V_0;
		NullCheck(L_13);
		MixedRealityGestureMappingU5BU5D_tACABC5B25A2CC3286D152A57F4EED7194845E0AA* L_14 = MixedRealityGesturesProfile_get_Gestures_m7B09BEA494BC93F4BFBFBFDB60204A6FA85A53FE(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B  L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_7 = L_17;
		int32_t L_18 = MixedRealityGestureMapping_get_GestureType_mF4EA84D1E842EECE373A84265F6E7030E703B3C7((MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B *)(&V_7), /*hidden argument*/NULL);
		V_8 = L_18;
		int32_t L_19 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)))
		{
			case 0:
			{
				goto IL_008c;
			}
			case 1:
			{
				goto IL_00aa;
			}
			case 2:
			{
				goto IL_009b;
			}
			case 3:
			{
				goto IL_00b9;
			}
		}
	}
	{
		goto IL_00c8;
	}

IL_008c:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_20 = MixedRealityGestureMapping_get_Action_m41B8C192B67A85F98D040910C00EC83FC3E834C5((MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B *)(&V_7), /*hidden argument*/NULL);
		__this->set_holdAction_25(L_20);
		goto IL_00c8;
	}

IL_009b:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_21 = MixedRealityGestureMapping_get_Action_m41B8C192B67A85F98D040910C00EC83FC3E834C5((MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B *)(&V_7), /*hidden argument*/NULL);
		__this->set_manipulationAction_27(L_21);
		goto IL_00c8;
	}

IL_00aa:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_22 = MixedRealityGestureMapping_get_Action_m41B8C192B67A85F98D040910C00EC83FC3E834C5((MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B *)(&V_7), /*hidden argument*/NULL);
		__this->set_navigationAction_26(L_22);
		goto IL_00c8;
	}

IL_00b9:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_23 = MixedRealityGestureMapping_get_Action_m41B8C192B67A85F98D040910C00EC83FC3E834C5((MixedRealityGestureMapping_t613348C514CC0BC34F3D5FCCC4549E9C69FBE70B *)(&V_7), /*hidden argument*/NULL);
		__this->set_selectAction_28(L_23);
		goto IL_00c8;
	}

IL_00c8:
	{
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00cf:
	{
		int32_t L_25 = V_6;
		MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * L_26 = V_0;
		NullCheck(L_26);
		MixedRealityGestureMappingU5BU5D_tACABC5B25A2CC3286D152A57F4EED7194845E0AA* L_27 = MixedRealityGesturesProfile_get_Gestures_m7B09BEA494BC93F4BFBFBFDB60204A6FA85A53FE(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		V_9 = (bool)((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length))))))? 1 : 0);
		bool L_28 = V_9;
		if (L_28)
		{
			goto IL_0058;
		}
	}
	{
		MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * L_29 = V_0;
		NullCheck(L_29);
		bool L_30 = MixedRealityGesturesProfile_get_UseRailsNavigation_m0F5F5DA6F75F0C71540A1A70824A1DB624B0288E(L_29, /*hidden argument*/NULL);
		__this->set_useRailsNavigation_29(L_30);
	}

IL_00f1:
	{
		V_2 = (MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_31 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_0120;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_33 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_33, IMixedRealityDataProviderAccess_t63F3E16981AF92E0A01138E618F95865C1185D1E_il2cpp_TypeInfo_var)));
		RuntimeObject* L_34 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityDataProviderAccess_GetDataProvider_TisIInputSimulationService_t9AB23BF0767DC26ADF597BE3F4D97186A9D575A5_mC51573EFDAA7817C0837F735BCB142EE2398F097_RuntimeMethod_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_33, IMixedRealityDataProviderAccess_t63F3E16981AF92E0A01138E618F95865C1185D1E_il2cpp_TypeInfo_var)), (String_t*)NULL);
		RuntimeObject* L_35 = L_34;
		G_B20_0 = L_35;
		if (L_35)
		{
			G_B21_0 = L_35;
			goto IL_0119;
		}
	}
	{
		G_B22_0 = ((MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D *)(NULL));
		goto IL_011e;
	}

IL_0119:
	{
		NullCheck(G_B21_0);
		MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * L_36 = InterfaceFuncInvoker0< MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSimulationProfile Microsoft.MixedReality.Toolkit.Input.IInputSimulationService::get_InputSimulationProfile() */, IInputSimulationService_t9AB23BF0767DC26ADF597BE3F4D97186A9D575A5_il2cpp_TypeInfo_var, G_B21_0);
		G_B22_0 = L_36;
	}

IL_011e:
	{
		V_2 = G_B22_0;
	}

IL_0120:
	{
		MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * L_37 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_38 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_37, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_11 = L_38;
		bool L_39 = V_11;
		if (!L_39)
		{
			goto IL_0147;
		}
	}
	{
		MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * L_40 = V_2;
		NullCheck(L_40);
		float L_41 = MixedRealityInputSimulationProfile_get_HoldStartDuration_m59444C3B4102B2C965138448278D71DE49711CEA(L_40, /*hidden argument*/NULL);
		__this->set_holdStartDuration_30(L_41);
		MixedRealityInputSimulationProfile_t4D10781AAE77C07607694C5D539C7E02DA75EF2D * L_42 = V_2;
		NullCheck(L_42);
		float L_43 = MixedRealityInputSimulationProfile_get_NavigationStartThreshold_m247409F64764C43A06308B0B458F77E4A4244E3E(L_42, /*hidden argument*/NULL);
		__this->set_navigationStartThreshold_31(L_43);
	}

IL_0147:
	{
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::get_DefaultInteractions()
extern "C" IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* SimulatedGestureHand_get_DefaultInteractions_m329B653DBA0B7E213864C91CD6B978A4A9512915 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_get_DefaultInteractions_m329B653DBA0B7E213864C91CD6B978A4A9512915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_0 = (MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379_il2cpp_TypeInfo_var, (uint32_t)2);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_1 = L_0;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_2 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m480D9518380DE6086B79D0088223F89BFA8DF566(L_2, 0, _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A, 2, ((int32_t)25), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_2);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_3 = L_1;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_4 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m480D9518380DE6086B79D0088223F89BFA8DF566(L_4, 1, _stringLiteral66654F3A427908EF2AB0102919620271D634DA8A, 7, ((int32_t)14), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_4);
		return L_3;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateInteractions_mE57D6AD1D72C7FF5C6CF101D87E22DF56C3EA8B4 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateInteractions_mE57D6AD1D72C7FF5C6CF101D87E22DF56C3EA8B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_15;
	memset(&V_15, 0, sizeof(V_15));
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	RuntimeObject* G_B24_0 = NULL;
	RuntimeObject* G_B23_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* G_B41_0 = NULL;
	int32_t G_B41_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* G_B40_0 = NULL;
	int32_t G_B40_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B42_0;
	memset(&G_B42_0, 0, sizeof(G_B42_0));
	int32_t G_B42_1 = 0;
	{
		SimulatedGestureHand_EnsureProfileSettings_mF24D746CF95BAD9EDC8A711BCDB98D95E19BE40B(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_currentPosition_37();
		V_0 = L_0;
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_1 = ((SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4 *)__this)->get_jointPoses_23();
		NullCheck(L_1);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_2 = Dictionary_2_get_Item_m3BAD98FBDF97B4A32E77BA3433091475E39C8AC9(L_1, ((int32_t)11), /*hidden argument*/Dictionary_2_get_Item_m3BAD98FBDF97B4A32E77BA3433091475E39C8AC9_RuntimeMethod_var);
		V_1 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_1), /*hidden argument*/NULL);
		__this->set_currentPosition_37(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_cumulativeDelta_38();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_currentPosition_37();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_4, L_7, /*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_8);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * L_9 = __this->get_address_of_currentGripPose_39();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_currentPosition_37();
		MixedRealityPose_set_Position_m5E800C5BCF0CC5847FA550A74A9154866EE245D4((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)L_9, L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = __this->get_currentPosition_37();
		bool L_13 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0089;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_16 = L_15;
		G_B2_0 = L_16;
		if (L_16)
		{
			G_B3_0 = L_16;
			goto IL_0075;
		}
	}
	{
		goto IL_0088;
	}

IL_0075:
	{
		RuntimeObject* L_17 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = __this->get_currentPosition_37();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePositionChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,UnityEngine.Vector3) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, L_17, __this, L_18);
	}

IL_0088:
	{
	}

IL_0089:
	{
		V_3 = 0;
		goto IL_0282;
	}

IL_0090:
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_19 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		int32_t L_23 = MixedRealityInteractionMapping_get_InputType_m6FB17C3592ED0C62594C5FD9664BDD3C38149411(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		int32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)14))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00a8;
	}

IL_00a8:
	{
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)25))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_027d;
	}

IL_00b3:
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_26 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_27 = V_3;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_30 = __this->get_currentGripPose_39();
		NullCheck(L_29);
		MixedRealityInteractionMapping_set_PoseData_m14C728BDE4DD532AA58376A1A09136313917E117(L_29, L_30, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_31 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		bool L_35 = MixedRealityInteractionMapping_get_Changed_m9F35AE4035C112B4C7ACC0AE64636E9D6FC6AEE2(L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		bool L_36 = V_5;
		if (!L_36)
		{
			goto IL_010c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_37 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_38 = L_37;
		G_B12_0 = L_38;
		if (L_38)
		{
			G_B13_0 = L_38;
			goto IL_00e6;
		}
	}
	{
		goto IL_010b;
	}

IL_00e6:
	{
		RuntimeObject* L_39 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		uint8_t L_40 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_41 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_45 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160(L_44, /*hidden argument*/NULL);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_46 = __this->get_currentGripPose_39();
		NullCheck(G_B13_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B13_0, L_39, L_40, L_45, L_46);
	}

IL_010b:
	{
	}

IL_010c:
	{
		goto IL_027d;
	}

IL_0111:
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_47 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * L_51 = ___handData0;
		NullCheck(L_51);
		bool L_52 = SimulatedHandData_get_IsPinching_m0E22A8E6AE9676DCB58D8FC777E2A442A981B0F6(L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		MixedRealityInteractionMapping_set_BoolData_m50CF3568F80193C77755707CE8CB29E8698E7BB2(L_50, L_52, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_53 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_54 = V_3;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		bool L_57 = MixedRealityInteractionMapping_get_Changed_m9F35AE4035C112B4C7ACC0AE64636E9D6FC6AEE2(L_56, /*hidden argument*/NULL);
		V_6 = L_57;
		bool L_58 = V_6;
		if (!L_58)
		{
			goto IL_01e1;
		}
	}
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_59 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_60 = V_3;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		bool L_63 = MixedRealityInteractionMapping_get_BoolData_m9BBBD50DE77D8F569D8B800CB980D07AC77A5445(L_62, /*hidden argument*/NULL);
		V_7 = L_63;
		bool L_64 = V_7;
		if (!L_64)
		{
			goto IL_0193;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_65 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_66 = L_65;
		G_B19_0 = L_66;
		if (L_66)
		{
			G_B20_0 = L_66;
			goto IL_015b;
		}
	}
	{
		goto IL_017a;
	}

IL_015b:
	{
		RuntimeObject* L_67 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		uint8_t L_68 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_69 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_70 = V_3;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_73 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160(L_72, /*hidden argument*/NULL);
		NullCheck(G_B20_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B20_0, L_67, L_68, L_73);
	}

IL_017a:
	{
		float L_74 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_SelectDownStartTime_32(L_74);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_cumulativeDelta_38(L_75);
		goto IL_01db;
	}

IL_0193:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_76 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_77 = L_76;
		G_B23_0 = L_77;
		if (L_77)
		{
			G_B24_0 = L_77;
			goto IL_019f;
		}
	}
	{
		goto IL_01be;
	}

IL_019f:
	{
		RuntimeObject* L_78 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		uint8_t L_79 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_80 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_81 = V_3;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_84 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160(L_83, /*hidden argument*/NULL);
		NullCheck(G_B24_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B24_0, L_78, L_79, L_84);
	}

IL_01be:
	{
		SimulatedGestureHand_TryCompleteSelect_mD65DDDA160775409F300FDAB683BFD57013C344D(__this, /*hidden argument*/NULL);
		SimulatedGestureHand_TryCompleteHold_mA3CECE70227149ADD36FA2BA1D2A707253C2C8B0(__this, /*hidden argument*/NULL);
		SimulatedGestureHand_TryCompleteManipulation_m38916F79C8AE4B1ABD4EBF271CE04F66956024F9(__this, /*hidden argument*/NULL);
		SimulatedGestureHand_TryCompleteNavigation_m4A7919C0F67FAD492696053D6BC88C14166E90AD(__this, /*hidden argument*/NULL);
	}

IL_01db:
	{
		goto IL_027b;
	}

IL_01e1:
	{
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_85 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		int32_t L_86 = V_3;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_88);
		bool L_89 = MixedRealityInteractionMapping_get_BoolData_m9BBBD50DE77D8F569D8B800CB980D07AC77A5445(L_88, /*hidden argument*/NULL);
		V_8 = L_89;
		bool L_90 = V_8;
		if (!L_90)
		{
			goto IL_027b;
		}
	}
	{
		bool L_91 = __this->get_manipulationInProgress_34();
		V_9 = L_91;
		bool L_92 = V_9;
		if (!L_92)
		{
			goto IL_020d;
		}
	}
	{
		SimulatedGestureHand_UpdateManipulation_mC084DDE25A78F60DD90F45C17605D869D50ACEF7(__this, /*hidden argument*/NULL);
	}

IL_020d:
	{
		bool L_93 = __this->get_navigationInProgress_35();
		V_10 = L_93;
		bool L_94 = V_10;
		if (!L_94)
		{
			goto IL_0222;
		}
	}
	{
		SimulatedGestureHand_UpdateNavigation_m54497EA8A92B98D8140CC7F3A3E218C9B7231DF9(__this, /*hidden argument*/NULL);
	}

IL_0222:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_95 = __this->get_address_of_cumulativeDelta_38();
		float L_96 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_95, /*hidden argument*/NULL);
		float L_97 = __this->get_navigationStartThreshold_31();
		V_11 = (bool)((((float)L_96) > ((float)L_97))? 1 : 0);
		bool L_98 = V_11;
		if (!L_98)
		{
			goto IL_0254;
		}
	}
	{
		SimulatedGestureHand_TryCancelHold_mAE3A4BB547C0FC869E1CF0163B44C4C87A7C827A(__this, /*hidden argument*/NULL);
		SimulatedGestureHand_TryStartNavigation_m3003BA7F41386ED68B46FE614DBF60C101E68A35(__this, /*hidden argument*/NULL);
		SimulatedGestureHand_TryStartManipulation_m7AAD3F01B1474AB282CED27A6D5250DCF43A7DEE(__this, /*hidden argument*/NULL);
		goto IL_027a;
	}

IL_0254:
	{
		float L_99 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_100 = __this->get_SelectDownStartTime_32();
		float L_101 = __this->get_holdStartDuration_30();
		V_12 = (bool)((((int32_t)((!(((float)L_99) >= ((float)((float)il2cpp_codegen_add((float)L_100, (float)L_101)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_102 = V_12;
		if (!L_102)
		{
			goto IL_027a;
		}
	}
	{
		SimulatedGestureHand_TryStartHold_m65B73E38DC49C7CB701D9FC4E319771182626B4E(__this, /*hidden argument*/NULL);
	}

IL_027a:
	{
	}

IL_027b:
	{
		goto IL_027d;
	}

IL_027d:
	{
		int32_t L_103 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
	}

IL_0282:
	{
		int32_t L_104 = V_3;
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_105 = BaseController_get_Interactions_m362FBC0451656D696080FB0E646EBF2632B25926(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_106 = L_105;
		G_B40_0 = L_106;
		G_B40_1 = L_104;
		if (L_106)
		{
			G_B41_0 = L_106;
			G_B41_1 = L_104;
			goto IL_0299;
		}
	}
	{
		il2cpp_codegen_initobj((&V_15), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_107 = V_15;
		G_B42_0 = L_107;
		G_B42_1 = G_B40_1;
		goto IL_02a0;
	}

IL_0299:
	{
		NullCheck(G_B41_0);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_108;
		memset(&L_108, 0, sizeof(L_108));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_108), (((int32_t)((int32_t)(((RuntimeArray *)G_B41_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B42_0 = L_108;
		G_B42_1 = G_B41_1;
	}

IL_02a0:
	{
		V_14 = G_B42_0;
		int32_t L_109 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_14), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
		bool L_110 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_14), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		V_13 = (bool)((int32_t)((int32_t)((((int32_t)G_B42_1) < ((int32_t)L_109))? 1 : 0)&(int32_t)L_110));
		bool L_111 = V_13;
		if (L_111)
		{
			goto IL_0090;
		}
	}
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartHold_m65B73E38DC49C7CB701D9FC4E319771182626B4E (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartHold_m65B73E38DC49C7CB701D9FC4E319771182626B4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		bool L_0 = __this->get_holdInProgress_33();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001a;
		}
	}
	{
		goto IL_0027;
	}

IL_001a:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_4 = __this->get_holdAction_25();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, __this, L_4);
	}

IL_0027:
	{
		__this->set_holdInProgress_33((bool)1);
		V_1 = (bool)1;
		goto IL_0036;
	}

IL_0032:
	{
		V_1 = (bool)0;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteHold_mA3CECE70227149ADD36FA2BA1D2A707253C2C8B0 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteHold_mA3CECE70227149ADD36FA2BA1D2A707253C2C8B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		bool L_0 = __this->get_holdInProgress_33();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_0024;
	}

IL_0017:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_4 = __this->get_holdAction_25();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(51 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, __this, L_4);
	}

IL_0024:
	{
		__this->set_holdInProgress_33((bool)0);
		V_1 = (bool)1;
		goto IL_0033;
	}

IL_002f:
	{
		V_1 = (bool)0;
		goto IL_0033;
	}

IL_0033:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelHold()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelHold_mAE3A4BB547C0FC869E1CF0163B44C4C87A7C827A (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelHold_mAE3A4BB547C0FC869E1CF0163B44C4C87A7C827A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		bool L_0 = __this->get_holdInProgress_33();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_0024;
	}

IL_0017:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_4 = __this->get_holdAction_25();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, __this, L_4);
	}

IL_0024:
	{
		__this->set_holdInProgress_33((bool)0);
		V_1 = (bool)1;
		goto IL_0033;
	}

IL_002f:
	{
		V_1 = (bool)0;
		goto IL_0033;
	}

IL_0033:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartManipulation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartManipulation_m7AAD3F01B1474AB282CED27A6D5250DCF43A7DEE (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartManipulation_m7AAD3F01B1474AB282CED27A6D5250DCF43A7DEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		bool L_0 = __this->get_manipulationInProgress_34();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001a;
		}
	}
	{
		goto IL_0027;
	}

IL_001a:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_4 = __this->get_manipulationAction_27();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, __this, L_4);
	}

IL_0027:
	{
		__this->set_manipulationInProgress_34((bool)1);
		V_1 = (bool)1;
		goto IL_0036;
	}

IL_0032:
	{
		V_1 = (bool)0;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateManipulation()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateManipulation_mC084DDE25A78F60DD90F45C17605D869D50ACEF7 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateManipulation_mC084DDE25A78F60DD90F45C17605D869D50ACEF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		bool L_0 = __this->get_manipulationInProgress_34();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_002a;
	}

IL_0017:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_4 = __this->get_manipulationAction_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_cumulativeDelta_38();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(48 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, __this, L_4, L_5);
	}

IL_002a:
	{
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteManipulation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteManipulation_m38916F79C8AE4B1ABD4EBF271CE04F66956024F9 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteManipulation_m38916F79C8AE4B1ABD4EBF271CE04F66956024F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		bool L_0 = __this->get_manipulationInProgress_34();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_002a;
	}

IL_0017:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_4 = __this->get_manipulationAction_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_cumulativeDelta_38();
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(53 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, __this, L_4, L_5);
	}

IL_002a:
	{
		__this->set_manipulationInProgress_34((bool)0);
		V_1 = (bool)1;
		goto IL_0039;
	}

IL_0035:
	{
		V_1 = (bool)0;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelManipulation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelManipulation_mC0FC31068B4BEC9E66E472D5BE9E024180ADAF88 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelManipulation_mC0FC31068B4BEC9E66E472D5BE9E024180ADAF88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		bool L_0 = __this->get_manipulationInProgress_34();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_0024;
	}

IL_0017:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_4 = __this->get_manipulationAction_27();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, __this, L_4);
	}

IL_0024:
	{
		__this->set_manipulationInProgress_34((bool)0);
		V_1 = (bool)1;
		goto IL_0033;
	}

IL_002f:
	{
		V_1 = (bool)0;
		goto IL_0033;
	}

IL_0033:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteSelect()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteSelect_mD65DDDA160775409F300FDAB683BFD57013C344D (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteSelect_mD65DDDA160775409F300FDAB683BFD57013C344D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		bool L_0 = __this->get_manipulationInProgress_34();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->get_holdInProgress_33();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_4 = L_3;
		G_B5_0 = L_4;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0025;
		}
	}
	{
		goto IL_0032;
	}

IL_0025:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_5 = __this->get_selectAction_28();
		NullCheck(G_B6_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(51 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B6_0, __this, L_5);
	}

IL_0032:
	{
		V_1 = (bool)1;
		goto IL_003a;
	}

IL_0036:
	{
		V_1 = (bool)0;
		goto IL_003a;
	}

IL_003a:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryStartNavigation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryStartNavigation_m3003BA7F41386ED68B46FE614DBF60C101E68A35 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryStartNavigation_m3003BA7F41386ED68B46FE614DBF60C101E68A35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		bool L_0 = __this->get_navigationInProgress_35();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001a;
		}
	}
	{
		goto IL_0027;
	}

IL_001a:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_4 = __this->get_navigationAction_26();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, __this, L_4);
	}

IL_0027:
	{
		__this->set_navigationInProgress_35((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_5);
		SimulatedGestureHand_UpdateNavigationRails_m9F0288BF7ADEE81E87F10002F4E40AF4EF0F321E(__this, /*hidden argument*/NULL);
		V_1 = (bool)1;
		goto IL_0048;
	}

IL_0044:
	{
		V_1 = (bool)0;
		goto IL_0048;
	}

IL_0048:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigation()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigation_m54497EA8A92B98D8140CC7F3A3E218C9B7231DF9 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateNavigation_m54497EA8A92B98D8140CC7F3A3E218C9B7231DF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		bool L_0 = __this->get_navigationInProgress_35();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		SimulatedGestureHand_UpdateNavigationRails_m9F0288BF7ADEE81E87F10002F4E40AF4EF0F321E(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001e;
		}
	}
	{
		goto IL_0031;
	}

IL_001e:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_4 = __this->get_navigationAction_26();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = SimulatedGestureHand_get_NavigationDelta_m78455B0026EC6EC96AC09450639E9416A23003F7(__this, /*hidden argument*/NULL);
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(48 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, __this, L_4, L_5);
	}

IL_0031:
	{
	}

IL_0032:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCompleteNavigation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCompleteNavigation_m4A7919C0F67FAD492696053D6BC88C14166E90AD (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCompleteNavigation_m4A7919C0F67FAD492696053D6BC88C14166E90AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		bool L_0 = __this->get_navigationInProgress_35();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_002a;
	}

IL_0017:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_4 = __this->get_navigationAction_26();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = SimulatedGestureHand_get_NavigationDelta_m78455B0026EC6EC96AC09450639E9416A23003F7(__this, /*hidden argument*/NULL);
		NullCheck(G_B3_0);
		InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(53 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector3) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, __this, L_4, L_5);
	}

IL_002a:
	{
		__this->set_navigationInProgress_35((bool)0);
		V_1 = (bool)1;
		goto IL_0039;
	}

IL_0035:
	{
		V_1 = (bool)0;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::TryCancelNavigation()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedGestureHand_TryCancelNavigation_m7D43D519F1596528C2268E862D3B1869CC00C5A5 (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_TryCancelNavigation_m7D43D519F1596528C2268E862D3B1869CC00C5A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	{
		bool L_0 = __this->get_navigationInProgress_35();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0017;
		}
	}
	{
		goto IL_0024;
	}

IL_0017:
	{
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_4 = __this->get_navigationAction_26();
		NullCheck(G_B3_0);
		InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  >::Invoke(56 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B3_0, __this, L_4);
	}

IL_0024:
	{
		__this->set_navigationInProgress_35((bool)0);
		V_1 = (bool)1;
		goto IL_0033;
	}

IL_002f:
	{
		V_1 = (bool)0;
		goto IL_0033;
	}

IL_0033:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedGestureHand::UpdateNavigationRails()
extern "C" IL2CPP_METHOD_ATTR void SimulatedGestureHand_UpdateNavigationRails_m9F0288BF7ADEE81E87F10002F4E40AF4EF0F321E (SimulatedGestureHand_t507199841F8E21858B3FFEEF1A458C9889AA8544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedGestureHand_UpdateNavigationRails_m9F0288BF7ADEE81E87F10002F4E40AF4EF0F321E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = __this->get_useRailsNavigation_29();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_currentRailsUsed_36();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		bool L_3 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_1, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00d4;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = __this->get_address_of_cumulativeDelta_38();
		float L_6 = L_5->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_7 = fabsf(L_6);
		float L_8 = __this->get_navigationStartThreshold_31();
		V_1 = (bool)((((int32_t)((!(((float)L_7) >= ((float)L_8)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_10);
		goto IL_00d3;
	}

IL_0061:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_11 = __this->get_address_of_cumulativeDelta_38();
		float L_12 = L_11->get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_13 = fabsf(L_12);
		float L_14 = __this->get_navigationStartThreshold_31();
		V_2 = (bool)((((float)L_13) > ((float)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_009b;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_16);
		goto IL_00d3;
	}

IL_009b:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_17 = __this->get_address_of_cumulativeDelta_38();
		float L_18 = L_17->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_19 = fabsf(L_18);
		float L_20 = __this->get_navigationStartThreshold_31();
		V_3 = (bool)((((float)L_19) > ((float)L_20))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00d3;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_22), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_currentRailsUsed_36(L_22);
	}

IL_00d3:
	{
	}

IL_00d4:
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
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
extern "C" IL2CPP_METHOD_ATTR void SimulatedHand__ctor_m8C3FC7C2B7496A32E014232A26201192E827D803 (SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand__ctor_m8C3FC7C2B7496A32E014232A26201192E827D803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_0 = (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 *)il2cpp_codegen_object_new(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9F0E904C69CAFA29E3BDC894848BAB6A70816325(L_0, /*hidden argument*/Dictionary_2__ctor_m9F0E904C69CAFA29E3BDC894848BAB6A70816325_RuntimeMethod_var);
		__this->set_jointPoses_23(L_0);
		int32_t L_1 = ___trackingState0;
		uint8_t L_2 = ___controllerHandedness1;
		RuntimeObject* L_3 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_4 = ___interactions3;
		BaseHand__ctor_m9262ECFCA832FA42D6C4FB3A40015FA6DC224C0C(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPoseU26)
extern "C" IL2CPP_METHOD_ATTR bool SimulatedHand_TryGetJoint_mC673CBEDCF2ED6841D6B96B4003F478A0E91684B (SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4 * __this, int32_t ___joint0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand_TryGetJoint_mC673CBEDCF2ED6841D6B96B4003F478A0E91684B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_0 = __this->get_jointPoses_23();
		int32_t L_1 = ___joint0;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m8784F4D5D46630F0AE1F0866B9DE0C557B0005E4(L_0, L_1, (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m8784F4D5D46630F0AE1F0866B9DE0C557B0005E4_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::UpdateState(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
extern "C" IL2CPP_METHOD_ATTR void SimulatedHand_UpdateState_m40161D069FD52829F19691128A617608F37CF3D3 (SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4 * __this, SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * ___handData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand_UpdateState_m40161D069FD52829F19691128A617608F37CF3D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		V_0 = 0;
		goto IL_0058;
	}

IL_0005:
	{
		int32_t L_0 = V_0;
		V_1 = L_0;
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_1 = __this->get_jointPoses_23();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_m333D3C686DCC6485E954F9C76679E8632E844B77(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m333D3C686DCC6485E954F9C76679E8632E844B77_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_5 = __this->get_jointPoses_23();
		int32_t L_6 = V_1;
		SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * L_7 = ___handData0;
		NullCheck(L_7);
		MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* L_8 = SimulatedHandData_get_Joints_m4EA3BEFE147AEFA9B429F6E06BE10EFCA1657D8C(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_5);
		Dictionary_2_Add_mD7555736C5613A79BF41250898CE50B6081D5A64(L_5, L_6, L_11, /*hidden argument*/Dictionary_2_Add_mD7555736C5613A79BF41250898CE50B6081D5A64_RuntimeMethod_var);
		goto IL_0053;
	}

IL_0038:
	{
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_12 = __this->get_jointPoses_23();
		int32_t L_13 = V_1;
		SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * L_14 = ___handData0;
		NullCheck(L_14);
		MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* L_15 = SimulatedHandData_get_Joints_m4EA3BEFE147AEFA9B429F6E06BE10EFCA1657D8C(L_14, /*hidden argument*/NULL);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		Dictionary_2_set_Item_m6D0921490F3AAFC95C6DBC2AEB293FFA7DFE8F9F(L_12, L_13, L_18, /*hidden argument*/Dictionary_2_set_Item_m6D0921490F3AAFC95C6DBC2AEB293FFA7DFE8F9F_RuntimeMethod_var);
	}

IL_0053:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0058:
	{
		int32_t L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_il2cpp_TypeInfo_var);
		int32_t L_21 = ((SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_il2cpp_TypeInfo_var))->get_jointCount_22();
		V_3 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0005;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_23 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_24 = L_23;
		G_B7_0 = L_24;
		if (L_24)
		{
			G_B8_0 = L_24;
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		RuntimeObject* L_25 = BaseController_get_InputSource_m541A4D58119DE1CAB90449A4EDECFF46740E1872(__this, /*hidden argument*/NULL);
		uint8_t L_26 = BaseController_get_ControllerHandedness_m476519AB95F6417694D34241D8D98A8B3B34611F(__this, /*hidden argument*/NULL);
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_27 = __this->get_jointPoses_23();
		NullCheck(G_B8_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, RuntimeObject* >::Invoke(62 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B8_0, L_25, L_26, L_27);
	}

IL_0087:
	{
		BaseHand_UpdateVelocity_mF2E34B5C3E973117CDABD373E0BFD38F3ED4CA67(__this, /*hidden argument*/NULL);
		SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * L_28 = ___handData0;
		VirtActionInvoker1< SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * >::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::UpdateInteractions(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData) */, __this, L_28);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHand::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SimulatedHand__cctor_m1BF0027BF427C60AD3073973916B9AEAB40EE14C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHand__cctor_m1BF0027BF427C60AD3073973916B9AEAB40EE14C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHand_t38D7CEE6B2FE27E22D76831E8C13C469EB5942D4_il2cpp_TypeInfo_var))->set_jointCount_22((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
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
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsTracked()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsTracked_mAB7E40757634682D6CB31AB7E454873D6E976CD7 (SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isTracked_1();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_Joints()
extern "C" IL2CPP_METHOD_ATTR MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* SimulatedHandData_get_Joints_m4EA3BEFE147AEFA9B429F6E06BE10EFCA1657D8C (SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * __this, const RuntimeMethod* method)
{
	{
		MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* L_0 = __this->get_joints_2();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::get_IsPinching()
extern "C" IL2CPP_METHOD_ATTR bool SimulatedHandData_get_IsPinching_m0E22A8E6AE9676DCB58D8FC777E2A442A981B0F6 (SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isPinching_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::Copy(Microsoft.MixedReality.Toolkit.Input.SimulatedHandData)
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandData_Copy_m0EA614233CBA21972CBCBDD593E7CCF76ABBF524 (SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * __this, SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData_Copy_m0EA614233CBA21972CBCBDD593E7CCF76ABBF524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1 = L_0->get_isTracked_1();
		__this->set_isTracked_1(L_1);
		SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * L_2 = ___other0;
		NullCheck(L_2);
		bool L_3 = L_2->get_isPinching_3();
		__this->set_isPinching_3(L_3);
		V_0 = 0;
		goto IL_003b;
	}

IL_001d:
	{
		MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* L_4 = __this->get_joints_2();
		int32_t L_5 = V_0;
		SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * L_6 = ___other0;
		NullCheck(L_6);
		MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* L_7 = L_6->get_joints_2();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 )L_10);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B_il2cpp_TypeInfo_var);
		int32_t L_13 = ((SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B_il2cpp_TypeInfo_var))->get_jointCount_0();
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::Update(System.Boolean,System.Boolean,Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator)
extern "C" IL2CPP_METHOD_ATTR bool SimulatedHandData_Update_m0E621B8E04B7156710D276C12F908D76828C63DC (SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * __this, bool ___isTrackedNew0, bool ___isPinchingNew1, HandJointDataGenerator_tE04953526CC42763EDBBB8F8D14871BB5D0906FA * ___generator2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		V_0 = (bool)0;
		bool L_0 = __this->get_isTracked_1();
		bool L_1 = ___isTrackedNew0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001a;
		}
	}
	{
		bool L_2 = __this->get_isPinching_3();
		bool L_3 = ___isPinchingNew1;
		G_B3_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		bool L_5 = ___isTrackedNew0;
		__this->set_isTracked_1(L_5);
		bool L_6 = ___isPinchingNew1;
		__this->set_isPinching_3(L_6);
		V_0 = (bool)1;
	}

IL_0031:
	{
		bool L_7 = __this->get_isTracked_1();
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		HandJointDataGenerator_tE04953526CC42763EDBBB8F8D14871BB5D0906FA * L_9 = ___generator2;
		MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* L_10 = SimulatedHandData_get_Joints_m4EA3BEFE147AEFA9B429F6E06BE10EFCA1657D8C(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		HandJointDataGenerator_Invoke_mBBB056A0E18520C8312B4D2440FFDD69EC46935A(L_9, L_10, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_004c:
	{
		bool L_11 = V_0;
		V_3 = L_11;
		goto IL_0050;
	}

IL_0050:
	{
		bool L_12 = V_3;
		return L_12;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandData__ctor_m8559F0E533C6ECE4071564BB71E7C75D4F304F05 (SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData__ctor_m8559F0E533C6ECE4071564BB71E7C75D4F304F05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isTracked_1((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B_il2cpp_TypeInfo_var))->get_jointCount_0();
		MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* L_1 = (MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*)SZArrayNew(MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_joints_2(L_1);
		__this->set_isPinching_3((bool)0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandData__cctor_m5D62473AAEB6D685A87564C688A043899210C1AC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandData__cctor_m5D62473AAEB6D685A87564C688A043899210C1AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandData_tADEEECB947181E040DFF54C89F97361F9082566B_il2cpp_TypeInfo_var))->set_jointCount_0((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
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
extern "C"  void DelegatePInvokeWrapper_HandJointDataGenerator_tE04953526CC42763EDBBB8F8D14871BB5D0906FA (HandJointDataGenerator_tE04953526CC42763EDBBB8F8D14871BB5D0906FA * __this, MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* ___jointPoses0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___jointPoses0U27 to native representation
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * ____jointPoses0_marshaled = NULL;
	if (___jointPoses0 != NULL)
	{
		____jointPoses0_marshaled = reinterpret_cast<MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *>((___jointPoses0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____jointPoses0_marshaled);

}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HandJointDataGenerator__ctor_m3A42B4B08E84FE295FD088C004B0E3D4EAD6E81A (HandJointDataGenerator_tE04953526CC42763EDBBB8F8D14871BB5D0906FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::Invoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[])
extern "C" IL2CPP_METHOD_ATTR void HandJointDataGenerator_Invoke_mBBB056A0E18520C8312B4D2440FFDD69EC46935A (HandJointDataGenerator_tE04953526CC42763EDBBB8F8D14871BB5D0906FA * __this, MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* ___jointPoses0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___jointPoses0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___jointPoses0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___jointPoses0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___jointPoses0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* >::Invoke(targetMethod, targetThis, ___jointPoses0);
							else
								GenericVirtActionInvoker1< MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* >::Invoke(targetMethod, targetThis, ___jointPoses0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___jointPoses0);
							else
								VirtActionInvoker1< MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___jointPoses0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___jointPoses0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___jointPoses0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___jointPoses0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___jointPoses0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___jointPoses0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* >::Invoke(targetMethod, targetThis, ___jointPoses0);
						else
							GenericVirtActionInvoker1< MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* >::Invoke(targetMethod, targetThis, ___jointPoses0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___jointPoses0);
						else
							VirtActionInvoker1< MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___jointPoses0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___jointPoses0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::BeginInvoke(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HandJointDataGenerator_BeginInvoke_mE2CC617DE17938E4B8C8C313CCA497025E94958C (HandJointDataGenerator_tE04953526CC42763EDBBB8F8D14871BB5D0906FA * __this, MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* ___jointPoses0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___jointPoses0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandData_HandJointDataGenerator::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void HandJointDataGenerator_EndInvoke_m46791018E04C93CDBDDBFA9B1C052EF0564E882C (HandJointDataGenerator_tE04953526CC42763EDBBB8F8D14871BB5D0906FA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::CalculateJointRotations(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[],UnityEngine.Quaternion[])
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandUtils_CalculateJointRotations_mEE39826C5DD54918D0B408A034A1BDD8B7A564DD (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* ___jointOrientationsOut2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_CalculateJointRotations_mEE39826C5DD54918D0B408A034A1BDD8B7A564DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset(&V_8, 0, sizeof(V_8));
	bool V_9 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_10;
	memset(&V_10, 0, sizeof(V_10));
	bool V_11 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_12;
	memset(&V_12, 0, sizeof(V_12));
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t25BC860F7304EF534C1885BF63F52330F1DA6BF6____6AF7EBB4A5EF5D7478981B4AA0BAD37788AAB1ED_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0109;
	}

IL_001a:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_7 = V_0;
		int32_t L_8 = V_1;
		RuntimeObject* L_9 = Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mA9BB7B50ACACE431FE69D6C4718231443A3868EC((RuntimeObject*)(RuntimeObject*)L_7, L_8, /*hidden argument*/Enumerable_Take_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mA9BB7B50ACACE431FE69D6C4718231443A3868EC_RuntimeMethod_var);
		int32_t L_10 = Enumerable_Sum_mA81913DBCF3086B4716F692F9DB797D7DD6B7583(L_9, /*hidden argument*/NULL);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_10));
		int32_t L_11 = V_3;
		int32_t L_12 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), (int32_t)1));
		int32_t L_13 = V_3;
		V_5 = L_13;
		goto IL_00f2;
	}

IL_003d:
	{
		int32_t L_14 = V_5;
		int32_t L_15 = V_3;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_5;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
		goto IL_004a;
	}

IL_0049:
	{
		G_B5_0 = 1;
	}

IL_004a:
	{
		V_6 = G_B5_0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_17 = ___jointPositions1;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_21 = ___jointPositions1;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_20, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_7;
		uint8_t L_27 = ___handedness0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_28 = ___jointPositions1;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandUtils_tCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = SimulatedHandUtils_GetPalmRightVector_m3F111C14D6DB3C581BFC8710180C3963F8DB68A3(L_27, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_26, L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		float L_31 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		if ((!(((float)L_31) > ((float)(1.401298E-45f)))))
		{
			goto IL_0091;
		}
	}
	{
		float L_32 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_8), /*hidden argument*/NULL);
		G_B8_0 = ((((float)L_32) > ((float)(1.401298E-45f)))? 1 : 0);
		goto IL_0092;
	}

IL_0091:
	{
		G_B8_0 = 0;
	}

IL_0092:
	{
		V_9 = (bool)G_B8_0;
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_00dc;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_34, L_35, /*hidden argument*/NULL);
		V_10 = L_36;
		int32_t L_37 = V_1;
		V_11 = (bool)((((int32_t)L_37) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_11;
		if (!L_38)
		{
			goto IL_00cf;
		}
	}
	{
		uint8_t L_39 = ___handedness0;
		if ((((int32_t)L_39) == ((int32_t)1)))
		{
			goto IL_00b7;
		}
	}
	{
		G_B13_0 = ((int32_t)90);
		goto IL_00b9;
	}

IL_00b7:
	{
		G_B13_0 = ((int32_t)-90);
	}

IL_00b9:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_41 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0((((float)((float)G_B13_0))), L_40, /*hidden argument*/NULL);
		V_12 = L_41;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_42 = V_12;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = V_10;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_44 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_42, L_43, /*hidden argument*/NULL);
		V_10 = L_44;
	}

IL_00cf:
	{
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_45 = ___jointOrientationsOut2;
		int32_t L_46 = V_5;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_47 = V_10;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_47);
		goto IL_00eb;
	}

IL_00dc:
	{
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_48 = ___jointOrientationsOut2;
		int32_t L_49 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_50);
	}

IL_00eb:
	{
		int32_t L_51 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00f2:
	{
		int32_t L_52 = V_5;
		int32_t L_53 = V_4;
		V_13 = (bool)((((int32_t)((((int32_t)L_52) > ((int32_t)L_53))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_13;
		if (L_54)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_0109:
	{
		int32_t L_56 = V_1;
		V_14 = (bool)((((int32_t)L_56) < ((int32_t)5))? 1 : 0);
		bool L_57 = V_14;
		if (L_57)
		{
			goto IL_001a;
		}
	}
	{
		QuaternionU5BU5D_t26EB10EEE89DD3EF913D52E8797FAB841F6F2AA3* L_58 = ___jointOrientationsOut2;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_59 = ___jointPositions1;
		IL2CPP_RUNTIME_CLASS_INIT(SimulatedHandUtils_tCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = SimulatedHandUtils_GetPalmForwardVector_m15EB17483C8EC70A332C3293B6B98F69A7502870(L_59, /*hidden argument*/NULL);
		uint8_t L_61 = ___handedness0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_62 = ___jointPositions1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = SimulatedHandUtils_GetPalmUpVector_m960906B962EEB6085D531560164B893014484826(L_61, L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_64 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_60, L_63, /*hidden argument*/NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 )L_64);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmForwardVector(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmForwardVector_m15EB17483C8EC70A332C3293B6B98F69A7502870 (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmForwardVector_m15EB17483C8EC70A332C3293B6B98F69A7502870_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___jointPositions0;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ___jointPositions0;
		NullCheck(L_3);
		int32_t L_4 = 3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_9;
		goto IL_0023;
	}

IL_0023:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_3;
		return L_10;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmUpVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmUpVector_m960906B962EEB6085D531560164B893014484826 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmUpVector_m960906B962EEB6085D531560164B893014484826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___jointPositions1;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ___jointPositions1;
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_6 = ___jointPositions1;
		NullCheck(L_6);
		int32_t L_7 = 3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		uint8_t L_15 = ___handedness0;
		V_5 = (bool)((((int32_t)L_15) == ((int32_t)1))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_004b;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_17, L_18, /*hidden argument*/NULL);
		V_6 = L_19;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		V_7 = L_20;
		goto IL_0061;
	}

IL_004b:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_21, L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		V_7 = L_24;
		goto IL_0061;
	}

IL_0061:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_7;
		return L_25;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::GetPalmRightVector(Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SimulatedHandUtils_GetPalmRightVector_m3F111C14D6DB3C581BFC8710180C3963F8DB68A3 (uint8_t ___handedness0, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___jointPositions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils_GetPalmRightVector_m3F111C14D6DB3C581BFC8710180C3963F8DB68A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	bool V_6 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___jointPositions1;
		NullCheck(L_0);
		int32_t L_1 = 8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = ___jointPositions1;
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_6 = ___jointPositions1;
		NullCheck(L_6);
		int32_t L_7 = 3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_5 = L_15;
		uint8_t L_16 = ___handedness0;
		V_6 = (bool)((((int32_t)L_16) == ((int32_t)1))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0053;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_18, L_19, /*hidden argument*/NULL);
		V_7 = L_20;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_5 = L_21;
		goto IL_0068;
	}

IL_0053:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_22, L_23, /*hidden argument*/NULL);
		V_7 = L_24;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_5 = L_25;
	}

IL_0068:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_26, L_27, /*hidden argument*/NULL);
		V_7 = L_28;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_8 = L_29;
		goto IL_007e;
	}

IL_007e:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = V_8;
		return L_30;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandUtils__ctor_m7EA2476F8D17AAF833ABACAFCDAD3DAEEB38AEE2 (SimulatedHandUtils_tCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SimulatedHandUtils::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SimulatedHandUtils__cctor_mA81393C80ED60FB7279FDDD48C24C6526BD76431 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimulatedHandUtils__cctor_mA81393C80ED60FB7279FDDD48C24C6526BD76431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((SimulatedHandUtils_tCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762_StaticFields*)il2cpp_codegen_static_fields_for(SimulatedHandUtils_tCAB1F5CEF223E42A819BCC9F698CAE86E8BC9762_il2cpp_TypeInfo_var))->set_jointCount_0((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
