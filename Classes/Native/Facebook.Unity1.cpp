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

// Facebook.Unity.AccessToken
struct AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872;
// Facebook.Unity.ResultBase
struct ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3;
// Facebook.Unity.ResultContainer
struct ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB;
// Facebook.Unity.ShareResult
struct ShareResult_tBA07F39961725F2A6770227078CE67C781581954;
// Facebook.Unity.Utilities/<>c
struct U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2E51991ADA605DB75870908AF6D7C3093DC3FCBA;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
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
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FacebookLogger_t5EC57C30179E0A3BA8D7C4C2703E7B39105EC145_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE3CF3F03E954D641795F7352C15103E24DC192FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tEDACB9E446C60A32943C9E53F8C59EDD843CC78C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Json_t460C21EA79956E8E3613187511E80381473CD9A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0109B1C3DDC80AAE8E0800FBE5640A9027E3256C;
IL2CPP_EXTERN_C String_t* _stringLiteral0EC6D150549780250A9772C06B619BCC46A0E560;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
IL2CPP_EXTERN_C String_t* _stringLiteral3120F6061B840C2605321DA394727175D2C81C4A;
IL2CPP_EXTERN_C String_t* _stringLiteral47F9D49B2D201B4D78E1CCCE1726DE4300A7235F;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
IL2CPP_EXTERN_C String_t* _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547;
IL2CPP_EXTERN_C String_t* _stringLiteral9C83C242B4477D334F8EFE3E2B531EB2D9FCEC59;
IL2CPP_EXTERN_C String_t* _stringLiteralA587DE5901CDE4DAE90805C5318FE0F1C7569535;
IL2CPP_EXTERN_C String_t* _stringLiteralAB0D2E6EC60EE20E523E45F5BD56EA677EFA29D9;
IL2CPP_EXTERN_C String_t* _stringLiteralBE5FDA3AAC270B134FF9C21CDEE8320DB05F0FDC;
IL2CPP_EXTERN_C String_t* _stringLiteralCAD97A96A588D30CDD3A2FBB9A08E52FF3BE7A40;
IL2CPP_EXTERN_C String_t* _stringLiteralEAEF99A09E561A86004BAEB87A80BB4CFCE8CE67;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisString_t_mF297F0ADF2AF7D55B365D2122F5A887784112832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m5819BB1395C8CAB17E7B1E8EED76702D3AE855B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m0E11CA9B34D5352759D42FDEA69CC14E7C949427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m6F1318489D4CCB86A38F0DB8B2403B9B0E7A0549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CParsePermissionFromResultU3Eb__18_0_m9FAEBB11015874E3A0DFD124E3D730E3158A9C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utilities_GetValueOrDefault_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m3E1B76667BAC036E00B6450974E71B322166050A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utilities_TryGetValue_TisIDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_mA80DE3C8226A23C6269541D3A1D3931849426750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utilities_TryGetValue_TisIEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73_mC491DF529FAADFF9057A5977DB9F30C8269E6645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utilities_TryGetValue_TisString_t_mED3EC40D7819612814FEE9617313BEEED32AE693_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ResultContainer_GetWebFormattedResponseDictionary_m4F72ABD5BECDF6DF9E2A52B4872404BA075D8534_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ResultContainer__ctor_mD0A987939C6C2ACA0B6F33E92134D75D959E4A7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShareResult_ToString_m267D2DB3B5FF2B8213F9294C0E17EF189E253B04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShareResult__ctor_m5DEE37A8A1E678071A0E0969BAC0082090226FF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShareResult_get_PostIDKey_mDC56546C9CDE3B209D5EE8F9ECB0C0794D05E4D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m5D181F3CFC55AD1A41DA1B1C03E05B3D53EED3FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_AbsoluteUrlOrEmptyString_m857EB872C8EC41481DE36819131FD463D40E256C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_FormatToString_mFDF8FE218E86B460E55A2CC314A9E73BFAB38037_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_GetUserAgent_mE7DE6AAA869D67895E418BFF5BD5AD300FCF7FF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_ParseAccessTokenFromResult_m76400BE7D523C33FA6E49EC52454DDBFCAA10F45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_ParseExpirationDateFromResult_m3F3CD3197671E92E8AB29ABD1233827C299E0CF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_ParseLastRefreshFromResult_m8BF55B8C5CA5DF056CF8EA4A517D4E92A66A59E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_ParsePermissionFromResult_m5AD18ED5C72041458B10153DA51BFCCAB80F6C22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_ToCommaSeparateList_mA02A581C7F212E0927F3FF4B101DAFDB87F2718E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_ToJson_m05D6165CE3EE4E5BAC0A1DFE99C0C90FA0224C6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_ToStringNullOk_m3C534FD4DA84E34CC42EE5A1DEDB1F059042E97B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utilities_TotalSeconds_mD76025DC3C6C9245CE8B549D5B7BDEE3C8EEEAF0_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Facebook.Unity.ResultContainer
struct  ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.ResultContainer::<RawResult>k__BackingField
	String_t* ___U3CRawResultU3Ek__BackingField_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultContainer::<ResultDictionary>k__BackingField
	RuntimeObject* ___U3CResultDictionaryU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CRawResultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB, ___U3CRawResultU3Ek__BackingField_1)); }
	inline String_t* get_U3CRawResultU3Ek__BackingField_1() const { return ___U3CRawResultU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CRawResultU3Ek__BackingField_1() { return &___U3CRawResultU3Ek__BackingField_1; }
	inline void set_U3CRawResultU3Ek__BackingField_1(String_t* value)
	{
		___U3CRawResultU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawResultU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultDictionaryU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB, ___U3CResultDictionaryU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CResultDictionaryU3Ek__BackingField_2() const { return ___U3CResultDictionaryU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CResultDictionaryU3Ek__BackingField_2() { return &___U3CResultDictionaryU3Ek__BackingField_2; }
	inline void set_U3CResultDictionaryU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CResultDictionaryU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultDictionaryU3Ek__BackingField_2), (void*)value);
	}
};


// Facebook.Unity.Utilities
struct  Utilities_t17D1FA38BA7F85B66549A4E074DA51324D1A38CA  : public RuntimeObject
{
public:

public:
};


