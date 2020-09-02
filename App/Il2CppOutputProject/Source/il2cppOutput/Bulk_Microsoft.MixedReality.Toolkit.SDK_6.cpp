#include "il2cpp-config.h"

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

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651;
// Microsoft.MixedReality.Toolkit.Input.HandBounds
struct HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_tCB8587BE2E9B29FEF18620BC7FC31027A3E69080;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_t1BB87D9CBE3F643770939A4D6C80C69687AF065F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_tBA4306B94B3A85E4954F4309E19E524C4644F737;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_t803B423409E1017B7B650987CCF3A6D366A7C840;
// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_tDA1B69B64E926F444AA2A9580BEC8F09AC9379E8;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_tCD1CE5D02607BA5FD6D2C499C92B2BE190BFC450;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider
struct BaseMixedRealityLineDataProvider_tC35878F4E52DC5B0995B39360258BD6613D3190A;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[]
struct BaseMixedRealityLineRendererU5BU5D_tC2D9120DE5D195B660C82B3B89F9D354E0AF1C0C;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint
struct HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__46
struct U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp
struct HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct Orbital_t4E2C971B059A301433A2439374836A8866E4BA87;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct Overlap_t14605F26108B061874FE4594021CBF8BFEBB3CE1;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_t45BC4457D52541691149931505197834E2BCC506;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0;
// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IEnumerable_1_tFA41174B9C3FB0B48A2BF9E42AED8B212C780FAF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IList`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IList_1_tDCDA57BA6678422638B9A1545F911C539CD5E44D;
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IReadOnlyCollection_1_t3E3F09CB107B3B7436FC5A317E9A068AC421FCD4;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct ReadOnlyCollection_1_t611A24DBD56868F2E0135415344B0F911945705E;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Gradient
struct Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

extern RuntimeClass* CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityCursor_t1BB87D9CBE3F643770939A4D6C80C69687AF065F_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityDataProviderAccess_t63F3E16981AF92E0A01138E618F95865C1185D1E_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var;
extern RuntimeClass* LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityRaycaster_tDB7B639A2F467361366DB278D239006467490080_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E;
extern String_t* _stringLiteral8604633F91A5364A570785AE4355317FF69CAA79;
extern String_t* _stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B;
extern String_t* _stringLiteral9586A1C5F0FF1B8004E10FC372266DBFEA002EFE;
extern String_t* _stringLiteral9D08677538B56ECF9AED0A2EA9CEFADCE1634173;
extern String_t* _stringLiteralA5380AB232AE7FA9C64011F243B4FD1A1E094DB7;
extern String_t* _stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F;
extern String_t* _stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9;
extern String_t* _stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE;
extern const RuntimeMethod* CollectionsExtensions_ToReadOnlyCollection_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0468C1D42752E2946A4EC777FA2CE5F52ED123E1_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mAFEA8C8850333AF32E380E9F11A4ABAE304879DB_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponents_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0708321043CD71138F4AD1E7213F1FF980080C9D_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Intersect_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m40530AB924753D4E762EB9C4261E23F869EE0236_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Union_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mCC9024226F86BADFD48F0BC8475A0E61A406C84B_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE_RuntimeMethod_var;
extern const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_mE12D31FFD99B971B8FC5E5A1E0E852F155B4668B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m8780BF7E571C112A5D19A693DB1B9582A15FE89B_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2A307CEB669756CD90266DFC29D1DCCA55A0CC39_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AsReadOnly_mAD47A105612A00690E6E45AB5AFDD9BC33F953EE_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_mC1ABFB53073C4AFE56D4F50776A0CF1C2249C7FA_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m9DACB42292D9F1866A4BE48840AC4AB2FC886D45_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m722CE8CC174F565BF205297274236BBB50ECA1F5_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m46ECD248567A67E77D5FD4B878E609094F51318E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mEEE492750E87DEA82C2975FE364B2C0B7EF618FD_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mEE6BCBC5130E636CBE8A47FAC2B27426C6BB6CC0_RuntimeMethod_var;
extern const RuntimeMethod* PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E_RuntimeMethod_var;
extern const RuntimeMethod* U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_m95F69F00D22A423B580CDCA9D498B5B83632D3C3_RuntimeMethod_var;
extern const uint32_t HandConstraintPalmUp_IsValidController_m29DB6E978EBF5DB66FE081B4E699E2C3FD368097_MetadataUsageId;
extern const uint32_t InBetween_AdjustPositionForOffset_mD3FF05B4F3283ADC995E5B6ACE53E0FAA6E9DFB8_MetadataUsageId;
extern const uint32_t InBetween_SolverUpdate_mC24D3A0FCD855A4317DAB24452DA004B6150CEF4_MetadataUsageId;
extern const uint32_t InBetween_Start_m42D721C7A60B2EFA261ACF5CFF26BDC2B9CF8C92_MetadataUsageId;
extern const uint32_t InBetween_UpdateSecondSolverHandler_mD3A13F66C49D6FC9F057D24E5094C6B725DA1067_MetadataUsageId;
extern const uint32_t InBetween_set_PartwayOffset_m342400E5B1AA79DDD5D961D23A7C78AAA186434F_MetadataUsageId;
extern const uint32_t InBetween_set_SecondTransformOverride_m489A940A3BFF2BF67CBDCE04BEC049FA36832AF1_MetadataUsageId;
extern const uint32_t Momentum_OnEnable_mE841978D3F6759966AE9D3E0A36538D984656EF4_MetadataUsageId;
extern const uint32_t Momentum_SnapTo_m081617214EAFEA3063A94163CD2B4649530540DE_MetadataUsageId;
extern const uint32_t Momentum_SolverUpdate_mD8B253E9DE9820A9D79647C8412BA04302E08E54_MetadataUsageId;
extern const uint32_t Momentum_get_ReferencePosition_mFAACD502CAE0271F1F699462EE1991FA53FFCBB4_MetadataUsageId;
extern const uint32_t Orbital_CalculateDesiredRotation_m84574CDFA82C60EC5BDB9B5D2FABAFF224B2A6B9_MetadataUsageId;
extern const uint32_t Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA_MetadataUsageId;
extern const uint32_t Orbital_SolverUpdate_mF8E2A8161299A48177D53000D246D671EC53FBC2_MetadataUsageId;
extern const uint32_t Orbital__ctor_mC0013531115A76588E7CDAE427A98EC69A7454BA_MetadataUsageId;
extern const uint32_t Orbital_set_TetherAngleSteps_mBF986BE37CC0F1865E62F9C1D7D42E24F650581C_MetadataUsageId;
extern const uint32_t Overlap_SolverUpdate_m90ACC6F7FE79F6F3C2903FC3E39C3F2F151D69A6_MetadataUsageId;
extern const uint32_t RadialView_GetDesiredOrientation_DistanceOnly_m15A5518D9773ECCE96FB80A69B73F7D9474F4629_MetadataUsageId;
extern const uint32_t RadialView_GetDesiredOrientation_mCC5B2BD1E20229E7F64D838373A2454822601FF8_MetadataUsageId;
extern const uint32_t RadialView_SolverUpdate_m1A00F20793284B767FF59BFC63B04ACD2518357E_MetadataUsageId;
extern const uint32_t RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310_MetadataUsageId;
extern const uint32_t RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5_MetadataUsageId;
extern const uint32_t RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0_MetadataUsageId;
extern const uint32_t SolverHandler_AttachToNewTrackedObject_m9D3F41FDEF29191542594D5985D76C69B2781E55_MetadataUsageId;
extern const uint32_t SolverHandler_Awake_m64FDD2DDD8938AEAA2C59C6693BA8CEFBB043B29_MetadataUsageId;
extern const uint32_t SolverHandler_DetachFromCurrentTrackedObject_m27F7502F8692F5EDFE127837510B7544F8D77DE3_MetadataUsageId;
extern const uint32_t SolverHandler_GetControllerRay_m1057B68613BE517B273D5785DB3BF12BD6223587_MetadataUsageId;
extern const uint32_t SolverHandler_IsInvalidTracking_mFA1C5DFA39D889C96D4C688008F74D66279C2AE1_MetadataUsageId;
extern const uint32_t SolverHandler_LateUpdate_m262B7959FFC11F9CE488239CB4681DA14DC79129_MetadataUsageId;
extern const uint32_t SolverHandler_RegisterSolver_m4B8927635EFABB7E9A953E2353355100CD92647F_MetadataUsageId;
extern const uint32_t SolverHandler_TrackTransform_m9D821D05C2BF6CBE18871F4392448BBF8F0E6CFE_MetadataUsageId;
extern const uint32_t SolverHandler_UnregisterSolver_m58774B76B7772A05D21D8ECAE0E2876B13EC53ED_MetadataUsageId;
extern const uint32_t SolverHandler__ctor_mEE7C39B7DDB764CAFA5D285506DE89DA008FD14D_MetadataUsageId;
extern const uint32_t SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319_MetadataUsageId;
extern const uint32_t SolverHandler_get_Solvers_m3BC92786D35ED62DC9184E9A8164DB224176A453_MetadataUsageId;
extern const uint32_t SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477_MetadataUsageId;
extern const uint32_t SolverHandler_set_AdditionalOffset_m8AC35A89890F6BC3C3A950CA2824683DF8851F22_MetadataUsageId;
extern const uint32_t SolverHandler_set_AdditionalRotation_mE5D942077BB7FCD901D25F17FC179FEC980F7C1B_MetadataUsageId;
extern const uint32_t SolverHandler_set_Solvers_mCE4C92534A9F9B4A95DD090F76714A2FA544F3C7_MetadataUsageId;
extern const uint32_t SolverHandler_set_TransformOverride_m71749895DCCED91932E61FC1775AD95580A1289D_MetadataUsageId;
extern const uint32_t Solver_AddOffset_m5E830D98EDC7FB1A167C412D52CEDBB0683364F5_MetadataUsageId;
extern const uint32_t Solver_Awake_m705D1E95FFD523F16CF5EC292C46F1C33039F169_MetadataUsageId;
extern const uint32_t Solver_OnDestroy_m14B5ECB5147CA03BC757ADB5E4DD2E03309535FE_MetadataUsageId;
extern const uint32_t Solver_OnEnable_m420E782D83818FF58239AC8C210BF346765277E2_MetadataUsageId;
extern const uint32_t Solver_SmoothTo_m0B84FF629C5D029FA56CC3345FF86A76843CB347_MetadataUsageId;
extern const uint32_t Solver_SmoothTo_m4F2AE5E447C3D325ED720CB339C872AFCCAEE87C_MetadataUsageId;
extern const uint32_t Solver_Start_mAEFE11387E27C3698E17B0F6BBE045269E3DA09D_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_BoxRaycastStepUpdate_m5C66AE19A48BF24CCC91CD036A2890C86E0D3809_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_FindPlacementPlane_mB6EB36858939F8135E3222A4102E148F44E204CB_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_IsNormalVertical_m8672C5CD3768477B14761C69DEC45585AAA8C5F8_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_SimpleRaycastStepUpdate_mDCE9405F43A82877FFEC67179C3965AFF6477E32_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_SolverUpdate_m6C97B027C5885F330B25D2D132C73E504DCF8510_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_SphereRaycastStepUpdate_mD2FDF75B76B1E70C312B37954B88DEEF2DF25DF9_MetadataUsageId;
extern const uint32_t SurfaceMagnetism__ctor_mD78D6DD1E7B5BD1E6BB006AC2C1DE962B290688D_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_get_RaycastDirection_mE88DC19EB8190571BCFEAEBFCC3EF7493F06C1AF_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757_MetadataUsageId;
extern const uint32_t SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC_MetadataUsageId;
extern const uint32_t TileGridObjectCollection_GetListPosition_m017C0448E90A10102EF99F6E8607FC455512D6E5_MetadataUsageId;
extern const uint32_t TileGridObjectCollection_Update_mEDBABA407E999033F65772034B41E9628D654DAB_MetadataUsageId;
extern const uint32_t TileGridObjectCollection__ctor_m2E4D160CC22082C0C78DF0C060DC6435DCD99F69_MetadataUsageId;
extern const uint32_t U3CToggleCursorsU3Ed__46_MoveNext_mAAB4D973B678C771E8FC3078340FB50DE2112D73_MetadataUsageId;
extern const uint32_t U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_m95F69F00D22A423B580CDCA9D498B5B83632D3C3_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D;
struct SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27;
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


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
#ifndef U3CTOGGLECURSORSU3ED__46_T0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB_H
#define U3CTOGGLECURSORSU3ED__46_T0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46
struct  U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::controller
	RuntimeObject* ___controller_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::visible
	bool ___visible_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::frameDelay
	bool ___frameDelay_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>4__this
	HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * ___U3CU3E4__this_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>s__1
	IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* ___U3CU3Es__1_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<>s__2
	int32_t ___U3CU3Es__2_7;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::<pointer>5__3
	RuntimeObject* ___U3CpointerU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___controller_2)); }
	inline RuntimeObject* get_controller_2() const { return ___controller_2; }
	inline RuntimeObject** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(RuntimeObject* value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier((&___controller_2), value);
	}

	inline static int32_t get_offset_of_visible_3() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___visible_3)); }
	inline bool get_visible_3() const { return ___visible_3; }
	inline bool* get_address_of_visible_3() { return &___visible_3; }
	inline void set_visible_3(bool value)
	{
		___visible_3 = value;
	}

	inline static int32_t get_offset_of_frameDelay_4() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___frameDelay_4)); }
	inline bool get_frameDelay_4() const { return ___frameDelay_4; }
	inline bool* get_address_of_frameDelay_4() { return &___frameDelay_4; }
	inline void set_frameDelay_4(bool value)
	{
		___frameDelay_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___U3CU3E4__this_5)); }
	inline HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___U3CU3Es__1_6)); }
	inline IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D** get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* value)
	{
		___U3CU3Es__1_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Es__1_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_7() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___U3CU3Es__2_7)); }
	inline int32_t get_U3CU3Es__2_7() const { return ___U3CU3Es__2_7; }
	inline int32_t* get_address_of_U3CU3Es__2_7() { return &___U3CU3Es__2_7; }
	inline void set_U3CU3Es__2_7(int32_t value)
	{
		___U3CU3Es__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB, ___U3CpointerU3E5__3_8)); }
	inline RuntimeObject* get_U3CpointerU3E5__3_8() const { return ___U3CpointerU3E5__3_8; }
	inline RuntimeObject** get_address_of_U3CpointerU3E5__3_8() { return &___U3CpointerU3E5__3_8; }
	inline void set_U3CpointerU3E5__3_8(RuntimeObject* value)
	{
		___U3CpointerU3E5__3_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerU3E5__3_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTOGGLECURSORSU3ED__46_T0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB_H
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
#ifndef LIST_1_T37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED_H
#define LIST_1_T37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct  List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED, ____items_1)); }
	inline SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* get__items_1() const { return ____items_1; }
	inline SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED_StaticFields, ____emptyArray_5)); }
	inline SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED_H