// Facebook.Unity.Utilities_<>c
struct  U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_StaticFields
{
public:
	// Facebook.Unity.Utilities_<>c Facebook.Unity.Utilities_<>c::<>9
	U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.String> Facebook.Unity.Utilities_<>c::<>9__18_0
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ___U3CU3E9__18_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
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
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
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
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

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
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
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


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Nullable`1<System.Int64>
struct  Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


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


// Facebook.Unity.ResultBase
struct  ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.ResultBase::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultBase::<ResultDictionary>k__BackingField
	RuntimeObject* ___U3CResultDictionaryU3Ek__BackingField_1;
	// System.String Facebook.Unity.ResultBase::<RawResult>k__BackingField
	String_t* ___U3CRawResultU3Ek__BackingField_2;
	// System.Boolean Facebook.Unity.ResultBase::<Cancelled>k__BackingField
	bool ___U3CCancelledU3Ek__BackingField_3;
	// System.String Facebook.Unity.ResultBase::<CallbackId>k__BackingField
	String_t* ___U3CCallbackIdU3Ek__BackingField_4;
	// System.Nullable`1<System.Int64> Facebook.Unity.ResultBase::<CanvasErrorCode>k__BackingField
	Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5  ___U3CCanvasErrorCodeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3, ___U3CErrorU3Ek__BackingField_0)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_0() const { return ___U3CErrorU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_0() { return &___U3CErrorU3Ek__BackingField_0; }
	inline void set_U3CErrorU3Ek__BackingField_0(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultDictionaryU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3, ___U3CResultDictionaryU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CResultDictionaryU3Ek__BackingField_1() const { return ___U3CResultDictionaryU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CResultDictionaryU3Ek__BackingField_1() { return &___U3CResultDictionaryU3Ek__BackingField_1; }
	inline void set_U3CResultDictionaryU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CResultDictionaryU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultDictionaryU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRawResultU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3, ___U3CRawResultU3Ek__BackingField_2)); }
	inline String_t* get_U3CRawResultU3Ek__BackingField_2() const { return ___U3CRawResultU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CRawResultU3Ek__BackingField_2() { return &___U3CRawResultU3Ek__BackingField_2; }
	inline void set_U3CRawResultU3Ek__BackingField_2(String_t* value)
	{
		___U3CRawResultU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRawResultU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCancelledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3, ___U3CCancelledU3Ek__BackingField_3)); }
	inline bool get_U3CCancelledU3Ek__BackingField_3() const { return ___U3CCancelledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CCancelledU3Ek__BackingField_3() { return &___U3CCancelledU3Ek__BackingField_3; }
	inline void set_U3CCancelledU3Ek__BackingField_3(bool value)
	{
		___U3CCancelledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CCallbackIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3, ___U3CCallbackIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CCallbackIdU3Ek__BackingField_4() const { return ___U3CCallbackIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CCallbackIdU3Ek__BackingField_4() { return &___U3CCallbackIdU3Ek__BackingField_4; }
	inline void set_U3CCallbackIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CCallbackIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCallbackIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCanvasErrorCodeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3, ___U3CCanvasErrorCodeU3Ek__BackingField_5)); }
	inline Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5  get_U3CCanvasErrorCodeU3Ek__BackingField_5() const { return ___U3CCanvasErrorCodeU3Ek__BackingField_5; }
	inline Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5 * get_address_of_U3CCanvasErrorCodeU3Ek__BackingField_5() { return &___U3CCanvasErrorCodeU3Ek__BackingField_5; }
	inline void set_U3CCanvasErrorCodeU3Ek__BackingField_5(Nullable_1_t8A84BC5F3B3D55B8E96E9B812BDCCCB962EB2AB5  value)
	{
		___U3CCanvasErrorCodeU3Ek__BackingField_5 = value;
	}
};


// Facebook.Unity.ShareDialogMode
struct  ShareDialogMode_tB0C7116D1136AF94D7F228221E67BA1BB25CB092 
{
public:
	// System.Int32 Facebook.Unity.ShareDialogMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShareDialogMode_tB0C7116D1136AF94D7F228221E67BA1BB25CB092, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeKind
struct  DateTimeKind_t6BC23532930B812ABFCCEB2B61BC233712B180EE 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_t6BC23532930B812ABFCCEB2B61BC233712B180EE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9 
{
public:
	// T System.Nullable`1::value
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9, ___value_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_value_0() const { return ___value_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


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


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.Uri_Flags
struct  Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct  UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct  UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Facebook.Unity.AccessToken
struct  AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872  : public RuntimeObject
{
public:
	// System.String Facebook.Unity.AccessToken::<TokenString>k__BackingField
	String_t* ___U3CTokenStringU3Ek__BackingField_1;
	// System.DateTime Facebook.Unity.AccessToken::<ExpirationTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CExpirationTimeU3Ek__BackingField_2;
	// System.Collections.Generic.IEnumerable`1<System.String> Facebook.Unity.AccessToken::<Permissions>k__BackingField
	RuntimeObject* ___U3CPermissionsU3Ek__BackingField_3;
	// System.String Facebook.Unity.AccessToken::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
	// System.Nullable`1<System.DateTime> Facebook.Unity.AccessToken::<LastRefresh>k__BackingField
	Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  ___U3CLastRefreshU3Ek__BackingField_5;
	// System.String Facebook.Unity.AccessToken::<GraphDomain>k__BackingField
	String_t* ___U3CGraphDomainU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTokenStringU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872, ___U3CTokenStringU3Ek__BackingField_1)); }
	inline String_t* get_U3CTokenStringU3Ek__BackingField_1() const { return ___U3CTokenStringU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTokenStringU3Ek__BackingField_1() { return &___U3CTokenStringU3Ek__BackingField_1; }
	inline void set_U3CTokenStringU3Ek__BackingField_1(String_t* value)
	{
		___U3CTokenStringU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenStringU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExpirationTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872, ___U3CExpirationTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CExpirationTimeU3Ek__BackingField_2() const { return ___U3CExpirationTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CExpirationTimeU3Ek__BackingField_2() { return &___U3CExpirationTimeU3Ek__BackingField_2; }
	inline void set_U3CExpirationTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CExpirationTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPermissionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872, ___U3CPermissionsU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CPermissionsU3Ek__BackingField_3() const { return ___U3CPermissionsU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CPermissionsU3Ek__BackingField_3() { return &___U3CPermissionsU3Ek__BackingField_3; }
	inline void set_U3CPermissionsU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CPermissionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPermissionsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLastRefreshU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872, ___U3CLastRefreshU3Ek__BackingField_5)); }
	inline Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  get_U3CLastRefreshU3Ek__BackingField_5() const { return ___U3CLastRefreshU3Ek__BackingField_5; }
	inline Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9 * get_address_of_U3CLastRefreshU3Ek__BackingField_5() { return &___U3CLastRefreshU3Ek__BackingField_5; }
	inline void set_U3CLastRefreshU3Ek__BackingField_5(Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  value)
	{
		___U3CLastRefreshU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGraphDomainU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872, ___U3CGraphDomainU3Ek__BackingField_6)); }
	inline String_t* get_U3CGraphDomainU3Ek__BackingField_6() const { return ___U3CGraphDomainU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CGraphDomainU3Ek__BackingField_6() { return &___U3CGraphDomainU3Ek__BackingField_6; }
	inline void set_U3CGraphDomainU3Ek__BackingField_6(String_t* value)
	{
		___U3CGraphDomainU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGraphDomainU3Ek__BackingField_6), (void*)value);
	}
};

struct AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872_StaticFields
{
public:
	// Facebook.Unity.AccessToken Facebook.Unity.AccessToken::<CurrentAccessToken>k__BackingField
	AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 * ___U3CCurrentAccessTokenU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CCurrentAccessTokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872_StaticFields, ___U3CCurrentAccessTokenU3Ek__BackingField_0)); }
	inline AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 * get_U3CCurrentAccessTokenU3Ek__BackingField_0() const { return ___U3CCurrentAccessTokenU3Ek__BackingField_0; }
	inline AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 ** get_address_of_U3CCurrentAccessTokenU3Ek__BackingField_0() { return &___U3CCurrentAccessTokenU3Ek__BackingField_0; }
	inline void set_U3CCurrentAccessTokenU3Ek__BackingField_0(AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 * value)
	{
		___U3CCurrentAccessTokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentAccessTokenU3Ek__BackingField_0), (void*)value);
	}
};


// Facebook.Unity.LoginResult
struct  LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E  : public ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3
{
public:
	// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::<AccessToken>k__BackingField
	AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 * ___U3CAccessTokenU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CAccessTokenU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E, ___U3CAccessTokenU3Ek__BackingField_11)); }
	inline AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 * get_U3CAccessTokenU3Ek__BackingField_11() const { return ___U3CAccessTokenU3Ek__BackingField_11; }
	inline AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 ** get_address_of_U3CAccessTokenU3Ek__BackingField_11() { return &___U3CAccessTokenU3Ek__BackingField_11; }
	inline void set_U3CAccessTokenU3Ek__BackingField_11(AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 * value)
	{
		___U3CAccessTokenU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccessTokenU3Ek__BackingField_11), (void*)value);
	}
};

struct LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields
{
public:
	// System.String Facebook.Unity.LoginResult::UserIdKey
	String_t* ___UserIdKey_6;
	// System.String Facebook.Unity.LoginResult::ExpirationTimestampKey
	String_t* ___ExpirationTimestampKey_7;
	// System.String Facebook.Unity.LoginResult::PermissionsKey
	String_t* ___PermissionsKey_8;
	// System.String Facebook.Unity.LoginResult::AccessTokenKey
	String_t* ___AccessTokenKey_9;
	// System.String Facebook.Unity.LoginResult::GraphDomain
	String_t* ___GraphDomain_10;

public:
	inline static int32_t get_offset_of_UserIdKey_6() { return static_cast<int32_t>(offsetof(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields, ___UserIdKey_6)); }
	inline String_t* get_UserIdKey_6() const { return ___UserIdKey_6; }
	inline String_t** get_address_of_UserIdKey_6() { return &___UserIdKey_6; }
	inline void set_UserIdKey_6(String_t* value)
	{
		___UserIdKey_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserIdKey_6), (void*)value);
	}

	inline static int32_t get_offset_of_ExpirationTimestampKey_7() { return static_cast<int32_t>(offsetof(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields, ___ExpirationTimestampKey_7)); }
	inline String_t* get_ExpirationTimestampKey_7() const { return ___ExpirationTimestampKey_7; }
	inline String_t** get_address_of_ExpirationTimestampKey_7() { return &___ExpirationTimestampKey_7; }
	inline void set_ExpirationTimestampKey_7(String_t* value)
	{
		___ExpirationTimestampKey_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpirationTimestampKey_7), (void*)value);
	}

	inline static int32_t get_offset_of_PermissionsKey_8() { return static_cast<int32_t>(offsetof(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields, ___PermissionsKey_8)); }
	inline String_t* get_PermissionsKey_8() const { return ___PermissionsKey_8; }
	inline String_t** get_address_of_PermissionsKey_8() { return &___PermissionsKey_8; }
	inline void set_PermissionsKey_8(String_t* value)
	{
		___PermissionsKey_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PermissionsKey_8), (void*)value);
	}

	inline static int32_t get_offset_of_AccessTokenKey_9() { return static_cast<int32_t>(offsetof(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields, ___AccessTokenKey_9)); }
	inline String_t* get_AccessTokenKey_9() const { return ___AccessTokenKey_9; }
	inline String_t** get_address_of_AccessTokenKey_9() { return &___AccessTokenKey_9; }
	inline void set_AccessTokenKey_9(String_t* value)
	{
		___AccessTokenKey_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AccessTokenKey_9), (void*)value);
	}

	inline static int32_t get_offset_of_GraphDomain_10() { return static_cast<int32_t>(offsetof(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields, ___GraphDomain_10)); }
	inline String_t* get_GraphDomain_10() const { return ___GraphDomain_10; }
	inline String_t** get_address_of_GraphDomain_10() { return &___GraphDomain_10; }
	inline void set_GraphDomain_10(String_t* value)
	{
		___GraphDomain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GraphDomain_10), (void*)value);
	}
};