#ifndef READONLYCOLLECTION_1_T611A24DBD56868F2E0135415344B0F911945705E_H
#define READONLYCOLLECTION_1_T611A24DBD56868F2E0135415344B0F911945705E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct  ReadOnlyCollection_1_t611A24DBD56868F2E0135415344B0F911945705E  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t611A24DBD56868F2E0135415344B0F911945705E, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t611A24DBD56868F2E0135415344B0F911945705E, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T611A24DBD56868F2E0135415344B0F911945705E_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
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
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#define LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifndef MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#define MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
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
#ifndef RAYSTEP_TD79EC987F47D0EC4939271DFCE1F90DB68B0526C_H
#define RAYSTEP_TD79EC987F47D0EC4939271DFCE1F90DB68B0526C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct  RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C_StaticFields, ___dist_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dist_0() const { return ___dist_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C_StaticFields, ___dir_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dir_1() const { return ___dir_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C_StaticFields, ___pos_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_pos_2() const { return ___pos_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___pos_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYSTEP_TD79EC987F47D0EC4939271DFCE1F90DB68B0526C_H
#ifndef SCENEQUERYTYPE_T9DD63ABD036A747D140A46CAEE4209F9920C01D9_H
#define SCENEQUERYTYPE_T9DD63ABD036A747D140A46CAEE4209F9920C01D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct  SceneQueryType_t9DD63ABD036A747D140A46CAEE4209F9920C01D9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_t9DD63ABD036A747D140A46CAEE4209F9920C01D9, ___value___2)); }
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
#endif // SCENEQUERYTYPE_T9DD63ABD036A747D140A46CAEE4209F9920C01D9_H
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
#ifndef RADIALVIEWREFERENCEDIRECTION_T71DBA780443856162D5D7DCF660F79519069B4E7_H
#define RADIALVIEWREFERENCEDIRECTION_T71DBA780443856162D5D7DCF660F79519069B4E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection
struct  RadialViewReferenceDirection_t71DBA780443856162D5D7DCF660F79519069B4E7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RadialViewReferenceDirection_t71DBA780443856162D5D7DCF660F79519069B4E7, ___value___2)); }
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
#endif // RADIALVIEWREFERENCEDIRECTION_T71DBA780443856162D5D7DCF660F79519069B4E7_H
#ifndef SOLVERORIENTATIONTYPE_T3C2A7055226D420ADF55E91A81CCF445D719C5F2_H
#define SOLVERORIENTATIONTYPE_T3C2A7055226D420ADF55E91A81CCF445D719C5F2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType
struct  SolverOrientationType_t3C2A7055226D420ADF55E91A81CCF445D719C5F2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverOrientationType_t3C2A7055226D420ADF55E91A81CCF445D719C5F2, ___value___2)); }
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
#endif // SOLVERORIENTATIONTYPE_T3C2A7055226D420ADF55E91A81CCF445D719C5F2_H
#ifndef SOLVERROTATIONBEHAVIOR_TB3419908784E660A8C47BB75B73D3B59F735619F_H
#define SOLVERROTATIONBEHAVIOR_TB3419908784E660A8C47BB75B73D3B59F735619F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior
struct  SolverRotationBehavior_tB3419908784E660A8C47BB75B73D3B59F735619F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverRotationBehavior_tB3419908784E660A8C47BB75B73D3B59F735619F, ___value___2)); }
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
#endif // SOLVERROTATIONBEHAVIOR_TB3419908784E660A8C47BB75B73D3B59F735619F_H
#ifndef SOLVERSAFEZONE_T0AE482D5BA0F8EE6E2B6E5D256472CD77DFE6711_H
#define SOLVERSAFEZONE_T0AE482D5BA0F8EE6E2B6E5D256472CD77DFE6711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone
struct  SolverSafeZone_t0AE482D5BA0F8EE6E2B6E5D256472CD77DFE6711 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverSafeZone_t0AE482D5BA0F8EE6E2B6E5D256472CD77DFE6711, ___value___2)); }
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
#endif // SOLVERSAFEZONE_T0AE482D5BA0F8EE6E2B6E5D256472CD77DFE6711_H
#ifndef ORIENTATIONMODE_T9CE70746B9C5B39A7FB987878C138795FC855DCD_H
#define ORIENTATIONMODE_T9CE70746B9C5B39A7FB987878C138795FC855DCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode
struct  OrientationMode_t9CE70746B9C5B39A7FB987878C138795FC855DCD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationMode_t9CE70746B9C5B39A7FB987878C138795FC855DCD, ___value___2)); }
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
#endif // ORIENTATIONMODE_T9CE70746B9C5B39A7FB987878C138795FC855DCD_H
#ifndef RAYCASTDIRECTIONMODE_T8CF98C2E96FE7B934225AE7AE001D16E944F21D9_H
#define RAYCASTDIRECTIONMODE_T8CF98C2E96FE7B934225AE7AE001D16E944F21D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode
struct  RaycastDirectionMode_t8CF98C2E96FE7B934225AE7AE001D16E944F21D9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RaycastDirectionMode_t8CF98C2E96FE7B934225AE7AE001D16E944F21D9, ___value___2)); }
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
#endif // RAYCASTDIRECTIONMODE_T8CF98C2E96FE7B934225AE7AE001D16E944F21D9_H
#ifndef GRIDDIVISIONS_T86060E25BA35872AC7D309BD607CCEE87F6114A5_H
#define GRIDDIVISIONS_T86060E25BA35872AC7D309BD607CCEE87F6114A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions
struct  GridDivisions_t86060E25BA35872AC7D309BD607CCEE87F6114A5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GridDivisions_t86060E25BA35872AC7D309BD607CCEE87F6114A5, ___value___2)); }
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
#endif // GRIDDIVISIONS_T86060E25BA35872AC7D309BD607CCEE87F6114A5_H
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
#ifndef TRACKEDOBJECTTYPE_T110925E0B47321BDB33970F5772B9158B186C09A_H
#define TRACKEDOBJECTTYPE_T110925E0B47321BDB33970F5772B9158B186C09A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType
struct  TrackedObjectType_t110925E0B47321BDB33970F5772B9158B186C09A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedObjectType_t110925E0B47321BDB33970F5772B9158B186C09A, ___value___2)); }
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
#endif // TRACKEDOBJECTTYPE_T110925E0B47321BDB33970F5772B9158B186C09A_H
#ifndef VECTOR3SMOOTHED_T07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E_H
#define VECTOR3SMOOTHED_T07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed
struct  Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Current>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Goal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGoalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E, ___U3CGoalU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalU3Ek__BackingField_1() const { return ___U3CGoalU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalU3Ek__BackingField_1() { return &___U3CGoalU3Ek__BackingField_1; }
	inline void set_U3CGoalU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E, ___U3CSmoothTimeU3Ek__BackingField_2)); }
	inline float get_U3CSmoothTimeU3Ek__BackingField_2() const { return ___U3CSmoothTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CSmoothTimeU3Ek__BackingField_2() { return &___U3CSmoothTimeU3Ek__BackingField_2; }
	inline void set_U3CSmoothTimeU3Ek__BackingField_2(float value)
	{
		___U3CSmoothTimeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3SMOOTHED_T07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#define HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
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
#endif // HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
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
#ifndef PLANE_T0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_H
#define PLANE_T0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_H
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
#ifndef RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#define RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
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
#ifndef COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#define COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
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
#ifndef BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
#define BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
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
#ifndef INPUTSYSTEMGLOBALHANDLERLISTENER_T0A638320E7C263ED03BF16AFC52F6A2084FFC207_H
#define INPUTSYSTEMGLOBALHANDLERLISTENER_T0A638320E7C263ED03BF16AFC52F6A2084FFC207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct  InputSystemGlobalHandlerListener_t0A638320E7C263ED03BF16AFC52F6A2084FFC207  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_t0A638320E7C263ED03BF16AFC52F6A2084FFC207, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSYSTEMGLOBALHANDLERLISTENER_T0A638320E7C263ED03BF16AFC52F6A2084FFC207_H
#ifndef SOLVER_T45BC4457D52541691149931505197834E2BCC506_H
#define SOLVER_T45BC4457D52541691149931505197834E2BCC506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct  Solver_t45BC4457D52541691149931505197834E2BCC506  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::moveLerpTime
	float ___moveLerpTime_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::rotateLerpTime
	float ___rotateLerpTime_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::scaleLerpTime
	float ___scaleLerpTime_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::maintainScale
	bool ___maintainScale_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::smoothing
	bool ___smoothing_9;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::lifetime
	float ___lifetime_10;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::currentLifetime
	float ___currentLifetime_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverHandler
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * ___SolverHandler_12;

public:
	inline static int32_t get_offset_of_updateLinkedTransform_4() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___updateLinkedTransform_4)); }
	inline bool get_updateLinkedTransform_4() const { return ___updateLinkedTransform_4; }
	inline bool* get_address_of_updateLinkedTransform_4() { return &___updateLinkedTransform_4; }
	inline void set_updateLinkedTransform_4(bool value)
	{
		___updateLinkedTransform_4 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_5() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___moveLerpTime_5)); }
	inline float get_moveLerpTime_5() const { return ___moveLerpTime_5; }
	inline float* get_address_of_moveLerpTime_5() { return &___moveLerpTime_5; }
	inline void set_moveLerpTime_5(float value)
	{
		___moveLerpTime_5 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_6() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___rotateLerpTime_6)); }
	inline float get_rotateLerpTime_6() const { return ___rotateLerpTime_6; }
	inline float* get_address_of_rotateLerpTime_6() { return &___rotateLerpTime_6; }
	inline void set_rotateLerpTime_6(float value)
	{
		___rotateLerpTime_6 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_7() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___scaleLerpTime_7)); }
	inline float get_scaleLerpTime_7() const { return ___scaleLerpTime_7; }
	inline float* get_address_of_scaleLerpTime_7() { return &___scaleLerpTime_7; }
	inline void set_scaleLerpTime_7(float value)
	{
		___scaleLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_maintainScale_8() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___maintainScale_8)); }
	inline bool get_maintainScale_8() const { return ___maintainScale_8; }
	inline bool* get_address_of_maintainScale_8() { return &___maintainScale_8; }
	inline void set_maintainScale_8(bool value)
	{
		___maintainScale_8 = value;
	}

	inline static int32_t get_offset_of_smoothing_9() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___smoothing_9)); }
	inline bool get_smoothing_9() const { return ___smoothing_9; }
	inline bool* get_address_of_smoothing_9() { return &___smoothing_9; }
	inline void set_smoothing_9(bool value)
	{
		___smoothing_9 = value;
	}

	inline static int32_t get_offset_of_lifetime_10() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___lifetime_10)); }
	inline float get_lifetime_10() const { return ___lifetime_10; }
	inline float* get_address_of_lifetime_10() { return &___lifetime_10; }
	inline void set_lifetime_10(float value)
	{
		___lifetime_10 = value;
	}

	inline static int32_t get_offset_of_currentLifetime_11() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___currentLifetime_11)); }
	inline float get_currentLifetime_11() const { return ___currentLifetime_11; }
	inline float* get_address_of_currentLifetime_11() { return &___currentLifetime_11; }
	inline void set_currentLifetime_11(float value)
	{
		___currentLifetime_11 = value;
	}

	inline static int32_t get_offset_of_SolverHandler_12() { return static_cast<int32_t>(offsetof(Solver_t45BC4457D52541691149931505197834E2BCC506, ___SolverHandler_12)); }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * get_SolverHandler_12() const { return ___SolverHandler_12; }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 ** get_address_of_SolverHandler_12() { return &___SolverHandler_12; }
	inline void set_SolverHandler_12(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * value)
	{
		___SolverHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___SolverHandler_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVER_T45BC4457D52541691149931505197834E2BCC506_H
#ifndef SOLVERHANDLER_TDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_H
#define SOLVERHANDLER_TDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct  SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedTargetType
	int32_t ___trackedTargetType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandness
	uint8_t ___trackedHandness_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandJoint
	int32_t ___trackedHandJoint_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::transformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformOverride_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalOffset_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalRotation_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolvers
	bool ___updateSolvers_10;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::solvers
	List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * ___solvers_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolversList
	bool ___updateSolversList_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalPositionU3Ek__BackingField_13;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CGoalRotationU3Ek__BackingField_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalScale>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalScaleU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  ___U3CAltScaleU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::currentTrackedHandedness
	uint8_t ___currentTrackedHandedness_18;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::preferredTrackedHandedness
	uint8_t ___preferredTrackedHandedness_19;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackingTarget
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___trackingTarget_20;
	// Microsoft.MixedReality.Toolkit.Input.LinePointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::controllerRay
	LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * ___controllerRay_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_22;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::handJointService
	RuntimeObject* ___handJointService_23;

public:
	inline static int32_t get_offset_of_trackedTargetType_4() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackedTargetType_4)); }
	inline int32_t get_trackedTargetType_4() const { return ___trackedTargetType_4; }
	inline int32_t* get_address_of_trackedTargetType_4() { return &___trackedTargetType_4; }
	inline void set_trackedTargetType_4(int32_t value)
	{
		___trackedTargetType_4 = value;
	}

	inline static int32_t get_offset_of_trackedHandness_5() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackedHandness_5)); }
	inline uint8_t get_trackedHandness_5() const { return ___trackedHandness_5; }
	inline uint8_t* get_address_of_trackedHandness_5() { return &___trackedHandness_5; }
	inline void set_trackedHandness_5(uint8_t value)
	{
		___trackedHandness_5 = value;
	}

	inline static int32_t get_offset_of_trackedHandJoint_6() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackedHandJoint_6)); }
	inline int32_t get_trackedHandJoint_6() const { return ___trackedHandJoint_6; }
	inline int32_t* get_address_of_trackedHandJoint_6() { return &___trackedHandJoint_6; }
	inline void set_trackedHandJoint_6(int32_t value)
	{
		___trackedHandJoint_6 = value;
	}

	inline static int32_t get_offset_of_transformOverride_7() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___transformOverride_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transformOverride_7() const { return ___transformOverride_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transformOverride_7() { return &___transformOverride_7; }
	inline void set_transformOverride_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transformOverride_7 = value;
		Il2CppCodeGenWriteBarrier((&___transformOverride_7), value);
	}

	inline static int32_t get_offset_of_additionalOffset_8() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___additionalOffset_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalOffset_8() const { return ___additionalOffset_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalOffset_8() { return &___additionalOffset_8; }
	inline void set_additionalOffset_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalOffset_8 = value;
	}

	inline static int32_t get_offset_of_additionalRotation_9() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___additionalRotation_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalRotation_9() const { return ___additionalRotation_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalRotation_9() { return &___additionalRotation_9; }
	inline void set_additionalRotation_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalRotation_9 = value;
	}

	inline static int32_t get_offset_of_updateSolvers_10() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___updateSolvers_10)); }
	inline bool get_updateSolvers_10() const { return ___updateSolvers_10; }
	inline bool* get_address_of_updateSolvers_10() { return &___updateSolvers_10; }
	inline void set_updateSolvers_10(bool value)
	{
		___updateSolvers_10 = value;
	}

	inline static int32_t get_offset_of_solvers_11() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___solvers_11)); }
	inline List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * get_solvers_11() const { return ___solvers_11; }
	inline List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED ** get_address_of_solvers_11() { return &___solvers_11; }
	inline void set_solvers_11(List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * value)
	{
		___solvers_11 = value;
		Il2CppCodeGenWriteBarrier((&___solvers_11), value);
	}

	inline static int32_t get_offset_of_updateSolversList_12() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___updateSolversList_12)); }
	inline bool get_updateSolversList_12() const { return ___updateSolversList_12; }
	inline bool* get_address_of_updateSolversList_12() { return &___updateSolversList_12; }
	inline void set_updateSolversList_12(bool value)
	{
		___updateSolversList_12 = value;
	}

	inline static int32_t get_offset_of_U3CGoalPositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CGoalPositionU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalPositionU3Ek__BackingField_13() const { return ___U3CGoalPositionU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalPositionU3Ek__BackingField_13() { return &___U3CGoalPositionU3Ek__BackingField_13; }
	inline void set_U3CGoalPositionU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalPositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CGoalRotationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CGoalRotationU3Ek__BackingField_14)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CGoalRotationU3Ek__BackingField_14() const { return ___U3CGoalRotationU3Ek__BackingField_14; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CGoalRotationU3Ek__BackingField_14() { return &___U3CGoalRotationU3Ek__BackingField_14; }
	inline void set_U3CGoalRotationU3Ek__BackingField_14(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CGoalRotationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CGoalScaleU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CGoalScaleU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalScaleU3Ek__BackingField_15() const { return ___U3CGoalScaleU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalScaleU3Ek__BackingField_15() { return &___U3CGoalScaleU3Ek__BackingField_15; }
	inline void set_U3CGoalScaleU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalScaleU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CAltScaleU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CAltScaleU3Ek__BackingField_16)); }
	inline Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  get_U3CAltScaleU3Ek__BackingField_16() const { return ___U3CAltScaleU3Ek__BackingField_16; }
	inline Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E * get_address_of_U3CAltScaleU3Ek__BackingField_16() { return &___U3CAltScaleU3Ek__BackingField_16; }
	inline void set_U3CAltScaleU3Ek__BackingField_16(Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  value)
	{
		___U3CAltScaleU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___U3CDeltaTimeU3Ek__BackingField_17)); }
	inline float get_U3CDeltaTimeU3Ek__BackingField_17() const { return ___U3CDeltaTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CDeltaTimeU3Ek__BackingField_17() { return &___U3CDeltaTimeU3Ek__BackingField_17; }
	inline void set_U3CDeltaTimeU3Ek__BackingField_17(float value)
	{
		___U3CDeltaTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_currentTrackedHandedness_18() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___currentTrackedHandedness_18)); }
	inline uint8_t get_currentTrackedHandedness_18() const { return ___currentTrackedHandedness_18; }
	inline uint8_t* get_address_of_currentTrackedHandedness_18() { return &___currentTrackedHandedness_18; }
	inline void set_currentTrackedHandedness_18(uint8_t value)
	{
		___currentTrackedHandedness_18 = value;
	}

	inline static int32_t get_offset_of_preferredTrackedHandedness_19() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___preferredTrackedHandedness_19)); }
	inline uint8_t get_preferredTrackedHandedness_19() const { return ___preferredTrackedHandedness_19; }
	inline uint8_t* get_address_of_preferredTrackedHandedness_19() { return &___preferredTrackedHandedness_19; }
	inline void set_preferredTrackedHandedness_19(uint8_t value)
	{
		___preferredTrackedHandedness_19 = value;
	}

	inline static int32_t get_offset_of_trackingTarget_20() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___trackingTarget_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_trackingTarget_20() const { return ___trackingTarget_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_trackingTarget_20() { return &___trackingTarget_20; }
	inline void set_trackingTarget_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___trackingTarget_20 = value;
		Il2CppCodeGenWriteBarrier((&___trackingTarget_20), value);
	}

	inline static int32_t get_offset_of_controllerRay_21() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___controllerRay_21)); }
	inline LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * get_controllerRay_21() const { return ___controllerRay_21; }
	inline LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 ** get_address_of_controllerRay_21() { return &___controllerRay_21; }
	inline void set_controllerRay_21(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * value)
	{
		___controllerRay_21 = value;
		Il2CppCodeGenWriteBarrier((&___controllerRay_21), value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_22() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___lastUpdateTime_22)); }
	inline float get_lastUpdateTime_22() const { return ___lastUpdateTime_22; }
	inline float* get_address_of_lastUpdateTime_22() { return &___lastUpdateTime_22; }
	inline void set_lastUpdateTime_22(float value)
	{
		___lastUpdateTime_22 = value;
	}

	inline static int32_t get_offset_of_handJointService_23() { return static_cast<int32_t>(offsetof(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687, ___handJointService_23)); }
	inline RuntimeObject* get_handJointService_23() const { return ___handJointService_23; }
	inline RuntimeObject** get_address_of_handJointService_23() { return &___handJointService_23; }
	inline void set_handJointService_23(RuntimeObject* value)
	{
		___handJointService_23 = value;
		Il2CppCodeGenWriteBarrier((&___handJointService_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVERHANDLER_TDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_H
#ifndef TILEGRIDOBJECTCOLLECTION_T3D68541A8813220AEBAA13A6FB83F203D3D05D1E_H
#define TILEGRIDOBJECTCOLLECTION_T3D68541A8813220AEBAA13A6FB83F203D3D05D1E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct  TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Columns
	int32_t ___Columns_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::TileSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___TileSize_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Gutters
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Gutters_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::LayoutDireciton
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___LayoutDireciton_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::StartPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___StartPosition_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Centered
	bool ___Centered_9;
	// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection_GridDivisions Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::DepthCalculatedBy
	int32_t ___DepthCalculatedBy_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnlyInEditMode
	bool ___OnlyInEditMode_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::offSet
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offSet_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::editorUpdated
	bool ___editorUpdated_13;

public:
	inline static int32_t get_offset_of_Columns_4() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___Columns_4)); }
	inline int32_t get_Columns_4() const { return ___Columns_4; }
	inline int32_t* get_address_of_Columns_4() { return &___Columns_4; }
	inline void set_Columns_4(int32_t value)
	{
		___Columns_4 = value;
	}

	inline static int32_t get_offset_of_TileSize_5() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___TileSize_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_TileSize_5() const { return ___TileSize_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_TileSize_5() { return &___TileSize_5; }
	inline void set_TileSize_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___TileSize_5 = value;
	}

	inline static int32_t get_offset_of_Gutters_6() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___Gutters_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Gutters_6() const { return ___Gutters_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Gutters_6() { return &___Gutters_6; }
	inline void set_Gutters_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Gutters_6 = value;
	}

	inline static int32_t get_offset_of_LayoutDireciton_7() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___LayoutDireciton_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_LayoutDireciton_7() const { return ___LayoutDireciton_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_LayoutDireciton_7() { return &___LayoutDireciton_7; }
	inline void set_LayoutDireciton_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___LayoutDireciton_7 = value;
	}

	inline static int32_t get_offset_of_StartPosition_8() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___StartPosition_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_StartPosition_8() const { return ___StartPosition_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_StartPosition_8() { return &___StartPosition_8; }
	inline void set_StartPosition_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___StartPosition_8 = value;
	}

	inline static int32_t get_offset_of_Centered_9() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___Centered_9)); }
	inline bool get_Centered_9() const { return ___Centered_9; }
	inline bool* get_address_of_Centered_9() { return &___Centered_9; }
	inline void set_Centered_9(bool value)
	{
		___Centered_9 = value;
	}

	inline static int32_t get_offset_of_DepthCalculatedBy_10() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___DepthCalculatedBy_10)); }
	inline int32_t get_DepthCalculatedBy_10() const { return ___DepthCalculatedBy_10; }
	inline int32_t* get_address_of_DepthCalculatedBy_10() { return &___DepthCalculatedBy_10; }
	inline void set_DepthCalculatedBy_10(int32_t value)
	{
		___DepthCalculatedBy_10 = value;
	}

	inline static int32_t get_offset_of_OnlyInEditMode_11() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___OnlyInEditMode_11)); }
	inline bool get_OnlyInEditMode_11() const { return ___OnlyInEditMode_11; }
	inline bool* get_address_of_OnlyInEditMode_11() { return &___OnlyInEditMode_11; }
	inline void set_OnlyInEditMode_11(bool value)
	{
		___OnlyInEditMode_11 = value;
	}

	inline static int32_t get_offset_of_offSet_12() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___offSet_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offSet_12() const { return ___offSet_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offSet_12() { return &___offSet_12; }
	inline void set_offSet_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offSet_12 = value;
	}

	inline static int32_t get_offset_of_editorUpdated_13() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E, ___editorUpdated_13)); }
	inline bool get_editorUpdated_13() const { return ___editorUpdated_13; }
	inline bool* get_address_of_editorUpdated_13() { return &___editorUpdated_13; }
	inline void set_editorUpdated_13(bool value)
	{
		___editorUpdated_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEGRIDOBJECTCOLLECTION_T3D68541A8813220AEBAA13A6FB83F203D3D05D1E_H
#ifndef CONTROLLERPOSESYNCHRONIZER_T20205AD01AF34AA287EE284C655AC5FB45783651_H
#define CONTROLLERPOSESYNCHRONIZER_T20205AD01AF34AA287EE284C655AC5FB45783651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct  ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651  : public InputSystemGlobalHandlerListener_t0A638320E7C263ED03BF16AFC52F6A2084FFC207
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::destroyOnSourceLost
	bool ___destroyOnSourceLost_5;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::TrackingState
	int32_t ___TrackingState_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::controller
	RuntimeObject* ___controller_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::useSourcePoseData
	bool ___useSourcePoseData_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::poseAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___poseAction_9;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::handedness
	uint8_t ___handedness_10;

public:
	inline static int32_t get_offset_of_destroyOnSourceLost_5() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___destroyOnSourceLost_5)); }
	inline bool get_destroyOnSourceLost_5() const { return ___destroyOnSourceLost_5; }
	inline bool* get_address_of_destroyOnSourceLost_5() { return &___destroyOnSourceLost_5; }
	inline void set_destroyOnSourceLost_5(bool value)
	{
		___destroyOnSourceLost_5 = value;
	}

	inline static int32_t get_offset_of_TrackingState_6() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___TrackingState_6)); }
	inline int32_t get_TrackingState_6() const { return ___TrackingState_6; }
	inline int32_t* get_address_of_TrackingState_6() { return &___TrackingState_6; }
	inline void set_TrackingState_6(int32_t value)
	{
		___TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_controller_7() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___controller_7)); }
	inline RuntimeObject* get_controller_7() const { return ___controller_7; }
	inline RuntimeObject** get_address_of_controller_7() { return &___controller_7; }
	inline void set_controller_7(RuntimeObject* value)
	{
		___controller_7 = value;
		Il2CppCodeGenWriteBarrier((&___controller_7), value);
	}

	inline static int32_t get_offset_of_useSourcePoseData_8() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___useSourcePoseData_8)); }
	inline bool get_useSourcePoseData_8() const { return ___useSourcePoseData_8; }
	inline bool* get_address_of_useSourcePoseData_8() { return &___useSourcePoseData_8; }
	inline void set_useSourcePoseData_8(bool value)
	{
		___useSourcePoseData_8 = value;
	}

	inline static int32_t get_offset_of_poseAction_9() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___poseAction_9)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_poseAction_9() const { return ___poseAction_9; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_poseAction_9() { return &___poseAction_9; }
	inline void set_poseAction_9(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___poseAction_9 = value;
	}

	inline static int32_t get_offset_of_handedness_10() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651, ___handedness_10)); }
	inline uint8_t get_handedness_10() const { return ___handedness_10; }
	inline uint8_t* get_address_of_handedness_10() { return &___handedness_10; }
	inline void set_handedness_10(uint8_t value)
	{
		___handedness_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERPOSESYNCHRONIZER_T20205AD01AF34AA287EE284C655AC5FB45783651_H
#ifndef HANDCONSTRAINT_T82CE669DD4421F5E5272C0D80CD7F855D20DB2E3_H
#define HANDCONSTRAINT_T82CE669DD4421F5E5272C0D80CD7F855D20DB2E3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint
struct  HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverSafeZone Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::safeZone
	int32_t ___safeZone_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::safeZoneBuffer
	float ___safeZoneBuffer_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::updateWhenOppositeHandNear
	bool ___updateWhenOppositeHandNear_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::hideHandCursorsOnActivate
	bool ___hideHandCursorsOnActivate_16;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_SolverRotationBehavior Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::rotationBehavior
	int32_t ___rotationBehavior_17;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onHandActivate
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onHandActivate_18;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onHandDeactivate
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onHandDeactivate_19;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onFirstHandDetected
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onFirstHandDetected_20;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::onLastHandLost
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onLastHandLost_21;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::previousHandedness
	uint8_t ___previousHandedness_22;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::trackedController
	RuntimeObject* ___trackedController_23;
	// Microsoft.MixedReality.Toolkit.Input.HandBounds Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::handBounds
	HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * ___handBounds_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::handToWorldRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___handToWorldRotation_25;

public:
	inline static int32_t get_offset_of_safeZone_13() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___safeZone_13)); }
	inline int32_t get_safeZone_13() const { return ___safeZone_13; }
	inline int32_t* get_address_of_safeZone_13() { return &___safeZone_13; }
	inline void set_safeZone_13(int32_t value)
	{
		___safeZone_13 = value;
	}

	inline static int32_t get_offset_of_safeZoneBuffer_14() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___safeZoneBuffer_14)); }
	inline float get_safeZoneBuffer_14() const { return ___safeZoneBuffer_14; }
	inline float* get_address_of_safeZoneBuffer_14() { return &___safeZoneBuffer_14; }
	inline void set_safeZoneBuffer_14(float value)
	{
		___safeZoneBuffer_14 = value;
	}

	inline static int32_t get_offset_of_updateWhenOppositeHandNear_15() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___updateWhenOppositeHandNear_15)); }
	inline bool get_updateWhenOppositeHandNear_15() const { return ___updateWhenOppositeHandNear_15; }
	inline bool* get_address_of_updateWhenOppositeHandNear_15() { return &___updateWhenOppositeHandNear_15; }
	inline void set_updateWhenOppositeHandNear_15(bool value)
	{
		___updateWhenOppositeHandNear_15 = value;
	}

	inline static int32_t get_offset_of_hideHandCursorsOnActivate_16() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___hideHandCursorsOnActivate_16)); }
	inline bool get_hideHandCursorsOnActivate_16() const { return ___hideHandCursorsOnActivate_16; }
	inline bool* get_address_of_hideHandCursorsOnActivate_16() { return &___hideHandCursorsOnActivate_16; }
	inline void set_hideHandCursorsOnActivate_16(bool value)
	{
		___hideHandCursorsOnActivate_16 = value;
	}

	inline static int32_t get_offset_of_rotationBehavior_17() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___rotationBehavior_17)); }
	inline int32_t get_rotationBehavior_17() const { return ___rotationBehavior_17; }
	inline int32_t* get_address_of_rotationBehavior_17() { return &___rotationBehavior_17; }
	inline void set_rotationBehavior_17(int32_t value)
	{
		___rotationBehavior_17 = value;
	}

	inline static int32_t get_offset_of_onHandActivate_18() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___onHandActivate_18)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onHandActivate_18() const { return ___onHandActivate_18; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onHandActivate_18() { return &___onHandActivate_18; }
	inline void set_onHandActivate_18(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onHandActivate_18 = value;
		Il2CppCodeGenWriteBarrier((&___onHandActivate_18), value);
	}

	inline static int32_t get_offset_of_onHandDeactivate_19() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___onHandDeactivate_19)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onHandDeactivate_19() const { return ___onHandDeactivate_19; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onHandDeactivate_19() { return &___onHandDeactivate_19; }
	inline void set_onHandDeactivate_19(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onHandDeactivate_19 = value;
		Il2CppCodeGenWriteBarrier((&___onHandDeactivate_19), value);
	}

	inline static int32_t get_offset_of_onFirstHandDetected_20() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___onFirstHandDetected_20)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onFirstHandDetected_20() const { return ___onFirstHandDetected_20; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onFirstHandDetected_20() { return &___onFirstHandDetected_20; }
	inline void set_onFirstHandDetected_20(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onFirstHandDetected_20 = value;
		Il2CppCodeGenWriteBarrier((&___onFirstHandDetected_20), value);
	}

	inline static int32_t get_offset_of_onLastHandLost_21() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___onLastHandLost_21)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onLastHandLost_21() const { return ___onLastHandLost_21; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onLastHandLost_21() { return &___onLastHandLost_21; }
	inline void set_onLastHandLost_21(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onLastHandLost_21 = value;
		Il2CppCodeGenWriteBarrier((&___onLastHandLost_21), value);
	}

	inline static int32_t get_offset_of_previousHandedness_22() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___previousHandedness_22)); }
	inline uint8_t get_previousHandedness_22() const { return ___previousHandedness_22; }
	inline uint8_t* get_address_of_previousHandedness_22() { return &___previousHandedness_22; }
	inline void set_previousHandedness_22(uint8_t value)
	{
		___previousHandedness_22 = value;
	}

	inline static int32_t get_offset_of_trackedController_23() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___trackedController_23)); }
	inline RuntimeObject* get_trackedController_23() const { return ___trackedController_23; }
	inline RuntimeObject** get_address_of_trackedController_23() { return &___trackedController_23; }
	inline void set_trackedController_23(RuntimeObject* value)
	{
		___trackedController_23 = value;
		Il2CppCodeGenWriteBarrier((&___trackedController_23), value);
	}

	inline static int32_t get_offset_of_handBounds_24() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___handBounds_24)); }
	inline HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * get_handBounds_24() const { return ___handBounds_24; }
	inline HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 ** get_address_of_handBounds_24() { return &___handBounds_24; }
	inline void set_handBounds_24(HandBounds_tEF5A76912DFBFF7129F8ECCF6AAA17102758D142 * value)
	{
		___handBounds_24 = value;
		Il2CppCodeGenWriteBarrier((&___handBounds_24), value);
	}

	inline static int32_t get_offset_of_handToWorldRotation_25() { return static_cast<int32_t>(offsetof(HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3, ___handToWorldRotation_25)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_handToWorldRotation_25() const { return ___handToWorldRotation_25; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_handToWorldRotation_25() { return &___handToWorldRotation_25; }
	inline void set_handToWorldRotation_25(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___handToWorldRotation_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDCONSTRAINT_T82CE669DD4421F5E5272C0D80CD7F855D20DB2E3_H
#ifndef INBETWEEN_TCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_H
#define INBETWEEN_TCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween
struct  InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::partwayOffset
	float ___partwayOffset_13;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondTrackedObjectType
	int32_t ___secondTrackedObjectType_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondTransformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransformOverride_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::secondSolverHandler
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * ___secondSolverHandler_16;

public:
	inline static int32_t get_offset_of_partwayOffset_13() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___partwayOffset_13)); }
	inline float get_partwayOffset_13() const { return ___partwayOffset_13; }
	inline float* get_address_of_partwayOffset_13() { return &___partwayOffset_13; }
	inline void set_partwayOffset_13(float value)
	{
		___partwayOffset_13 = value;
	}

	inline static int32_t get_offset_of_secondTrackedObjectType_14() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___secondTrackedObjectType_14)); }
	inline int32_t get_secondTrackedObjectType_14() const { return ___secondTrackedObjectType_14; }
	inline int32_t* get_address_of_secondTrackedObjectType_14() { return &___secondTrackedObjectType_14; }
	inline void set_secondTrackedObjectType_14(int32_t value)
	{
		___secondTrackedObjectType_14 = value;
	}

	inline static int32_t get_offset_of_secondTransformOverride_15() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___secondTransformOverride_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_secondTransformOverride_15() const { return ___secondTransformOverride_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_secondTransformOverride_15() { return &___secondTransformOverride_15; }
	inline void set_secondTransformOverride_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___secondTransformOverride_15 = value;
		Il2CppCodeGenWriteBarrier((&___secondTransformOverride_15), value);
	}

	inline static int32_t get_offset_of_secondSolverHandler_16() { return static_cast<int32_t>(offsetof(InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542, ___secondSolverHandler_16)); }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * get_secondSolverHandler_16() const { return ___secondSolverHandler_16; }
	inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 ** get_address_of_secondSolverHandler_16() { return &___secondSolverHandler_16; }
	inline void set_secondSolverHandler_16(SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * value)
	{
		___secondSolverHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___secondSolverHandler_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INBETWEEN_TCCB50275EC4F42F2562A940EAECAB6D7D7AEF542_H
#ifndef MOMENTUM_TD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4_H
#define MOMENTUM_TD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct  Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistance
	float ___resistance_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistanceVelocityPower
	float ___resistanceVelocityPower_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::accelerationRate
	float ___accelerationRate_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::springiness
	float ___springiness_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::snapZ
	bool ___snapZ_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocity_18;

public:
	inline static int32_t get_offset_of_resistance_13() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___resistance_13)); }
	inline float get_resistance_13() const { return ___resistance_13; }
	inline float* get_address_of_resistance_13() { return &___resistance_13; }
	inline void set_resistance_13(float value)
	{
		___resistance_13 = value;
	}

	inline static int32_t get_offset_of_resistanceVelocityPower_14() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___resistanceVelocityPower_14)); }
	inline float get_resistanceVelocityPower_14() const { return ___resistanceVelocityPower_14; }
	inline float* get_address_of_resistanceVelocityPower_14() { return &___resistanceVelocityPower_14; }
	inline void set_resistanceVelocityPower_14(float value)
	{
		___resistanceVelocityPower_14 = value;
	}

	inline static int32_t get_offset_of_accelerationRate_15() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___accelerationRate_15)); }
	inline float get_accelerationRate_15() const { return ___accelerationRate_15; }
	inline float* get_address_of_accelerationRate_15() { return &___accelerationRate_15; }
	inline void set_accelerationRate_15(float value)
	{
		___accelerationRate_15 = value;
	}

	inline static int32_t get_offset_of_springiness_16() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___springiness_16)); }
	inline float get_springiness_16() const { return ___springiness_16; }
	inline float* get_address_of_springiness_16() { return &___springiness_16; }
	inline void set_springiness_16(float value)
	{
		___springiness_16 = value;
	}

	inline static int32_t get_offset_of_snapZ_17() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___snapZ_17)); }
	inline bool get_snapZ_17() const { return ___snapZ_17; }
	inline bool* get_address_of_snapZ_17() { return &___snapZ_17; }
	inline void set_snapZ_17(bool value)
	{
		___snapZ_17 = value;
	}

	inline static int32_t get_offset_of_velocity_18() { return static_cast<int32_t>(offsetof(Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4, ___velocity_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocity_18() const { return ___velocity_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocity_18() { return &___velocity_18; }
	inline void set_velocity_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocity_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOMENTUM_TD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4_H
#ifndef ORBITAL_T4E2C971B059A301433A2439374836A8866E4BA87_H
#define ORBITAL_T4E2C971B059A301433A2439374836A8866E4BA87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct  Orbital_t4E2C971B059A301433A2439374836A8866E4BA87  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::orientationType
	int32_t ___orientationType_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::localOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localOffset_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::worldOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldOffset_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::useAngleStepping
	bool ___useAngleStepping_16;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::tetherAngleSteps
	int32_t ___tetherAngleSteps_17;

public:
	inline static int32_t get_offset_of_orientationType_13() { return static_cast<int32_t>(offsetof(Orbital_t4E2C971B059A301433A2439374836A8866E4BA87, ___orientationType_13)); }
	inline int32_t get_orientationType_13() const { return ___orientationType_13; }
	inline int32_t* get_address_of_orientationType_13() { return &___orientationType_13; }
	inline void set_orientationType_13(int32_t value)
	{
		___orientationType_13 = value;
	}

	inline static int32_t get_offset_of_localOffset_14() { return static_cast<int32_t>(offsetof(Orbital_t4E2C971B059A301433A2439374836A8866E4BA87, ___localOffset_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_localOffset_14() const { return ___localOffset_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_localOffset_14() { return &___localOffset_14; }
	inline void set_localOffset_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___localOffset_14 = value;
	}

	inline static int32_t get_offset_of_worldOffset_15() { return static_cast<int32_t>(offsetof(Orbital_t4E2C971B059A301433A2439374836A8866E4BA87, ___worldOffset_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldOffset_15() const { return ___worldOffset_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldOffset_15() { return &___worldOffset_15; }
	inline void set_worldOffset_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldOffset_15 = value;
	}

	inline static int32_t get_offset_of_useAngleStepping_16() { return static_cast<int32_t>(offsetof(Orbital_t4E2C971B059A301433A2439374836A8866E4BA87, ___useAngleStepping_16)); }
	inline bool get_useAngleStepping_16() const { return ___useAngleStepping_16; }
	inline bool* get_address_of_useAngleStepping_16() { return &___useAngleStepping_16; }
	inline void set_useAngleStepping_16(bool value)
	{
		___useAngleStepping_16 = value;
	}

	inline static int32_t get_offset_of_tetherAngleSteps_17() { return static_cast<int32_t>(offsetof(Orbital_t4E2C971B059A301433A2439374836A8866E4BA87, ___tetherAngleSteps_17)); }
	inline int32_t get_tetherAngleSteps_17() const { return ___tetherAngleSteps_17; }
	inline int32_t* get_address_of_tetherAngleSteps_17() { return &___tetherAngleSteps_17; }
	inline void set_tetherAngleSteps_17(int32_t value)
	{
		___tetherAngleSteps_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORBITAL_T4E2C971B059A301433A2439374836A8866E4BA87_H
#ifndef OVERLAP_T14605F26108B061874FE4594021CBF8BFEBB3CE1_H
#define OVERLAP_T14605F26108B061874FE4594021CBF8BFEBB3CE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct  Overlap_t14605F26108B061874FE4594021CBF8BFEBB3CE1  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERLAP_T14605F26108B061874FE4594021CBF8BFEBB3CE1_H
#ifndef RADIALVIEW_TA5387868F51364598DEFAC668418E38CFDD35B91_H
#define RADIALVIEW_TA5387868F51364598DEFAC668418E38CFDD35B91_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct  RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::referenceDirection
	int32_t ___referenceDirection_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minDistance
	float ___minDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxDistance
	float ___maxDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minViewDegrees
	float ___minViewDegrees_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxViewDegrees
	float ___maxViewDegrees_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::aspectV
	float ___aspectV_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreAngleClamp
	bool ___ignoreAngleClamp_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreDistanceClamp
	bool ___ignoreDistanceClamp_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::useFixedVerticalPosition
	bool ___useFixedVerticalPosition_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::fixedVerticalPosition
	float ___fixedVerticalPosition_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::orientToReferenceDirection
	bool ___orientToReferenceDirection_23;

public:
	inline static int32_t get_offset_of_referenceDirection_13() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___referenceDirection_13)); }
	inline int32_t get_referenceDirection_13() const { return ___referenceDirection_13; }
	inline int32_t* get_address_of_referenceDirection_13() { return &___referenceDirection_13; }
	inline void set_referenceDirection_13(int32_t value)
	{
		___referenceDirection_13 = value;
	}

	inline static int32_t get_offset_of_minDistance_14() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___minDistance_14)); }
	inline float get_minDistance_14() const { return ___minDistance_14; }
	inline float* get_address_of_minDistance_14() { return &___minDistance_14; }
	inline void set_minDistance_14(float value)
	{
		___minDistance_14 = value;
	}

	inline static int32_t get_offset_of_maxDistance_15() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___maxDistance_15)); }
	inline float get_maxDistance_15() const { return ___maxDistance_15; }
	inline float* get_address_of_maxDistance_15() { return &___maxDistance_15; }
	inline void set_maxDistance_15(float value)
	{
		___maxDistance_15 = value;
	}

	inline static int32_t get_offset_of_minViewDegrees_16() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___minViewDegrees_16)); }
	inline float get_minViewDegrees_16() const { return ___minViewDegrees_16; }
	inline float* get_address_of_minViewDegrees_16() { return &___minViewDegrees_16; }
	inline void set_minViewDegrees_16(float value)
	{
		___minViewDegrees_16 = value;
	}

	inline static int32_t get_offset_of_maxViewDegrees_17() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___maxViewDegrees_17)); }
	inline float get_maxViewDegrees_17() const { return ___maxViewDegrees_17; }
	inline float* get_address_of_maxViewDegrees_17() { return &___maxViewDegrees_17; }
	inline void set_maxViewDegrees_17(float value)
	{
		___maxViewDegrees_17 = value;
	}

	inline static int32_t get_offset_of_aspectV_18() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___aspectV_18)); }
	inline float get_aspectV_18() const { return ___aspectV_18; }
	inline float* get_address_of_aspectV_18() { return &___aspectV_18; }
	inline void set_aspectV_18(float value)
	{
		___aspectV_18 = value;
	}

	inline static int32_t get_offset_of_ignoreAngleClamp_19() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___ignoreAngleClamp_19)); }
	inline bool get_ignoreAngleClamp_19() const { return ___ignoreAngleClamp_19; }
	inline bool* get_address_of_ignoreAngleClamp_19() { return &___ignoreAngleClamp_19; }
	inline void set_ignoreAngleClamp_19(bool value)
	{
		___ignoreAngleClamp_19 = value;
	}

	inline static int32_t get_offset_of_ignoreDistanceClamp_20() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___ignoreDistanceClamp_20)); }
	inline bool get_ignoreDistanceClamp_20() const { return ___ignoreDistanceClamp_20; }
	inline bool* get_address_of_ignoreDistanceClamp_20() { return &___ignoreDistanceClamp_20; }
	inline void set_ignoreDistanceClamp_20(bool value)
	{
		___ignoreDistanceClamp_20 = value;
	}

	inline static int32_t get_offset_of_useFixedVerticalPosition_21() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___useFixedVerticalPosition_21)); }
	inline bool get_useFixedVerticalPosition_21() const { return ___useFixedVerticalPosition_21; }
	inline bool* get_address_of_useFixedVerticalPosition_21() { return &___useFixedVerticalPosition_21; }
	inline void set_useFixedVerticalPosition_21(bool value)
	{
		___useFixedVerticalPosition_21 = value;
	}

	inline static int32_t get_offset_of_fixedVerticalPosition_22() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___fixedVerticalPosition_22)); }
	inline float get_fixedVerticalPosition_22() const { return ___fixedVerticalPosition_22; }
	inline float* get_address_of_fixedVerticalPosition_22() { return &___fixedVerticalPosition_22; }
	inline void set_fixedVerticalPosition_22(float value)
	{
		___fixedVerticalPosition_22 = value;
	}

	inline static int32_t get_offset_of_orientToReferenceDirection_23() { return static_cast<int32_t>(offsetof(RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91, ___orientToReferenceDirection_23)); }
	inline bool get_orientToReferenceDirection_23() const { return ___orientToReferenceDirection_23; }
	inline bool* get_address_of_orientToReferenceDirection_23() { return &___orientToReferenceDirection_23; }
	inline void set_orientToReferenceDirection_23(bool value)
	{
		___orientToReferenceDirection_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RADIALVIEW_TA5387868F51364598DEFAC668418E38CFDD35B91_H
#ifndef SURFACEMAGNETISM_T83C41117BC338A929B9A4B5E39341F6C82B843E0_H
#define SURFACEMAGNETISM_T83C41117BC338A929B9A4B5E39341F6C82B843E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct  SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0  : public Solver_t45BC4457D52541691149931505197834E2BCC506
{
public:
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::magneticSurfaces
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___magneticSurfaces_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maxRaycastDistance
	float ___maxRaycastDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::closestDistance
	float ___closestDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceNormalOffset
	float ___surfaceNormalOffset_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceRayOffset
	float ___surfaceRayOffset_17;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::raycastMode
	int32_t ___raycastMode_18;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxRaysPerEdge
	int32_t ___boxRaysPerEdge_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orthographicBoxCast
	bool ___orthographicBoxCast_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maximumNormalVariance
	float ___maximumNormalVariance_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::sphereSize
	float ___sphereSize_22;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::volumeCastSizeOverride
	float ___volumeCastSizeOverride_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::useLinkedAltScaleOverride
	bool ___useLinkedAltScaleOverride_24;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRaycastDirectionMode
	int32_t ___currentRaycastDirectionMode_25;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationMode
	int32_t ___orientationMode_26;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationBlend
	float ___orientationBlend_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::keepOrientationVertical
	bool ___keepOrientationVertical_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::debugEnabled
	bool ___debugEnabled_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::<OnSurface>k__BackingField
	bool ___U3COnSurfaceU3Ek__BackingField_30;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRayStep
	RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  ___currentRayStep_32;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxCollider
	BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider_33;

public:
	inline static int32_t get_offset_of_magneticSurfaces_13() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___magneticSurfaces_13)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_magneticSurfaces_13() const { return ___magneticSurfaces_13; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_magneticSurfaces_13() { return &___magneticSurfaces_13; }
	inline void set_magneticSurfaces_13(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___magneticSurfaces_13 = value;
		Il2CppCodeGenWriteBarrier((&___magneticSurfaces_13), value);
	}

	inline static int32_t get_offset_of_maxRaycastDistance_14() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___maxRaycastDistance_14)); }
	inline float get_maxRaycastDistance_14() const { return ___maxRaycastDistance_14; }
	inline float* get_address_of_maxRaycastDistance_14() { return &___maxRaycastDistance_14; }
	inline void set_maxRaycastDistance_14(float value)
	{
		___maxRaycastDistance_14 = value;
	}

	inline static int32_t get_offset_of_closestDistance_15() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___closestDistance_15)); }
	inline float get_closestDistance_15() const { return ___closestDistance_15; }
	inline float* get_address_of_closestDistance_15() { return &___closestDistance_15; }
	inline void set_closestDistance_15(float value)
	{
		___closestDistance_15 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_16() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___surfaceNormalOffset_16)); }
	inline float get_surfaceNormalOffset_16() const { return ___surfaceNormalOffset_16; }
	inline float* get_address_of_surfaceNormalOffset_16() { return &___surfaceNormalOffset_16; }
	inline void set_surfaceNormalOffset_16(float value)
	{
		___surfaceNormalOffset_16 = value;
	}

	inline static int32_t get_offset_of_surfaceRayOffset_17() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___surfaceRayOffset_17)); }
	inline float get_surfaceRayOffset_17() const { return ___surfaceRayOffset_17; }
	inline float* get_address_of_surfaceRayOffset_17() { return &___surfaceRayOffset_17; }
	inline void set_surfaceRayOffset_17(float value)
	{
		___surfaceRayOffset_17 = value;
	}

	inline static int32_t get_offset_of_raycastMode_18() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___raycastMode_18)); }
	inline int32_t get_raycastMode_18() const { return ___raycastMode_18; }
	inline int32_t* get_address_of_raycastMode_18() { return &___raycastMode_18; }
	inline void set_raycastMode_18(int32_t value)
	{
		___raycastMode_18 = value;
	}

	inline static int32_t get_offset_of_boxRaysPerEdge_19() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___boxRaysPerEdge_19)); }
	inline int32_t get_boxRaysPerEdge_19() const { return ___boxRaysPerEdge_19; }
	inline int32_t* get_address_of_boxRaysPerEdge_19() { return &___boxRaysPerEdge_19; }
	inline void set_boxRaysPerEdge_19(int32_t value)
	{
		___boxRaysPerEdge_19 = value;
	}

	inline static int32_t get_offset_of_orthographicBoxCast_20() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___orthographicBoxCast_20)); }
	inline bool get_orthographicBoxCast_20() const { return ___orthographicBoxCast_20; }
	inline bool* get_address_of_orthographicBoxCast_20() { return &___orthographicBoxCast_20; }
	inline void set_orthographicBoxCast_20(bool value)
	{
		___orthographicBoxCast_20 = value;
	}

	inline static int32_t get_offset_of_maximumNormalVariance_21() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___maximumNormalVariance_21)); }
	inline float get_maximumNormalVariance_21() const { return ___maximumNormalVariance_21; }
	inline float* get_address_of_maximumNormalVariance_21() { return &___maximumNormalVariance_21; }
	inline void set_maximumNormalVariance_21(float value)
	{
		___maximumNormalVariance_21 = value;
	}

	inline static int32_t get_offset_of_sphereSize_22() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___sphereSize_22)); }
	inline float get_sphereSize_22() const { return ___sphereSize_22; }
	inline float* get_address_of_sphereSize_22() { return &___sphereSize_22; }
	inline void set_sphereSize_22(float value)
	{
		___sphereSize_22 = value;
	}

	inline static int32_t get_offset_of_volumeCastSizeOverride_23() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___volumeCastSizeOverride_23)); }
	inline float get_volumeCastSizeOverride_23() const { return ___volumeCastSizeOverride_23; }
	inline float* get_address_of_volumeCastSizeOverride_23() { return &___volumeCastSizeOverride_23; }
	inline void set_volumeCastSizeOverride_23(float value)
	{
		___volumeCastSizeOverride_23 = value;
	}

	inline static int32_t get_offset_of_useLinkedAltScaleOverride_24() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___useLinkedAltScaleOverride_24)); }
	inline bool get_useLinkedAltScaleOverride_24() const { return ___useLinkedAltScaleOverride_24; }
	inline bool* get_address_of_useLinkedAltScaleOverride_24() { return &___useLinkedAltScaleOverride_24; }
	inline void set_useLinkedAltScaleOverride_24(bool value)
	{
		___useLinkedAltScaleOverride_24 = value;
	}

	inline static int32_t get_offset_of_currentRaycastDirectionMode_25() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___currentRaycastDirectionMode_25)); }
	inline int32_t get_currentRaycastDirectionMode_25() const { return ___currentRaycastDirectionMode_25; }
	inline int32_t* get_address_of_currentRaycastDirectionMode_25() { return &___currentRaycastDirectionMode_25; }
	inline void set_currentRaycastDirectionMode_25(int32_t value)
	{
		___currentRaycastDirectionMode_25 = value;
	}

	inline static int32_t get_offset_of_orientationMode_26() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___orientationMode_26)); }
	inline int32_t get_orientationMode_26() const { return ___orientationMode_26; }
	inline int32_t* get_address_of_orientationMode_26() { return &___orientationMode_26; }
	inline void set_orientationMode_26(int32_t value)
	{
		___orientationMode_26 = value;
	}

	inline static int32_t get_offset_of_orientationBlend_27() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___orientationBlend_27)); }
	inline float get_orientationBlend_27() const { return ___orientationBlend_27; }
	inline float* get_address_of_orientationBlend_27() { return &___orientationBlend_27; }
	inline void set_orientationBlend_27(float value)
	{
		___orientationBlend_27 = value;
	}

	inline static int32_t get_offset_of_keepOrientationVertical_28() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___keepOrientationVertical_28)); }
	inline bool get_keepOrientationVertical_28() const { return ___keepOrientationVertical_28; }
	inline bool* get_address_of_keepOrientationVertical_28() { return &___keepOrientationVertical_28; }
	inline void set_keepOrientationVertical_28(bool value)
	{
		___keepOrientationVertical_28 = value;
	}

	inline static int32_t get_offset_of_debugEnabled_29() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___debugEnabled_29)); }
	inline bool get_debugEnabled_29() const { return ___debugEnabled_29; }
	inline bool* get_address_of_debugEnabled_29() { return &___debugEnabled_29; }
	inline void set_debugEnabled_29(bool value)
	{
		___debugEnabled_29 = value;
	}

	inline static int32_t get_offset_of_U3COnSurfaceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___U3COnSurfaceU3Ek__BackingField_30)); }
	inline bool get_U3COnSurfaceU3Ek__BackingField_30() const { return ___U3COnSurfaceU3Ek__BackingField_30; }
	inline bool* get_address_of_U3COnSurfaceU3Ek__BackingField_30() { return &___U3COnSurfaceU3Ek__BackingField_30; }
	inline void set_U3COnSurfaceU3Ek__BackingField_30(bool value)
	{
		___U3COnSurfaceU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_currentRayStep_32() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___currentRayStep_32)); }
	inline RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  get_currentRayStep_32() const { return ___currentRayStep_32; }
	inline RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * get_address_of_currentRayStep_32() { return &___currentRayStep_32; }
	inline void set_currentRayStep_32(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  value)
	{
		___currentRayStep_32 = value;
	}

	inline static int32_t get_offset_of_boxCollider_33() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0, ___boxCollider_33)); }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * get_boxCollider_33() const { return ___boxCollider_33; }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA ** get_address_of_boxCollider_33() { return &___boxCollider_33; }
	inline void set_boxCollider_33(BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * value)
	{
		___boxCollider_33 = value;
		Il2CppCodeGenWriteBarrier((&___boxCollider_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURFACEMAGNETISM_T83C41117BC338A929B9A4B5E39341F6C82B843E0_H
#ifndef BASECONTROLLERPOINTER_TD01C202CFD2E756DFB9464B372CE836F1A43E5B9_H
#define BASECONTROLLERPOINTER_TD01C202CFD2E756DFB9464B372CE836F1A43E5B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer
struct  BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9  : public ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorPrefab_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::disableCursorOnStart
	bool ___disableCursorOnStart_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::setCursorVisibilityOnSourceDetected
	bool ___setCursorVisibilityOnSourceDetected_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorInstance
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorInstance_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::raycastOrigin
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___raycastOrigin_15;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::activeHoldAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___activeHoldAction_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___pointerAction_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresHoldAction
	bool ___requiresHoldAction_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresActionBeforeEnabling
	bool ___requiresActionBeforeEnabling_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsSelectPressed
	bool ___IsSelectPressed_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::HasSelectPressedOnce
	bool ___HasSelectPressedOnce_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsHoldPressed
	bool ___IsHoldPressed_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::isCursorInstantiatedFromPrefab
	bool ___isCursorInstantiatedFromPrefab_23;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerId
	uint32_t ___pointerId_24;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerName
	String_t* ___pointerName_25;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_27;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::overrideGlobalPointerExtent
	bool ___overrideGlobalPointerExtent_32;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerExtent
	float ___pointerExtent_33;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::defaultPointerExtent
	float ___defaultPointerExtent_34;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Rays>k__BackingField
	RayStepU5BU5D_tCD1CE5D02607BA5FD6D2C499C92B2BE190BFC450* ___U3CRaysU3Ek__BackingField_35;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_37;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_38;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_39;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_40;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::sphereCastRadius
	float ___sphereCastRadius_41;

public:
	inline static int32_t get_offset_of_cursorPrefab_11() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___cursorPrefab_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorPrefab_11() const { return ___cursorPrefab_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorPrefab_11() { return &___cursorPrefab_11; }
	inline void set_cursorPrefab_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((&___cursorPrefab_11), value);
	}

	inline static int32_t get_offset_of_disableCursorOnStart_12() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___disableCursorOnStart_12)); }
	inline bool get_disableCursorOnStart_12() const { return ___disableCursorOnStart_12; }
	inline bool* get_address_of_disableCursorOnStart_12() { return &___disableCursorOnStart_12; }
	inline void set_disableCursorOnStart_12(bool value)
	{
		___disableCursorOnStart_12 = value;
	}

	inline static int32_t get_offset_of_setCursorVisibilityOnSourceDetected_13() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___setCursorVisibilityOnSourceDetected_13)); }
	inline bool get_setCursorVisibilityOnSourceDetected_13() const { return ___setCursorVisibilityOnSourceDetected_13; }
	inline bool* get_address_of_setCursorVisibilityOnSourceDetected_13() { return &___setCursorVisibilityOnSourceDetected_13; }
	inline void set_setCursorVisibilityOnSourceDetected_13(bool value)
	{
		___setCursorVisibilityOnSourceDetected_13 = value;
	}

	inline static int32_t get_offset_of_cursorInstance_14() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___cursorInstance_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorInstance_14() const { return ___cursorInstance_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorInstance_14() { return &___cursorInstance_14; }
	inline void set_cursorInstance_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorInstance_14 = value;
		Il2CppCodeGenWriteBarrier((&___cursorInstance_14), value);
	}

	inline static int32_t get_offset_of_raycastOrigin_15() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___raycastOrigin_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_raycastOrigin_15() const { return ___raycastOrigin_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_raycastOrigin_15() { return &___raycastOrigin_15; }
	inline void set_raycastOrigin_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___raycastOrigin_15 = value;
		Il2CppCodeGenWriteBarrier((&___raycastOrigin_15), value);
	}

	inline static int32_t get_offset_of_activeHoldAction_16() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___activeHoldAction_16)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_activeHoldAction_16() const { return ___activeHoldAction_16; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_activeHoldAction_16() { return &___activeHoldAction_16; }
	inline void set_activeHoldAction_16(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___activeHoldAction_16 = value;
	}

	inline static int32_t get_offset_of_pointerAction_17() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___pointerAction_17)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_pointerAction_17() const { return ___pointerAction_17; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_pointerAction_17() { return &___pointerAction_17; }
	inline void set_pointerAction_17(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___pointerAction_17 = value;
	}

	inline static int32_t get_offset_of_requiresHoldAction_18() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___requiresHoldAction_18)); }
	inline bool get_requiresHoldAction_18() const { return ___requiresHoldAction_18; }
	inline bool* get_address_of_requiresHoldAction_18() { return &___requiresHoldAction_18; }
	inline void set_requiresHoldAction_18(bool value)
	{
		___requiresHoldAction_18 = value;
	}

	inline static int32_t get_offset_of_requiresActionBeforeEnabling_19() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___requiresActionBeforeEnabling_19)); }
	inline bool get_requiresActionBeforeEnabling_19() const { return ___requiresActionBeforeEnabling_19; }
	inline bool* get_address_of_requiresActionBeforeEnabling_19() { return &___requiresActionBeforeEnabling_19; }
	inline void set_requiresActionBeforeEnabling_19(bool value)
	{
		___requiresActionBeforeEnabling_19 = value;
	}

	inline static int32_t get_offset_of_IsSelectPressed_20() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___IsSelectPressed_20)); }
	inline bool get_IsSelectPressed_20() const { return ___IsSelectPressed_20; }
	inline bool* get_address_of_IsSelectPressed_20() { return &___IsSelectPressed_20; }
	inline void set_IsSelectPressed_20(bool value)
	{
		___IsSelectPressed_20 = value;
	}

	inline static int32_t get_offset_of_HasSelectPressedOnce_21() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___HasSelectPressedOnce_21)); }
	inline bool get_HasSelectPressedOnce_21() const { return ___HasSelectPressedOnce_21; }
	inline bool* get_address_of_HasSelectPressedOnce_21() { return &___HasSelectPressedOnce_21; }
	inline void set_HasSelectPressedOnce_21(bool value)
	{
		___HasSelectPressedOnce_21 = value;
	}

	inline static int32_t get_offset_of_IsHoldPressed_22() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___IsHoldPressed_22)); }
	inline bool get_IsHoldPressed_22() const { return ___IsHoldPressed_22; }
	inline bool* get_address_of_IsHoldPressed_22() { return &___IsHoldPressed_22; }
	inline void set_IsHoldPressed_22(bool value)
	{
		___IsHoldPressed_22 = value;
	}

	inline static int32_t get_offset_of_isCursorInstantiatedFromPrefab_23() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___isCursorInstantiatedFromPrefab_23)); }
	inline bool get_isCursorInstantiatedFromPrefab_23() const { return ___isCursorInstantiatedFromPrefab_23; }
	inline bool* get_address_of_isCursorInstantiatedFromPrefab_23() { return &___isCursorInstantiatedFromPrefab_23; }
	inline void set_isCursorInstantiatedFromPrefab_23(bool value)
	{
		___isCursorInstantiatedFromPrefab_23 = value;
	}

	inline static int32_t get_offset_of_pointerId_24() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___pointerId_24)); }
	inline uint32_t get_pointerId_24() const { return ___pointerId_24; }
	inline uint32_t* get_address_of_pointerId_24() { return &___pointerId_24; }
	inline void set_pointerId_24(uint32_t value)
	{
		___pointerId_24 = value;
	}

	inline static int32_t get_offset_of_pointerName_25() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___pointerName_25)); }
	inline String_t* get_pointerName_25() const { return ___pointerName_25; }
	inline String_t** get_address_of_pointerName_25() { return &___pointerName_25; }
	inline void set_pointerName_25(String_t* value)
	{
		___pointerName_25 = value;
		Il2CppCodeGenWriteBarrier((&___pointerName_25), value);
	}

	inline static int32_t get_offset_of_U3CInputSourceParentU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CInputSourceParentU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CInputSourceParentU3Ek__BackingField_26() const { return ___U3CInputSourceParentU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CInputSourceParentU3Ek__BackingField_26() { return &___U3CInputSourceParentU3Ek__BackingField_26; }
	inline void set_U3CInputSourceParentU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CInputSourceParentU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceParentU3Ek__BackingField_26), value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CBaseCursorU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_27() const { return ___U3CBaseCursorU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_27() { return &___U3CBaseCursorU3Ek__BackingField_27; }
	inline void set_U3CBaseCursorU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBaseCursorU3Ek__BackingField_27), value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CCursorModifierU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_28() const { return ___U3CCursorModifierU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_28() { return &___U3CCursorModifierU3Ek__BackingField_28; }
	inline void set_U3CCursorModifierU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCursorModifierU3Ek__BackingField_28), value);
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CIsActiveU3Ek__BackingField_29)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_29() const { return ___U3CIsActiveU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_29() { return &___U3CIsActiveU3Ek__BackingField_29; }
	inline void set_U3CIsActiveU3Ek__BackingField_29(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CIsFocusLockedU3Ek__BackingField_30)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_30() const { return ___U3CIsFocusLockedU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_30() { return &___U3CIsFocusLockedU3Ek__BackingField_30; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_30(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_overrideGlobalPointerExtent_32() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___overrideGlobalPointerExtent_32)); }
	inline bool get_overrideGlobalPointerExtent_32() const { return ___overrideGlobalPointerExtent_32; }
	inline bool* get_address_of_overrideGlobalPointerExtent_32() { return &___overrideGlobalPointerExtent_32; }
	inline void set_overrideGlobalPointerExtent_32(bool value)
	{
		___overrideGlobalPointerExtent_32 = value;
	}

	inline static int32_t get_offset_of_pointerExtent_33() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___pointerExtent_33)); }
	inline float get_pointerExtent_33() const { return ___pointerExtent_33; }
	inline float* get_address_of_pointerExtent_33() { return &___pointerExtent_33; }
	inline void set_pointerExtent_33(float value)
	{
		___pointerExtent_33 = value;
	}

	inline static int32_t get_offset_of_defaultPointerExtent_34() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___defaultPointerExtent_34)); }
	inline float get_defaultPointerExtent_34() const { return ___defaultPointerExtent_34; }
	inline float* get_address_of_defaultPointerExtent_34() { return &___defaultPointerExtent_34; }
	inline void set_defaultPointerExtent_34(float value)
	{
		___defaultPointerExtent_34 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CRaysU3Ek__BackingField_35)); }
	inline RayStepU5BU5D_tCD1CE5D02607BA5FD6D2C499C92B2BE190BFC450* get_U3CRaysU3Ek__BackingField_35() const { return ___U3CRaysU3Ek__BackingField_35; }
	inline RayStepU5BU5D_tCD1CE5D02607BA5FD6D2C499C92B2BE190BFC450** get_address_of_U3CRaysU3Ek__BackingField_35() { return &___U3CRaysU3Ek__BackingField_35; }
	inline void set_U3CRaysU3Ek__BackingField_35(RayStepU5BU5D_tCD1CE5D02607BA5FD6D2C499C92B2BE190BFC450* value)
	{
		___U3CRaysU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRaysU3Ek__BackingField_35), value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_36), value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CFocusTargetU3Ek__BackingField_37)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_37() const { return ___U3CFocusTargetU3Ek__BackingField_37; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_37() { return &___U3CFocusTargetU3Ek__BackingField_37; }
	inline void set_U3CFocusTargetU3Ek__BackingField_37(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFocusTargetU3Ek__BackingField_37), value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CResultU3Ek__BackingField_38)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_38() const { return ___U3CResultU3Ek__BackingField_38; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_38() { return &___U3CResultU3Ek__BackingField_38; }
	inline void set_U3CResultU3Ek__BackingField_38(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultU3Ek__BackingField_38), value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CRayStabilizerU3Ek__BackingField_39)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_39() const { return ___U3CRayStabilizerU3Ek__BackingField_39; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_39() { return &___U3CRayStabilizerU3Ek__BackingField_39; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_39(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRayStabilizerU3Ek__BackingField_39), value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___U3CSceneQueryTypeU3Ek__BackingField_40)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_40() const { return ___U3CSceneQueryTypeU3Ek__BackingField_40; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_40() { return &___U3CSceneQueryTypeU3Ek__BackingField_40; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_40(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_sphereCastRadius_41() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9, ___sphereCastRadius_41)); }
	inline float get_sphereCastRadius_41() const { return ___sphereCastRadius_41; }
	inline float* get_address_of_sphereCastRadius_41() { return &___sphereCastRadius_41; }
	inline void set_sphereCastRadius_41(float value)
	{
		___sphereCastRadius_41 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECONTROLLERPOINTER_TD01C202CFD2E756DFB9464B372CE836F1A43E5B9_H
#ifndef HANDCONSTRAINTPALMUP_T505913A6B83A81BDB25B06B72442A621033C9DAB_H
#define HANDCONSTRAINTPALMUP_T505913A6B83A81BDB25B06B72442A621033C9DAB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp
struct  HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB  : public HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::facingThreshold
	float ___facingThreshold_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::requireFlatHand
	bool ___requireFlatHand_27;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::flatHandThreshold
	float ___flatHandThreshold_28;

public:
	inline static int32_t get_offset_of_facingThreshold_26() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB, ___facingThreshold_26)); }
	inline float get_facingThreshold_26() const { return ___facingThreshold_26; }
	inline float* get_address_of_facingThreshold_26() { return &___facingThreshold_26; }
	inline void set_facingThreshold_26(float value)
	{
		___facingThreshold_26 = value;
	}

	inline static int32_t get_offset_of_requireFlatHand_27() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB, ___requireFlatHand_27)); }
	inline bool get_requireFlatHand_27() const { return ___requireFlatHand_27; }
	inline bool* get_address_of_requireFlatHand_27() { return &___requireFlatHand_27; }
	inline void set_requireFlatHand_27(bool value)
	{
		___requireFlatHand_27 = value;
	}

	inline static int32_t get_offset_of_flatHandThreshold_28() { return static_cast<int32_t>(offsetof(HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB, ___flatHandThreshold_28)); }
	inline float get_flatHandThreshold_28() const { return ___flatHandThreshold_28; }
	inline float* get_address_of_flatHandThreshold_28() { return &___flatHandThreshold_28; }
	inline void set_flatHandThreshold_28(float value)
	{
		___flatHandThreshold_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDCONSTRAINTPALMUP_T505913A6B83A81BDB25B06B72442A621033C9DAB_H
#ifndef LINEPOINTER_T4244EF0A86631BF9843D1115BDEFE668F130AB87_H
#define LINEPOINTER_T4244EF0A86631BF9843D1115BDEFE668F130AB87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct  LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87  : public BaseControllerPointer_tD01C202CFD2E756DFB9464B372CE836F1A43E5B9
{
public:
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorSelected
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorSelected_42;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorValid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorValid_43;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorInvalid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorInvalid_44;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorNoTarget
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorNoTarget_45;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorLockFocus
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorLockFocus_46;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider Microsoft.MixedReality.Toolkit.Input.LinePointer::lineBase
	BaseMixedRealityLineDataProvider_tC35878F4E52DC5B0995B39360258BD6613D3190A * ___lineBase_47;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[] Microsoft.MixedReality.Toolkit.Input.LinePointer::lineRenderers
	BaseMixedRealityLineRendererU5BU5D_tC2D9120DE5D195B660C82B3B89F9D354E0AF1C0C* ___lineRenderers_48;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineStartPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lineStartPoint_49;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineEndPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lineEndPoint_50;

public:
	inline static int32_t get_offset_of_LineColorSelected_42() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___LineColorSelected_42)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorSelected_42() const { return ___LineColorSelected_42; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorSelected_42() { return &___LineColorSelected_42; }
	inline void set_LineColorSelected_42(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorSelected_42 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorSelected_42), value);
	}

	inline static int32_t get_offset_of_LineColorValid_43() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___LineColorValid_43)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorValid_43() const { return ___LineColorValid_43; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorValid_43() { return &___LineColorValid_43; }
	inline void set_LineColorValid_43(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorValid_43 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorValid_43), value);
	}

	inline static int32_t get_offset_of_LineColorInvalid_44() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___LineColorInvalid_44)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorInvalid_44() const { return ___LineColorInvalid_44; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorInvalid_44() { return &___LineColorInvalid_44; }
	inline void set_LineColorInvalid_44(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorInvalid_44 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorInvalid_44), value);
	}

	inline static int32_t get_offset_of_LineColorNoTarget_45() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___LineColorNoTarget_45)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorNoTarget_45() const { return ___LineColorNoTarget_45; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorNoTarget_45() { return &___LineColorNoTarget_45; }
	inline void set_LineColorNoTarget_45(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorNoTarget_45 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorNoTarget_45), value);
	}

	inline static int32_t get_offset_of_LineColorLockFocus_46() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___LineColorLockFocus_46)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorLockFocus_46() const { return ___LineColorLockFocus_46; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorLockFocus_46() { return &___LineColorLockFocus_46; }
	inline void set_LineColorLockFocus_46(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorLockFocus_46 = value;
		Il2CppCodeGenWriteBarrier((&___LineColorLockFocus_46), value);
	}

	inline static int32_t get_offset_of_lineBase_47() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___lineBase_47)); }
	inline BaseMixedRealityLineDataProvider_tC35878F4E52DC5B0995B39360258BD6613D3190A * get_lineBase_47() const { return ___lineBase_47; }
	inline BaseMixedRealityLineDataProvider_tC35878F4E52DC5B0995B39360258BD6613D3190A ** get_address_of_lineBase_47() { return &___lineBase_47; }
	inline void set_lineBase_47(BaseMixedRealityLineDataProvider_tC35878F4E52DC5B0995B39360258BD6613D3190A * value)
	{
		___lineBase_47 = value;
		Il2CppCodeGenWriteBarrier((&___lineBase_47), value);
	}

	inline static int32_t get_offset_of_lineRenderers_48() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___lineRenderers_48)); }
	inline BaseMixedRealityLineRendererU5BU5D_tC2D9120DE5D195B660C82B3B89F9D354E0AF1C0C* get_lineRenderers_48() const { return ___lineRenderers_48; }
	inline BaseMixedRealityLineRendererU5BU5D_tC2D9120DE5D195B660C82B3B89F9D354E0AF1C0C** get_address_of_lineRenderers_48() { return &___lineRenderers_48; }
	inline void set_lineRenderers_48(BaseMixedRealityLineRendererU5BU5D_tC2D9120DE5D195B660C82B3B89F9D354E0AF1C0C* value)
	{
		___lineRenderers_48 = value;
		Il2CppCodeGenWriteBarrier((&___lineRenderers_48), value);
	}

	inline static int32_t get_offset_of_lineStartPoint_49() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___lineStartPoint_49)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lineStartPoint_49() const { return ___lineStartPoint_49; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lineStartPoint_49() { return &___lineStartPoint_49; }
	inline void set_lineStartPoint_49(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lineStartPoint_49 = value;
	}

	inline static int32_t get_offset_of_lineEndPoint_50() { return static_cast<int32_t>(offsetof(LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87, ___lineEndPoint_50)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lineEndPoint_50() const { return ___lineEndPoint_50; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lineEndPoint_50() { return &___lineEndPoint_50; }
	inline void set_lineEndPoint_50(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lineEndPoint_50 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINEPOINTER_T4244EF0A86631BF9843D1115BDEFE668F130AB87_H
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Solver_t45BC4457D52541691149931505197834E2BCC506 * m_Items[1];

public:
	inline Solver_t45BC4457D52541691149931505197834E2BCC506 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Solver_t45BC4457D52541691149931505197834E2BCC506 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Solver_t45BC4457D52541691149931505197834E2BCC506 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Solver_t45BC4457D52541691149931505197834E2BCC506 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Solver_t45BC4457D52541691149931505197834E2BCC506 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Solver_t45BC4457D52541691149931505197834E2BCC506 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  m_Items[1];

public:
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		m_Items[index] = value;
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
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
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


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * List_1_AsReadOnly_m97F7C9770E02039B6CA59CAF8848DFEE4982F93B_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_mC1990520B7718DB9F2D68839716E6853645566FC_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Intersect_TisRuntimeObject_mF0919DA082DCC32899F0C35CBCF1659AA5E762B9_gshared (RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Union_TisRuntimeObject_m45171FA36DD4C46F503F38597753EB9007B6D28E_gshared (RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_m7874F545F49812BF835B5A3F52E106D2E54E3BAA_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<System.Object>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PointerUtils_GetPointer_TisRuntimeObject_mEF1A03D2CDA31DF4ACE60563CCFEDDA9041C0D6F_gshared (uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR bool HandConstraint_IsValidController_m8D49AC60D11A7B924097D4E2CB14866C3256420E (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318 (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Up_m020CCADDD4C0057B6AE11ECB28F203AD2D0508C5 (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HandConstraint__ctor_mA392AF14AD4ABF2E65CC9F9B996949696E04B4CA (HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::UpdateSecondSolverHandler()
extern "C" IL2CPP_METHOD_ATTR void InBetween_UpdateSecondSolverHandler_mD3A13F66C49D6FC9F057D24E5094C6B725DA1067 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
extern "C" IL2CPP_METHOD_ATTR void Solver_Start_mAEFE11387E27C3698E17B0F6BBE045269E3DA09D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_mF4CE7F5A63BCBF8A22AC86185B2C091479445C94 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::AdjustPositionForOffset(UnityEngine.Transform,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void InBetween_AdjustPositionForOffset_mD3FF05B4F3283ADC995E5B6ACE53E0FAA6E9DFB8 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___targetTransform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransform1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m331B28E4901EC8E1841CC7C085F4F2348E2DFB82 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformOverride(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_m71749895DCCED91932E61FC1775AD95580A1289D (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Solver__ctor_m62A5B52B9DF2D9A82B0B0C7ED1D8F103FB736C75 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Solver_OnEnable_m420E782D83818FF58239AC8C210BF346765277E2 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_SnapZ()
extern "C" IL2CPP_METHOD_ATTR bool Momentum_get_SnapZ_mFF5C6AFDCADB654B7858ACD208564319F27B324E (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_mFAACD502CAE0271F1F699462EE1991FA53FFCBB4 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
extern "C" IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_AccelerationRate()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_AccelerationRate_m23FBE8C41262131289268ABBC7734EC3D9A04542 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Springiness()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_Springiness_m417E9E42DA757DB95BA5D4696433E3F120EC77FF (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ResistanceVelocityPower()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_ResistanceVelocityPower_m611E42C137B92ED4844B82E883CCC991BDE9273C (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Resistance()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_Resistance_m8658C04B06E1EA1AA441E30F1894F96FB3C81C5F (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapTo_mCB481F97511AD0CA362B4EED62B338A1593837D7 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389 (int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_m3CCEC047C1F30289C8BB9E330C7B7B1626CFEBCE (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_mD12EDAC61BFE70094993AD183172E0D0746F98A3 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_m84574CDFA82C60EC5BDB9B5D2FABAFF224B2A6B9 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleStepping()
extern "C" IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_m13FA6FD99EBF1DD8FD4944963F9CB8A8760D213F (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041 (float p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_m984DF97DAF9E18DB1E2A8795531BB1737419057D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_m15A5518D9773ECCE96FB80A69B73F7D9474F4629 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_mCC5B2BD1E20229E7F64D838373A2454822601FF8 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mCD0D6FDEB8D18D822E6DF499E693B7FABC56BEBC (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_mE56624134C7C12D8CA8DBDC33520BE52CD5EC6F5 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
extern "C" IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m8DE21B696C51FFC9FB2B0C62C5A28FDD85E7C1E0 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_m81A56576A3666F6A39912235A4686585AAD73F70 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m458FEF2E53569A08657719C2ADC33D4D0BC2AE3F (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m832C11F620D6F80FC85284CDB619EAC97F53A871 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mC8DE8F0B9978E2E86803F83B390D5B13844B3297 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalScale_mA28827BE98DCAF072E912CC68D225A5AF584CFBF (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * Component_GetComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mAFEA8C8850333AF32E380E9F11A4ABAE304879DB (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m4B8927635EFABB7E9A953E2353355100CD92647F (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * ___solver0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_m58774B76B7772A05D21D8ECAE0E2876B13EC53ED (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * ___solver0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m9FC18F352E714B94D16DAE2FEF88217E821F93DB (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m8290D41F96E60C8E8B3EF6E7CD0944860FD20AAC (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_mA96A3C4E64B223BDADCA59F239AF1CB25D2A0C7F (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_mD434391B0C72A389AD4695CA287D10DB95BA6FAF (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_m0B84FF629C5D029FA56CC3345FF86A76843CB347 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_m4F2AE5E447C3D325ED720CB339C872AFCCAEE87C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m4E4202BAF8EBF415BDF2FA0EB6D56217E9C8436F (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_mDD0DF1622951467F4A2F8FB9250115EA8AA8B075 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_m59C4B315C073D86AC0519470E56F3D8413F4CD97 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_mA0DF75FE07A2305CD0CEDC66F419DB84CD4D687E (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_m030D3A7E8F7ACC13A26D6DD5D6163C8B9CF37A13 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m5B356CA078E4B3EE6B9368BBA0DF4A1483F0AA08 (int32_t ___type0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_m263396AD1E2DC16C5B742B00F2201226889E6C69 (uint8_t ___hand0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AsReadOnly()
inline ReadOnlyCollection_1_t611A24DBD56868F2E0135415344B0F911945705E * List_1_AsReadOnly_mAD47A105612A00690E6E45AB5AFDD9BC33F953EE (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t611A24DBD56868F2E0135415344B0F911945705E * (*) (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED *, const RuntimeMethod*))List_1_AsReadOnly_m97F7C9770E02039B6CA59CAF8848DFEE4982F93B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Clear()
inline void List_1_Clear_mC1ABFB53073C4AFE56D4F50776A0CF1C2249C7FA (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m8780BF7E571C112A5D19A693DB1B9582A15FE89B (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, p0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_mFA1C5DFA39D889C96D4C688008F74D66279C2AE1 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsLeft(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool HandednessExtensions_IsLeft_mE02D4AB5984675AD8E1EFABD8A55B59531173C75 (uint8_t p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsRight(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool HandednessExtensions_IsRight_m747DB558B907682078FB23E7ED7D594D307400CF (uint8_t p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_m91AF39E3E668D21CDE82BBE51AB1B4969B641E58 (Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m439BA57BB80A828CCB519CFE6DA6AD5BE2A6D943 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mC31DF01A7BCB87C9E38DED8E14591B196768DE09 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandness_m6F78078A8A8C8939A6B8FFF803931E3C52270538 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, uint8_t ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>()
inline SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* Component_GetComponents_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0708321043CD71138F4AD1E7213F1FF980080C9D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mC1990520B7718DB9F2D68839716E6853645566FC_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Intersect_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m40530AB924753D4E762EB9C4261E23F869EE0236 (RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Intersect_TisRuntimeObject_mF0919DA082DCC32899F0C35CBCF1659AA5E762B9_gshared)(p0, p1, method);
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_m3BC92786D35ED62DC9184E9A8164DB224176A453 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Union_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mCC9024226F86BADFD48F0BC8475A0E61A406C84B (RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisRuntimeObject_m45171FA36DD4C46F503F38597753EB9007B6D28E_gshared)(p0, p1, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ReadOnlyCollection_1_t611A24DBD56868F2E0135415344B0F911945705E * CollectionsExtensions_ToReadOnlyCollection_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0468C1D42752E2946A4EC777FA2CE5F52ED123E1 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t611A24DBD56868F2E0135415344B0F911945705E * (*) (RuntimeObject*, const RuntimeMethod*))CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_m7874F545F49812BF835B5A3F52E106D2E54E3BAA_gshared)(p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_mCE4C92534A9F9B4A95DD090F76714A2FA544F3C7 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_mE44C60B78EA9C57AB43B573065ABBF01EB0B0D07 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Item(System.Int32)
inline Solver_t45BC4457D52541691149931505197834E2BCC506 * List_1_get_Item_mEE6BCBC5130E636CBE8A47FAC2B27426C6BB6CC0 (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Solver_t45BC4457D52541691149931505197834E2BCC506 * (*) (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
extern "C" IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_mB27557C6A9ABCFFE1510BB81E65293B2C7210BA0 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Count()
inline int32_t List_1_get_Count_mEEE492750E87DEA82C2975FE364B2C0B7EF618FD (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Contains(!0)
inline bool List_1_Contains_m9DACB42292D9F1866A4BE48840AC4AB2FC886D45 (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED *, Solver_t45BC4457D52541691149931505197834E2BCC506 *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Add(!0)
inline void List_1_Add_m2A307CEB669756CD90266DFC29D1DCCA55A0CC39 (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED *, Solver_t45BC4457D52541691149931505197834E2BCC506 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Remove(!0)
inline bool List_1_Remove_m722CE8CC174F565BF205297274236BBB50ECA1F5 (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED *, Solver_t45BC4457D52541691149931505197834E2BCC506 *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandness()
extern "C" IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_mDBDFCC53139248895EACD23DAC0CECF413395240 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<Microsoft.MixedReality.Toolkit.Input.LinePointer>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
inline LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E (uint8_t ___handedness0, const RuntimeMethod* method)
{
	return ((  LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * (*) (uint8_t, const RuntimeMethod*))PointerUtils_GetPointer_TisRuntimeObject_mEF1A03D2CDA31DF4ACE60563CCFEDDA9041C0D6F_gshared)(___handedness0, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.HandednessExtensions::GetOppositeHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR uint8_t HandednessExtensions_GetOppositeHandedness_m352C35AC1E2A63E32DC1283CCA866209A2B657E3 (uint8_t p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m8B1E21E12B5443D96F237F51E02EEBBA6FCEC314 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_m9D821D05C2BF6CBE18871F4392448BBF8F0E6CFE (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_mE9EF9A4AB0F79696FF5E1CF40FC9D2FFFB37C46A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_m688CF9BFD91713E05AC1F12E0E53F994BF972060 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::get_IsTracked()
extern "C" IL2CPP_METHOD_ATTR bool ControllerPoseSynchronizer_get_IsTracked_m42E80CAA9012E383224DE9C3E82989C6FF4F138E (ControllerPoseSynchronizer_t20205AD01AF34AA287EE284C655AC5FB45783651 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsNone(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool HandednessExtensions_IsNone_m7F94EEE2383EAD63FF3A5D3CA041AB9DEC7DCA50 (uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::.ctor()
inline void List_1__ctor_m46ECD248567A67E77D5FD4B878E609094F51318E (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_mD7DF10E425BAC3843E2822239C753C8097DD738F (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
extern "C" IL2CPP_METHOD_ATTR Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  SolverHandler_get_AltScale_mF08002B58E90D39D9DD419BB48B9418E428666C2 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::get_Current()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3Smoothed_get_Current_m30862D6ABC7579C6BDD1AE400557D8E64455E214 (Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_mD1A7D043870D2B7A53768B39C48E27DBCD353405 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_mF489171602EF39E66D4D907B24638ED040557FBE (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_mB113F5E2273F5C93249C6386FCE83B2AB9C13AFF (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * p1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m06344A62CBD2BC66B84DA346AC572D1A4CEC6734 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092 (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Terminus()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Terminus_m7D0BC5431DB86CD4C64F310D184E28457D182A03 (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mD29FC2BB2D9E2C629AF8D6E468274651DB9E5F01 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_mDCE9405F43A82877FFEC67179C3965AFF6477E32 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m5C66AE19A48BF24CCC91CD036A2890C86E0D3809 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_mD2FDF75B76B1E70C312B37954B88DEEF2DF25DF9 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSimplePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSimplePhysicsStep_m1E2AA3731DD28B5240A932EF8E103CCD2415A939 (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  p0, float p1, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* p2, bool p3, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * p4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m0301BC0181F5F9862C5E82FA18F6437569B64A5F (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m0E32A94DA3138D90CE10F2DDABEFD027EF227466 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSpherePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSpherePhysicsStep_m393F35B533C835C24AA0A4263C5F916156549A34 (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  p0, float p1, float p2, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* p3, bool p4, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * p5, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastBoxPhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Matrix4x4,System.Single,UnityEngine.LayerMask[],System.Int32,System.Boolean,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector3[]&,System.Boolean[]&)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastBoxPhysicsStep_m598BCED762AD25D96A44D11D627DCAC13D79D213 (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  p3, float p4, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* p5, int32_t p6, bool p7, bool p8, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** p9, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** p10, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** p11, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_mB6EB36858939F8135E3222A4102E148F44E204CB (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_m8672C5CD3768477B14761C69DEC45585AAA8C5F8 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  p0, float* p1, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300 (int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C (float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B (float p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__46__ctor_m6F15FAFC4802254682594298DC9F8EF0CB4F58D3 (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__46_System_IDisposable_Dispose_m889FA20EF4A4496935AE9DC9930751CA569F30E0 (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CToggleCursorsU3Ed__46_MoveNext_mAAB4D973B678C771E8FC3078340FB50DE2112D73 (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CToggleCursorsU3Ed__46_MoveNext_mAAB4D973B678C771E8FC3078340FB50DE2112D73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* G_B15_0 = NULL;
	U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * G_B15_1 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * G_B14_1 = NULL;
	IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* G_B16_0 = NULL;
	U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * G_B16_1 = NULL;
	RuntimeObject* G_B19_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_005e;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_3 = __this->get_controller_2();
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		HandConstraint_t82CE669DD4421F5E5272C0D80CD7F855D20DB2E3 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_5);
		bool L_6 = L_5->get_hideHandCursorsOnActivate_16();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00f2;
		}
	}
	{
		bool L_8 = __this->get_frameDelay_4();
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0066:
	{
		RuntimeObject* L_10 = __this->get_controller_2();
		RuntimeObject* L_11 = L_10;
		G_B14_0 = L_11;
		G_B14_1 = __this;
		if (L_11)
		{
			G_B15_0 = L_11;
			G_B15_1 = __this;
			goto IL_0075;
		}
	}
	{
		G_B16_0 = ((IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D*)(NULL));
		G_B16_1 = G_B14_1;
		goto IL_007f;
	}

IL_0075:
	{
		NullCheck(G_B15_0);
		RuntimeObject* L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, G_B15_0);
		NullCheck(L_12);
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_13 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D_il2cpp_TypeInfo_var, L_12);
		G_B16_0 = L_13;
		G_B16_1 = G_B15_1;
	}

IL_007f:
	{
		NullCheck(G_B16_1);
		G_B16_1->set_U3CU3Es__1_6(G_B16_0);
		__this->set_U3CU3Es__2_7(0);
		goto IL_00da;
	}

IL_008d:
	{
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_14 = __this->get_U3CU3Es__1_6();
		int32_t L_15 = __this->get_U3CU3Es__2_7();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->set_U3CpointerU3E5__3_8(L_17);
		RuntimeObject* L_18 = __this->get_U3CpointerU3E5__3_8();
		RuntimeObject* L_19 = L_18;
		G_B18_0 = L_19;
		if (L_19)
		{
			G_B19_0 = L_19;
			goto IL_00ad;
		}
	}
	{
		goto IL_00c4;
	}

IL_00ad:
	{
		NullCheck(G_B19_0);
		RuntimeObject* L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_BaseCursor() */, IMixedRealityPointer_tB540BA46EB1C2D6A5B705C548EB4ADAF2E4BA0A4_il2cpp_TypeInfo_var, G_B19_0);
		RuntimeObject* L_21 = L_20;
		G_B20_0 = L_21;
		if (L_21)
		{
			G_B21_0 = L_21;
			goto IL_00b8;
		}
	}
	{
		goto IL_00c4;
	}

IL_00b8:
	{
		bool L_22 = __this->get_visible_3();
		NullCheck(G_B21_0);
		InterfaceActionInvoker1< bool >::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor::SetVisibility(System.Boolean) */, IMixedRealityCursor_t1BB87D9CBE3F643770939A4D6C80C69687AF065F_il2cpp_TypeInfo_var, G_B21_0, L_22);
	}

IL_00c4:
	{
		__this->set_U3CpointerU3E5__3_8((RuntimeObject*)NULL);
		int32_t L_23 = __this->get_U3CU3Es__2_7();
		__this->set_U3CU3Es__2_7(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
	}

IL_00da:
	{
		int32_t L_24 = __this->get_U3CU3Es__2_7();
		IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D* L_25 = __this->get_U3CU3Es__1_6();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_008d;
		}
	}
	{
		__this->set_U3CU3Es__1_6((IMixedRealityPointerU5BU5D_t97E7F272EB185D82E74D3D8AB9C2A4B9112FB14D*)NULL);
	}

IL_00f2:
	{
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CToggleCursorsU3Ed__46_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8FF5C7492BAC376999FF78D35B60AA98C6DA692A (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_m95F69F00D22A423B580CDCA9D498B5B83632D3C3 (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_m95F69F00D22A423B580CDCA9D498B5B83632D3C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_Reset_m95F69F00D22A423B580CDCA9D498B5B83632D3C3_RuntimeMethod_var);
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint_<ToggleCursors>d__46::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CToggleCursorsU3Ed__46_System_Collections_IEnumerator_get_Current_m0899B2BF4369E1FFAE81A8FB2F781A21C4C6552A (U3CToggleCursorsU3Ed__46_t0A5BDA28733F84E9A3F69F976B96F72CC14FD0CB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FacingThreshold()
extern "C" IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FacingThreshold_m5B379DEF861CD47AD6EB0B208A503D199885DC27 (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_facingThreshold_26();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FacingThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FacingThreshold_m3B4760C15E096104490DB10091AB9CD4DB5A6D2C (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_facingThreshold_26(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_RequireFlatHand()
extern "C" IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_get_RequireFlatHand_m36C280FB5214ECF5D5F2625DBD87943C72FD6FA5 (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_requireFlatHand_27();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_RequireFlatHand(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_RequireFlatHand_m59E6191350FADFEAB528E5E2029AA1EC35932C1C (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_requireFlatHand_27(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::get_FlatHandThreshold()
extern "C" IL2CPP_METHOD_ATTR float HandConstraintPalmUp_get_FlatHandThreshold_m2581FF6B8D690E8CD46D3702CE9DD3CF45141CE2 (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_flatHandThreshold_28();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::set_FlatHandThreshold(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HandConstraintPalmUp_set_FlatHandThreshold_m9ECC8C4AB5CF21431F6F2AC92D952408874EA593 (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_flatHandThreshold_28(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::IsValidController(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR bool HandConstraintPalmUp_IsValidController_m29DB6E978EBF5DB66FE081B4E699E2C3FD368097 (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, RuntimeObject* ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandConstraintPalmUp_IsValidController_m29DB6E978EBF5DB66FE081B4E699E2C3FD368097_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_7;
	memset(&V_7, 0, sizeof(V_7));
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_8;
	memset(&V_8, 0, sizeof(V_8));
	bool V_9 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_11;
	memset(&V_11, 0, sizeof(V_11));
	bool V_12 = false;
	int32_t G_B8_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B11_0;
	memset(&G_B11_0, 0, sizeof(G_B11_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B10_0;
	memset(&G_B10_0, 0, sizeof(G_B10_0));
	float G_B12_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B12_1;
	memset(&G_B12_1, 0, sizeof(G_B12_1));
	{
		RuntimeObject* L_0 = ___controller0;
		bool L_1 = HandConstraint_IsValidController_m8D49AC60D11A7B924097D4E2CB14866C3256420E(__this, L_0, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0120;
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___controller0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_011c;
		}
	}
	{
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var, L_6, 2, (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0));
		V_5 = L_7;
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_00e9;
		}
	}
	{
		bool L_9 = __this->get_requireFlatHand_27();
		V_6 = L_9;
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var, L_11, ((int32_t)11), (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_7));
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = InterfaceFuncInvoker2< bool, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&) */, IMixedRealityHand_tB69B0DE743F5339169170CA05BF2F0CCFC208E83_il2cpp_TypeInfo_var, L_13, ((int32_t)21), (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_8));
		G_B8_0 = ((int32_t)(L_14));
		goto IL_0068;
	}

IL_0067:
	{
		G_B8_0 = 0;
	}

IL_0068:
	{
		V_9 = (bool)G_B8_0;
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_00e5;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_7), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_16, L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_8), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_7), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_18, L_21, /*hidden argument*/NULL);
		V_11 = L_22;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_11), /*hidden argument*/NULL);
		V_10 = L_23;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_10;
		RuntimeObject* L_25 = V_1;
		NullCheck(L_25);
		uint8_t L_26 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t2DD28A7055656BD11178EDB1EDC09F9CF99F14E4_il2cpp_TypeInfo_var, L_25);
		G_B10_0 = L_24;
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			G_B11_0 = L_24;
			goto IL_00b7;
		}
	}
	{
		G_B12_0 = (-1.0f);
		G_B12_1 = G_B10_0;
		goto IL_00bc;
	}

IL_00b7:
	{
		G_B12_0 = (1.0f);
		G_B12_1 = G_B11_0;
	}

IL_00bc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		V_10 = L_27;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = MixedRealityPose_get_Up_m020CCADDD4C0057B6AE11ECB28F203AD2D0508C5((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_10;
		float L_30 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_28, L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_flatHandThreshold_28();
		V_12 = (bool)((((float)L_30) > ((float)L_31))? 1 : 0);
		bool L_32 = V_12;
		if (!L_32)
		{
			goto IL_00e4;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0120;
	}

IL_00e4:
	{
	}

IL_00e5:
	{
	}

IL_00e6:
	{
		goto IL_00f6;
	}

IL_00e9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral9D08677538B56ECF9AED0A2EA9CEFADCE1634173, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = MixedRealityPose_get_Up_m020CCADDD4C0057B6AE11ECB28F203AD2D0508C5((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0), /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_34 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_37 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_33, L_36, /*hidden argument*/NULL);
		float L_38 = __this->get_facingThreshold_26();
		V_3 = (bool)((((float)L_37) < ((float)L_38))? 1 : 0);
		goto IL_0120;
	}

IL_011c:
	{
		V_3 = (bool)1;
		goto IL_0120;
	}

IL_0120:
	{
		bool L_39 = V_3;
		return L_39;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HandConstraintPalmUp__ctor_m4B1C4A28139A61C83D316BBCAB7CBE52852F0538 (HandConstraintPalmUp_t505913A6B83A81BDB25B06B72442A621033C9DAB * __this, const RuntimeMethod* method)
{
	{
		__this->set_facingThreshold_26((80.0f));
		__this->set_requireFlatHand_27((bool)0);
		__this->set_flatHandThreshold_28((45.0f));
		HandConstraint__ctor_mA392AF14AD4ABF2E65CC9F9B996949696E04B4CA(__this, /*hidden argument*/NULL);
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
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_PartwayOffset()
extern "C" IL2CPP_METHOD_ATTR float InBetween_get_PartwayOffset_m01C83D964957F6494E545B0027EBAFF22FD920E8 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_partwayOffset_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_PartwayOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_PartwayOffset_m342400E5B1AA79DDD5D961D23A7C78AAA186434F (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_set_PartwayOffset_m342400E5B1AA79DDD5D961D23A7C78AAA186434F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_partwayOffset_13(L_1);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_SecondTrackedObjectType()
extern "C" IL2CPP_METHOD_ATTR int32_t InBetween_get_SecondTrackedObjectType_mD62D9B5F47DB57ADA65FFEDE77CF291F183A8A74 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_SecondTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_SecondTrackedObjectType_m768117CB811DE1CCACDE0E0D4EEAE945B6EAED59 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___value0;
		__this->set_secondTrackedObjectType_14(L_3);
		InBetween_UpdateSecondSolverHandler_mD3A13F66C49D6FC9F057D24E5094C6B725DA1067(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_TrackedObjectForSecondTransform()
extern "C" IL2CPP_METHOD_ATTR int32_t InBetween_get_TrackedObjectForSecondTransform_mB84766938FDFA419D0981C34C97395C9D0CF4915 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_TrackedObjectForSecondTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_TrackedObjectForSecondTransform_mE7D9B12F55447AA4909BA5CC5635EDA9809D8114 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_secondTrackedObjectType_14();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___value0;
		__this->set_secondTrackedObjectType_14(L_3);
		InBetween_UpdateSecondSolverHandler_mD3A13F66C49D6FC9F057D24E5094C6B725DA1067(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::get_SecondTransformOverride()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * InBetween_get_SecondTransformOverride_m002115C6FA5ED1E64A0D1EB0ED15CF5E6DBEFFD8 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_secondTransformOverride_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::set_SecondTransformOverride(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void InBetween_set_SecondTransformOverride_m489A940A3BFF2BF67CBDCE04BEC049FA36832AF1 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_set_SecondTransformOverride_m489A940A3BFF2BF67CBDCE04BEC049FA36832AF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_secondTransformOverride_15();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___value0;
		__this->set_secondTransformOverride_15(L_4);
		InBetween_UpdateSecondSolverHandler_mD3A13F66C49D6FC9F057D24E5094C6B725DA1067(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void InBetween_OnValidate_mAB9494DDC813B65580BD2C3A2F914A929E812C26 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	{
		InBetween_UpdateSecondSolverHandler_mD3A13F66C49D6FC9F057D24E5094C6B725DA1067(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::Start()
extern "C" IL2CPP_METHOD_ATTR void InBetween_Start_m42D721C7A60B2EFA261ACF5CFF26BDC2B9CF8C92 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_Start_m42D721C7A60B2EFA261ACF5CFF26BDC2B9CF8C92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Solver_Start_mAEFE11387E27C3698E17B0F6BBE045269E3DA09D(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_1 = GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE(L_0, /*hidden argument*/GameObject_AddComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mED82B88562CC22F180BF24172145DC74F2ACDCDE_RuntimeMethod_var);
		__this->set_secondSolverHandler_16(L_1);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = __this->get_secondSolverHandler_16();
		NullCheck(L_2);
		SolverHandler_set_UpdateSolvers_mF4CE7F5A63BCBF8A22AC86185B2C091479445C94(L_2, (bool)0, /*hidden argument*/NULL);
		InBetween_UpdateSecondSolverHandler_mD3A13F66C49D6FC9F057D24E5094C6B725DA1067(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void InBetween_SolverUpdate_mC24D3A0FCD855A4317DAB24452DA004B6150CEF4 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_SolverUpdate_mC24D3A0FCD855A4317DAB24452DA004B6150CEF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = __this->get_secondSolverHandler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_006e;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_5 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_8 = __this->get_secondSolverHandler_16();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_004a;
	}

IL_0049:
	{
		G_B7_0 = 0;
	}

IL_004a:
	{
		V_1 = (bool)G_B7_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_12 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_12, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_14 = __this->get_secondSolverHandler_16();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_14, /*hidden argument*/NULL);
		InBetween_AdjustPositionForOffset_mD3FF05B4F3283ADC995E5B6ACE53E0FAA6E9DFB8(__this, L_13, L_15, /*hidden argument*/NULL);
	}

IL_006d:
	{
	}

IL_006e:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::AdjustPositionForOffset(UnityEngine.Transform,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void InBetween_AdjustPositionForOffset_mD3FF05B4F3283ADC995E5B6ACE53E0FAA6E9DFB8 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___targetTransform0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___secondTransform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_AdjustPositionForOffset_mD3FF05B4F3283ADC995E5B6ACE53E0FAA6E9DFB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___targetTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___secondTransform1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___targetTransform0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___secondTransform1;
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ___secondTransform1;
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_1;
		float L_13 = __this->get_partwayOffset_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_11, L_14, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_15, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::UpdateSecondSolverHandler()
extern "C" IL2CPP_METHOD_ATTR void InBetween_UpdateSecondSolverHandler_mD3A13F66C49D6FC9F057D24E5094C6B725DA1067 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InBetween_UpdateSecondSolverHandler_mD3A13F66C49D6FC9F057D24E5094C6B725DA1067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_secondSolverHandler_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = __this->get_secondSolverHandler_16();
		int32_t L_4 = __this->get_secondTrackedObjectType_14();
		NullCheck(L_3);
		SolverHandler_set_TrackedTargetType_m331B28E4901EC8E1841CC7C085F4F2348E2DFB82(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_secondTrackedObjectType_14();
		if ((!(((uint32_t)L_5) == ((uint32_t)7))))
		{
			goto IL_003b;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get_secondTransformOverride_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_003c;
	}

IL_003b:
	{
		G_B4_0 = 0;
	}

IL_003c:
	{
		V_1 = (bool)G_B4_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_9 = __this->get_secondSolverHandler_16();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get_secondTransformOverride_15();
		NullCheck(L_9);
		SolverHandler_set_TransformOverride_m71749895DCCED91932E61FC1775AD95580A1289D(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0054:
	{
	}

IL_0055:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.InBetween::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InBetween__ctor_mD87C315E9B4FEADB743808B6FF2DD71F99064DC5 (InBetween_tCCB50275EC4F42F2562A940EAECAB6D7D7AEF542 * __this, const RuntimeMethod* method)
{
	{
		__this->set_partwayOffset_13((0.5f));
		__this->set_secondTrackedObjectType_14(0);
		__this->set_secondTransformOverride_15((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL);
		Solver__ctor_m62A5B52B9DF2D9A82B0B0C7ED1D8F103FB736C75(__this, /*hidden argument*/NULL);
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
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Resistance()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_Resistance_m8658C04B06E1EA1AA441E30F1894F96FB3C81C5F (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_resistance_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_Resistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Momentum_set_Resistance_mAA9EA607695E5B473D28483B701A835B97E28B2A (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_resistance_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ResistanceVelocityPower()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_ResistanceVelocityPower_m611E42C137B92ED4844B82E883CCC991BDE9273C (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_resistanceVelocityPower_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_ResistanceVelocityPower(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Momentum_set_ResistanceVelocityPower_m53F858C2DAE2B5E5AC6DFE30CB82F6B038949C71 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_resistanceVelocityPower_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_AccelerationRate()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_AccelerationRate_m23FBE8C41262131289268ABBC7734EC3D9A04542 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_accelerationRate_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_AccelerationRate(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Momentum_set_AccelerationRate_m06DCA299D00DF104ACFA24CAC31B7AEA2350D8F0 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_accelerationRate_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Springiness()
extern "C" IL2CPP_METHOD_ATTR float Momentum_get_Springiness_m417E9E42DA757DB95BA5D4696433E3F120EC77FF (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_springiness_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_Springiness(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Momentum_set_Springiness_mF45FC5C59DA881980C910ACF52A01E0B705C4F95 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_springiness_16(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_SnapZ()
extern "C" IL2CPP_METHOD_ATTR bool Momentum_get_SnapZ_mFF5C6AFDCADB654B7858ACD208564319F27B324E (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_snapZ_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_SnapZ(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Momentum_set_SnapZ_mC36DC671611D8669CF65504EB038B701B4AC6A5D (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_snapZ_17(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_mFAACD502CAE0271F1F699462EE1991FA53FFCBB4 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_get_ReferencePosition_mFAACD502CAE0271F1F699462EE1991FA53FFCBB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_002a;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Momentum_OnEnable_mE841978D3F6759966AE9D3E0A36538D984656EF4 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_OnEnable_mE841978D3F6759966AE9D3E0A36538D984656EF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Solver_OnEnable_m420E782D83818FF58239AC8C210BF346765277E2(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void Momentum_SolverUpdate_mD8B253E9DE9820A9D79647C8412BA04302E08E54 (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SolverUpdate_mD8B253E9DE9820A9D79647C8412BA04302E08E54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset(&V_8, 0, sizeof(V_8));
	bool V_9 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset(&V_10, 0, sizeof(V_10));
	bool V_11 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset(&V_12, 0, sizeof(V_12));
	bool V_13 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_14;
	memset(&V_14, 0, sizeof(V_14));
	float V_15 = 0.0f;
	bool V_16 = false;
	float G_B10_0 = 0.0f;
	{
		bool L_0 = Momentum_get_SnapZ_mFF5C6AFDCADB654B7858ACD208564319F27B324E(__this, /*hidden argument*/NULL);
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0097;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Momentum_get_ReferencePosition_mFAACD502CAE0271F1F699462EE1991FA53FFCBB4(__this, /*hidden argument*/NULL);
		V_4 = L_2;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A(L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_4, L_5, /*hidden argument*/NULL);
		V_8 = L_6;
		float L_7 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_8), /*hidden argument*/NULL);
		V_5 = L_7;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_9, L_10, /*hidden argument*/NULL);
		V_6 = L_11;
		float L_12 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		V_7 = L_12;
		float L_13 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_13, (0.0f), /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_0096;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_6;
		float L_17 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_16, L_17, /*hidden argument*/NULL);
		V_10 = L_18;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = L_19;
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_10;
		float L_23 = V_5;
		float L_24 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_22, ((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_20, L_26, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_27 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A(L_27, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_28, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		float L_32 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_32;
		float L_33 = V_1;
		V_11 = (bool)((((float)L_33) > ((float)(0.01f)))? 1 : 0);
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0107;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_0;
		float L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_35, L_36, /*hidden argument*/NULL);
		V_12 = L_37;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = __this->get_velocity_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_12;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_40 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_40);
		float L_41 = SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F(L_40, /*hidden argument*/NULL);
		float L_42 = Momentum_get_AccelerationRate_m23FBE8C41262131289268ABBC7734EC3D9A04542(__this, /*hidden argument*/NULL);
		float L_43 = Momentum_get_Springiness_m417E9E42DA757DB95BA5D4696433E3F120EC77FF(__this, /*hidden argument*/NULL);
		float L_44 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_39, ((float)il2cpp_codegen_multiply((float)L_41, (float)((float)il2cpp_codegen_add((float)L_42, (float)((float)il2cpp_codegen_multiply((float)L_43, (float)L_44)))))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_38, L_45, /*hidden argument*/NULL);
		__this->set_velocity_18(L_46);
	}

IL_0107:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_47 = __this->get_address_of_velocity_18();
		float L_48 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_47, /*hidden argument*/NULL);
		V_2 = L_48;
		float L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_50 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_49, (0.0f), /*hidden argument*/NULL);
		V_13 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_13;
		if (!L_51)
		{
			goto IL_017d;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = __this->get_velocity_18();
		float L_53 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_52, L_53, /*hidden argument*/NULL);
		V_14 = L_54;
		float L_55 = V_2;
		if ((((float)L_55) > ((float)(1.0f))))
		{
			goto IL_0141;
		}
	}
	{
		float L_56 = V_2;
		G_B10_0 = L_56;
		goto IL_014d;
	}

IL_0141:
	{
		float L_57 = V_2;
		float L_58 = Momentum_get_ResistanceVelocityPower_m611E42C137B92ED4844B82E883CCC991BDE9273C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_59 = powf(L_57, L_58);
		G_B10_0 = L_59;
	}

IL_014d:
	{
		V_15 = G_B10_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = __this->get_velocity_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = V_14;
		float L_62 = V_15;
		float L_63 = Momentum_get_Resistance_m8658C04B06E1EA1AA441E30F1894F96FB3C81C5F(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_64 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_64);
		float L_65 = SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F(L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_61, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_62, (float)L_63)), (float)L_65)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_60, L_66, /*hidden argument*/NULL);
		__this->set_velocity_18(L_67);
	}

IL_017d:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_68 = __this->get_address_of_velocity_18();
		float L_69 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_68, /*hidden argument*/NULL);
		V_16 = (bool)((((float)L_69) < ((float)(0.001f)))? 1 : 0);
		bool L_70 = V_16;
		if (!L_70)
		{
			goto IL_01a2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_71);
	}

IL_01a2:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_72 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_73 = L_72;
		NullCheck(L_73);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_73, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = __this->get_velocity_18();
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_76 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_76);
		float L_77 = SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F(L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_75, L_77, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_74, L_78, /*hidden argument*/NULL);
		NullCheck(L_73);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_73, L_79, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Momentum_SnapTo_m081617214EAFEA3063A94163CD2B4649530540DE (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SnapTo_m081617214EAFEA3063A94163CD2B4649530540DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		Solver_SnapTo_mCB481F97511AD0CA362B4EED62B338A1593837D7(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_3);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Momentum__ctor_mAEB4000C7E3DFC0EB4869B8CFB0886962421541D (Momentum_tD6F43EF0EA246F7ED4341C909C48BE9ACEFDF9E4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_resistance_13((0.99f));
		__this->set_resistanceVelocityPower_14((1.5f));
		__this->set_accelerationRate_15((10.0f));
		__this->set_springiness_16((0.0f));
		__this->set_snapZ_17((bool)1);
		Solver__ctor_m62A5B52B9DF2D9A82B0B0C7ED1D8F103FB736C75(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_OrientationType()
extern "C" IL2CPP_METHOD_ATTR int32_t Orbital_get_OrientationType_mAAEEF763BBE5DB16B41DB41E1608C7D5F49C4F53 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_orientationType_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_OrientationType(Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_OrientationType_mEF71A35397BDA408F761A6D3F81B690D833AFD8C (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_orientationType_13(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_m3CCEC047C1F30289C8BB9E330C7B7B1626CFEBCE (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localOffset_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_LocalOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_LocalOffset_m15DAF4C241A785DF3266785ED81AF1E119AC22F8 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_localOffset_14(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_mD12EDAC61BFE70094993AD183172E0D0746F98A3 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_worldOffset_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_WorldOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_WorldOffset_mDC9AD4D5DAFD9A7BD9395B7679B417C5E1FA4EE3 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_worldOffset_15(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleStepping()
extern "C" IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_m13FA6FD99EBF1DD8FD4944963F9CB8A8760D213F (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_useAngleStepping_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_UseAngleStepping(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_UseAngleStepping_m33587F734BFF752CF98CB5832C96CD4C17F32140 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_useAngleStepping_16(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_TetherAngleSteps()
extern "C" IL2CPP_METHOD_ATTR int32_t Orbital_get_TetherAngleSteps_m964FA5C7A5EE6BFD6A881B8BC49964D6A36D34B5 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_tetherAngleSteps_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_TetherAngleSteps(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Orbital_set_TetherAngleSteps_mBF986BE37CC0F1865E62F9C1D7D42E24F650581C (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_set_TetherAngleSteps_mBF986BE37CC0F1865E62F9C1D7D42E24F650581C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_0, 2, ((int32_t)24), /*hidden argument*/NULL);
		__this->set_tetherAngleSteps_17(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void Orbital_SolverUpdate_mF8E2A8161299A48177D53000D246D671EC53FBC2 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SolverUpdate_mF8E2A8161299A48177D53000D246D671EC53FBC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset(&G_B6_0, 0, sizeof(G_B6_0));
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002b;
	}

IL_001b:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002b:
	{
		V_0 = G_B3_0;
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_7 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		goto IL_0065;
	}

IL_0055:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_11 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		G_B6_0 = L_13;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		V_2 = L_16;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA(__this, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Orbital_get_LocalOffset_m3CCEC047C1F30289C8BB9E330C7B7B1626CFEBCE(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA(__this, L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Orbital_get_WorldOffset_mD12EDAC61BFE70094993AD183172E0D0746F98A3(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_25, L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Orbital_CalculateDesiredRotation_m84574CDFA82C60EC5BDB9B5D2FABAFF224B2A6B9(__this, L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_0;
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_31, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = V_3;
		Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8(__this, L_32, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t G_B3_0 = 0;
	{
		bool L_0 = Orbital_get_UseAngleStepping_m13FA6FD99EBF1DD8FD4944963F9CB8A8760D213F(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_1 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_3 = (bool)G_B3_0;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = ___rotationToSnap0;
		V_4 = L_5;
		goto IL_007e;
	}

IL_0027:
	{
		int32_t L_6 = __this->get_tetherAngleSteps_17();
		V_0 = ((float)((float)(360.0f)/(float)(((float)((float)L_6)))));
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_7 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		float L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_13 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		V_1 = L_13;
		float L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_14, (float)(((float)((float)L_15)))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		float L_18 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_17, L_18, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		goto IL_007e;
	}

IL_007e:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = V_4;
		return L_22;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_m84574CDFA82C60EC5BDB9B5D2FABAFF224B2A6B9 (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_CalculateDesiredRotation_m84574CDFA82C60EC5BDB9B5D2FABAFF224B2A6B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float G_B5_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B11_0;
	memset(&G_B11_0, 0, sizeof(G_B11_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B15_0;
	memset(&G_B15_0, 0, sizeof(G_B15_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B19_0;
	memset(&G_B19_0, 0, sizeof(G_B19_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = __this->get_orientationType_13();
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_010f;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0077;
			}
			case 4:
			{
				goto IL_00d8;
			}
			case 5:
			{
				goto IL_0088;
			}
		}
	}
	{
		goto IL_013c;
	}

IL_0031:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		G_B5_0 = (0.0f);
		goto IL_0060;
	}

IL_004b:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_6 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		G_B5_0 = L_9;
	}

IL_0060:
	{
		V_2 = G_B5_0;
		float L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_0159;
	}

IL_0077:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0159;
	}

IL_0088:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0159;
	}

IL_009d:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_17 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B11_0 = L_20;
		goto IL_00d2;
	}

IL_00b7:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_21 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_25, /*hidden argument*/NULL);
		G_B11_0 = L_26;
	}

IL_00d2:
	{
		V_0 = G_B11_0;
		goto IL_0159;
	}

IL_00d8:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_27 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_28, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B15_0 = L_30;
		goto IL_010c;
	}

IL_00f2:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_31 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_35, /*hidden argument*/NULL);
		G_B15_0 = L_36;
	}

IL_010c:
	{
		V_0 = G_B15_0;
		goto IL_0159;
	}

IL_010f:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_37 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_37);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_39 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_38, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0129;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B19_0 = L_40;
		goto IL_0139;
	}

IL_0129:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_41 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_42, /*hidden argument*/NULL);
		G_B19_0 = L_43;
	}

IL_0139:
	{
		V_0 = G_B19_0;
		goto IL_0159;
	}

IL_013c:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_44, /*hidden argument*/NULL);
		String_t* L_46 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE, L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_46, /*hidden argument*/NULL);
		goto IL_0159;
	}

IL_0159:
	{
		bool L_47 = Orbital_get_UseAngleStepping_m13FA6FD99EBF1DD8FD4944963F9CB8A8760D213F(__this, /*hidden argument*/NULL);
		V_3 = L_47;
		bool L_48 = V_3;
		if (!L_48)
		{
			goto IL_016d;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = Orbital_SnapToTetherAngleSteps_mFE422D95A462A290B1824BC41FA3E379AE7D17CA(__this, L_49, /*hidden argument*/NULL);
		V_0 = L_50;
	}

IL_016d:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_51 = V_0;
		V_4 = L_51;
		goto IL_0172;
	}

IL_0172:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_52 = V_4;
		return L_52;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Orbital__ctor_mC0013531115A76588E7CDAE427A98EC69A7454BA (Orbital_t4E2C971B059A301433A2439374836A8866E4BA87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital__ctor_mC0013531115A76588E7CDAE427A98EC69A7454BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_orientationType_13(0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_localOffset_14(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_worldOffset_15(L_1);
		__this->set_useAngleStepping_16((bool)0);
		__this->set_tetherAngleSteps_17(6);
		Solver__ctor_m62A5B52B9DF2D9A82B0B0C7ED1D8F103FB736C75(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void Overlap_SolverUpdate_m90ACC6F7FE79F6F3C2903FC3E39C3F2F151D69A6 (Overlap_t14605F26108B061874FE4594021CBF8BFEBB3CE1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Overlap_SolverUpdate_m90ACC6F7FE79F6F3C2903FC3E39C3F2F151D69A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	bool V_1 = false;
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_6, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck(L_7);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_7, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8(__this, L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Overlap__ctor_mE01EE7905403F194D289BD38A3CDC4EB8F0E922D (Overlap_t14605F26108B061874FE4594021CBF8BFEBB3CE1 * __this, const RuntimeMethod* method)
{
	{
		Solver__ctor_m62A5B52B9DF2D9A82B0B0C7ED1D8F103FB736C75(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR int32_t RadialView_get_ReferenceDirection_mF09CDA85EE8F2EA7CBF89479587ED8F4F82EC3F0 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_referenceDirection_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_ReferenceDirection(Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_ReferenceDirection_m51D448E303C6595179E665FF1B4224387E11574E (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_referenceDirection_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinDistance()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MinDistance_m2818CFC0761594E2F0D489458B27CE51596122CB (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_minDistance_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MinDistance_m42986D9291263333813D814D1BC371E975C13C55 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_minDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxDistance()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MaxDistance_m52DB40D0C2B3F0282A35BD97D2B5D8CE5506B5BF (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_maxDistance_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MaxDistance_m73552760ABEA975C991254BAEAB5EA6893ECF987 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_maxDistance_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinViewDegrees()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MinViewDegrees_m4C6A4EBB936A9869F251D04798F18B327E599E63 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_minViewDegrees_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinViewDegrees(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MinViewDegrees_mEEEFC8FD0929D53D3D64A0429FC4E0DA68014B54 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_minViewDegrees_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxViewDegrees()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_MaxViewDegrees_mB3F312D817BEF1AAC1C17D1E97B347DA00F2FC5C (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_maxViewDegrees_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxViewDegrees(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_MaxViewDegrees_m2C1075A29CCC395A946047ACAA83BC917A0D69C3 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_maxViewDegrees_17(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_AspectV()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_AspectV_mA94D30559C48D3BA52A15291D98192D142FE4797 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_aspectV_18();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_AspectV(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_AspectV_m228BCD5C4BBDCBB813E1B22242859721FC29E1BC (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_aspectV_18(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreAngleClamp()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreAngleClamp_m0924C842F778108AF536F9EF655832F26B4D7893 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_ignoreAngleClamp_19();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreAngleClamp(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_IgnoreAngleClamp_mB2CB53DDDB8BCA3315316D814338F44A754D9566 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_ignoreAngleClamp_19(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreDistanceClamp()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreDistanceClamp_mEE3BD2CD9153F8F7D7A43837BF7D440F64223679 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_ignoreDistanceClamp_20();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreDistanceClamp(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_IgnoreDistanceClamp_m3A802E9D4C53B48AAF2DEE4852167DBE7D1A4DA3 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_ignoreDistanceClamp_20(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mCD0D6FDEB8D18D822E6DF499E693B7FABC56BEBC (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_useFixedVerticalPosition_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_UseFixedVerticalPosition(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_UseFixedVerticalPosition_m4163F0BEA6DE88470EFD84300D20BC155DA84BFA (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_useFixedVerticalPosition_21(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
extern "C" IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_mE56624134C7C12D8CA8DBDC33520BE52CD5EC6F5 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_fixedVerticalPosition_22();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_FixedVerticalPosition(System.Single)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_FixedVerticalPosition_mACD28A07650C9A076DAB017AA4662DBE7976ED4D (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_fixedVerticalPosition_22(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_OrientToReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR bool RadialView_get_OrientToReferenceDirection_m7DC4BB8F955EA2378DC7428921E11904FF04275A (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_orientToReferenceDirection_23();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_OrientToReferenceDirection(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RadialView_set_OrientToReferenceDirection_mBA88F3A555C059281892C04614D0449BC04EB7CA (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_orientToReferenceDirection_23(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_001a:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = __this->get_referenceDirection_13();
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B4_0 = L_6;
		goto IL_003f;
	}

IL_002f:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_7 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
	}

IL_003f:
	{
		V_0 = G_B4_0;
	}

IL_0041:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		V_2 = L_10;
		goto IL_0045;
	}

IL_0045:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_2;
		return L_11;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_001a:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void RadialView_SolverUpdate_m1A00F20793284B767FF59BFC63B04ACD2518357E (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_SolverUpdate_m1A00F20793284B767FF59BFC63B04ACD2518357E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	float V_7 = 0.0f;
	bool V_8 = false;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_m984DF97DAF9E18DB1E2A8795531BB1737419057D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = __this->get_ignoreAngleClamp_19();
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		bool L_3 = __this->get_ignoreDistanceClamp_20();
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_003a;
	}

IL_002f:
	{
		RadialView_GetDesiredOrientation_DistanceOnly_m15A5518D9773ECCE96FB80A69B73F7D9474F4629(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
	}

IL_003a:
	{
		goto IL_0048;
	}

IL_003d:
	{
		RadialView_GetDesiredOrientation_mCC5B2BD1E20229E7F64D838373A2454822601FF8(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0048:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0(__this, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = __this->get_orientToReferenceDirection_23();
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_0081;
	}

IL_006c:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
	}

IL_0081:
	{
		int32_t L_18 = __this->get_referenceDirection_13();
		V_6 = (bool)((((int32_t)L_18) == ((int32_t)2))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		float L_20 = (0.0f);
		V_7 = L_20;
		(&V_2)->set_z_2(L_20);
		float L_21 = V_7;
		(&V_2)->set_x_0(L_21);
	}

IL_00aa:
	{
		bool L_22 = RadialView_get_UseFixedVerticalPosition_mCD0D6FDEB8D18D822E6DF499E693B7FABC56BEBC(__this, /*hidden argument*/NULL);
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00d1;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310(__this, /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		float L_26 = RadialView_get_FixedVerticalPosition_mE56624134C7C12D8CA8DBDC33520BE52CD5EC6F5(__this, /*hidden argument*/NULL);
		(&V_0)->set_y_3(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
	}

IL_00d1:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_27, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = V_2;
		Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8(__this, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_m15A5518D9773ECCE96FB80A69B73F7D9474F4629 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_DistanceOnly_m15A5518D9773ECCE96FB80A69B73F7D9474F4629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	bool V_6 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = V_3;
		if ((((float)L_7) > ((float)(0.0f))))
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_8;
		goto IL_003a;
	}

IL_0033:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_2;
		float L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_9, L_10, /*hidden argument*/NULL);
		G_B3_0 = L_11;
	}

IL_003a:
	{
		V_4 = G_B3_0;
		float L_12 = V_3;
		float L_13 = __this->get_minDistance_14();
		float L_14 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_12, L_13, L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		float L_16 = V_3;
		bool L_17 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_5), L_16, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_19 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		float L_21 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_21, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_23, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_19 = L_24;
	}

IL_0078:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_mCC5B2BD1E20229E7F64D838373A2454822601FF8 (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_mCC5B2BD1E20229E7F64D838373A2454822601FF8_MetadataUsageId);
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
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	bool V_13 = false;
	float V_14 = 0.0f;
	bool V_15 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	float G_B6_0 = 0.0f;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_SolverReferenceDirection_mDBDAF39D8AE51E80779CB81C7FF8ACB6C7FBF7A5(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RadialView_get_UpReference_mC3FD9991B8047CC27A133B04EA08ECB3F906ABE0(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = RadialView_get_ReferencePoint_m80B5632CF33F319D0F11DB7201AD0DDCB100C310(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		float L_8 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_8;
		float L_9 = V_5;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_10;
		goto IL_004d;
	}

IL_0044:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_4;
		float L_12 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_11, L_12, /*hidden argument*/NULL);
		G_B3_0 = L_13;
	}

IL_004d:
	{
		V_6 = G_B3_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_14, L_15, /*hidden argument*/NULL);
		V_7 = L_16;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		float L_21 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_18, L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_17, L_22, /*hidden argument*/NULL);
		V_7 = L_23;
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_1;
		float L_26 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_24, L_25, /*hidden argument*/NULL);
		V_8 = L_26;
		float L_27 = __this->get_aspectV_18();
		float L_28 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_29 = sinf(((float)il2cpp_codegen_multiply((float)L_28, (float)(0.0174532924f))));
		float L_30 = fabsf(L_29);
		float L_31 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_27, (1.0f), L_30, /*hidden argument*/NULL);
		V_9 = L_31;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_0;
		float L_34 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_32, L_33, /*hidden argument*/NULL);
		V_10 = L_34;
		float L_35 = V_10;
		float L_36 = __this->get_minViewDegrees_16();
		float L_37 = V_9;
		float L_38 = __this->get_maxViewDegrees_17();
		float L_39 = V_9;
		float L_40 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_35, ((float)il2cpp_codegen_multiply((float)L_36, (float)L_37)), ((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		V_11 = L_40;
		bool L_41 = __this->get_ignoreDistanceClamp_20();
		if (L_41)
		{
			goto IL_00e8;
		}
	}
	{
		float L_42 = V_5;
		float L_43 = __this->get_minDistance_14();
		float L_44 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_45 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_42, L_43, L_44, /*hidden argument*/NULL);
		G_B6_0 = L_45;
		goto IL_00ea;
	}

IL_00e8:
	{
		float L_46 = V_5;
		G_B6_0 = L_46;
	}

IL_00ea:
	{
		V_12 = G_B6_0;
		float L_47 = V_10;
		float L_48 = V_11;
		V_13 = (bool)((((int32_t)((((float)L_47) == ((float)L_48))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_013c;
		}
	}
	{
		float L_50 = V_11;
		V_14 = ((float)il2cpp_codegen_multiply((float)L_50, (float)(0.0174532924f)));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_51 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = V_2;
		float L_53 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = V_0;
		float L_55 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_56 = cosf(L_55);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_54, L_56, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = V_7;
		float L_59 = V_14;
		float L_60 = sinf(L_59);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_58, L_60, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_57, L_61, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_53, L_62, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_52, L_63, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_51 = L_64;
		goto IL_0165;
	}

IL_013c:
	{
		float L_65 = V_5;
		bool L_66 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_12), L_65, /*hidden argument*/NULL);
		V_15 = (bool)((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		bool L_67 = V_15;
		if (!L_67)
		{
			goto IL_0165;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_68 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = V_2;
		float L_70 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_70, L_71, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_69, L_72, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_68 = L_73;
	}

IL_0165:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RadialView__ctor_mBDBDA331658937A4DFA3EC1A46B37CEC6454901C (RadialView_tA5387868F51364598DEFAC668418E38CFDD35B91 * __this, const RuntimeMethod* method)
{
	{
		__this->set_referenceDirection_13(1);
		__this->set_minDistance_14((1.0f));
		__this->set_maxDistance_15((2.0f));
		__this->set_minViewDegrees_16((0.0f));
		__this->set_maxViewDegrees_17((30.0f));
		__this->set_aspectV_18((1.0f));
		__this->set_ignoreAngleClamp_19((bool)0);
		__this->set_ignoreDistanceClamp_20((bool)0);
		__this->set_useFixedVerticalPosition_21((bool)0);
		__this->set_fixedVerticalPosition_22((-0.4f));
		__this->set_orientToReferenceDirection_23((bool)0);
		Solver__ctor_m62A5B52B9DF2D9A82B0B0C7ED1D8F103FB736C75(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_UpdateLinkedTransform()
extern "C" IL2CPP_METHOD_ATTR bool Solver_get_UpdateLinkedTransform_m78F5EEEB1E0687A5695D119A221CA6D91B0AC893 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_updateLinkedTransform_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_UpdateLinkedTransform(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_UpdateLinkedTransform_mF942C30B815232C0D55F625CCC3489D471667A47 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_updateLinkedTransform_4(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_MoveLerpTime()
extern "C" IL2CPP_METHOD_ATTR float Solver_get_MoveLerpTime_m1CAB1CE906E58E9FF74935530E4A425B8F4A0E8D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_moveLerpTime_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_MoveLerpTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_MoveLerpTime_m161E1C8C992F9860CEE5213D7D12CAA5D03A439E (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_moveLerpTime_5(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_RotateLerpTime()
extern "C" IL2CPP_METHOD_ATTR float Solver_get_RotateLerpTime_m784DD22F6C5CADC09471440B9295825CC7382D10 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_rotateLerpTime_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_RotateLerpTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_RotateLerpTime_mBC4145C1D95878FDFE8CC26BE0DE422BCF41170F (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_rotateLerpTime_6(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_ScaleLerpTime()
extern "C" IL2CPP_METHOD_ATTR float Solver_get_ScaleLerpTime_m4A748A122495E23E8D95DCF0C8AEFCA3FC8D7C52 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_scaleLerpTime_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_ScaleLerpTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_ScaleLerpTime_m21C7E2754BA92ABE3CFF6262E98377CA71F51C8E (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_scaleLerpTime_7(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_Smoothing()
extern "C" IL2CPP_METHOD_ATTR bool Solver_get_Smoothing_m934204531AC5101ABDF20877613E54D3C543106D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_smoothing_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_Smoothing(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_Smoothing_m83A8E32C0238995D143589F219F20076BF8F4170 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_smoothing_9(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalPosition_m8DE21B696C51FFC9FB2B0C62C5A28FDD85E7C1E0(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = SolverHandler_get_GoalRotation_m81A56576A3666F6A39912235A4686585AAD73F70(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalRotation_m458FEF2E53569A08657719C2ADC33D4D0BC2AE3F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalScale_m832C11F620D6F80FC85284CDB619EAC97F53A871(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_GoalScale_mA28827BE98DCAF072E912CC68D225A5AF584CFBF (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalScale_mC8DE8F0B9978E2E86803F83B390D5B13844B3297(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_m984DF97DAF9E18DB1E2A8795531BB1737419057D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m8290D41F96E60C8E8B3EF6E7CD0944860FD20AAC (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___value0;
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_mA0DF75FE07A2305CD0CEDC66F419DB84CD4D687E (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_mA96A3C4E64B223BDADCA59F239AF1CB25D2A0C7F (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___value0;
		Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_m030D3A7E8F7ACC13A26D6DD5D6163C8B9CF37A13 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_mD434391B0C72A389AD4695CA287D10DB95BA6FAF (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___value0;
		Solver_set_GoalScale_mA28827BE98DCAF072E912CC68D225A5AF584CFBF(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Awake()
extern "C" IL2CPP_METHOD_ATTR void Solver_Awake_m705D1E95FFD523F16CF5EC292C46F1C33039F169 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Awake_m705D1E95FFD523F16CF5EC292C46F1C33039F169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B9_0 = NULL;
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B8_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B10_0;
	memset(&G_B10_0, 0, sizeof(G_B10_0));
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B10_1 = NULL;
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = Component_GetComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mAFEA8C8850333AF32E380E9F11A4ABAE304879DB(__this, /*hidden argument*/Component_GetComponent_TisSolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687_mAFEA8C8850333AF32E380E9F11A4ABAE304879DB_RuntimeMethod_var);
		__this->set_SolverHandler_12(L_3);
	}

IL_001f:
	{
		bool L_4 = __this->get_updateLinkedTransform_4();
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_5 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0036;
	}

IL_0035:
	{
		G_B5_0 = 0;
	}

IL_0036:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_8 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B, L_8, _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_9, /*hidden argument*/NULL);
		__this->set_updateLinkedTransform_4((bool)0);
	}

IL_005e:
	{
		bool L_10 = __this->get_maintainScale_8();
		G_B8_0 = __this;
		if (L_10)
		{
			G_B9_0 = __this;
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B10_0 = L_11;
		G_B10_1 = G_B8_0;
		goto IL_0079;
	}

IL_006e:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_12, /*hidden argument*/NULL);
		G_B10_0 = L_13;
		G_B10_1 = G_B9_0;
	}

IL_0079:
	{
		NullCheck(G_B10_1);
		Solver_set_GoalScale_mA28827BE98DCAF072E912CC68D225A5AF584CFBF(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void Solver_OnEnable_m420E782D83818FF58239AC8C210BF346765277E2 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnEnable_m420E782D83818FF58239AC8C210BF346765277E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_3, L_4, L_5);
	}

IL_002c:
	{
		__this->set_currentLifetime_11((0.0f));
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
extern "C" IL2CPP_METHOD_ATTR void Solver_Start_mAEFE11387E27C3698E17B0F6BBE045269E3DA09D (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Start_mAEFE11387E27C3698E17B0F6BBE045269E3DA09D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		SolverHandler_RegisterSolver_m4B8927635EFABB7E9A953E2353355100CD92647F(L_3, __this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void Solver_OnDestroy_m14B5ECB5147CA03BC757ADB5E4DD2E03309535FE (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnDestroy_m14B5ECB5147CA03BC757ADB5E4DD2E03309535FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		SolverHandler_UnregisterSolver_m58774B76B7772A05D21D8ECAE0E2876B13EC53ED(L_3, __this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
extern "C" IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_mB27557C6A9ABCFFE1510BB81E65293B2C7210BA0 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->get_currentLifetime_11();
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_1 = __this->get_SolverHandler_12();
		NullCheck(L_1);
		float L_2 = SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F(L_1, /*hidden argument*/NULL);
		__this->set_currentLifetime_11(((float)il2cpp_codegen_add((float)L_0, (float)L_2)));
		float L_3 = __this->get_lifetime_10();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		float L_4 = __this->get_currentLifetime_11();
		float L_5 = __this->get_lifetime_10();
		G_B3_0 = ((((int32_t)((!(((float)L_4) >= ((float)L_5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 0;
	}

IL_003a:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0049:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdate() */, __this);
		Solver_UpdateWorkingToGoal_m9FC18F352E714B94D16DAE2FEF88217E821F93DB(__this, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapTo_mCB481F97511AD0CA362B4EED62B338A1593837D7 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_0, L_1, L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___position0;
		Solver_set_WorkingPosition_m8290D41F96E60C8E8B3EF6E7CD0944860FD20AAC(__this, L_3, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotation1;
		Solver_set_WorkingRotation_mA96A3C4E64B223BDADCA59F239AF1CB25D2A0C7F(__this, L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___scale2;
		Solver_set_WorkingScale_mD434391B0C72A389AD4695CA287D10DB95BA6FAF(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_m1A186DC99483A3BCC73E4AAC6811CF86C84B41F1 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_0, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8(__this, L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		Solver_set_GoalScale_mA28827BE98DCAF072E912CC68D225A5AF584CFBF(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapTo_m101AB05A68134F9C09847C6916104585FF0CA0CA (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		VirtActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_0, L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position0;
		Solver_set_WorkingPosition_m8290D41F96E60C8E8B3EF6E7CD0944860FD20AAC(__this, L_2, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___rotation1;
		Solver_set_WorkingRotation_mA96A3C4E64B223BDADCA59F239AF1CB25D2A0C7F(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_m67A4A8809C618B19E5E8A470EB86236C243B1876 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_0, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::AddOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Solver_AddOffset_m5E830D98EDC7FB1A167C412D52CEDBB0683364F5 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_AddOffset_m5E830D98EDC7FB1A167C412D52CEDBB0683364F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___offset0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_0, L_1, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_m0B84FF629C5D029FA56CC3345FF86A76843CB347 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_m0B84FF629C5D029FA56CC3345FF86A76843CB347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_1;
	memset(&G_B2_1, 0, sizeof(G_B2_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_1;
	memset(&G_B1_1, 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_2;
	memset(&G_B3_2, 0, sizeof(G_B3_2));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___source0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_m4F2AE5E447C3D325ED720CB339C872AFCCAEE87C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_m4F2AE5E447C3D325ED720CB339C872AFCCAEE87C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_1;
	memset(&G_B2_1, 0, sizeof(G_B2_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_1;
	memset(&G_B1_1, 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_1;
	memset(&G_B3_1, 0, sizeof(G_B3_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_2;
	memset(&G_B3_2, 0, sizeof(G_B3_2));
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___source0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = V_0;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateTransformToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateTransformToGoal_mF787C8A371C77B276376D566D16E0D2DD8ACED7C (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		bool L_0 = __this->get_smoothing_9();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_10 = __this->get_SolverHandler_12();
		NullCheck(L_10);
		float L_11 = SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Solver_SmoothTo_m0B84FF629C5D029FA56CC3345FF86A76843CB347(L_8, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_16 = __this->get_SolverHandler_12();
		NullCheck(L_16);
		float L_17 = SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Solver_SmoothTo_m4F2AE5E447C3D325ED720CB339C872AFCCAEE87C(L_14, L_15, L_17, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_22 = __this->get_SolverHandler_12();
		NullCheck(L_22);
		float L_23 = SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F(L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Solver_SmoothTo_m0B84FF629C5D029FA56CC3345FF86A76843CB347(L_20, L_21, L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_1;
		NullCheck(L_26);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_26, L_27, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = V_2;
		NullCheck(L_28);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_28, L_29, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_3;
		NullCheck(L_30);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_30, L_31, /*hidden argument*/NULL);
		goto IL_00ef;
	}

IL_00b7:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_32, L_33, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_34, L_35, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_36, L_37, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m9FC18F352E714B94D16DAE2FEF88217E821F93DB (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		Solver_UpdateWorkingPositionToGoal_m4E4202BAF8EBF415BDF2FA0EB6D56217E9C8436F(__this, /*hidden argument*/NULL);
		Solver_UpdateWorkingRotationToGoal_mDD0DF1622951467F4A2F8FB9250115EA8AA8B075(__this, /*hidden argument*/NULL);
		Solver_UpdateWorkingScaleToGoal_m59C4B315C073D86AC0519470E56F3D8413F4CD97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_m4E4202BAF8EBF415BDF2FA0EB6D56217E9C8436F (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B2_0 = NULL;
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B3_1 = NULL;
	{
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingPosition_m984DF97DAF9E18DB1E2A8795531BB1737419057D(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m61D9416595B7815BB9452B4CF796FBF5F2630A4C(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_m0B84FF629C5D029FA56CC3345FF86A76843CB347(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingPosition_m8290D41F96E60C8E8B3EF6E7CD0944860FD20AAC(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_mDD0DF1622951467F4A2F8FB9250115EA8AA8B075 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B2_0 = NULL;
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B1_0 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B3_1 = NULL;
	{
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Solver_get_WorkingRotation_mA0DF75FE07A2305CD0CEDC66F419DB84CD4D687E(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_mFEF60A7BBA868B6F5465CCED687A3943D59F24ED(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Solver_SmoothTo_m4F2AE5E447C3D325ED720CB339C872AFCCAEE87C(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingRotation_mA96A3C4E64B223BDADCA59F239AF1CB25D2A0C7F(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
extern "C" IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_m59C4B315C073D86AC0519470E56F3D8413F4CD97 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B2_0 = NULL;
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Solver_t45BC4457D52541691149931505197834E2BCC506 * G_B3_1 = NULL;
	{
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingScale_m030D3A7E8F7ACC13A26D6DD5D6163C8B9CF37A13(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m6A1CEE43260672E80B472B4B7FE668C7BB1EFF47(__this, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_m0B84FF629C5D029FA56CC3345FF86A76843CB347(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingScale_mD434391B0C72A389AD4695CA287D10DB95BA6FAF(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Solver__ctor_m62A5B52B9DF2D9A82B0B0C7ED1D8F103FB736C75 (Solver_t45BC4457D52541691149931505197834E2BCC506 * __this, const RuntimeMethod* method)
{
	{
		__this->set_updateLinkedTransform_4((bool)0);
		__this->set_moveLerpTime_5((0.1f));
		__this->set_rotateLerpTime_6((0.1f));
		__this->set_scaleLerpTime_7((0.0f));
		__this->set_maintainScale_8((bool)1);
		__this->set_smoothing_9((bool)1);
		__this->set_lifetime_10((0.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m331B28E4901EC8E1841CC7C085F4F2348E2DFB82 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidTrackedObjectType_m5B356CA078E4B3EE6B9368BBA0DF4A1483F0AA08(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___value0;
		__this->set_trackedTargetType_4(L_5);
		SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandness()
extern "C" IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_mDBDFCC53139248895EACD23DAC0CECF413395240 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_trackedHandness_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandness_m6F78078A8A8C8939A6B8FFF803931E3C52270538 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = __this->get_trackedHandness_5();
		uint8_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidHandedness_m263396AD1E2DC16C5B742B00F2201226889E6C69(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		uint8_t L_5 = ___value0;
		__this->set_trackedHandness_5(L_5);
		SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m8B1E21E12B5443D96F237F51E02EEBBA6FCEC314 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_trackedHandJoint_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandJoint_m32461ED0123609DE3569426B5BB3A237ED99088F (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_trackedHandJoint_6();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___value0;
		__this->set_trackedHandJoint_6(L_3);
		SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformOverride(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_m71749895DCCED91932E61FC1775AD95580A1289D (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_TransformOverride_m71749895DCCED91932E61FC1775AD95580A1289D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_transformOverride_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___value0;
		__this->set_transformOverride_7(L_6);
		SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_mE9EF9A4AB0F79696FF5E1CF40FC9D2FFFB37C46A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalOffset(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalOffset_m8AC35A89890F6BC3C3A950CA2824683DF8851F22 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalOffset_m8AC35A89890F6BC3C3A950CA2824683DF8851F22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		__this->set_additionalOffset_8(L_4);
		SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_m688CF9BFD91713E05AC1F12E0E53F994BF972060 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalRotation_mE5D942077BB7FCD901D25F17FC179FEC980F7C1B (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalRotation_mE5D942077BB7FCD901D25F17FC179FEC980F7C1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		__this->set_additionalRotation_9(L_4);
		SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_mE44C60B78EA9C57AB43B573065ABBF01EB0B0D07 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_updateSolvers_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_mF4CE7F5A63BCBF8A22AC86185B2C091479445C94 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_updateSolvers_10(L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_m3BC92786D35ED62DC9184E9A8164DB224176A453 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_Solvers_m3BC92786D35ED62DC9184E9A8164DB224176A453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * L_0 = __this->get_solvers_11();
		NullCheck(L_0);
		ReadOnlyCollection_1_t611A24DBD56868F2E0135415344B0F911945705E * L_1 = List_1_AsReadOnly_mAD47A105612A00690E6E45AB5AFDD9BC33F953EE(L_0, /*hidden argument*/List_1_AsReadOnly_mAD47A105612A00690E6E45AB5AFDD9BC33F953EE_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_mCE4C92534A9F9B4A95DD090F76714A2FA544F3C7 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_Solvers_mCE4C92534A9F9B4A95DD090F76714A2FA544F3C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * L_2 = __this->get_solvers_11();
		NullCheck(L_2);
		List_1_Clear_mC1ABFB53073C4AFE56D4F50776A0CF1C2249C7FA(L_2, /*hidden argument*/List_1_Clear_mC1ABFB53073C4AFE56D4F50776A0CF1C2249C7FA_RuntimeMethod_var);
		List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * L_3 = __this->get_solvers_11();
		RuntimeObject* L_4 = ___value0;
		NullCheck(L_3);
		List_1_AddRange_m8780BF7E571C112A5D19A693DB1B9582A15FE89B(L_3, L_4, /*hidden argument*/List_1_AddRange_m8780BF7E571C112A5D19A693DB1B9582A15FE89B_RuntimeMethod_var);
	}

IL_0024:
	{
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_m8DE21B696C51FFC9FB2B0C62C5A28FDD85E7C1E0 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalPositionU3Ek__BackingField_13(L_0);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_m81A56576A3666F6A39912235A4686585AAD73F70 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m458FEF2E53569A08657719C2ADC33D4D0BC2AE3F (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CGoalRotationU3Ek__BackingField_14(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m832C11F620D6F80FC85284CDB619EAC97F53A871 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalScaleU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_mC8DE8F0B9978E2E86803F83B390D5B13844B3297 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalScaleU3Ek__BackingField_15(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
extern "C" IL2CPP_METHOD_ATTR Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  SolverHandler_get_AltScale_mF08002B58E90D39D9DD419BB48B9418E428666C2 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m439BA57BB80A828CCB519CFE6DA6AD5BE2A6D943 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  ___value0, const RuntimeMethod* method)
{
	{
		Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  L_0 = ___value0;
		__this->set_U3CAltScaleU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
extern "C" IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_m85585F56A33A809072D692426F2A4F761E50D51F (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CDeltaTimeU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_mC31DF01A7BCB87C9E38DED8E14591B196768DE09 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CDeltaTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B5_0 = NULL;
	{
		bool L_0 = SolverHandler_IsInvalidTracking_mFA1C5DFA39D889C96D4C688008F74D66279C2AE1(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		G_B5_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
		goto IL_0030;
	}

IL_0025:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_trackingTarget_20();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		G_B5_0 = L_5;
	}

IL_0030:
	{
		V_1 = G_B5_0;
		goto IL_0033;
	}

IL_0033:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_1;
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_CurrentTrackedHandedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_CurrentTrackedHandedness_m70661B218AD90282C13F96F1D052C1177428B430 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_currentTrackedHandedness_18();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_preferredTrackedHandedness_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_PreferredTrackedHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_PreferredTrackedHandedness_mB648E6FAC21B387C3AEAF8F15140C3A3924C7DD9 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		uint8_t L_0 = ___value0;
		bool L_1 = HandednessExtensions_IsLeft_mE02D4AB5984675AD8E1EFABD8A55B59531173C75(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = HandednessExtensions_IsRight_m747DB558B907682078FB23E7ED7D594D307400CF(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}

IL_0011:
	{
		uint8_t L_4 = __this->get_preferredTrackedHandedness_19();
		uint8_t L_5 = ___value0;
		G_B4_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		uint8_t L_7 = ___value0;
		__this->set_preferredTrackedHandedness_19(L_7);
	}

IL_002d:
	{
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * G_B2_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * G_B4_1 = NULL;
	{
		RuntimeObject* L_0 = __this->get_handJointService_23();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B5_0 = L_1;
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IMixedRealityDataProviderAccess_t63F3E16981AF92E0A01138E618F95865C1185D1E_il2cpp_TypeInfo_var));
		G_B2_0 = L_3;
		G_B2_1 = __this;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = __this;
			goto IL_001c;
		}
	}
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_0022;
	}

IL_001c:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_4 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_mE12D31FFD99B971B8FC5E5A1E0E852F155B4668B_RuntimeMethod_var, G_B3_0, (String_t*)NULL);
		G_B4_0 = L_4;
		G_B4_1 = G_B3_1;
	}

IL_0022:
	{
		RuntimeObject* L_5 = G_B4_0;
		V_0 = L_5;
		NullCheck(G_B4_1);
		G_B4_1->set_handJointService_23(L_5);
		RuntimeObject* L_6 = V_0;
		G_B5_0 = L_6;
	}

IL_002a:
	{
		return G_B5_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Awake()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_Awake_m64FDD2DDD8938AEAA2C59C6693BA8CEFBB043B29 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_Awake_m64FDD2DDD8938AEAA2C59C6693BA8CEFBB043B29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		SolverHandler_set_GoalScale_mC8DE8F0B9978E2E86803F83B390D5B13844B3297(__this, L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3Smoothed__ctor_m91AF39E3E668D21CDE82BBE51AB1B4969B641E58((&L_2), L_1, (0.1f), /*hidden argument*/NULL);
		SolverHandler_set_AltScale_m439BA57BB80A828CCB519CFE6DA6AD5BE2A6D943(__this, L_2, /*hidden argument*/NULL);
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		SolverHandler_set_DeltaTime_mC31DF01A7BCB87C9E38DED8E14591B196768DE09(__this, L_3, /*hidden argument*/NULL);
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_22(L_4);
		uint8_t L_5 = __this->get_trackedHandness_5();
		bool L_6 = SolverHandler_IsValidHandedness_m263396AD1E2DC16C5B742B00F2201226889E6C69(L_5, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral9586A1C5F0FF1B8004E10FC372266DBFEA002EFE, /*hidden argument*/NULL);
		SolverHandler_set_TrackedHandness_m6F78078A8A8C8939A6B8FFF803931E3C52270538(__this, 3, /*hidden argument*/NULL);
	}

IL_0061:
	{
		int32_t L_8 = __this->get_trackedTargetType_4();
		bool L_9 = SolverHandler_IsValidTrackedObjectType_m5B356CA078E4B3EE6B9368BBA0DF4A1483F0AA08(L_8, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralA5380AB232AE7FA9C64011F243B4FD1A1E094DB7, /*hidden argument*/NULL);
		SolverHandler_set_TrackedTargetType_m331B28E4901EC8E1841CC7C085F4F2348E2DFB82(__this, 0, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_Start_m5B77F751B76970C0E6AACEB56603E9943C87237A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_Update_m252EB80B1D736103F5B02D1F64FD2CE27A696E63 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = SolverHandler_IsInvalidTracking_mFA1C5DFA39D889C96D4C688008F74D66279C2AE1(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		float L_2 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_3 = __this->get_lastUpdateTime_22();
		SolverHandler_set_DeltaTime_mC31DF01A7BCB87C9E38DED8E14591B196768DE09(__this, ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_22(L_4);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::LateUpdate()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_LateUpdate_m262B7959FFC11F9CE488239CB4681DA14DC79129 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_LateUpdate_m262B7959FFC11F9CE488239CB4681DA14DC79129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Solver_t45BC4457D52541691149931505197834E2BCC506 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		bool L_0 = __this->get_updateSolversList_12();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		SolverU5BU5D_t14E58732DB7160D4275A21C1461CE26EDAE09A27* L_2 = Component_GetComponents_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0708321043CD71138F4AD1E7213F1FF980080C9D(__this, /*hidden argument*/Component_GetComponents_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0708321043CD71138F4AD1E7213F1FF980080C9D_RuntimeMethod_var);
		List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * L_3 = __this->get_solvers_11();
		RuntimeObject* L_4 = Enumerable_Intersect_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m40530AB924753D4E762EB9C4261E23F869EE0236((RuntimeObject*)(RuntimeObject*)L_2, L_3, /*hidden argument*/Enumerable_Intersect_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m40530AB924753D4E762EB9C4261E23F869EE0236_RuntimeMethod_var);
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		RuntimeObject* L_6 = SolverHandler_get_Solvers_m3BC92786D35ED62DC9184E9A8164DB224176A453(__this, /*hidden argument*/NULL);
		RuntimeObject* L_7 = Enumerable_Union_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mCC9024226F86BADFD48F0BC8475A0E61A406C84B(L_5, L_6, /*hidden argument*/Enumerable_Union_TisSolver_t45BC4457D52541691149931505197834E2BCC506_mCC9024226F86BADFD48F0BC8475A0E61A406C84B_RuntimeMethod_var);
		ReadOnlyCollection_1_t611A24DBD56868F2E0135415344B0F911945705E * L_8 = CollectionsExtensions_ToReadOnlyCollection_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0468C1D42752E2946A4EC777FA2CE5F52ED123E1(L_7, /*hidden argument*/CollectionsExtensions_ToReadOnlyCollection_TisSolver_t45BC4457D52541691149931505197834E2BCC506_m0468C1D42752E2946A4EC777FA2CE5F52ED123E1_RuntimeMethod_var);
		SolverHandler_set_Solvers_mCE4C92534A9F9B4A95DD090F76714A2FA544F3C7(__this, L_8, /*hidden argument*/NULL);
		__this->set_updateSolversList_12((bool)0);
	}

IL_003e:
	{
		bool L_9 = SolverHandler_get_UpdateSolvers_mE44C60B78EA9C57AB43B573065ABBF01EB0B0D07(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_00d3;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		SolverHandler_set_GoalPosition_m8DE21B696C51FFC9FB2B0C62C5A28FDD85E7C1E0(__this, L_12, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_13, /*hidden argument*/NULL);
		SolverHandler_set_GoalRotation_m458FEF2E53569A08657719C2ADC33D4D0BC2AE3F(__this, L_14, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_15, /*hidden argument*/NULL);
		SolverHandler_set_GoalScale_mC8DE8F0B9978E2E86803F83B390D5B13844B3297(__this, L_16, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_00be;
	}

IL_0086:
	{
		List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * L_17 = __this->get_solvers_11();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_19 = List_1_get_Item_mEE6BCBC5130E636CBE8A47FAC2B27426C6BB6CC0(L_17, L_18, /*hidden argument*/List_1_get_Item_mEE6BCBC5130E636CBE8A47FAC2B27426C6BB6CC0_RuntimeMethod_var);
		V_4 = L_19;
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_20 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_20, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00a8;
		}
	}
	{
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_22 = V_4;
		NullCheck(L_22);
		bool L_23 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_22, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_23));
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B7_0 = 0;
	}

IL_00a9:
	{
		V_5 = (bool)G_B7_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b9;
		}
	}
	{
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_25 = V_4;
		NullCheck(L_25);
		Solver_SolverUpdateEntry_mB27557C6A9ABCFFE1510BB81E65293B2C7210BA0(L_25, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00be:
	{
		int32_t L_27 = V_3;
		List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * L_28 = __this->get_solvers_11();
		NullCheck(L_28);
		int32_t L_29 = List_1_get_Count_mEEE492750E87DEA82C2975FE364B2C0B7EF618FD(L_28, /*hidden argument*/List_1_get_Count_mEEE492750E87DEA82C2975FE364B2C0B7EF618FD_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (L_30)
		{
			goto IL_0086;
		}
	}
	{
	}

IL_00d3:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_OnDestroy_m23E86D4DD1AFF05C585D127F06611060DAD39F1D (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject() */, __this);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m4B8927635EFABB7E9A953E2353355100CD92647F (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_RegisterSolver_m4B8927635EFABB7E9A953E2353355100CD92647F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * L_0 = __this->get_solvers_11();
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_1 = ___solver0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m9DACB42292D9F1866A4BE48840AC4AB2FC886D45(L_0, L_1, /*hidden argument*/List_1_Contains_m9DACB42292D9F1866A4BE48840AC4AB2FC886D45_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * L_4 = __this->get_solvers_11();
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_5 = ___solver0;
		NullCheck(L_4);
		List_1_Add_m2A307CEB669756CD90266DFC29D1DCCA55A0CC39(L_4, L_5, /*hidden argument*/List_1_Add_m2A307CEB669756CD90266DFC29D1DCCA55A0CC39_RuntimeMethod_var);
		__this->set_updateSolversList_12((bool)1);
	}

IL_002a:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_m58774B76B7772A05D21D8ECAE0E2876B13EC53ED (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Solver_t45BC4457D52541691149931505197834E2BCC506 * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_UnregisterSolver_m58774B76B7772A05D21D8ECAE0E2876B13EC53ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * L_0 = __this->get_solvers_11();
		Solver_t45BC4457D52541691149931505197834E2BCC506 * L_1 = ___solver0;
		NullCheck(L_0);
		List_1_Remove_m722CE8CC174F565BF205297274236BBB50ECA1F5(L_0, L_1, /*hidden argument*/List_1_Remove_m722CE8CC174F565BF205297274236BBB50ECA1F5_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_DetachFromCurrentTrackedObject_m27F7502F8692F5EDFE127837510B7544F8D77DE3 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_DetachFromCurrentTrackedObject_m27F7502F8692F5EDFE127837510B7544F8D77DE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
		__this->set_trackingTarget_20((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_AttachToNewTrackedObject_m9D3F41FDEF29191542594D5985D76C69B2781E55 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_AttachToNewTrackedObject_m9D3F41FDEF29191542594D5985D76C69B2781E55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		__this->set_currentTrackedHandedness_18(0);
		__this->set_controllerRay_21((LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 *)NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
		int32_t L_0 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_01cd;
	}

IL_0030:
	{
		int32_t L_4 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)5))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_00f5;
		}
	}
	{
		uint8_t L_6 = SolverHandler_get_TrackedHandness_mDBDFCC53139248895EACD23DAC0CECF413395240(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)3))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00a5;
		}
	}
	{
		uint8_t L_8 = SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_8);
		uint8_t L_9 = __this->get_currentTrackedHandedness_18();
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_10 = PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E(L_9, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E_RuntimeMethod_var);
		__this->set_controllerRay_21(L_10);
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_11 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00a2;
		}
	}
	{
		uint8_t L_14 = __this->get_currentTrackedHandedness_18();
		uint8_t L_15 = HandednessExtensions_GetOppositeHandedness_m352C35AC1E2A63E32DC1283CCA866209A2B657E3(L_14, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_15);
		uint8_t L_16 = __this->get_currentTrackedHandedness_18();
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_17 = PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E(L_16, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E_RuntimeMethod_var);
		__this->set_controllerRay_21(L_17);
	}

IL_00a2:
	{
		goto IL_00c4;
	}

IL_00a5:
	{
		uint8_t L_18 = SolverHandler_get_TrackedHandness_mDBDFCC53139248895EACD23DAC0CECF413395240(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_18);
		uint8_t L_19 = __this->get_currentTrackedHandedness_18();
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_20 = PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E(L_19, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E_RuntimeMethod_var);
		__this->set_controllerRay_21(L_20);
	}

IL_00c4:
	{
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_21 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00e6;
		}
	}
	{
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_24 = __this->get_controllerRay_21();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_00ef;
	}

IL_00e6:
	{
		__this->set_currentTrackedHandedness_18(0);
	}

IL_00ef:
	{
		goto IL_01cd;
	}

IL_00f5:
	{
		int32_t L_26 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_26) == ((int32_t)6))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_01b5;
		}
	}
	{
		RuntimeObject* L_28 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_01b2;
		}
	}
	{
		uint8_t L_30 = SolverHandler_get_TrackedHandness_mDBDFCC53139248895EACD23DAC0CECF413395240(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_30);
		uint8_t L_31 = __this->get_currentTrackedHandedness_18();
		V_8 = (bool)((((int32_t)L_31) == ((int32_t)3))? 1 : 0);
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0199;
		}
	}
	{
		RuntimeObject* L_33 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		uint8_t L_34 = SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_35 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var, L_33, L_34);
		V_9 = L_35;
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_015e;
		}
	}
	{
		uint8_t L_37 = SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_37);
		goto IL_0198;
	}

IL_015e:
	{
		RuntimeObject* L_38 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		uint8_t L_39 = SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B(__this, /*hidden argument*/NULL);
		uint8_t L_40 = HandednessExtensions_GetOppositeHandedness_m352C35AC1E2A63E32DC1283CCA866209A2B657E3(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		bool L_41 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var, L_38, L_40);
		V_10 = L_41;
		bool L_42 = V_10;
		if (!L_42)
		{
			goto IL_018f;
		}
	}
	{
		uint8_t L_43 = SolverHandler_get_PreferredTrackedHandedness_m00AAF23E9EF50A06F30FEB3B57CEEE83CB02805B(__this, /*hidden argument*/NULL);
		uint8_t L_44 = HandednessExtensions_GetOppositeHandedness_m352C35AC1E2A63E32DC1283CCA866209A2B657E3(L_43, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_44);
		goto IL_0198;
	}

IL_018f:
	{
		__this->set_currentTrackedHandedness_18(0);
	}

IL_0198:
	{
	}

IL_0199:
	{
		RuntimeObject* L_45 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		int32_t L_46 = SolverHandler_get_TrackedHandJoint_m8B1E21E12B5443D96F237F51E02EEBBA6FCEC314(__this, /*hidden argument*/NULL);
		uint8_t L_47 = __this->get_currentTrackedHandedness_18();
		NullCheck(L_45);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = InterfaceFuncInvoker2< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var, L_45, L_46, L_47);
		V_0 = L_48;
	}

IL_01b2:
	{
		goto IL_01cd;
	}

IL_01b5:
	{
		int32_t L_49 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_49) == ((int32_t)7))? 1 : 0);
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_01cd;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = __this->get_transformOverride_7();
		V_0 = L_51;
	}

IL_01cd:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_52 = V_0;
		SolverHandler_TrackTransform_m9D821D05C2BF6CBE18871F4392448BBF8F0E6CFE(__this, L_52, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_m9D821D05C2BF6CBE18871F4392448BBF8F0E6CFE (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_TrackTransform_m9D821D05C2BF6CBE18871F4392448BBF8F0E6CFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_00c1;
	}

IL_0022:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___target0;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = SolverHandler_get_AdditionalOffset_mE9EF9A4AB0F79696FF5E1CF40FC9D2FFFB37C46A(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = L_8;
		RuntimeObject * L_10 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = SolverHandler_get_AdditionalRotation_m688CF9BFD91713E05AC1F12E0E53F994BF972060(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = L_11;
		RuntimeObject * L_13 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral8604633F91A5364A570785AE4355317FF69CAA79, L_7, L_10, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		String_t* L_15 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_16, L_15, /*hidden argument*/NULL);
		__this->set_trackingTarget_20(L_16);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_trackingTarget_20();
		NullCheck(L_17);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_17, 1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_trackingTarget_20();
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_18, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = ___target0;
		NullCheck(L_19);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_19, L_20, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_trackingTarget_20();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = SolverHandler_get_AdditionalOffset_mE9EF9A4AB0F79696FF5E1CF40FC9D2FFFB37C46A(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_trackingTarget_20();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_23, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_22, L_27, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_trackingTarget_20();
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = SolverHandler_get_AdditionalRotation_m688CF9BFD91713E05AC1F12E0E53F994BF972060(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_29, L_31, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.LinePointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::GetControllerRay(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * SolverHandler_GetControllerRay_m1057B68613BE517B273D5785DB3BF12BD6223587 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_GetControllerRay_m1057B68613BE517B273D5785DB3BF12BD6223587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * V_0 = NULL;
	{
		uint8_t L_0 = ___handedness0;
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_1 = PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E(L_0, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87_m877D39A6A1945DAA1039780366DD32093F71016E_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_mFA1C5DFA39D889C96D4C688008F74D66279C2AE1 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_IsInvalidTracking_mFA1C5DFA39D889C96D4C688008F74D66279C2AE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_00b8;
	}

IL_0019:
	{
		int32_t L_3 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_0043;
		}
	}
	{
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_4 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		LinePointer_t4244EF0A86631BF9843D1115BDEFE668F130AB87 * L_6 = __this->get_controllerRay_21();
		NullCheck(L_6);
		bool L_7 = ControllerPoseSynchronizer_get_IsTracked_m42E80CAA9012E383224DE9C3E82989C6FF4F138E(L_6, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = 1;
	}

IL_0041:
	{
		G_B8_0 = G_B6_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B8_0 = 0;
	}

IL_0044:
	{
		V_2 = (bool)G_B8_0;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_00b8;
	}

IL_004d:
	{
		int32_t L_9 = SolverHandler_get_TrackedTargetType_m700F2922DA53BF229F6B00675AC5D6639F107701(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)6))))
		{
			goto IL_0066;
		}
	}
	{
		uint8_t L_10 = __this->get_currentTrackedHandedness_18();
		bool L_11 = HandednessExtensions_IsNone_m7F94EEE2383EAD63FF3A5D3CA041AB9DEC7DCA50(L_10, /*hidden argument*/NULL);
		G_B13_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0067;
	}

IL_0066:
	{
		G_B13_0 = 0;
	}

IL_0067:
	{
		V_3 = (bool)G_B13_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_13 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var, L_13, 1);
		V_4 = L_14;
		RuntimeObject* L_15 = SolverHandler_get_HandJointService_mC2E05246AC0ADD76472D697EA727192F26E6B319(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		bool L_16 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t003F5ADC894FE74B28323E4435FBB3CBB2FB73F2_il2cpp_TypeInfo_var, L_15, 2);
		V_5 = L_16;
		uint8_t L_17 = __this->get_currentTrackedHandedness_18();
		bool L_18 = HandednessExtensions_IsLeft_mE02D4AB5984675AD8E1EFABD8A55B59531173C75(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0099;
		}
	}
	{
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_00b0;
		}
	}

IL_0099:
	{
		uint8_t L_20 = __this->get_currentTrackedHandedness_18();
		bool L_21 = HandednessExtensions_IsRight_m747DB558B907682078FB23E7ED7D594D307400CF(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ad;
		}
	}
	{
		bool L_22 = V_5;
		G_B19_0 = ((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B19_0 = 0;
	}

IL_00ae:
	{
		G_B21_0 = G_B19_0;
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B21_0 = 1;
	}

IL_00b1:
	{
		V_1 = (bool)G_B21_0;
		goto IL_00b8;
	}

IL_00b4:
	{
		V_1 = (bool)0;
		goto IL_00b8;
	}

IL_00b8:
	{
		bool L_23 = V_1;
		return L_23;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_m263396AD1E2DC16C5B742B00F2201226889E6C69 (uint8_t ___hand0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t L_0 = ___hand0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000b;
	}

IL_000b:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m5B356CA078E4B3EE6B9368BBA0DF4A1483F0AA08 (int32_t ___type0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___type0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedObjectToReference()
extern "C" IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedObjectToReference_m254A2A149E43EE8C4945DA662092B53AE67C4707 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedObjectToReference(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedObjectToReference_mE1F15AADF0FB52835463389D57158DC9DFC9D1A3 (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___value0;
		__this->set_trackedTargetType_4(L_3);
		SolverHandler_RefreshTrackedObject_mA90CEA422FA96657A2ACE7E4AAA9545ECC9DCD6A(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SolverHandler__ctor_mEE7C39B7DDB764CAFA5D285506DE89DA008FD14D (SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler__ctor_mEE7C39B7DDB764CAFA5D285506DE89DA008FD14D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_trackedTargetType_4(0);
		__this->set_trackedHandness_5(3);
		__this->set_trackedHandJoint_6(2);
		__this->set_updateSolvers_10((bool)1);
		List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED * L_0 = (List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED *)il2cpp_codegen_object_new(List_1_t37F7D0CD86BC9A09BA867DB3A3D81ECD33961BED_il2cpp_TypeInfo_var);
		List_1__ctor_m46ECD248567A67E77D5FD4B878E609094F51318E(L_0, /*hidden argument*/List_1__ctor_m46ECD248567A67E77D5FD4B878E609094F51318E_RuntimeMethod_var);
		__this->set_solvers_11(L_0);
		__this->set_updateSolversList_12((bool)0);
		__this->set_currentTrackedHandedness_18(0);
		__this->set_preferredTrackedHandedness_19(1);
		__this->set_handJointService_23((RuntimeObject*)NULL);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MagneticSurfaces()
extern "C" IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* SurfaceMagnetism_get_MagneticSurfaces_m0A93DD527028600FEDEB04C36EE2346744D3225C (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* V_0 = NULL;
	{
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MagneticSurfaces(UnityEngine.LayerMask[])
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MagneticSurfaces_m606F8457D651C427BCABE8488D76093CC6904979 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___value0, const RuntimeMethod* method)
{
	{
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = ___value0;
		__this->set_magneticSurfaces_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxRaycastDistance()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxRaycastDistance_m223F5F479E893226E686A30B0D800D563E54228E (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_maxRaycastDistance_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxRaycastDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxRaycastDistance_m1ED9B348BBBC8C913FA93ACFFD503FEF64C4B220 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxDistance()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxDistance_mBCA86B659DB8EF50A7F427EE01CDAC79E28B3754 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_maxRaycastDistance_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxDistance_m984276BFE307E24831D7930556665D892983F5B5 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ClosestDistance()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ClosestDistance_m482150E9FB4D09457DB8D82B64B512D18AA2726D (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_closestDistance_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_ClosestDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_ClosestDistance_m0F7CFB46116EE033631C4111F35E61A5E065ED5E (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CloseDistance()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_CloseDistance_mCAE8882D6B83645AB0D97C4F9D9947213F6EDA32 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_closestDistance_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CloseDistance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CloseDistance_mB3D48D10C5580EF5DD8094B1D8DE48ED51CE152B (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceNormalOffset()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceNormalOffset_mDB129443FC450AA9326E0DBA6E4857152117CDC5 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_surfaceNormalOffset_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceNormalOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceNormalOffset_m99418BFDF51B1197955CB9BBF93AB00432054F02 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_surfaceNormalOffset_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceRayOffset()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceRayOffset_m7193B941E3631B51F75FCDAC048067F85C0C0B9B (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_surfaceRayOffset_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceRayOffset(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceRayOffset_m3D8C38E5C1F3BC1FE316E6A3CB8BB2410467CB65 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_surfaceRayOffset_17(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mD29FC2BB2D9E2C629AF8D6E468274651DB9E5F01 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_raycastMode_18();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_RaycastMode(Microsoft.MixedReality.Toolkit.Physics.SceneQueryType)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_RaycastMode_mC719CFBA80432788D67DBBE70CBB0C67920164BB (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_raycastMode_18(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_BoxRaysPerEdge()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_BoxRaysPerEdge_m0D07B48F6E641029B16F641F6EE845083ABB2F76 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_boxRaysPerEdge_19();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_BoxRaysPerEdge(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_BoxRaysPerEdge_m20C7D3E2780455D77B5124702B01CFD12731C461 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_boxRaysPerEdge_19(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrthographicBoxCast()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OrthographicBoxCast_m85CC76A1C3BE544DB95A7093A6FBAD3B9044B57C (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_orthographicBoxCast_20();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrthographicBoxCast(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrthographicBoxCast_m08FFD85DDAF96C02535A288C02D6EFA1641B0B8E (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_orthographicBoxCast_20(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaximumNormalVariance()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaximumNormalVariance_m7FAD106875F8B2AB93FD616CEDEF884296E33A64 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_maximumNormalVariance_21();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaximumNormalVariance(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaximumNormalVariance_m366F9407D3196A5C3FA0CEE42C6E313E13CEAC60 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_maximumNormalVariance_21(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SphereSize()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SphereSize_m843355AF8C5DE9B1FF11B7AB09AB987928E8A171 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_sphereSize_22();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SphereSize(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SphereSize_m3461706C80F249D0F7BD53768126B706771F1F94 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_sphereSize_22(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_VolumeCastSizeOverride()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_VolumeCastSizeOverride_mB0A8B388FE358362485E88AE770B4378F3847162 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_volumeCastSizeOverride_23();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_VolumeCastSizeOverride(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_VolumeCastSizeOverride_m8A7B9B04653F6706CCE0C6453EAAC6490A968BE6 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_volumeCastSizeOverride_23(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_UseLinkedAltScaleOverride()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_UseLinkedAltScaleOverride_mA70DF6BE845CD6C003B2F7FC54D31902CECA6BAB (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_UseLinkedAltScaleOverride(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_UseLinkedAltScaleOverride_m6983F730F04591ED5F1D9CEACF088F3CF45C2FBF (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_useLinkedAltScaleOverride_24(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_mD7DF10E425BAC3843E2822239C753C8097DD738F (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_currentRaycastDirectionMode_25();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentRaycastDirectionMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_RaycastDirectionMode)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentRaycastDirectionMode_m801C18E33177116AA35CB42253AF9F17DBDD45AD (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_currentRaycastDirectionMode_25(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
extern "C" IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_mF489171602EF39E66D4D907B24638ED040557FBE (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_orientationMode_26();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentOrientationMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism_OrientationMode)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentOrientationMode_mA1662EE21433544253A14868DEE40C87F32504D7 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_orientationMode_26(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrientationBlend()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_OrientationBlend_m071C75A36CB2FB812747D42E5946639C63D108CC (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_orientationBlend_27();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrientationBlend(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrientationBlend_m8BB794E1D7FEA6FD3405DC7B1A6DDF2986845C76 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_orientationBlend_27(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_mD1A7D043870D2B7A53768B39C48E27DBCD353405 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_keepOrientationVertical_28();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_KeepOrientationVertical(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_KeepOrientationVertical_m640E2822B9668EAE138A3244BA593354C8480F8F (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_keepOrientationVertical_28(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m06344A62CBD2BC66B84DA346AC572D1A4CEC6734 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_debugEnabled_29();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_DebugEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_DebugEnabled_mC70EA56FCC74C2FDF603A131F331584F40F2F248 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_debugEnabled_29(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OnSurface()
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_m8538239817D650928BCC9FE70144AAA0300C5BB4 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3COnSurfaceU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m0301BC0181F5F9862C5E82FA18F6437569B64A5F (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_30(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_0 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_002a;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t G_B5_0 = 0;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_mD7DF10E425BAC3843E2822239C753C8097DD738F(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_0095;
	}

IL_0029:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_4 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_6 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 0;
	}

IL_004b:
	{
		V_3 = (bool)G_B5_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_10 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_13 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_12, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0077:
	{
		goto IL_0095;
	}

IL_0079:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		goto IL_0095;
	}

IL_0087:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_19 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = SolverHandler_get_GoalPosition_mBC993B50E8189431844A276EF16B7AE97A518E8A(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		goto IL_0095;
	}

IL_0095:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_1;
		V_4 = L_21;
		goto IL_009a;
	}

IL_009a:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_4;
		return L_22;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastDirection()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastDirection_mE88DC19EB8190571BCFEAEBFCC3EF7493F06C1AF (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastDirection_mE88DC19EB8190571BCFEAEBFCC3EF7493F06C1AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_mD7DF10E425BAC3843E2822239C753C8097DD738F(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_3 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_7 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m5FFD2FE83DF9A2E223E9657B42DB44865F033477(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_003d:
	{
		goto IL_005c;
	}

IL_0040:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_005c:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		V_4 = L_14;
		goto IL_0061;
	}

IL_0061:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_4;
		return L_15;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
extern "C" IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m0E32A94DA3138D90CE10F2DDABEFD027EF227466 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float G_B3_0 = 0.0f;
	{
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = __this->get_volumeCastSizeOverride_23();
		G_B3_0 = L_1;
		goto IL_002b;
	}

IL_0010:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_2 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E  L_3 = SolverHandler_get_AltScale_mF08002B58E90D39D9DD419BB48B9418E428666C2(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3Smoothed_get_Current_m30862D6ABC7579C6BDD1AE400557D8E64455E214((Vector3Smoothed_t07BD00B22F7EDFF52EE8E43F596C1FEB9E78641E *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002b:
	{
		return G_B3_0;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		bool L_0 = SurfaceMagnetism_get_KeepOrientationVertical_mD1A7D043870D2B7A53768B39C48E27DBCD353405(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		(&___direction0)->set_y_3((0.0f));
		(&___surfaceNormal1)->set_y_3((0.0f));
	}

IL_0025:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___surfaceNormal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		int32_t L_10 = SurfaceMagnetism_get_CurrentOrientationMode_mF489171602EF39E66D4D907B24638ED040557FBE(__this, /*hidden argument*/NULL);
		V_3 = L_10;
		int32_t L_11 = V_3;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0066;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_007a;
			}
			case 3:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_0066:
	{
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_12 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = SolverHandler_get_GoalRotation_m81A56576A3666F6A39912235A4686585AAD73F70(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		goto IL_0099;
	}

IL_0075:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_0;
		V_4 = L_14;
		goto IL_0099;
	}

IL_007a:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = V_1;
		V_4 = L_15;
		goto IL_0099;
	}

IL_007f:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = V_1;
		float L_18 = __this->get_orientationBlend_27();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_16, L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		goto IL_0099;
	}

IL_0090:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_4 = L_20;
		goto IL_0099;
	}

IL_0099:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = V_4;
		return L_21;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SolverUpdate()
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SolverUpdate_m6C97B027C5885F330B25D2D132C73E504DCF8510 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SolverUpdate_m6C97B027C5885F330B25D2D132C73E504DCF8510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_m984DF97DAF9E18DB1E2A8795531BB1737419057D(__this, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_0, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_WorkingRotation_mA0DF75FE07A2305CD0CEDC66F419DB84CD4D687E(__this, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8(__this, L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SurfaceMagnetism_get_RaycastOrigin_m32F3859E8B3BDD16DD01FB036C233C2D1805F2BC(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SurfaceMagnetism_get_RaycastEndPoint_m11147C69A0F70DA6D28694B69D86D5B2EDCFC757(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_4 = __this->get_address_of_currentRayStep_32();
		RayStep_UpdateRayStep_mB113F5E2273F5C93249C6386FCE83B2AB9C13AFF((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_4, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_5 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_8 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_00ed;
	}

IL_0058:
	{
		bool L_10 = SurfaceMagnetism_get_DebugEnabled_m06344A62CBD2BC66B84DA346AC572D1A4CEC6734(__this, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_12 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_12, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_14 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Terminus_m7D0BC5431DB86CD4C64F310D184E28457D182A03((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_14, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_0085:
	{
		int32_t L_17 = SurfaceMagnetism_get_RaycastMode_mD29FC2BB2D9E2C629AF8D6E468274651DB9E5F01(__this, /*hidden argument*/NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		switch (L_18)
		{
			case 0:
			{
				goto IL_00a6;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_00c4;
			}
			case 3:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_00ed;
	}

IL_00a6:
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_19 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SimpleRaycastStepUpdate_mDCE9405F43A82877FFEC67179C3965AFF6477E32(__this, (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_19, /*hidden argument*/NULL);
		goto IL_00ed;
	}

IL_00b5:
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_20 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_BoxRaycastStepUpdate_m5C66AE19A48BF24CCC91CD036A2890C86E0D3809(__this, (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_20, /*hidden argument*/NULL);
		goto IL_00ed;
	}

IL_00c4:
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_21 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SphereRaycastStepUpdate_mD2FDF75B76B1E70C312B37954B88DEEF2DF25DF9(__this, (RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_21, /*hidden argument*/NULL);
		goto IL_00ed;
	}

IL_00d3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9, /*hidden argument*/NULL);
		SolverHandler_tDC91E31276AEC6FD5C04C7DF60BFFEA58DABB687 * L_22 = ((Solver_t45BC4457D52541691149931505197834E2BCC506 *)__this)->get_SolverHandler_12();
		NullCheck(L_22);
		SolverHandler_set_UpdateSolvers_mF4CE7F5A63BCBF8A22AC86185B2C091479445C94(L_22, (bool)0, /*hidden argument*/NULL);
		goto IL_00ed;
	}

IL_00ed:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStepU26)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_mDCE9405F43A82877FFEC67179C3965AFF6477E32 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SimpleRaycastStepUpdate_mDCE9405F43A82877FFEC67179C3965AFF6477E32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_0 = ___rayStep0;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  L_1 = (*(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_0);
		float L_2 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_3 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_tDB7B639A2F467361366DB278D239006467490080_il2cpp_TypeInfo_var);
		bool L_4 = MixedRealityRaycaster_RaycastSimplePhysicsStep_m1E2AA3731DD28B5240A932EF8E103CCD2415A939(L_1, L_2, L_3, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		SurfaceMagnetism_set_OnSurface_m0301BC0181F5F9862C5E82FA18F6437569B64A5F(__this, L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_7 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_10;
		float L_11 = V_3;
		float L_12 = __this->get_closestDistance_15();
		V_4 = (bool)((((float)L_11) < ((float)L_12))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_14, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_16 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_17, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_15, L_19, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_20, /*hidden argument*/NULL);
	}

IL_0074:
	{
		bool L_21 = V_0;
		V_5 = L_21;
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_00d2;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_24 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_surfaceRayOffset_17();
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_29 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_29, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_28, L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_27, L_31, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_32, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_33 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_33, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9(__this, L_34, L_35, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8(__this, L_36, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStepU26)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_mD2FDF75B76B1E70C312B37954B88DEEF2DF25DF9 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SphereRaycastStepUpdate_mD2FDF75B76B1E70C312B37954B88DEEF2DF25DF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	float G_B3_0 = 0.0f;
	{
		float L_0 = SurfaceMagnetism_get_ScaleOverride_m0E32A94DA3138D90CE10F2DDABEFD027EF227466(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_0027;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_sphereSize_22();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		goto IL_002d;
	}

IL_0027:
	{
		float L_5 = SurfaceMagnetism_get_ScaleOverride_m0E32A94DA3138D90CE10F2DDABEFD027EF227466(__this, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_2 = G_B3_0;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_6 = ___rayStep0;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  L_7 = (*(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_6);
		float L_8 = V_2;
		float L_9 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_10 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_tDB7B639A2F467361366DB278D239006467490080_il2cpp_TypeInfo_var);
		bool L_11 = MixedRealityRaycaster_RaycastSpherePhysicsStep_m393F35B533C835C24AA0A4263C5F916156549A34(L_7, L_8, L_9, L_10, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
		bool L_12 = V_0;
		SurfaceMagnetism_set_OnSurface_m0301BC0181F5F9862C5E82FA18F6437569B64A5F(__this, L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_17;
		float L_18 = V_4;
		float L_19 = __this->get_closestDistance_15();
		V_5 = (bool)((((float)L_18) < ((float)L_19))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00a4;
		}
	}
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_21 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_21, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_23 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_22, L_26, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_27, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		bool L_28 = V_0;
		V_6 = L_28;
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_0102;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_31 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_31, L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_30, L_33, /*hidden argument*/NULL);
		float L_35 = __this->get_surfaceRayOffset_17();
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_36 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_35, L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_34, L_38, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_39, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_40 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_40, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9(__this, L_41, L_42, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8(__this, L_43, /*hidden argument*/NULL);
	}

IL_0102:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStepU26)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m5C66AE19A48BF24CCC91CD036A2890C86E0D3809 (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_BoxRaycastStepUpdate_m5C66AE19A48BF24CCC91CD036A2890C86E0D3809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_4 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_5 = NULL;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_6 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  V_10;
	memset(&V_10, 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	bool V_14 = false;
	float V_15 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset(&G_B6_0, 0, sizeof(G_B6_0));
	int32_t G_B12_0 = 0;
	{
		float L_0 = SurfaceMagnetism_get_ScaleOverride_m0E32A94DA3138D90CE10F2DDABEFD027EF227466(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_001b;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_003a;
	}

IL_001b:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		float L_6 = SurfaceMagnetism_get_ScaleOverride_m0E32A94DA3138D90CE10F2DDABEFD027EF227466(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
	}

IL_003a:
	{
		V_0 = G_B3_0;
		int32_t L_8 = __this->get_orientationMode_26();
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_9 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9(__this, L_10, L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		goto IL_0066;
	}

IL_0056:
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_13 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_14, L_15, /*hidden argument*/NULL);
		G_B6_0 = L_16;
	}

IL_0066:
	{
		V_1 = G_B6_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_20 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_17, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_21 = __this->get_boxCollider_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_24 = Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var);
		__this->set_boxCollider_33(L_24);
	}

IL_0094:
	{
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_25 = __this->get_boxCollider_33();
		NullCheck(L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_27 = ___rayStep0;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C  L_28 = (*(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_30, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_32 = V_2;
		float L_33 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_34 = __this->get_magneticSurfaces_13();
		int32_t L_35 = __this->get_boxRaysPerEdge_19();
		bool L_36 = __this->get_orthographicBoxCast_20();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_tDB7B639A2F467361366DB278D239006467490080_il2cpp_TypeInfo_var);
		bool L_37 = MixedRealityRaycaster_RaycastBoxPhysicsStep_m598BCED762AD25D96A44D11D627DCAC13D79D213(L_28, L_29, L_31, L_32, L_33, L_34, L_35, L_36, (bool)0, (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_4), (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_5), (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040**)(&V_6), /*hidden argument*/NULL);
		V_9 = L_37;
		bool L_38 = V_9;
		if (!L_38)
		{
			goto IL_0255;
		}
	}
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_39 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_39, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_41 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_41, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_43 = V_4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_44 = V_5;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_45 = V_6;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_46 = __this->get_boxCollider_33();
		NullCheck(L_46);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_x_2();
		float L_49 = __this->get_maximumNormalVariance_21();
		int32_t L_50 = __this->get_orientationMode_26();
		SurfaceMagnetism_FindPlacementPlane_mB6EB36858939F8135E3222A4102E148F44E204CB(__this, L_40, L_42, L_43, L_44, L_45, L_48, L_49, (bool)0, (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0), (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), (float*)(&V_11), /*hidden argument*/NULL);
		V_12 = (0.0f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		bool L_52 = SurfaceMagnetism_IsNormalVertical_m8672C5CD3768477B14761C69DEC45585AAA8C5F8(L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_014d;
		}
	}
	{
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_53 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_56 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_55, (0.0f), /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
		goto IL_014e;
	}

IL_014d:
	{
		G_B12_0 = 0;
	}

IL_014e:
	{
		V_14 = (bool)G_B12_0;
		bool L_57 = V_14;
		if (!L_57)
		{
			goto IL_01ac;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = V_3;
		float L_59 = L_58.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60;
		memset(&L_60, 0, sizeof(L_60));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_60), (0.0f), ((float)il2cpp_codegen_multiply((float)L_59, (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_60, /*hidden argument*/NULL);
		V_7 = L_61;
		float L_62 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_15 = L_62;
		float L_63 = V_15;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_64 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_64, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_66 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_66, /*hidden argument*/NULL);
		float L_68 = L_67.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_65, L_68, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_63, L_69, /*hidden argument*/NULL);
		V_16 = L_70;
		float L_71 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		V_12 = ((-L_71));
	}

IL_01ac:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = V_3;
		float L_73 = L_72.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74;
		memset(&L_74, 0, sizeof(L_74));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_74), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_73, (float)(0.5f))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_74, /*hidden argument*/NULL);
		V_7 = L_75;
		float L_76 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_13 = L_76;
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_77 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78 = RayStep_get_Origin_m337CA401CFE1136DA08A5AF4096B0FE28D9EE092((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_77, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_79 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_79, /*hidden argument*/NULL);
		float L_81 = __this->get_closestDistance_15();
		float L_82 = V_11;
		float L_83 = __this->get_surfaceRayOffset_17();
		float L_84 = V_13;
		float L_85 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_86 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_81, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_82, (float)L_83)), (float)L_84)), (float)L_85)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_80, L_86, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_78, L_87, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		float L_90 = V_13;
		float L_91 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_92 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_89, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_90)), (float)L_91)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_88, L_92, /*hidden argument*/NULL);
		Solver_set_GoalPosition_mE3651CA92E641D650E9BA49062687698A801FAC2(__this, L_93, /*hidden argument*/NULL);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_94 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95 = RayStep_get_Direction_mF4255B1D1C98799BEFA823D8582BE63868DB419B((RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C *)L_94, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_96 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_97 = SurfaceMagnetism_CalculateMagnetismOrientation_m9EA108BAF6202E77BA1BE34EC9D0A9861BE1DCE9(__this, L_95, L_96, /*hidden argument*/NULL);
		Solver_set_GoalRotation_mA8B0C580A248E486997C7E2B634AACD865E642E8(__this, L_97, /*hidden argument*/NULL);
		SurfaceMagnetism_set_OnSurface_m0301BC0181F5F9862C5E82FA18F6437569B64A5F(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_025f;
	}

IL_0255:
	{
		SurfaceMagnetism_set_OnSurface_m0301BC0181F5F9862C5E82FA18F6437569B64A5F(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_025f:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.PlaneU26,System.SingleU26)
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_mB6EB36858939F8135E3222A4102E148F44E204CB (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_FindPlacementPlane_mB6EB36858939F8135E3222A4102E148F44E204CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset(&V_12, 0, sizeof(V_12));
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	float V_16 = 0.0f;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	bool V_21 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_22;
	memset(&V_22, 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	int32_t V_25 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_26;
	memset(&V_26, 0, sizeof(V_26));
	float V_27 = 0.0f;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	int32_t V_34 = 0;
	float V_35 = 0.0f;
	float V_36 = 0.0f;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_45;
	memset(&V_45, 0, sizeof(V_45));
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	bool V_49 = false;
	float V_50 = 0.0f;
	bool V_51 = false;
	int32_t G_B19_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B45_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B64_0;
	memset(&G_B64_0, 0, sizeof(G_B64_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B63_0;
	memset(&G_B63_0, 0, sizeof(G_B63_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B65_0;
	memset(&G_B65_0, 0, sizeof(G_B65_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B65_1;
	memset(&G_B65_1, 0, sizeof(G_B65_1));
	int32_t G_B77_0 = 0;
	int32_t G_B81_0 = 0;
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___positions2;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___direction1;
		V_1 = L_1;
		bool L_2 = ___constrainVertical7;
		V_13 = L_2;
		bool L_3 = V_13;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		(&___direction1)->set_y_3((0.0f));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___direction1), /*hidden argument*/NULL);
		___direction1 = L_4;
	}

IL_0026:
	{
		float* L_5 = ___closestDistance10;
		*((float*)L_5) = (float)(std::numeric_limits<float>::infinity());
		V_2 = 0;
		V_3 = (-1);
		V_4 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_5 = L_6;
		V_14 = 0;
		goto IL_00af;
	}

IL_0045:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_7 = ___hits4;
		int32_t L_8 = V_14;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (uint8_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_15 = (bool)L_10;
		bool L_11 = V_15;
		if (!L_11)
		{
			goto IL_00a8;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = ___positions2;
		int32_t L_14 = V_14;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___origin0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_12, L_18, /*hidden argument*/NULL);
		V_16 = L_19;
		float L_20 = V_16;
		float* L_21 = ___closestDistance10;
		float L_22 = *((float*)L_21);
		V_17 = (bool)((((float)L_20) < ((float)L_22))? 1 : 0);
		bool L_23 = V_17;
		if (!L_23)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_24 = V_14;
		V_3 = L_24;
		float* L_25 = ___closestDistance10;
		float L_26 = V_16;
		*((float*)L_25) = (float)L_26;
	}

IL_007f:
	{
		float L_27 = V_16;
		float L_28 = V_4;
		V_18 = (bool)((((float)L_27) > ((float)L_28))? 1 : 0);
		bool L_29 = V_18;
		if (!L_29)
		{
			goto IL_0091;
		}
	}
	{
		float L_30 = V_16;
		V_4 = L_30;
	}

IL_0091:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_32 = ___normals3;
		int32_t L_33 = V_14;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00a8:
	{
		int32_t L_38 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00af:
	{
		int32_t L_39 = V_14;
		int32_t L_40 = V_0;
		V_19 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_19;
		if (L_41)
		{
			goto IL_0045;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_42 = ___positions2;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = L_45;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = V_5;
		int32_t L_47 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_46, (((float)((float)L_47))), /*hidden argument*/NULL);
		V_5 = L_48;
		V_7 = (0.0f);
		V_20 = 0;
		goto IL_010d;
	}

IL_00da:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_49 = ___hits4;
		int32_t L_50 = V_20;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		uint8_t L_52 = (uint8_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_21 = (bool)L_52;
		bool L_53 = V_21;
		if (!L_53)
		{
			goto IL_0106;
		}
	}
	{
		float L_54 = V_7;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_55 = ___normals3;
		int32_t L_56 = V_20;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_58, L_59, /*hidden argument*/NULL);
		V_22 = L_60;
		float L_61 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_add((float)L_54, (float)L_61));
	}

IL_0106:
	{
		int32_t L_62 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_010d:
	{
		int32_t L_63 = V_20;
		int32_t L_64 = V_0;
		V_23 = (bool)((((int32_t)L_63) < ((int32_t)L_64))? 1 : 0);
		bool L_65 = V_23;
		if (L_65)
		{
			goto IL_00da;
		}
	}
	{
		float L_66 = V_7;
		int32_t L_67 = V_2;
		V_7 = ((float)((float)L_66/(float)(((float)((float)L_67)))));
		float L_68 = V_7;
		float L_69 = ___maxNormalVariance6;
		if ((((float)L_68) > ((float)L_69)))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_70 = V_2;
		int32_t L_71 = V_0;
		G_B19_0 = ((((float)(((float)((float)L_70)))) < ((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_71))), (float)(0.25f)))))? 1 : 0);
		goto IL_0134;
	}

IL_0133:
	{
		G_B19_0 = 1;
	}

IL_0134:
	{
		V_24 = (bool)G_B19_0;
		bool L_72 = V_24;
		if (!L_72)
		{
			goto IL_0154;
		}
	}
	{
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_73 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_74, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_77;
		memset(&L_77, 0, sizeof(L_77));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_77), L_75, L_76, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_73 = L_77;
		goto IL_04ce;
	}

IL_0154:
	{
		V_8 = (std::numeric_limits<float>::infinity());
		V_9 = (-std::numeric_limits<float>::infinity());
		V_10 = (-1);
		V_11 = (-1);
		V_25 = 0;
		goto IL_01fc;
	}

IL_0170:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_78 = ___hits4;
		int32_t L_79 = V_25;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint8_t L_81 = (uint8_t)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if (!L_81)
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_82 = V_25;
		int32_t L_83 = V_3;
		G_B25_0 = ((((int32_t)L_82) == ((int32_t)L_83))? 1 : 0);
		goto IL_0180;
	}

IL_017f:
	{
		G_B25_0 = 1;
	}

IL_0180:
	{
		V_28 = (bool)G_B25_0;
		bool L_84 = V_28;
		if (!L_84)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01f6;
	}

IL_0189:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_85 = ___positions2;
		int32_t L_86 = V_25;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_88, L_89, /*hidden argument*/NULL);
		V_26 = L_90;
		bool L_91 = ___constrainVertical7;
		V_29 = L_91;
		bool L_92 = V_29;
		if (!L_92)
		{
			goto IL_01cd;
		}
	}
	{
		(&V_26)->set_y_3((0.0f));
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_26), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = V_26;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_95 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_93, L_94, /*hidden argument*/NULL);
		V_30 = L_95;
		bool L_96 = V_30;
		if (!L_96)
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_01f6;
	}

IL_01cc:
	{
	}

IL_01cd:
	{
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_26), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = V_26;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_99 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_97, L_98, /*hidden argument*/NULL);
		V_27 = L_99;
		float L_100 = V_27;
		float L_101 = V_8;
		V_31 = (bool)((((float)L_100) < ((float)L_101))? 1 : 0);
		bool L_102 = V_31;
		if (!L_102)
		{
			goto IL_01f5;
		}
	}
	{
		float L_103 = V_27;
		V_8 = L_103;
		int32_t L_104 = V_25;
		V_10 = L_104;
	}

IL_01f5:
	{
	}

IL_01f6:
	{
		int32_t L_105 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
	}

IL_01fc:
	{
		int32_t L_106 = V_25;
		int32_t L_107 = V_0;
		V_32 = (bool)((((int32_t)L_106) < ((int32_t)L_107))? 1 : 0);
		bool L_108 = V_32;
		if (L_108)
		{
			goto IL_0170;
		}
	}
	{
		bool L_109 = ___constrainVertical7;
		if (L_109)
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_110 = V_10;
		G_B39_0 = ((((int32_t)((((int32_t)L_110) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0219;
	}

IL_0218:
	{
		G_B39_0 = 0;
	}

IL_0219:
	{
		V_33 = (bool)G_B39_0;
		bool L_111 = V_33;
		if (!L_111)
		{
			goto IL_0300;
		}
	}
	{
		V_34 = 0;
		goto IL_02f1;
	}

IL_022b:
	{
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_112 = ___hits4;
		int32_t L_113 = V_34;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		uint8_t L_115 = (uint8_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		if (!L_115)
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_116 = V_34;
		int32_t L_117 = V_3;
		if ((((int32_t)L_116) == ((int32_t)L_117)))
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_118 = V_34;
		int32_t L_119 = V_10;
		G_B45_0 = ((((int32_t)L_118) == ((int32_t)L_119))? 1 : 0);
		goto IL_0241;
	}

IL_0240:
	{
		G_B45_0 = 1;
	}

IL_0241:
	{
		V_37 = (bool)G_B45_0;
		bool L_120 = V_37;
		if (!L_120)
		{
			goto IL_024d;
		}
	}
	{
		goto IL_02eb;
	}

IL_024d:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_121 = ___positions2;
		int32_t L_122 = V_34;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_125 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_126 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_124, L_125, /*hidden argument*/NULL);
		V_22 = L_126;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_128 = ___positions2;
		int32_t L_129 = V_10;
		NullCheck(L_128);
		int32_t L_130 = L_129;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_132 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_133 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_131, L_132, /*hidden argument*/NULL);
		V_22 = L_133;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_134 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		float L_135 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_127, L_134, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_136 = fabsf(L_135);
		V_35 = L_136;
		float L_137 = V_35;
		V_38 = (bool)((((float)L_137) > ((float)(0.97f)))? 1 : 0);
		bool L_138 = V_38;
		if (!L_138)
		{
			goto IL_029b;
		}
	}
	{
		goto IL_02eb;
	}

IL_029b:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_140 = ___positions2;
		int32_t L_141 = V_10;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_144 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_145 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_143, L_144, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_146 = ___positions2;
		int32_t L_147 = V_34;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_150 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_151 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_149, L_150, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_152 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_145, L_151, /*hidden argument*/NULL);
		V_22 = L_152;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_153 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		float L_154 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_139, L_153, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_155 = fabsf(L_154);
		V_36 = L_155;
		float L_156 = V_36;
		float L_157 = V_9;
		V_39 = (bool)((((float)L_156) > ((float)L_157))? 1 : 0);
		bool L_158 = V_39;
		if (!L_158)
		{
			goto IL_02ea;
		}
	}
	{
		float L_159 = V_36;
		V_9 = L_159;
		int32_t L_160 = V_34;
		V_11 = L_160;
	}

IL_02ea:
	{
	}

IL_02eb:
	{
		int32_t L_161 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)1));
	}

IL_02f1:
	{
		int32_t L_162 = V_34;
		int32_t L_163 = V_0;
		V_40 = (bool)((((int32_t)L_162) < ((int32_t)L_163))? 1 : 0);
		bool L_164 = V_40;
		if (L_164)
		{
			goto IL_022b;
		}
	}
	{
	}

IL_0300:
	{
		int32_t L_165 = V_10;
		V_41 = (bool)((((int32_t)((((int32_t)L_165) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_166 = V_41;
		if (!L_166)
		{
			goto IL_0404;
		}
	}
	{
		bool L_167 = __this->get_debugEnabled_29();
		V_42 = L_167;
		bool L_168 = V_42;
		if (!L_168)
		{
			goto IL_0335;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_169 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_170 = ___positions2;
		int32_t L_171 = V_10;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_174 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_169, L_173, L_174, /*hidden argument*/NULL);
	}

IL_0335:
	{
		int32_t L_175 = V_11;
		V_43 = (bool)((((int32_t)((((int32_t)L_175) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_176 = V_43;
		if (!L_176)
		{
			goto IL_0398;
		}
	}
	{
		bool L_177 = __this->get_debugEnabled_29();
		V_44 = L_177;
		bool L_178 = V_44;
		if (!L_178)
		{
			goto IL_0367;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_179 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_180 = ___positions2;
		int32_t L_181 = V_11;
		NullCheck(L_180);
		int32_t L_182 = L_181;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_184 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_179, L_183, L_184, /*hidden argument*/NULL);
	}

IL_0367:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_185 = ___positions2;
		int32_t L_186 = V_10;
		NullCheck(L_185);
		int32_t L_187 = L_186;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_188 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_189 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_190 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_188, L_189, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_191 = ___positions2;
		int32_t L_192 = V_11;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_195 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_196 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_194, L_195, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_197 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_190, L_196, /*hidden argument*/NULL);
		V_22 = L_197;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_198 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_12 = L_198;
		goto IL_03dd;
	}

IL_0398:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_199 = ___positions2;
		int32_t L_200 = V_10;
		NullCheck(L_199);
		int32_t L_201 = L_200;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_202 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_203 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_204 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_202, L_203, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_205 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_206 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_204, L_205, /*hidden argument*/NULL);
		V_45 = L_206;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_207 = ___positions2;
		int32_t L_208 = V_10;
		NullCheck(L_207);
		int32_t L_209 = L_208;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_211 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_212 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_210, L_211, /*hidden argument*/NULL);
		bool L_213 = ___constrainVertical7;
		G_B63_0 = L_212;
		if (L_213)
		{
			G_B64_0 = L_212;
			goto IL_03c7;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_214 = V_45;
		G_B65_0 = L_214;
		G_B65_1 = G_B63_0;
		goto IL_03cc;
	}

IL_03c7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_215 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B65_0 = L_215;
		G_B65_1 = G_B64_0;
	}

IL_03cc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_216 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(G_B65_1, G_B65_0, /*hidden argument*/NULL);
		V_22 = L_216;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_217 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_12 = L_217;
	}

IL_03dd:
	{
		bool L_218 = __this->get_debugEnabled_29();
		V_46 = L_218;
		bool L_219 = V_46;
		if (!L_219)
		{
			goto IL_0401;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_220 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_221 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_222 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_223 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_221, L_222, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_224 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_220, L_223, L_224, /*hidden argument*/NULL);
	}

IL_0401:
	{
		goto IL_0413;
	}

IL_0404:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_225 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_226 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_225, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_226;
	}

IL_0413:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_227 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_228 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_229 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_227, L_228, /*hidden argument*/NULL);
		V_47 = (bool)((((float)L_229) > ((float)(0.0f)))? 1 : 0);
		bool L_230 = V_47;
		if (!L_230)
		{
			goto IL_0438;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_231 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_232 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_231, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_232;
	}

IL_0438:
	{
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_233 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_234 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_235 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_236;
		memset(&L_236, 0, sizeof(L_236));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_236), L_234, L_235, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_233 = L_236;
		bool L_237 = __this->get_debugEnabled_29();
		V_48 = L_237;
		bool L_238 = V_48;
		if (!L_238)
		{
			goto IL_0465;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_239 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_240 = V_12;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_241 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3(L_239, L_240, L_241, /*hidden argument*/NULL);
	}

IL_0465:
	{
		bool L_242 = ___useClosestDistance8;
		if (L_242)
		{
			goto IL_0472;
		}
	}
	{
		int32_t L_243 = V_3;
		G_B77_0 = ((((int32_t)((((int32_t)L_243) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0473;
	}

IL_0472:
	{
		G_B77_0 = 0;
	}

IL_0473:
	{
		V_49 = (bool)G_B77_0;
		bool L_244 = V_49;
		if (!L_244)
		{
			goto IL_04ce;
		}
	}
	{
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_245 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_246 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_247 = V_1;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_248;
		memset(&L_248, 0, sizeof(L_248));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_248), L_246, L_247, /*hidden argument*/NULL);
		bool L_249 = Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_245, L_248, (float*)(&V_50), /*hidden argument*/NULL);
		if (L_249)
		{
			goto IL_049d;
		}
	}
	{
		bool L_250 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_50), (0.0f), /*hidden argument*/NULL);
		G_B81_0 = ((((int32_t)L_250) == ((int32_t)0))? 1 : 0);
		goto IL_049e;
	}

IL_049d:
	{
		G_B81_0 = 1;
	}

IL_049e:
	{
		V_51 = (bool)G_B81_0;
		bool L_251 = V_51;
		if (!L_251)
		{
			goto IL_04c0;
		}
	}
	{
		float* L_252 = ___closestDistance10;
		float L_253 = V_50;
		float* L_254 = ___closestDistance10;
		float L_255 = *((float*)L_254);
		float L_256 = V_4;
		float L_257 = ___assetWidth5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_258 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_253, L_255, ((float)il2cpp_codegen_add((float)L_256, (float)((float)il2cpp_codegen_multiply((float)L_257, (float)(0.5f))))), /*hidden argument*/NULL);
		*((float*)L_252) = (float)L_258;
		goto IL_04cd;
	}

IL_04c0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F, /*hidden argument*/NULL);
	}

IL_04cd:
	{
	}

IL_04ce:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_m8672C5CD3768477B14761C69DEC45585AAA8C5F8 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_IsNormalVertical_m8672C5CD3768477B14761C69DEC45585AAA8C5F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___normal0;
		float L_1 = L_0.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		return (bool)((((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2))) < ((float)(0.01f)))? 1 : 0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SurfaceMagnetism__ctor_mD78D6DD1E7B5BD1E6BB006AC2C1DE962B290688D (SurfaceMagnetism_t83C41117BC338A929B9A4B5E39341F6C82B843E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism__ctor_mD78D6DD1E7B5BD1E6BB006AC2C1DE962B290688D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = (LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)SZArrayNew(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = L_0;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_2 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 )L_2);
		__this->set_magneticSurfaces_13(L_1);
		__this->set_maxRaycastDistance_14((50.0f));
		__this->set_closestDistance_15((0.5f));
		__this->set_surfaceNormalOffset_16((0.5f));
		__this->set_surfaceRayOffset_17((0.0f));
		__this->set_raycastMode_18(0);
		__this->set_boxRaysPerEdge_19(3);
		__this->set_orthographicBoxCast_20((bool)0);
		__this->set_maximumNormalVariance_21((0.5f));
		__this->set_sphereSize_22((1.0f));
		__this->set_volumeCastSizeOverride_23((0.0f));
		__this->set_useLinkedAltScaleOverride_24((bool)0);
		__this->set_currentRaycastDirectionMode_25(0);
		__this->set_orientationMode_26(1);
		__this->set_orientationBlend_27((0.65f));
		__this->set_keepOrientationVertical_28((bool)1);
		__this->set_debugEnabled_29((bool)0);
		RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C * L_3 = __this->get_address_of_currentRayStep_32();
		il2cpp_codegen_initobj(L_3, sizeof(RayStep_tD79EC987F47D0EC4939271DFCE1F90DB68B0526C ));
		Solver__ctor_m62A5B52B9DF2D9A82B0B0C7ED1D8F103FB736C75(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::ConfigureGrid(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_ConfigureGrid_mE2493453FBD786CEA324B07AF02EA2599203CB0F (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, int32_t ___columns0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tileSize1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___gutters2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___layouDirection3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPosition4, bool ___centered5, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___columns0;
		__this->set_Columns_4(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___tileSize1;
		__this->set_TileSize_5(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___gutters2;
		__this->set_Gutters_6(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___layouDirection3;
		__this->set_LayoutDireciton_7(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___startPosition4;
		__this->set_StartPosition_8(L_4);
		bool L_5 = ___centered5;
		__this->set_Centered_9(L_5);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnValidate()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_OnValidate_mB74DB64402122A8E11B606CF7AD68B0AB5F978FE (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, const RuntimeMethod* method)
{
	{
		__this->set_editorUpdated_13((bool)1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Start()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_Start_mE4160D158093A283CC0687240B68185D76DC836C (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, const RuntimeMethod* method)
{
	{
		__this->set_editorUpdated_13((bool)1);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TileGridObjectCollection_GetListPosition_m017C0448E90A10102EF99F6E8607FC455512D6E5 (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_GetListPosition_m017C0448E90A10102EF99F6E8607FC455512D6E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	float G_B6_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = __this->get_Columns_4();
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)L_1));
		int32_t L_2 = __this->get_Columns_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___index0;
		G_B3_0 = L_3;
		goto IL_0024;
	}

IL_0016:
	{
		int32_t L_4 = ___index0;
		int32_t L_5 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_6 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C((((float)((float)((int32_t)((int32_t)L_4/(int32_t)L_5))))), /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0024:
	{
		V_1 = G_B3_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_Gutters_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_2;
		float L_13 = L_12.get_x_2();
		int32_t L_14 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_2;
		float L_16 = L_15.get_y_3();
		int32_t L_17 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply((float)L_16, (float)(((float)((float)L_17)))));
		int32_t L_18 = __this->get_DepthCalculatedBy_10();
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		float L_20 = L_19.get_z_4();
		int32_t L_21 = V_0;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_20, (float)(((float)((float)L_21)))));
		goto IL_0073;
	}

IL_006a:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_2;
		float L_23 = L_22.get_z_4();
		int32_t L_24 = V_1;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_23, (float)(((float)((float)L_24)))));
	}

IL_0073:
	{
		V_5 = G_B6_0;
		float L_25 = V_3;
		float L_26 = V_4;
		float L_27 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28;
		memset(&L_28, 0, sizeof(L_28));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_28), L_25, L_26, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		goto IL_0083;
	}

IL_0083:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_6;
		return L_29;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Update()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection_Update_mEDBABA407E999033F65772034B41E9628D654DAB (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_Update_mEDBABA407E999033F65772034B41E9628D654DAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_4 = NULL;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	{
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->get_OnlyInEditMode_11();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->get_editorUpdated_13();
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0104;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = __this->get_Centered_9();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_8 = V_1;
		int32_t L_9 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B((((float)((float)((int32_t)((int32_t)L_8/(int32_t)L_9))))), /*hidden argument*/NULL);
		int32_t L_11 = __this->get_Columns_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), (int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_14, L_15, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_16, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_17, /*hidden argument*/NULL);
		__this->set_offSet_12(L_18);
		goto IL_0095;
	}

IL_0088:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_offSet_12(L_19);
	}

IL_0095:
	{
		V_3 = 0;
		goto IL_00f2;
	}

IL_0099:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_21 = V_3;
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_20, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = __this->get_StartPosition_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = __this->get_offSet_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_27, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_29, (0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_26, L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_33, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_23, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00f2:
	{
		int32_t L_36 = V_3;
		int32_t L_37 = V_1;
		V_5 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_5;
		if (L_38)
		{
			goto IL_0099;
		}
	}
	{
		__this->set_editorUpdated_13((bool)0);
	}

IL_0104:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TileGridObjectCollection__ctor_m2E4D160CC22082C0C78DF0C060DC6435DCD99F69 (TileGridObjectCollection_t3D68541A8813220AEBAA13A6FB83F203D3D05D1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection__ctor_m2E4D160CC22082C0C78DF0C060DC6435DCD99F69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_Columns_4(4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.1f), (0.1f), (0.0f), /*hidden argument*/NULL);
		__this->set_TileSize_5(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.005f), (0.005f), (0.005f), /*hidden argument*/NULL);
		__this->set_Gutters_6(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_2), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_LayoutDireciton_7(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_StartPosition_8(L_3);
		__this->set_Centered_9((bool)0);
		__this->set_DepthCalculatedBy_10(0);
		__this->set_OnlyInEditMode_11((bool)0);
		__this->set_editorUpdated_13((bool)0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