// Facebook.Unity.ShareResult
struct  ShareResult_tBA07F39961725F2A6770227078CE67C781581954  : public ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3
{
public:
	// System.String Facebook.Unity.ShareResult::<PostId>k__BackingField
	String_t* ___U3CPostIdU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CPostIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ShareResult_tBA07F39961725F2A6770227078CE67C781581954, ___U3CPostIdU3Ek__BackingField_6)); }
	inline String_t* get_U3CPostIdU3Ek__BackingField_6() const { return ___U3CPostIdU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CPostIdU3Ek__BackingField_6() { return &___U3CPostIdU3Ek__BackingField_6; }
	inline void set_U3CPostIdU3Ek__BackingField_6(String_t* value)
	{
		___U3CPostIdU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPostIdU3Ek__BackingField_6), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

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
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_18)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_21)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.Func`2<System.Object,System.String>
struct  Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Boolean Facebook.Unity.Utilities::TryGetValue<System.Object>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utilities_TryGetValue_TisRuntimeObject_m16D433FE3C3ED7A56AD262ADA8951762BD82B367_gshared (RuntimeObject* ___dictionary0, String_t* ___key1, RuntimeObject ** ___value2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Enumerable_ToArray_TisRuntimeObject_m90391AD23AB688BA42D238D4512C858F912D7A67_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// T Facebook.Unity.Utilities::GetValueOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Utilities_GetValueOrDefault_TisRuntimeObject_m8EB378D534B45B48C20D5A88EC5E38EDDE6BD5E8_gshared (RuntimeObject* ___dictionary0, String_t* ___key1, bool ___logWarning2, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// T Facebook.Unity.Utilities::GetValueOrDefault<System.Int64>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Utilities_GetValueOrDefault_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m3E1B76667BAC036E00B6450974E71B322166050A_gshared (RuntimeObject* ___dictionary0, String_t* ___key1, bool ___logWarning2, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m6F1318489D4CCB86A38F0DB8B2403B9B0E7A0549_gshared (Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared (RuntimeObject* ___source0, Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * ___selector1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Facebook.Unity.Utilities::ToJson(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utilities_ToJson_m05D6165CE3EE4E5BAC0A1DFE99C0C90FA0224C6E (RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void Facebook.Unity.ResultContainer::set_RawResult(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ResultContainer_set_RawResult_m45AAAA4F61AF38DAC0B3905C0E66C1C9A5FCFC25_inline (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Facebook.Unity.ResultContainer::set_ResultDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ResultContainer_set_ResultDictionary_m7AC4A7E98BB587882874A16EDF7459530699EC7B_inline (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean Facebook.Unity.Constants::get_IsWeb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Constants_get_IsWeb_mAF9BE568F0E0FE09BF5325EE07B4FD9F8A39EB04 (const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultContainer::get_ResultDictionary()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ResultContainer_get_ResultDictionary_m3E73E04549719D57C7DB5C2F3674F96762F15B87_inline (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultContainer::GetWebFormattedResponseDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResultContainer_GetWebFormattedResponseDictionary_m4F72ABD5BECDF6DF9E2A52B4872404BA075D8534 (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, RuntimeObject* ___resultDictionary0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Object Facebook.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m67D8EEB07830D423B1B8E8331900622927902D38 (String_t* ___json0, const RuntimeMethod* method);
// System.Boolean Facebook.Unity.Utilities::TryGetValue<System.Collections.Generic.IDictionary`2<System.String,System.Object>>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,T&)
inline bool Utilities_TryGetValue_TisIDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_mA80DE3C8226A23C6269541D3A1D3931849426750 (RuntimeObject* ___dictionary0, String_t* ___key1, RuntimeObject** ___value2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, RuntimeObject**, const RuntimeMethod*))Utilities_TryGetValue_TisRuntimeObject_m16D433FE3C3ED7A56AD262ADA8951762BD82B367_gshared)(___dictionary0, ___key1, ___value2, method);
}
// System.Void Facebook.Unity.ResultBase::.ctor(Facebook.Unity.ResultContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultBase__ctor_m91619C058342B3AD712A53A940115659F5D6BB67 (ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3 * __this, ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * ___result0, const RuntimeMethod* method);
// System.String Facebook.Unity.ShareResult::get_PostIDKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShareResult_get_PostIDKey_mDC56546C9CDE3B209D5EE8F9ECB0C0794D05E4D6 (const RuntimeMethod* method);
// System.Boolean Facebook.Unity.Utilities::TryGetValue<System.String>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,T&)
inline bool Utilities_TryGetValue_TisString_t_mED3EC40D7819612814FEE9617313BEEED32AE693 (RuntimeObject* ___dictionary0, String_t* ___key1, String_t** ___value2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, String_t**, const RuntimeMethod*))Utilities_TryGetValue_TisRuntimeObject_m16D433FE3C3ED7A56AD262ADA8951762BD82B367_gshared)(___dictionary0, ___key1, ___value2, method);
}
// System.Void Facebook.Unity.ShareResult::set_PostId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ShareResult_set_PostId_m9518B81E18FC24C12A424E63BF0B943CC8A7096F_inline (ShareResult_tBA07F39961725F2A6770227078CE67C781581954 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Facebook.Unity.ResultBase::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResultBase_ToString_mAA80297E0381E4DCC25FE2AD43B632BD9A450C22 (ResultBase_tC1AD3BA25F13C02D542A4BE5C02CC13D8FEBC7C3 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.String Facebook.Unity.ShareResult::get_PostId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ShareResult_get_PostId_m10571B08C02499EAFC8DF1AA54DC4AD915675BAD_inline (ShareResult_tBA07F39961725F2A6770227078CE67C781581954 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.String Facebook.Unity.Utilities::FormatToString(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utilities_FormatToString_mFDF8FE218E86B460E55A2CC314A9E73BFAB38037 (String_t* ___baseString0, String_t* ___className1, RuntimeObject* ___propertiesAndValues2, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mC9FEFEECD786FDE2648567E114C71A4A468A65FE (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d10, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___d21, const RuntimeMethod* method);
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m90391AD23AB688BA42D238D4512C858F912D7A67_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4 (String_t* ___separator0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___value1, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Equality_mFED3D4AFAB090B76D2088C485507F8F702ADA18F (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri10, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri21, const RuntimeMethod* method);
// System.String System.Uri::get_AbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m4326730E572E7E3874021E802813EB6F49F7F99E (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// System.String Facebook.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_mF2CF20495581A7CCF6ECF8A3A6D1766B6CA7DFC0 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// T Facebook.Unity.Utilities::GetValueOrDefault<System.String>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,System.Boolean)
inline String_t* Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C (RuntimeObject* ___dictionary0, String_t* ___key1, bool ___logWarning2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, String_t*, bool, const RuntimeMethod*))Utilities_GetValueOrDefault_TisRuntimeObject_m8EB378D534B45B48C20D5A88EC5E38EDDE6BD5E8_gshared)(___dictionary0, ___key1, ___logWarning2, method);
}
// System.DateTime Facebook.Unity.Utilities::ParseExpirationDateFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Utilities_ParseExpirationDateFromResult_m3F3CD3197671E92E8AB29ABD1233827C299E0CF6 (RuntimeObject* ___resultDictionary0, const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<System.String> Facebook.Unity.Utilities::ParsePermissionFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utilities_ParsePermissionFromResult_m5AD18ED5C72041458B10153DA51BFCCAB80F6C22 (RuntimeObject* ___resultDictionary0, const RuntimeMethod* method);
// System.Nullable`1<System.DateTime> Facebook.Unity.Utilities::ParseLastRefreshFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  Utilities_ParseLastRefreshFromResult_m8BF55B8C5CA5DF056CF8EA4A517D4E92A66A59E4 (RuntimeObject* ___resultDictionary0, const RuntimeMethod* method);
// System.Void Facebook.Unity.AccessToken::.ctor(System.String,System.String,System.DateTime,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.DateTime>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccessToken__ctor_mDEF83EF8A56366B40E77F3D05DFD5C6EC795BB1E (AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 * __this, String_t* ___tokenString0, String_t* ___userId1, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___expirationTime2, RuntimeObject* ___permissions3, Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  ___lastRefresh4, String_t* ___graphDomain5, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_inline (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_inline (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7 (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// T Facebook.Unity.Utilities::GetValueOrDefault<System.Int64>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,System.Boolean)
inline int64_t Utilities_GetValueOrDefault_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m3E1B76667BAC036E00B6450974E71B322166050A (RuntimeObject* ___dictionary0, String_t* ___key1, bool ___logWarning2, const RuntimeMethod* method)
{
	return ((  int64_t (*) (RuntimeObject*, String_t*, bool, const RuntimeMethod*))Utilities_GetValueOrDefault_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m3E1B76667BAC036E00B6450974E71B322166050A_gshared)(___dictionary0, ___key1, ___logWarning2, method);
}
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_AddSeconds_m36DC8835432569A70AC5120359527350DD65D6B2 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, double ___value0, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Boolean Facebook.Unity.Constants::get_IsGameroom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Constants_get_IsGameroom_m82A009068C89283D21CE925A09A30BAD5E0CAF0D (const RuntimeMethod* method);
// System.DateTime Facebook.Unity.Utilities::FromTimestamp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Utilities_FromTimestamp_mE7557EF41779545A1CC2EF3BB2EB5255B076A9D2 (int32_t ___timestamp0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
inline void Nullable_1__ctor_m6F1318489D4CCB86A38F0DB8B2403B9B0E7A0549 (Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9 *, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*))Nullable_1__ctor_m6F1318489D4CCB86A38F0DB8B2403B9B0E7A0549_gshared)(__this, ___value0, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___separator0, const RuntimeMethod* method);
// System.Boolean Facebook.Unity.Utilities::TryGetValue<System.Collections.Generic.IEnumerable`1<System.Object>>(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,T&)
inline bool Utilities_TryGetValue_TisIEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73_mC491DF529FAADFF9057A5977DB9F30C8269E6645 (RuntimeObject* ___dictionary0, String_t* ___key1, RuntimeObject** ___value2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, RuntimeObject**, const RuntimeMethod*))Utilities_TryGetValue_TisRuntimeObject_m16D433FE3C3ED7A56AD262ADA8951762BD82B367_gshared)(___dictionary0, ___key1, ___value2, method);
}
// System.Void Facebook.Unity.FacebookLogger::Warn(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacebookLogger_Warn_m4FE4B8407A55E8DE87E66D88A755FC42A36FBAEE (String_t* ___format0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___args1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m0E11CA9B34D5352759D42FDEA69CC14E7C949427 (Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisString_t_mF297F0ADF2AF7D55B365D2122F5A887784112832 (RuntimeObject* ___source0, Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m93DBD723B5A365BD92FAF21BECDDCAFF67D0CA72_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * Enumerable_ToList_TisString_t_m5819BB1395C8CAB17E7B1E8EED76702D3AE855B5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m4E22BE033B818CC1081A3C0D02E9D139A4DABFD3_gshared)(___source0, method);
}
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m6567CDEB97E6541CE4AF8ADDC617CFF419D5A58E (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, const RuntimeMethod* method);
// System.Void Facebook.Unity.Utilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD1408A4B438004FCF1351218A031E46A8FC96CB1 (U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facebook.Unity.ResultContainer::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultContainer__ctor_m205EC336E502F82FC48181A44CF263C949855EC9 (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___dictionary0;
		String_t* L_1 = Utilities_ToJson_m05D6165CE3EE4E5BAC0A1DFE99C0C90FA0224C6E(L_0, /*hidden argument*/NULL);
		ResultContainer_set_RawResult_m45AAAA4F61AF38DAC0B3905C0E66C1C9A5FCFC25_inline(__this, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___dictionary0;
		ResultContainer_set_ResultDictionary_m7AC4A7E98BB587882874A16EDF7459530699EC7B_inline(__this, L_2, /*hidden argument*/NULL);
		bool L_3 = Constants_get_IsWeb_mAF9BE568F0E0FE09BF5325EE07B4FD9F8A39EB04(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = ResultContainer_get_ResultDictionary_m3E73E04549719D57C7DB5C2F3674F96762F15B87_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ResultContainer_GetWebFormattedResponseDictionary_m4F72ABD5BECDF6DF9E2A52B4872404BA075D8534(__this, L_4, /*hidden argument*/NULL);
		ResultContainer_set_ResultDictionary_m7AC4A7E98BB587882874A16EDF7459530699EC7B_inline(__this, L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Facebook.Unity.ResultContainer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultContainer__ctor_mD0A987939C6C2ACA0B6F33E92134D75D959E4A7E (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultContainer__ctor_mD0A987939C6C2ACA0B6F33E92134D75D959E4A7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___result0;
		ResultContainer_set_RawResult_m45AAAA4F61AF38DAC0B3905C0E66C1C9A5FCFC25_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_3 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_3, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		ResultContainer_set_ResultDictionary_m7AC4A7E98BB587882874A16EDF7459530699EC7B_inline(__this, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0021:
	{
		String_t* L_4 = ___result0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t460C21EA79956E8E3613187511E80381473CD9A1_il2cpp_TypeInfo_var);
		RuntimeObject * L_5 = Json_Deserialize_m67D8EEB07830D423B1B8E8331900622927902D38(L_4, /*hidden argument*/NULL);
		ResultContainer_set_ResultDictionary_m7AC4A7E98BB587882874A16EDF7459530699EC7B_inline(__this, ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)IsInstClass((RuntimeObject*)L_5, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		bool L_6 = Constants_get_IsWeb_mAF9BE568F0E0FE09BF5325EE07B4FD9F8A39EB04(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_7 = ResultContainer_get_ResultDictionary_m3E73E04549719D57C7DB5C2F3674F96762F15B87_inline(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_8 = ResultContainer_get_ResultDictionary_m3E73E04549719D57C7DB5C2F3674F96762F15B87_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_9 = ResultContainer_GetWebFormattedResponseDictionary_m4F72ABD5BECDF6DF9E2A52B4872404BA075D8534(__this, L_8, /*hidden argument*/NULL);
		ResultContainer_set_ResultDictionary_m7AC4A7E98BB587882874A16EDF7459530699EC7B_inline(__this, L_9, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.String Facebook.Unity.ResultContainer::get_RawResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResultContainer_get_RawResult_m3CA8D43D611D98A90DD5B82C9FCA49D3E3075291 (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CRawResultU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Facebook.Unity.ResultContainer::set_RawResult(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultContainer_set_RawResult_m45AAAA4F61AF38DAC0B3905C0E66C1C9A5FCFC25 (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CRawResultU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultContainer::get_ResultDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResultContainer_get_ResultDictionary_m3E73E04549719D57C7DB5C2F3674F96762F15B87 (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CResultDictionaryU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Facebook.Unity.ResultContainer::set_ResultDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultContainer_set_ResultDictionary_m7AC4A7E98BB587882874A16EDF7459530699EC7B (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CResultDictionaryU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultContainer::GetWebFormattedResponseDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResultContainer_GetWebFormattedResponseDictionary_m4F72ABD5BECDF6DF9E2A52B4872404BA075D8534 (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, RuntimeObject* ___resultDictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultContainer_GetWebFormattedResponseDictionary_m4F72ABD5BECDF6DF9E2A52B4872404BA075D8534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		RuntimeObject* L_0 = ___resultDictionary0;
		bool L_1 = Utilities_TryGetValue_TisIDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_mA80DE3C8226A23C6269541D3A1D3931849426750(L_0, _stringLiteral0EC6D150549780250A9772C06B619BCC46A0E560, (RuntimeObject**)(&V_0), /*hidden argument*/Utilities_TryGetValue_TisIDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_mA80DE3C8226A23C6269541D3A1D3931849426750_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_2 = ___resultDictionary0;
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_2, _stringLiteral3120F6061B840C2605321DA394727175D2C81C4A, (RuntimeObject **)(&V_1));
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject * L_5 = V_1;
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t6AF508DE18DA398DBB91330BEEB14B0CFBD4A8ED_il2cpp_TypeInfo_var, L_4, _stringLiteral3120F6061B840C2605321DA394727175D2C81C4A, L_5);
	}

IL_002a:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}

IL_002c:
	{
		RuntimeObject* L_7 = ___resultDictionary0;
		return L_7;
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
// System.Void Facebook.Unity.ShareResult::.ctor(Facebook.Unity.ResultContainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResult__ctor_m5DEE37A8A1E678071A0E0969BAC0082090226FF7 (ShareResult_tBA07F39961725F2A6770227078CE67C781581954 * __this, ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * ___resultContainer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShareResult__ctor_m5DEE37A8A1E678071A0E0969BAC0082090226FF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * L_0 = ___resultContainer0;
		ResultBase__ctor_m91619C058342B3AD712A53A940115659F5D6BB67(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultBase::get_ResultDictionary() */, __this);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultBase::get_ResultDictionary() */, __this);
		String_t* L_3 = ShareResult_get_PostIDKey_mDC56546C9CDE3B209D5EE8F9ECB0C0794D05E4D6(/*hidden argument*/NULL);
		bool L_4 = Utilities_TryGetValue_TisString_t_mED3EC40D7819612814FEE9617313BEEED32AE693(L_2, L_3, (String_t**)(&V_0), /*hidden argument*/Utilities_TryGetValue_TisString_t_mED3EC40D7819612814FEE9617313BEEED32AE693_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = V_0;
		ShareResult_set_PostId_m9518B81E18FC24C12A424E63BF0B943CC8A7096F_inline(__this, L_5, /*hidden argument*/NULL);
		return;
	}

IL_002b:
	{
		RuntimeObject* L_6 = VirtFuncInvoker0< RuntimeObject* >::Invoke(11 /* System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.ResultBase::get_ResultDictionary() */, __this);
		bool L_7 = Utilities_TryGetValue_TisString_t_mED3EC40D7819612814FEE9617313BEEED32AE693(L_6, _stringLiteralAB0D2E6EC60EE20E523E45F5BD56EA677EFA29D9, (String_t**)(&V_0), /*hidden argument*/Utilities_TryGetValue_TisString_t_mED3EC40D7819612814FEE9617313BEEED32AE693_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_8 = V_0;
		ShareResult_set_PostId_m9518B81E18FC24C12A424E63BF0B943CC8A7096F_inline(__this, L_8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
// System.String Facebook.Unity.ShareResult::get_PostId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShareResult_get_PostId_m10571B08C02499EAFC8DF1AA54DC4AD915675BAD (ShareResult_tBA07F39961725F2A6770227078CE67C781581954 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPostIdU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Facebook.Unity.ShareResult::set_PostId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResult_set_PostId_m9518B81E18FC24C12A424E63BF0B943CC8A7096F (ShareResult_tBA07F39961725F2A6770227078CE67C781581954 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPostIdU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String Facebook.Unity.ShareResult::get_PostIDKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShareResult_get_PostIDKey_mDC56546C9CDE3B209D5EE8F9ECB0C0794D05E4D6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShareResult_get_PostIDKey_mDC56546C9CDE3B209D5EE8F9ECB0C0794D05E4D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Constants_get_IsWeb_mAF9BE568F0E0FE09BF5325EE07B4FD9F8A39EB04(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547;
	}

IL_000d:
	{
		return _stringLiteralBE5FDA3AAC270B134FF9C21CDEE8320DB05F0FDC;
	}
}
// System.String Facebook.Unity.ShareResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShareResult_ToString_m267D2DB3B5FF2B8213F9294C0E17EF189E253B04 (ShareResult_tBA07F39961725F2A6770227078CE67C781581954 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShareResult_ToString_m267D2DB3B5FF2B8213F9294C0E17EF189E253B04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ResultBase_ToString_mAA80297E0381E4DCC25FE2AD43B632BD9A450C22(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_3 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_3, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_4 = L_3;
		String_t* L_5 = ShareResult_get_PostId_m10571B08C02499EAFC8DF1AA54DC4AD915675BAD_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_4, _stringLiteral9C83C242B4477D334F8EFE3E2B531EB2D9FCEC59, L_5, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		String_t* L_6 = Utilities_FormatToString_mFDF8FE218E86B460E55A2CC314A9E73BFAB38037(L_0, L_2, L_4, /*hidden argument*/NULL);
		return L_6;
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
// System.Int64 Facebook.Unity.Utilities::TotalSeconds(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Utilities_TotalSeconds_mD76025DC3C6C9245CE8B549D5B7BDEE3C8EEEAF0 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_TotalSeconds_mD76025DC3C6C9245CE8B549D5B7BDEE3C8EEEAF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___dateTime0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1;
		memset((&L_1), 0, sizeof(L_1));
		DateTime__ctor_mC9FEFEECD786FDE2648567E114C71A4A468A65FE((&L_1), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_2 = DateTime_op_Subtraction_m8005DCC8F0F183AC1335F87A82FDF92926CC5021(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3 = TimeSpan_get_TotalSeconds_m0F8F314166E6D1F9D36F32EB1272451EDE56B4EA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		return (((int64_t)((int64_t)L_3)));
	}
}
// System.String Facebook.Unity.Utilities::ToCommaSeparateList(System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utilities_ToCommaSeparateList_mA02A581C7F212E0927F3FF4B101DAFDB87F2718E (RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_ToCommaSeparateList_mA02A581C7F212E0927F3FF4B101DAFDB87F2718E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___list0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_0009:
	{
		RuntimeObject* L_2 = ___list0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC(L_2, /*hidden argument*/Enumerable_ToArray_TisString_t_m1BAD76FB02571EB3CCC5BB00D4D581399F8523FC_RuntimeMethod_var);
		String_t* L_4 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String Facebook.Unity.Utilities::AbsoluteUrlOrEmptyString(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utilities_AbsoluteUrlOrEmptyString_m857EB872C8EC41481DE36819131FD463D40E256C (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_AbsoluteUrlOrEmptyString_m857EB872C8EC41481DE36819131FD463D40E256C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___uri0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		bool L_1 = Uri_op_Equality_mFED3D4AFAB090B76D2088C485507F8F702ADA18F(L_0, (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_000f:
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_3 = ___uri0;
		NullCheck(L_3);
		String_t* L_4 = Uri_get_AbsoluteUri_m4326730E572E7E3874021E802813EB6F49F7F99E(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String Facebook.Unity.Utilities::GetUserAgent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utilities_GetUserAgent_mE7DE6AAA869D67895E418BFF5BD5AD300FCF7FF4 (String_t* ___productName0, String_t* ___productVersion1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_GetUserAgent_mE7DE6AAA869D67895E418BFF5BD5AD300FCF7FF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = ___productName0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		String_t* L_5 = ___productVersion1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_0, _stringLiteralEAEF99A09E561A86004BAEB87A80BB4CFCE8CE67, L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String Facebook.Unity.Utilities::ToJson(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utilities_ToJson_m05D6165CE3EE4E5BAC0A1DFE99C0C90FA0224C6E (RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_ToJson_m05D6165CE3EE4E5BAC0A1DFE99C0C90FA0224C6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___dictionary0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t460C21EA79956E8E3613187511E80381473CD9A1_il2cpp_TypeInfo_var);
		String_t* L_1 = Json_Serialize_mF2CF20495581A7CCF6ECF8A3A6D1766B6CA7DFC0(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Facebook.Unity.AccessToken Facebook.Unity.Utilities::ParseAccessTokenFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 * Utilities_ParseAccessTokenFromResult_m76400BE7D523C33FA6E49EC52454DDBFCAA10F45 (RuntimeObject* ___resultDictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_ParseAccessTokenFromResult_m76400BE7D523C33FA6E49EC52454DDBFCAA10F45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	{
		RuntimeObject* L_0 = ___resultDictionary0;
		IL2CPP_RUNTIME_CLASS_INIT(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var);
		String_t* L_1 = ((LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields*)il2cpp_codegen_static_fields_for(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var))->get_UserIdKey_6();
		String_t* L_2 = Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C(L_0, L_1, (bool)1, /*hidden argument*/Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C_RuntimeMethod_var);
		V_0 = L_2;
		RuntimeObject* L_3 = ___resultDictionary0;
		String_t* L_4 = ((LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields*)il2cpp_codegen_static_fields_for(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var))->get_AccessTokenKey_9();
		String_t* L_5 = Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C(L_3, L_4, (bool)1, /*hidden argument*/Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C_RuntimeMethod_var);
		RuntimeObject* L_6 = ___resultDictionary0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_7 = Utilities_ParseExpirationDateFromResult_m3F3CD3197671E92E8AB29ABD1233827C299E0CF6(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		RuntimeObject* L_8 = ___resultDictionary0;
		RuntimeObject* L_9 = Utilities_ParsePermissionFromResult_m5AD18ED5C72041458B10153DA51BFCCAB80F6C22(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		RuntimeObject* L_10 = ___resultDictionary0;
		Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  L_11 = Utilities_ParseLastRefreshFromResult_m8BF55B8C5CA5DF056CF8EA4A517D4E92A66A59E4(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject* L_12 = ___resultDictionary0;
		String_t* L_13 = ((LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields*)il2cpp_codegen_static_fields_for(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var))->get_GraphDomain_10();
		String_t* L_14 = Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C(L_12, L_13, (bool)1, /*hidden argument*/Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C_RuntimeMethod_var);
		V_4 = L_14;
		String_t* L_15 = V_0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_16 = V_1;
		RuntimeObject* L_17 = V_2;
		Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  L_18 = V_3;
		String_t* L_19 = V_4;
		AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 * L_20 = (AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872 *)il2cpp_codegen_object_new(AccessToken_t1E13D895ED2AC2E3FFD8ABBE69E0A3FBB4DFF872_il2cpp_TypeInfo_var);
		AccessToken__ctor_mDEF83EF8A56366B40E77F3D05DFD5C6EC795BB1E(L_20, L_5, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.String Facebook.Unity.Utilities::ToStringNullOk(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utilities_ToStringNullOk_m3C534FD4DA84E34CC42EE5A1DEDB1F059042E97B (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_ToStringNullOk_m3C534FD4DA84E34CC42EE5A1DEDB1F059042E97B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
	}

IL_0009:
	{
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		return L_2;
	}
}
// System.String Facebook.Unity.Utilities::FormatToString(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utilities_FormatToString_mFDF8FE218E86B460E55A2CC314A9E73BFAB38037 (String_t* ___baseString0, String_t* ___className1, RuntimeObject* ___propertiesAndValues2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_FormatToString_mFDF8FE218E86B460E55A2CC314A9E73BFAB38037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B7_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___baseString0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		StringBuilder_t * L_2 = V_0;
		String_t* L_3 = ___baseString0;
		NullCheck(L_2);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0011:
	{
		StringBuilder_t * L_4 = V_0;
		String_t* L_5 = ___className1;
		NullCheck(L_4);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_4, _stringLiteralA587DE5901CDE4DAE90805C5318FE0F1C7569535, L_5, /*hidden argument*/NULL);
		RuntimeObject* L_6 = ___propertiesAndValues2;
		NullCheck(L_6);
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_tE3CF3F03E954D641795F7352C15103E24DC192FD_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005a;
		}

IL_0027:
		{
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  L_9 = InterfaceFuncInvoker0< KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_tEDACB9E446C60A32943C9E53F8C59EDD843CC78C_il2cpp_TypeInfo_var, L_8);
			V_2 = L_9;
			String_t* L_10 = KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			G_B7_0 = _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
			goto IL_0045;
		}

IL_003e:
		{
			String_t* L_11 = KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var);
			G_B7_0 = L_11;
		}

IL_0045:
		{
			V_3 = G_B7_0;
			StringBuilder_t * L_12 = V_0;
			String_t* L_13 = KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_RuntimeMethod_var);
			String_t* L_14 = V_3;
			NullCheck(L_12);
			StringBuilder_AppendFormat_m9DBA7709F546159ABC85BA341965305AB044D1B7(L_12, _stringLiteral0109B1C3DDC80AAE8E0800FBE5640A9027E3256C, L_13, L_14, /*hidden argument*/NULL);
		}

IL_005a:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			bool L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0027;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_1;
			if (!L_17)
			{
				goto IL_006d;
			}
		}

IL_0067:
		{
			RuntimeObject* L_18 = V_1;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_18);
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(100)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006e:
	{
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		return L_20;
	}
}
// System.DateTime Facebook.Unity.Utilities::ParseExpirationDateFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Utilities_ParseExpirationDateFromResult_m3F3CD3197671E92E8AB29ABD1233827C299E0CF6 (RuntimeObject* ___resultDictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_ParseExpirationDateFromResult_m3F3CD3197671E92E8AB29ABD1233827C299E0CF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		bool L_0 = Constants_get_IsWeb_mAF9BE568F0E0FE09BF5325EE07B4FD9F8A39EB04(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_1 = ___resultDictionary0;
		IL2CPP_RUNTIME_CLASS_INIT(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var);
		String_t* L_2 = ((LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields*)il2cpp_codegen_static_fields_for(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var))->get_ExpirationTimestampKey_7();
		int64_t L_3 = Utilities_GetValueOrDefault_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m3E1B76667BAC036E00B6450974E71B322166050A(L_1, L_2, (bool)1, /*hidden argument*/Utilities_GetValueOrDefault_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m3E1B76667BAC036E00B6450974E71B322166050A_RuntimeMethod_var);
		V_1 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_4 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_2 = L_4;
		int64_t L_5 = V_1;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_6 = DateTime_AddSeconds_m36DC8835432569A70AC5120359527350DD65D6B2((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_2), (((double)((double)L_5))), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0067;
	}

IL_0026:
	{
		RuntimeObject* L_7 = ___resultDictionary0;
		IL2CPP_RUNTIME_CLASS_INIT(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var);
		String_t* L_8 = ((LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields*)il2cpp_codegen_static_fields_for(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var))->get_ExpirationTimestampKey_7();
		String_t* L_9 = Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C(L_7, L_8, (bool)1, /*hidden argument*/Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C_RuntimeMethod_var);
		bool L_10 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_9, (int32_t*)(&V_3), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		bool L_12 = Constants_get_IsGameroom_m82A009068C89283D21CE925A09A30BAD5E0CAF0D(/*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_13 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_2 = L_13;
		int32_t L_14 = V_3;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_15 = DateTime_AddSeconds_m36DC8835432569A70AC5120359527350DD65D6B2((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_2), (((double)((double)L_14))), /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_0067;
	}

IL_0058:
	{
		int32_t L_16 = V_3;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_17 = Utilities_FromTimestamp_mE7557EF41779545A1CC2EF3BB2EB5255B076A9D2(L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_0067;
	}

IL_0061:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_18 = ((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var))->get_MaxValue_32();
		V_0 = L_18;
	}

IL_0067:
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_19 = V_0;
		return L_19;
	}
}
// System.Nullable`1<System.DateTime> Facebook.Unity.Utilities::ParseLastRefreshFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  Utilities_ParseLastRefreshFromResult_m8BF55B8C5CA5DF056CF8EA4A517D4E92A66A59E4 (RuntimeObject* ___resultDictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_ParseLastRefreshFromResult_m8BF55B8C5CA5DF056CF8EA4A517D4E92A66A59E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___resultDictionary0;
		String_t* L_1 = Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C(L_0, _stringLiteral47F9D49B2D201B4D78E1CCCE1726DE4300A7235F, (bool)0, /*hidden argument*/Utilities_GetValueOrDefault_TisString_t_m6C67505F33E0DC45BFB79015C0BCAE1808F5089C_RuntimeMethod_var);
		bool L_2 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_5 = Utilities_FromTimestamp_mE7557EF41779545A1CC2EF3BB2EB5255B076A9D2(L_4, /*hidden argument*/NULL);
		Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m6F1318489D4CCB86A38F0DB8B2403B9B0E7A0549((&L_6), L_5, /*hidden argument*/Nullable_1__ctor_m6F1318489D4CCB86A38F0DB8B2403B9B0E7A0549_RuntimeMethod_var);
		return L_6;
	}

IL_0025:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9 ));
		Nullable_1_t00B80B6C3FA08F602D84359FF95A2F37037298D9  L_7 = V_1;
		return L_7;
	}
}
// System.Collections.Generic.ICollection`1<System.String> Facebook.Unity.Utilities::ParsePermissionFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utilities_ParsePermissionFromResult_m5AD18ED5C72041458B10153DA51BFCCAB80F6C22 (RuntimeObject* ___resultDictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_ParsePermissionFromResult_m5AD18ED5C72041458B10153DA51BFCCAB80F6C22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	{
		RuntimeObject* L_0 = ___resultDictionary0;
		IL2CPP_RUNTIME_CLASS_INIT(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var);
		String_t* L_1 = ((LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields*)il2cpp_codegen_static_fields_for(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var))->get_PermissionsKey_8();
		bool L_2 = Utilities_TryGetValue_TisString_t_mED3EC40D7819612814FEE9617313BEEED32AE693(L_0, L_1, (String_t**)(&V_0), /*hidden argument*/Utilities_TryGetValue_TisString_t_mED3EC40D7819612814FEE9617313BEEED32AE693_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_4 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_3, L_5, /*hidden argument*/NULL);
		V_1 = (RuntimeObject*)L_6;
		goto IL_0051;
	}

IL_0023:
	{
		RuntimeObject* L_7 = ___resultDictionary0;
		IL2CPP_RUNTIME_CLASS_INIT(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var);
		String_t* L_8 = ((LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields*)il2cpp_codegen_static_fields_for(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var))->get_PermissionsKey_8();
		bool L_9 = Utilities_TryGetValue_TisIEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73_mC491DF529FAADFF9057A5977DB9F30C8269E6645(L_7, L_8, (RuntimeObject**)(&V_1), /*hidden argument*/Utilities_TryGetValue_TisIEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73_mC491DF529FAADFF9057A5977DB9F30C8269E6645_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0051;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = (RuntimeObject*)L_10;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var);
		String_t* L_13 = ((LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_StaticFields*)il2cpp_codegen_static_fields_for(LoginResult_t7A37F6E8AD7CD37958B8BF5281F85B4A3C90A72E_il2cpp_TypeInfo_var))->get_PermissionsKey_8();
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(FacebookLogger_t5EC57C30179E0A3BA8D7C4C2703E7B39105EC145_il2cpp_TypeInfo_var);
		FacebookLogger_Warn_m4FE4B8407A55E8DE87E66D88A755FC42A36FBAEE(_stringLiteralCAD97A96A588D30CDD3A2FBB9A08E52FF3BE7A40, L_12, /*hidden argument*/NULL);
	}

IL_0051:
	{
		RuntimeObject* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_il2cpp_TypeInfo_var);
		Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * L_15 = ((U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_il2cpp_TypeInfo_var))->get_U3CU3E9__18_0_1();
		Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * L_16 = L_15;
		G_B5_0 = L_16;
		G_B5_1 = L_14;
		if (L_16)
		{
			G_B6_0 = L_16;
			G_B6_1 = L_14;
			goto IL_0071;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_il2cpp_TypeInfo_var);
		U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF * L_17 = ((U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * L_18 = (Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF *)il2cpp_codegen_object_new(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF_il2cpp_TypeInfo_var);
		Func_2__ctor_m0E11CA9B34D5352759D42FDEA69CC14E7C949427(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec_U3CParsePermissionFromResultU3Eb__18_0_m9FAEBB11015874E3A0DFD124E3D730E3158A9C66_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m0E11CA9B34D5352759D42FDEA69CC14E7C949427_RuntimeMethod_var);
		Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * L_19 = L_18;
		((U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_il2cpp_TypeInfo_var))->set_U3CU3E9__18_0_1(L_19);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_1;
	}

IL_0071:
	{
		RuntimeObject* L_20 = Enumerable_Select_TisRuntimeObject_TisString_t_mF297F0ADF2AF7D55B365D2122F5A887784112832(G_B6_1, G_B6_0, /*hidden argument*/Enumerable_Select_TisRuntimeObject_TisString_t_mF297F0ADF2AF7D55B365D2122F5A887784112832_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_21 = Enumerable_ToList_TisString_t_m5819BB1395C8CAB17E7B1E8EED76702D3AE855B5(L_20, /*hidden argument*/Enumerable_ToList_TisString_t_m5819BB1395C8CAB17E7B1E8EED76702D3AE855B5_RuntimeMethod_var);
		return L_21;
	}
}
// System.DateTime Facebook.Unity.Utilities::FromTimestamp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Utilities_FromTimestamp_mE7557EF41779545A1CC2EF3BB2EB5255B076A9D2 (int32_t ___timestamp0, const RuntimeMethod* method)
{
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m6567CDEB97E6541CE4AF8ADDC617CFF419D5A58E((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___timestamp0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = DateTime_AddSeconds_m36DC8835432569A70AC5120359527350DD65D6B2((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), (((double)((double)L_1))), /*hidden argument*/NULL);
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
// System.Void Facebook.Unity.Utilities_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5D181F3CFC55AD1A41DA1B1C03E05B3D53EED3FD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m5D181F3CFC55AD1A41DA1B1C03E05B3D53EED3FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF * L_0 = (U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF *)il2cpp_codegen_object_new(U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD1408A4B438004FCF1351218A031E46A8FC96CB1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Facebook.Unity.Utilities_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD1408A4B438004FCF1351218A031E46A8FC96CB1 (U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.Unity.Utilities_<>c::<ParsePermissionFromResult>b__18_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CParsePermissionFromResultU3Eb__18_0_m9FAEBB11015874E3A0DFD124E3D730E3158A9C66 (U3CU3Ec_tBDBB7FA54BE7402F17F015AFD7F2E042A76626BF * __this, RuntimeObject * ___permission0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___permission0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ResultContainer_set_RawResult_m45AAAA4F61AF38DAC0B3905C0E66C1C9A5FCFC25_inline (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CRawResultU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ResultContainer_set_ResultDictionary_m7AC4A7E98BB587882874A16EDF7459530699EC7B_inline (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CResultDictionaryU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ResultContainer_get_ResultDictionary_m3E73E04549719D57C7DB5C2F3674F96762F15B87_inline (ResultContainer_t8CFA751DE6B35D2D1EA954D8695C02F497515FFB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CResultDictionaryU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ShareResult_set_PostId_m9518B81E18FC24C12A424E63BF0B943CC8A7096F_inline (ShareResult_tBA07F39961725F2A6770227078CE67C781581954 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPostIdU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ShareResult_get_PostId_m10571B08C02499EAFC8DF1AA54DC4AD915675BAD_inline (ShareResult_tBA07F39961725F2A6770227078CE67C781581954 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPostIdU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
