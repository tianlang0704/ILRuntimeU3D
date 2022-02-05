#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.MethodDefinition>
struct Dictionary_2_t3550A4C8B8F309AD8ACA516083084FB996533535;
// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.TypeDefinition>
struct Dictionary_2_t3F982AE54B775251C27974F0B413E65B9987A583;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit
struct IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C;
// ILRuntime.Mono.Cecil.Pdb.IMetaDataImport
struct IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6;
// ILRuntime.Mono.Cecil.ModuleDefinition
struct ModuleDefinition_t8C198596F298EC0DD3F17A8E23EDE87B8B297FCD;
// ILRuntime.Mono.Cecil.Pdb.ModuleMetadata
struct ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
struct Guid_t;
struct IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C;
struct IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ILRuntime.Mono.Cecil.Pdb.ModuleMetadata
struct ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694  : public RuntimeObject
{
	// ILRuntime.Mono.Cecil.ModuleDefinition ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::module
	ModuleDefinition_t8C198596F298EC0DD3F17A8E23EDE87B8B297FCD* ___module_0;
	// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.TypeDefinition> ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::types
	Dictionary_2_t3F982AE54B775251C27974F0B413E65B9987A583* ___types_1;
	// System.Collections.Generic.Dictionary`2<System.UInt32,ILRuntime.Mono.Cecil.MethodDefinition> ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::methods
	Dictionary_2_t3550A4C8B8F309AD8ACA516083084FB996533535* ___methods_2;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Guid
struct Guid_t 
{
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
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};
// ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit
struct NOVTABLE IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetModuleProps_mC840D267A76322DADE1DEDE3FBFFF958E62FB11B(Il2CppChar* ___szName0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Save_mD7DE1DBE869B25B19E3C61159D8D3B8D9E823361(Il2CppChar* ___szFile0, uint32_t ___dwSaveFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToStream_mF0B30D2FEA42E410D07AD074811C750873A83771(intptr_t ___pIStream0, uint32_t ___dwSaveFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetSaveSize_mB411D8C978902BD04F8A5070DEA72ECD43966D6D(uint32_t ___fSave0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeDef_m30F3731627CE239DD393E9FBA8EB40B94E15BBAA(intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineNestedType_m99A22EF3C693256D2E3FD9968FF91C1692870352(intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t ___tdEncloser4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetHandler_m9598AB0ECED5D385E9C2A5BF762BBE4B769143C4(Il2CppIUnknown* ___pUnk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethod_m6822B9D4B1A925EF7316AC820A5B311070E4FA57(uint32_t ___td0, intptr_t ___zName1, uint32_t ___dwMethodFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___ulCodeRVA5, uint32_t ___dwImplFlags6, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethodImpl_mCB1E4D7121893198D517483DE0570309DC55149E(uint32_t ___td0, uint32_t ___tkBody1, uint32_t ___tkDecl2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeRefByName_mA71AF6950531F406E5C70CB1B7E283B210A3BDBA(uint32_t ___tkResolutionScope0, intptr_t ___szName1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportType_mB05AC384B3C4B20E304AB7227425B2972323A22E(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___pImport3, uint32_t ___tdImport4, intptr_t ___pAssemEmit5, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMemberRef_mFDC9D352D6E542EF7C7AE640AABD62E401536A90(uint32_t ___tkImport0, Il2CppChar* ___szName1, intptr_t ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportMember_m25879DCE4C0919C40E3BC2BFCE14B56316F5F2B4(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___pImport3, uint32_t ___mbMember4, intptr_t ___pAssemEmit5, uint32_t ___tkParent6, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineEvent_mB315268B4BFA33C370554195B8C23EB2EFBD814B(uint32_t ___td0, Il2CppChar* ___szEvent1, uint32_t ___dwEventFlags2, uint32_t ___tkEventType3, uint32_t ___mdAddOn4, uint32_t ___mdRemoveOn5, uint32_t ___mdFire6, intptr_t ___rmdOtherMethods7, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetClassLayout_mCC56685D20CCE7AFBEA9214C34B5507EA7AE8AFB(uint32_t ___td0, uint32_t ___dwPackSize1, intptr_t ___rFieldOffsets2, uint32_t ___ulClassSize3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteClassLayout_m6CC8D7F911CD44CC3B21B12155D78E0659490558(uint32_t ___td0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldMarshal_m7116BAD13B4048ED1E7B9FEBDF07922C43B3C0A3(uint32_t ___tk0, intptr_t ___pvNativeType1, uint32_t ___cbNativeType2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteFieldMarshal_mD1944C516D21C884A1DA3F807599C1B9BCB33765(uint32_t ___tk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePermissionSet_m99ED99DD439D590E468869301EF8ED4189D32EC8(uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetRVA_m74ED3B6A540A726DFEF4FB08E3DA3D23DDF2A297(uint32_t ___md0, uint32_t ___ulRVA1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromSig_m16B82D4C5EC78EA6FE384F3BEDE55EBB429628AE(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineModuleRef_m6A25DAD7A4B992F691976E14A40618871550B241(Il2CppChar* ___szName0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParent_mCC3CA4223E008E542A474CC7456F732810377E17(uint32_t ___mr0, uint32_t ___tk1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromTypeSpec_mC0D2C76EF9FFAFA0D03736D2A0F0E472039F04EA(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToMemory_m7FEAB7C1D1E8B0EE3E48BDB569A3EA7C30E614F2(intptr_t ___pbData0, uint32_t ___cbData1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineUserString_mAE24A2C7A880E41BD78283C15DC86C6F4BFEF83F(Il2CppChar* ___szString0, uint32_t ___cchString1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteToken_mC5D88FC045064A14C25E50E37DAA7CF575735784(uint32_t ___tkObj0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodProps_m7F6EC119814599A6E4F2A4A2A73187323219CC80(uint32_t ___md0, uint32_t ___dwMethodFlags1, uint32_t ___ulCodeRVA2, uint32_t ___dwImplFlags3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetTypeDefProps_m54EC5EEF2B606C92D069BBBF50760BAFE7BCA364(uint32_t ___td0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetEventProps_m328BD4765E26BBA8895C57243E6E056BCFEFF0A0(uint32_t ___ev0, uint32_t ___dwEventFlags1, uint32_t ___tkEventType2, uint32_t ___mdAddOn3, uint32_t ___mdRemoveOn4, uint32_t ___mdFire5, intptr_t ___rmdOtherMethods6) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPermissionSetProps_mACC0013B0012A5F935FAFAEB2B432C73EACAF2E7(uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePinvokeMap_mB58EBD77CA3E28BB2407111DE5AF36758AF4AF25(uint32_t ___tk0, uint32_t ___dwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___mrImportDLL3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPinvokeMap_mB24D05CA82DD5D085367ADFFD14E3586C55E9022(uint32_t ___tk0, uint32_t ___dwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___mrImportDLL3) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeletePinvokeMap_mCFD654830FD481AEE52B7F6B826264375BF34069(uint32_t ___tk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineCustomAttribute_mFCA5ADB87A1D4990B3CE82A0731A834843042ADC(uint32_t ___tkObj0, uint32_t ___tkType1, intptr_t ___pCustomAttribute2, uint32_t ___cbCustomAttribute3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetCustomAttributeValue_m69FBF2BB93E17B190F24FEB694CDF863EE45E9FD(uint32_t ___pcv0, intptr_t ___pCustomAttribute1, uint32_t ___cbCustomAttribute2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineField_m6139CB67CE6CE32E38867B3043A7A1F6D89DB3F0(uint32_t ___td0, Il2CppChar* ___szName1, uint32_t ___dwFieldFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineProperty_m0A994B3C50886C213EB4E54F20E13DC96E33B1BC(uint32_t ___td0, Il2CppChar* ___szProperty1, uint32_t ___dwPropFlags2, intptr_t ___pvSig3, uint32_t ___cbSig4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t ___mdSetter8, uint32_t ___mdGetter9, intptr_t ___rmdOtherMethods10, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineParam_m110CADED8CE4A3F9B2143B685F5B6E495ACFF071(uint32_t ___md0, uint32_t ___ulParamSeq1, Il2CppChar* ___szName2, uint32_t ___dwParamFlags3, uint32_t ___dwCPlusTypeFlag4, intptr_t ___pValue5, uint32_t ___cchValue6, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldProps_m404DF79CABC6647A74292B892321F782B59A4240(uint32_t ___fd0, uint32_t ___dwFieldFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPropertyProps_m74BA1D6F2BD3D05E798B4596D0F36011AA57BE83(uint32_t ___pr0, uint32_t ___dwPropFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4, uint32_t ___mdSetter5, uint32_t ___mdGetter6, intptr_t ___rmdOtherMethods7) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParamProps_m9735EB1611160EF08CB275EA4642EF5B828BF8A9(uint32_t ___pd0, Il2CppChar* ___szName1, uint32_t ___dwParamFlags2, uint32_t ___dwCPlusTypeFlag3, intptr_t ___pValue4, uint32_t ___cchValue5) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineSecurityAttributeSet_m7DE694D3199F275E1D1883A80344947EE709B315(uint32_t ___tkObj0, intptr_t ___rSecAttrs1, uint32_t ___cSecAttrs2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_ApplyEditAndContinue_m98F63F07409155922E4F13A85872D1C677E138F6(Il2CppIUnknown* ___pImport0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_TranslateSigWithScope_m785C5478EEEF26D4B625E2B6EA412E64E46578AB(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___import3, intptr_t ___pbSigBlob4, uint32_t ___cbSigBlob5, intptr_t ___pAssemEmit6, IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C* ___emit7, intptr_t ___pvTranslatedSig8, uint32_t ___cbTranslatedSigMax9, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodImplFlags_m48FD07FE2CE84331028AB24C45D6ED9B7ED2940F(uint32_t ___md0, uint32_t ___dwImplFlags1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldRVA_mF2FF5F0955BAB625A1BC340C3EA585FC65E75814(uint32_t ___fd0, uint32_t ___ulRVA1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Merge_m1BA4D0504F10BB734435C3A32064735496C18271(IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___pImport0, intptr_t ___pHostMapToken1, Il2CppIUnknown* ___pHandler2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_MergeEnd_mA4C8A0BF5FCB3A858EE1A4D8BE9E4F077F52CA4C() = 0;
};
// ILRuntime.Mono.Cecil.Pdb.IMetaDataImport
struct NOVTABLE IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual void STDCALL IMetaDataImport_CloseEnum_m310C13C72081C3A7FDAFE41E34B863EB392A876C(uint32_t ___hEnum0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_CountEnum_m823E43D3A263850E298529646B8CBAE22D34C03C(uint32_t ___hEnum0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResetEnum_m280AA7B10625D848A6B0645D266FBA89679387DA(uint32_t ___hEnum0, uint32_t ___ulPos1) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeDefs_m6481834CC2528E4E612DA8A9DD984DC8183830DB(uint32_t* ___phEnum0, uint32_t* ___rTypeDefs1, uint32_t ___cMax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumInterfaceImpls_mE1E0B8165E3A3C4642FAF1A305559C9B2E2ED634(uint32_t* ___phEnum0, uint32_t ___td1, uint32_t* ___rImpls2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeRefs_m721506E5BD34CAC28C5339ECB26CD74F1A7CAF8E(uint32_t* ___phEnum0, uint32_t* ___rTypeRefs1, uint32_t ___cMax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeDefByName_mF2E3130D9E90C90E09B9E27874847C25D62D7AB9(Il2CppChar* ___szTypeDef0, uint32_t ___tkEnclosingClass1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetScopeProps_m29C9981D00A1EEE8D4C7A3F84A25A6A9D7CEE249(Il2CppChar* ___szName0, uint32_t ___cchName1, uint32_t* ___pchName2, Guid_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleFromScope_mCA37CF0F851AB797A20F037BB2DF6B347533779A(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeDefProps_m5A32D5C939952C9F4D8A17920E66994915F46F2D(uint32_t ___td0, intptr_t ___szTypeDef1, uint32_t ___cchTypeDef2, uint32_t* ___pchTypeDef3, intptr_t ___pdwTypeDefFlags4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetInterfaceImplProps_m5DA7865CDF02F9D32177D7217C698E47158CCA9A(uint32_t ___iiImpl0, uint32_t* ___pClass1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeRefProps_m3B584009C0F1670712EEC5D0C1130D95B9428FC4(uint32_t ___tr0, uint32_t* ___ptkResolutionScope1, Il2CppChar* ___szName2, uint32_t ___cchName3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResolveTypeRef_mA45CC81D7A807808D32571D48319A9532AE1A56F(uint32_t ___tr0, Guid_t* ___riid1, Il2CppIUnknown** ___ppIScope2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembers_m9DD4D628291029E8124D603D9E3B7467271B4E40(uint32_t* ___phEnum0, uint32_t ___cl1, uint32_t* ___rMembers2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembersWithName_m02922DB6B166BC48A2AB0B969ECBDD64B43068E2(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rMembers3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethods_m7EF7B26995F0861A0A848374FE5D6EEC1173871A(uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rMethods2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodsWithName_m80F19424E334DFE223E0F229E70BC5ACABB3E9C0(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rMethods3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFields_m3F62CA7DF6B92ADEB6178B073E69B2442BB9591F(uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rFields2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFieldsWithName_m6CC323CA641E58F4BCA856B832BB6F358C1344BE(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rFields3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumParams_m0F22BEFA40D238C64A23E92C02252824BA31164F(uint32_t* ___phEnum0, uint32_t ___mb1, uint32_t* ___rParams2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMemberRefs_m9294B6F7F2E10004207590E1C5BB74A904DA2D03(uint32_t* ___phEnum0, uint32_t ___tkParent1, uint32_t* ___rMemberRefs2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodImpls_mC6D871056A7366E9BB435B72CA348A878CE76AB3(uint32_t* ___phEnum0, uint32_t ___td1, uint32_t* ___rMethodBody2, uint32_t* ___rMethodDecl3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumPermissionSets_m26600BE1C9CCF9F8B71684CCD7C5212528F7EC1A(uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___dwActions2, uint32_t* ___rPermission3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMember_mDDCC9CC98E60D8D5A6EC024EA551F58F9B1EBE2E(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMethod_mDFD229591597FCAC8ADCDB940E4676F75FA53046(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindField_mAD74A5812E92D020760493ACDB145907F674E2AC(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMemberRef_mC6A7E418448EBB3080D92AD74D4B925B5970775B(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodProps_mEFACC432F0160025F5197FDF0606C45CC0611FC3(uint32_t ___mb0, uint32_t* ___pClass1, intptr_t ___szMethod2, uint32_t ___cchMethod3, uint32_t* ___pchMethod4, intptr_t ___pdwAttr5, intptr_t ___ppvSigBlob6, intptr_t ___pcbSigBlob7, intptr_t ___pulCodeRVA8, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberRefProps_m991E6806B40BDA5FB76207D26B3EA6E703112588(uint32_t ___mr0, uint32_t* ___ptk1, Il2CppChar* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, intptr_t* ___ppvSigBlob5, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumProperties_mB60344A5562BDE26FC6D36A8B8332C02B81D3E9E(uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rProperties2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumEvents_m84AD7CB71CC743B956A492A3552F030DBD15363E(uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rEvents2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetEventProps_m324E64B5E7891770D5E41DAB3CED38C8E6DC3CF7(uint32_t ___ev0, uint32_t* ___pClass1, Il2CppChar* ___szEvent2, uint32_t ___cchEvent3, uint32_t* ___pchEvent4, uint32_t* ___pdwEventFlags5, uint32_t* ___ptkEventType6, uint32_t* ___pmdAddOn7, uint32_t* ___pmdRemoveOn8, uint32_t* ___pmdFire9, uint32_t* ___rmdOtherMethod10, uint32_t ___cMax11, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodSemantics_m73AF9164145EEF98A27CEAD68AE89696D8802DFC(uint32_t* ___phEnum0, uint32_t ___mb1, uint32_t* ___rEventProp2, uint32_t ___cMax3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodSemantics_mC1C1BE975C52FE0E4A33BE76427FAA04BEEDE8CC(uint32_t ___mb0, uint32_t ___tkEventProp1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetClassLayout_m82BEF5233202F78B64501CACD86AB75A4B8B58AF(uint32_t ___td0, uint32_t* ___pdwPackSize1, intptr_t ___rFieldOffset2, uint32_t ___cMax3, uint32_t* ___pcFieldOffset4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldMarshal_mF66AF1CA91704F4834BAD4E302D2A2A22D456FB4(uint32_t ___tk0, intptr_t* ___ppvNativeType1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetRVA_m966A46E321154BEFF702D8AE65E00348A09FD1DF(uint32_t ___tk0, uint32_t* ___pulCodeRVA1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPermissionSetProps_mD211E233325CA81166BDC469672A2F530C13D7A4(uint32_t ___pm0, uint32_t* ___pdwAction1, intptr_t* ___ppvPermission2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetSigFromToken_m4E7A28C2755BE530F2E47812A8387BB0E5366EAB(uint32_t ___mdSig0, intptr_t* ___ppvSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleRefProps_m18B35B5BBB834EE0E737826DBC1AD2D1F6CAF420(uint32_t ___mur0, Il2CppChar* ___szName1, uint32_t ___cchName2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumModuleRefs_m6AA7CA2777C5008449A0C0D03B2B1CFFF3C7ADD1(uint32_t* ___phEnum0, uint32_t* ___rModuleRefs1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeSpecFromToken_m441F2AA549A09B7345BECAFFF4444BB799DC3AD4(uint32_t ___typespec0, intptr_t* ___ppvSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNameFromToken_m31D57A947ACED822F6267DD7A85B5E2581FB434A(uint32_t ___tk0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUnresolvedMethods_m2F949D8A6BCC14AC679A2B875A5B6B3F69DD9876(uint32_t* ___phEnum0, uint32_t* ___rMethods1, uint32_t ___cMax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetUserString_m1E2D0282CE6E121D966524737D47A0E54198BC71(uint32_t ___stk0, Il2CppChar* ___szString1, uint32_t ___cchString2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPinvokeMap_m9B17B03B6B31AE63368E1B2410B03B7019531D8A(uint32_t ___tk0, uint32_t* ___pdwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___cchImportName3, uint32_t* ___pchImportName4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumSignatures_m07BDED2BC34DAE35BF9E271EAC56458EB9D07BBE(uint32_t* ___phEnum0, uint32_t* ___rSignatures1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeSpecs_m4E85D3D62F6745C072DFD629B4EB111CC84C0454(uint32_t* ___phEnum0, uint32_t* ___rTypeSpecs1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUserStrings_m00D146F142405717EB949A12F76A6A6C5A54A1C1(uint32_t* ___phEnum0, uint32_t* ___rStrings1, uint32_t ___cmax2, uint32_t* comReturnValue) = 0;
	virtual int32_t STDCALL IMetaDataImport_GetParamForMethodIndex_mCBBFD3190A2B2135CABAC4C8B74D59A8BA56E532(uint32_t ___md0, uint32_t ___ulParamSeq1, uint32_t* ___pParam2) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumCustomAttributes_m150AAE4F9C8EB7B2ED6407B3C00D40920041C035(uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___tkType2, uint32_t* ___rCustomAttributes3, uint32_t ___cMax4, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeProps_m2C7D85E0C4469CA0B0A22083380C917EB390A7AE(uint32_t ___cv0, uint32_t* ___ptkObj1, uint32_t* ___ptkType2, intptr_t* ___ppBlob3, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeRef_mB031CA8927A8E8C5A89E0542758FE08D860D94E2(uint32_t ___tkResolutionScope0, Il2CppChar* ___szName1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberProps_m705554544233D93420572E09373B3D879028CC74(uint32_t ___mb0, uint32_t* ___pClass1, Il2CppChar* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pulCodeRVA8, uint32_t* ___pdwImplFlags9, uint32_t* ___pdwCPlusTypeFlag10, intptr_t* ___ppValue11, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldProps_m8B4CB0E0AC7300E75BB85B8995CB0A678E16F603(uint32_t ___mb0, uint32_t* ___pClass1, Il2CppChar* ___szField2, uint32_t ___cchField3, uint32_t* ___pchField4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppValue9, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPropertyProps_m1052916C42674704A3DFC12FBA066257C654157C(uint32_t ___prop0, uint32_t* ___pClass1, Il2CppChar* ___szProperty2, uint32_t ___cchProperty3, uint32_t* ___pchProperty4, uint32_t* ___pdwPropFlags5, intptr_t* ___ppvSig6, uint32_t* ___pbSig7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppDefaultValue9, uint32_t* ___pcchDefaultValue10, uint32_t* ___pmdSetter11, uint32_t* ___pmdGetter12, uint32_t* ___rmdOtherMethod13, uint32_t ___cMax14, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetParamProps_m198461F87BDDAF573B02D64C083F826E1B528321(uint32_t ___tk0, uint32_t* ___pmd1, uint32_t* ___pulSequence2, Il2CppChar* ___szName3, uint32_t ___cchName4, uint32_t* ___pchName5, uint32_t* ___pdwAttr6, uint32_t* ___pdwCPlusTypeFlag7, intptr_t* ___ppValue8, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeByName_m917AB8DC144552B8BE73EEE0C033869715834EB5(uint32_t ___tkObj0, Il2CppChar* ___szName1, intptr_t* ___ppData2, uint32_t* comReturnValue) = 0;
	virtual int32_t STDCALL IMetaDataImport_IsValidToken_mD62AC24BBC10542D87BFBBE4C25C3B4ECAF7FEB4(uint32_t ___tk0) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNestedClassProps_mEBA3D1888E36C41231878DF70F5644B3D2808112(uint32_t ___tdNestedClass0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNativeCallConvFromSig_m2ED7F998312F16D32BC3B9371CC90B3B3BAF3C57(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMetaDataImport_IsGlobal_m3A0FAB8CB8D045EA53B1ED1456F242BD768EEBBD(uint32_t ___pd0, int32_t* comReturnValue) = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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



// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetModuleProps(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetModuleProps_mCE46E963301C71CB9A9F3EC53EA60476EC1229E0 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, String_t* ___szName0, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::Save(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_Save_m2758C37F408777679004F165C98BFF99F11ADDCE (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, String_t* ___szFile0, uint32_t ___dwSaveFlags1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SaveToStream(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SaveToStream_m32DE965FA39DDD619D82F59EF423D67234F12E95 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___pIStream0, uint32_t ___dwSaveFlags1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetSaveSize(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetSaveSize_m30B13D28B24C8CB9E460BB17999D7162CA075494 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___fSave0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineTypeDef(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineTypeDef_mBD6173726A6704E99C96891D10AEFB56E27C0822 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineNestedType(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineNestedType_mBD1DF07C67315171E027F5537BEFD55BE6B80419 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t ___tdEncloser4, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetHandler(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetHandler_m95DE7219A51A433DFA220F76EFD699D82DF806BA (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, RuntimeObject* ___pUnk0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineMethod(System.UInt32,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineMethod_mE94AFE3D216C57DF18AD213A13E215EA0910F90D (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, intptr_t ___zName1, uint32_t ___dwMethodFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___ulCodeRVA5, uint32_t ___dwImplFlags6, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineMethodImpl(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DefineMethodImpl_mD10655AB14FA21A546DE3D8996364EA49680B3DA (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, uint32_t ___tkBody1, uint32_t ___tkDecl2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineTypeRefByName(System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineTypeRefByName_m3700F2ECD2AB0140C72C6B44B75200D5FBBB6A55 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tkResolutionScope0, intptr_t ___szName1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineImportType(System.IntPtr,System.IntPtr,System.UInt32,ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineImportType_m850CD4A95CE566CCC43B331F6C0392DF000DDF45 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, RuntimeObject* ___pImport3, uint32_t ___tdImport4, intptr_t ___pAssemEmit5, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineMemberRef(System.UInt32,System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineMemberRef_m198FAE6EA5419F8C7A868FE059C8CFFB976C4C27 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tkImport0, String_t* ___szName1, intptr_t ___pvSigBlob2, uint32_t ___cbSigBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineImportMember(System.IntPtr,System.IntPtr,System.UInt32,ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineImportMember_m6092404810C238E1D85268F1588D214ABA60C0BD (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, RuntimeObject* ___pImport3, uint32_t ___mbMember4, intptr_t ___pAssemEmit5, uint32_t ___tkParent6, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineEvent(System.UInt32,System.String,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineEvent_mA48F3BB2063BF853A34B7E61A2807474362E81CF (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, String_t* ___szEvent1, uint32_t ___dwEventFlags2, uint32_t ___tkEventType3, uint32_t ___mdAddOn4, uint32_t ___mdRemoveOn5, uint32_t ___mdFire6, intptr_t ___rmdOtherMethods7, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetClassLayout(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetClassLayout_m4B86699A26A90D6AACC61583732C20D8BE1FA62F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, uint32_t ___dwPackSize1, intptr_t ___rFieldOffsets2, uint32_t ___ulClassSize3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeleteClassLayout(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeleteClassLayout_m8186ADB05C1E5276A25A3B1675CEC5FCD39120AD (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetFieldMarshal(System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetFieldMarshal_mE3C10867C43645A469038FD2EE2908AD6137E10F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, intptr_t ___pvNativeType1, uint32_t ___cbNativeType2, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeleteFieldMarshal(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeleteFieldMarshal_m3CD03AED762D31C1AA98611E7194E50F8E30C786 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefinePermissionSet(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefinePermissionSet_mA2CA877A21684F9D3581CB82968EC4A6154ADEE8 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetRVA(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetRVA_m0EDF65A51965BE5CD1748FD550C947F9B629A5DB (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___md0, uint32_t ___ulRVA1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTokenFromSig(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTokenFromSig_mDB0748D3B0392F1B7C62766AF8314BFFA4A729A5 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___pvSig0, uint32_t ___cbSig1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineModuleRef(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineModuleRef_mFD84C88DF9946045DEC5BBC1C18C45516FAC88B7 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, String_t* ___szName0, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetParent(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetParent_mDD08ED17C9832F8E79CDF64664681C8D41BC1439 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___mr0, uint32_t ___tk1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTokenFromTypeSpec(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTokenFromTypeSpec_m75D90A94493C469887FD643C6711EE98949841D7 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___pvSig0, uint32_t ___cbSig1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SaveToMemory(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SaveToMemory_m1BB314516E225848BC5AC3ABF12A29D3147E14DC (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___pbData0, uint32_t ___cbData1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineUserString(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineUserString_mE0304D32360FFCA0882AABC1E5F5320A855F16FB (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, String_t* ___szString0, uint32_t ___cchString1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeleteToken(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeleteToken_m81C6FC9D77ED80054AE1B78F4D1DEBB3B8D0ABEB (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tkObj0, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetMethodProps(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetMethodProps_m0523F9671BEDFDADD3B5B9D61B1951695457E237 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___md0, uint32_t ___dwMethodFlags1, uint32_t ___ulCodeRVA2, uint32_t ___dwImplFlags3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetTypeDefProps(System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetTypeDefProps_m446AEB656E77EDF6BF4DAC5D753891033AAB8500 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetEventProps(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetEventProps_m97F4B0F98DBCC146C65D6C5C1152B777FAB9AE3D (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___ev0, uint32_t ___dwEventFlags1, uint32_t ___tkEventType2, uint32_t ___mdAddOn3, uint32_t ___mdRemoveOn4, uint32_t ___mdFire5, intptr_t ___rmdOtherMethods6, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetPermissionSetProps(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_SetPermissionSetProps_m009D2504ED3AD6EAD6DD2A6D4DEE5DF19377440E (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefinePinvokeMap(System.UInt32,System.UInt32,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DefinePinvokeMap_mB95420D7A2808959DF8651C61D26EC2EA98E2F13 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, uint32_t ___dwMappingFlags1, String_t* ___szImportName2, uint32_t ___mrImportDLL3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetPinvokeMap(System.UInt32,System.UInt32,System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetPinvokeMap_m33DB31CFFC151A89C09728E9244191EA16A057CA (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, uint32_t ___dwMappingFlags1, String_t* ___szImportName2, uint32_t ___mrImportDLL3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DeletePinvokeMap(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_DeletePinvokeMap_m7A596DA14192526B84A2356464BBDEBE155E9060 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineCustomAttribute(System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineCustomAttribute_m94311B28536622EF08A0FD191D88986D631AC0F0 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tkObj0, uint32_t ___tkType1, intptr_t ___pCustomAttribute2, uint32_t ___cbCustomAttribute3, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetCustomAttributeValue(System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetCustomAttributeValue_m06C22B847A09C30DB8B968805165D5A701CE8E80 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___pcv0, intptr_t ___pCustomAttribute1, uint32_t ___cbCustomAttribute2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineField(System.UInt32,System.String,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineField_m2DFF9242A88F1C1BA714EDD9C7FCB41980938A67 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, String_t* ___szName1, uint32_t ___dwFieldFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineProperty(System.UInt32,System.String,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineProperty_m167902C6B1933BD66A58E844F041F3CC98221629 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, String_t* ___szProperty1, uint32_t ___dwPropFlags2, intptr_t ___pvSig3, uint32_t ___cbSig4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t ___mdSetter8, uint32_t ___mdGetter9, intptr_t ___rmdOtherMethods10, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineParam(System.UInt32,System.UInt32,System.String,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineParam_mE54F47B775580576FA760812D70B20959A64E065 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___md0, uint32_t ___ulParamSeq1, String_t* ___szName2, uint32_t ___dwParamFlags3, uint32_t ___dwCPlusTypeFlag4, intptr_t ___pValue5, uint32_t ___cchValue6, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetFieldProps(System.UInt32,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetFieldProps_mB13583DE91C748F7E6F377A00DD3ABD32715BA7B (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___fd0, uint32_t ___dwFieldFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetPropertyProps(System.UInt32,System.UInt32,System.UInt32,System.IntPtr,System.UInt32,System.UInt32,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetPropertyProps_mD51FA31D3E50BC225FBBF20F9BA506929A30E22E (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___pr0, uint32_t ___dwPropFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4, uint32_t ___mdSetter5, uint32_t ___mdGetter6, intptr_t ___rmdOtherMethods7, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetParamProps(System.UInt32,System.String,System.UInt32,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetParamProps_mDB8C3FF8DB7539732D428A4D525910C73443989C (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___pd0, String_t* ___szName1, uint32_t ___dwParamFlags2, uint32_t ___dwCPlusTypeFlag3, intptr_t ___pValue4, uint32_t ___cchValue5, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::DefineSecurityAttributeSet(System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_DefineSecurityAttributeSet_m5218825037BF1F696CFA8B37480CE6509046F754 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tkObj0, intptr_t ___rSecAttrs1, uint32_t ___cSecAttrs2, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::ApplyEditAndContinue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_ApplyEditAndContinue_mFF75718802A6E58C2DCED0E052BB3E148A78A10C (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, RuntimeObject* ___pImport0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::TranslateSigWithScope(System.IntPtr,System.IntPtr,System.UInt32,ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.IntPtr,System.UInt32,System.IntPtr,ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_TranslateSigWithScope_mA87F28C79E5076B75175E1E49AA6CEF5137BC2EC (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, RuntimeObject* ___import3, intptr_t ___pbSigBlob4, uint32_t ___cbSigBlob5, intptr_t ___pAssemEmit6, RuntimeObject* ___emit7, intptr_t ___pvTranslatedSig8, uint32_t ___cbTranslatedSigMax9, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetMethodImplFlags(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetMethodImplFlags_mC5BF4B22764946E606A094286B0489560F29F70E (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___md0, uint32_t ___dwImplFlags1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::SetFieldRVA(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_SetFieldRVA_m669CDE4CADAFBC3869DBCE3F99758EB78C9B7A03 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___fd0, uint32_t ___ulRVA1, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::Merge(ILRuntime.Mono.Cecil.Pdb.IMetaDataImport,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_Merge_m5C313FE69A9CF5C9F18AE94B3C7F29B69C259679 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, RuntimeObject* ___pImport0, intptr_t ___pHostMapToken1, RuntimeObject* ___pHandler2, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::MergeEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_MergeEnd_m8F7BFA31EEED280BA75CCD1DB5318B51394EA36C (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::CloseEnum(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_CloseEnum_mB517553756918251874C744D9A4B422D03BF013D (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___hEnum0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::CountEnum(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_CountEnum_mBEC6C0E435DA4449D9D52A9A3DD8CB58B24581A3 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___hEnum0, const RuntimeMethod* method) ;
// System.Void ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::ResetEnum(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleMetadata_ResetEnum_mED68573292C20DCC9D05F8C646007DFD46B2FECE (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___hEnum0, uint32_t ___ulPos1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumTypeDefs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumTypeDefs_m2A6657D77BA9380C62AD54E2E2E6FA0D1A19FA7F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rTypeDefs1, uint32_t ___cMax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumInterfaceImpls(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumInterfaceImpls_m9F3A2A1A353DCE48C5A86CC8CF6D2B9C92AEB47A (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___td1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rImpls2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumTypeRefs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumTypeRefs_m7D4AC70083F349902E95B6A76DCB5965A46C0E16 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rTypeRefs1, uint32_t ___cMax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindTypeDefByName(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindTypeDefByName_mB153E2C25B9B16DABBF8E3C9C1F83A64F073E512 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, String_t* ___szTypeDef0, uint32_t ___tkEnclosingClass1, const RuntimeMethod* method) ;
// System.Guid ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetScopeProps(System.Text.StringBuilder,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t ModuleMetadata_GetScopeProps_mB192EB125BC0D1D87E4BC0287775FFBF9C6D904D (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, StringBuilder_t* ___szName0, uint32_t ___cchName1, uint32_t* ___pchName2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetModuleFromScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetModuleFromScope_mD32437F4034B07A96025312FC32C7AEF12DFBCF1 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTypeDefProps(System.UInt32,System.IntPtr,System.UInt32,System.UInt32&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTypeDefProps_m9BC8D3FAB79A7ECD1F9B0855741F20DAC31C23ED (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, intptr_t ___szTypeDef1, uint32_t ___cchTypeDef2, uint32_t* ___pchTypeDef3, intptr_t ___pdwTypeDefFlags4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetInterfaceImplProps(System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetInterfaceImplProps_m9BE32202360432DB9C04BA3BF075DFA0A3DE62AF (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___iiImpl0, uint32_t* ___pClass1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTypeRefProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTypeRefProps_m9C663823EAF20DDD434C963B3FDE5FBD08C7976F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tr0, uint32_t* ___ptkResolutionScope1, StringBuilder_t* ___szName2, uint32_t ___cchName3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::ResolveTypeRef(System.UInt32,System.Guid&,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_ResolveTypeRef_m204BBB70AAD1921BF1FBCCA4B274A1AC3233225E (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tr0, Guid_t* ___riid1, RuntimeObject** ___ppIScope2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMembers(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMembers_m07B0AA12B8E3C05B7A13FB6FA9114BE390D1F6B4 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___cl1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMembers2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMembersWithName(System.UInt32&,System.UInt32,System.String,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMembersWithName_mD171E228467EA6C345067A4B44F6069E91D84509 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___cl1, String_t* ___szName2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMembers3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethods(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethods_mA5FFD0DCFDF1D8E0CFC7F2356BA2B1A8BF8A59AF (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rMethods2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethodsWithName(System.UInt32&,System.UInt32,System.String,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethodsWithName_m51DCF5C180142A0D88D255078304B07C96B474EC (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___cl1, String_t* ___szName2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMethods3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumFields(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumFields_mD9E1D6DC12C1DD88D39EF5FBA0F5FD982EEF4A49 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rFields2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumFieldsWithName(System.UInt32&,System.UInt32,System.String,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumFieldsWithName_m836DC6B4D5A03CF429F641A42D8C87E00CEA7F08 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___cl1, String_t* ___szName2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rFields3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumParams(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumParams_m9486735D04CD910E895FDA2E9EB8AAF12EF9E686 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___mb1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rParams2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMemberRefs(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMemberRefs_m8F2284665D71E8A99D1065ADF82F3A664492CD98 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___tkParent1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMemberRefs2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethodImpls(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethodImpls_m4B19F3D0092E4CE661FC01A808089E72E79F2037 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___td1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMethodBody2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMethodDecl3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumPermissionSets(System.UInt32&,System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumPermissionSets_m88682A7FA4F22E3887B04E47C3C21FB8136CBD4D (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___dwActions2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rPermission3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindMember(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindMember_m923256560837C0A205A63BF75B13B7BE70F3ED68 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, String_t* ___szName1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pvSigBlob2, uint32_t ___cbSigBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindMethod(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindMethod_m9FDCA4F8FB3E6F349800A3220B17960EB4F06828 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, String_t* ___szName1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pvSigBlob2, uint32_t ___cbSigBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindField(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindField_m584ABF30B71A04D3F3EF123DBAF321D660F90D52 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, String_t* ___szName1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pvSigBlob2, uint32_t ___cbSigBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindMemberRef(System.UInt32,System.String,System.Byte[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindMemberRef_m033FEF39C37D75F3B290FE3333AD8A3E1638A26F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, String_t* ___szName1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pvSigBlob2, uint32_t ___cbSigBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMethodProps(System.UInt32,System.UInt32&,System.IntPtr,System.UInt32,System.UInt32&,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMethodProps_mE40BA9931085101D0AB62A2457E49D4F7D95A6F8 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___mb0, uint32_t* ___pClass1, intptr_t ___szMethod2, uint32_t ___cchMethod3, uint32_t* ___pchMethod4, intptr_t ___pdwAttr5, intptr_t ___ppvSigBlob6, intptr_t ___pcbSigBlob7, intptr_t ___pulCodeRVA8, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMemberRefProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMemberRefProps_mF81334E0100448943EB3DBB7F846EF74996EA51F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___mr0, uint32_t* ___ptk1, StringBuilder_t* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, intptr_t* ___ppvSigBlob5, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumProperties(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumProperties_mF196AD10419823D5407DD5DEBAE744A2C5BE4886 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rProperties2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumEvents(System.UInt32&,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumEvents_mC2CF18857D166559E9CBCF51BCBB237FF4EE55AD (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rEvents2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetEventProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetEventProps_mB6D640E0CE3B97AA01A40582B8B755F1DD7A89DA (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___ev0, uint32_t* ___pClass1, StringBuilder_t* ___szEvent2, uint32_t ___cchEvent3, uint32_t* ___pchEvent4, uint32_t* ___pdwEventFlags5, uint32_t* ___ptkEventType6, uint32_t* ___pmdAddOn7, uint32_t* ___pmdRemoveOn8, uint32_t* ___pmdFire9, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rmdOtherMethod10, uint32_t ___cMax11, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumMethodSemantics(System.UInt32&,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumMethodSemantics_mDB47921155483623AC3B6A86B4B72526A1ACA846 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___mb1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rEventProp2, uint32_t ___cMax3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMethodSemantics(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMethodSemantics_m5BED806CE50A4605B7FF39B702704FE7534CACF0 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___mb0, uint32_t ___tkEventProp1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetClassLayout(System.UInt32,System.UInt32&,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetClassLayout_m663BC6556C6CB6F12D13E425E1B69F77EABB6F35 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___td0, uint32_t* ___pdwPackSize1, intptr_t ___rFieldOffset2, uint32_t ___cMax3, uint32_t* ___pcFieldOffset4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetFieldMarshal(System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetFieldMarshal_mE0986F50E3C130603817345A4F3ADF9B47F1FCD5 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, intptr_t* ___ppvNativeType1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetRVA(System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetRVA_m8DB3C662268009E449B7D75BC3A4B30402222818 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, uint32_t* ___pulCodeRVA1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetPermissionSetProps(System.UInt32,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetPermissionSetProps_m09653A469FC719751ED854A130453F53C43208A7 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___pm0, uint32_t* ___pdwAction1, intptr_t* ___ppvPermission2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetSigFromToken(System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetSigFromToken_m724A75B606FCC4ACCB70E8CA0DCBEDB3DD613F23 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___mdSig0, intptr_t* ___ppvSig1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetModuleRefProps(System.UInt32,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetModuleRefProps_mE1F146F5740FED57A267FDB72260DC65790B0911 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___mur0, StringBuilder_t* ___szName1, uint32_t ___cchName2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumModuleRefs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumModuleRefs_m8D62524559F44EA421928728CFC992F6F6B046B9 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rModuleRefs1, uint32_t ___cmax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetTypeSpecFromToken(System.UInt32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetTypeSpecFromToken_m2B449BFAD118FA5AA76D3C78975CFCBC87641866 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___typespec0, intptr_t* ___ppvSig1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetNameFromToken(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetNameFromToken_m6BA516BE418E4332F1C435938E4BEF1DD17B5F3A (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumUnresolvedMethods(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumUnresolvedMethods_m3A6F207459B66B6864E29F30AE8B7B82ABC1174F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rMethods1, uint32_t ___cMax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetUserString(System.UInt32,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetUserString_m3CD2D5827F947F26A3A25B6F6446C6DA9595D4E5 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___stk0, StringBuilder_t* ___szString1, uint32_t ___cchString2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetPinvokeMap(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetPinvokeMap_m959C1E8D69755B350C530C219489228B946E0C73 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, uint32_t* ___pdwMappingFlags1, StringBuilder_t* ___szImportName2, uint32_t ___cchImportName3, uint32_t* ___pchImportName4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumSignatures(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumSignatures_m244A3353FF53F10E6E2544BE10C144D4D03E6607 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rSignatures1, uint32_t ___cmax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumTypeSpecs(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumTypeSpecs_m6C50ADE4D30480365A419A989C541F087D9BEA6F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rTypeSpecs1, uint32_t ___cmax2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumUserStrings(System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumUserStrings_m7CBA61DB30CDE754E6944A5BF6600E34DFDF4241 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rStrings1, uint32_t ___cmax2, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetParamForMethodIndex(System.UInt32,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleMetadata_GetParamForMethodIndex_m789576602B44A5FFB3D4FD33C21B31BC26D52560 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___md0, uint32_t ___ulParamSeq1, uint32_t* ___pParam2, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::EnumCustomAttributes(System.UInt32&,System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_EnumCustomAttributes_m6634A3B66B71BE5ECEB87A00EDAC1CB248E74987 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___tkType2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rCustomAttributes3, uint32_t ___cMax4, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetCustomAttributeProps(System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetCustomAttributeProps_m4EE1C3F0B81A3C60E772DDC4DABB4C33E24C9FD1 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___cv0, uint32_t* ___ptkObj1, uint32_t* ___ptkType2, intptr_t* ___ppBlob3, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::FindTypeRef(System.UInt32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_FindTypeRef_m2B092E2C9EEB524CB9313DA55717BE10E1AAD231 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tkResolutionScope0, String_t* ___szName1, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetMemberProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetMemberProps_mE84578A3ADCE3EEAD5A69A2D66D241ABAF40F453 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___mb0, uint32_t* ___pClass1, StringBuilder_t* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pulCodeRVA8, uint32_t* ___pdwImplFlags9, uint32_t* ___pdwCPlusTypeFlag10, intptr_t* ___ppValue11, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetFieldProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetFieldProps_m107F45370E062093334EE961DF6180C746560694 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___mb0, uint32_t* ___pClass1, StringBuilder_t* ___szField2, uint32_t ___cchField3, uint32_t* ___pchField4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppValue9, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetPropertyProps(System.UInt32,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.IntPtr&,System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetPropertyProps_m20A20481F4A024E7A0EB3A766AD3EA52BE3C6D10 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___prop0, uint32_t* ___pClass1, StringBuilder_t* ___szProperty2, uint32_t ___cchProperty3, uint32_t* ___pchProperty4, uint32_t* ___pdwPropFlags5, intptr_t* ___ppvSig6, uint32_t* ___pbSig7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppDefaultValue9, uint32_t* ___pcchDefaultValue10, uint32_t* ___pmdSetter11, uint32_t* ___pmdGetter12, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___rmdOtherMethod13, uint32_t ___cMax14, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetParamProps(System.UInt32,System.UInt32&,System.UInt32&,System.Text.StringBuilder,System.UInt32,System.UInt32&,System.UInt32&,System.UInt32&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetParamProps_m28585EEFB3DF1A629B9ABD023250123AAE9CD90F (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, uint32_t* ___pmd1, uint32_t* ___pulSequence2, StringBuilder_t* ___szName3, uint32_t ___cchName4, uint32_t* ___pchName5, uint32_t* ___pdwAttr6, uint32_t* ___pdwCPlusTypeFlag7, intptr_t* ___ppValue8, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetCustomAttributeByName(System.UInt32,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetCustomAttributeByName_mF8B0A6D4827069ED3E022BA30A18D4683FF15E23 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tkObj0, String_t* ___szName1, intptr_t* ___ppData2, const RuntimeMethod* method) ;
// System.Boolean ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::IsValidToken(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleMetadata_IsValidToken_m998BA35F4BB592150050AC80174D326AEDE7AE82 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tk0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetNestedClassProps(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetNestedClassProps_mFD67FE2CCE2F314EE0C795FE79F1165C0FB75EE3 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___tdNestedClass0, const RuntimeMethod* method) ;
// System.UInt32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::GetNativeCallConvFromSig(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ModuleMetadata_GetNativeCallConvFromSig_m0E79A248E0EB746359069B461EB6FC2CF9AC8321 (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, intptr_t ___pvSig0, uint32_t ___cbSig1, const RuntimeMethod* method) ;
// System.Int32 ILRuntime.Mono.Cecil.Pdb.ModuleMetadata::IsGlobal(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleMetadata_IsGlobal_m884DE62EFEA9B313BF83F93AD79B73148716123C (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __this, uint32_t ___pd0, const RuntimeMethod* method) ;

// COM Callable Wrapper for ILRuntime.Mono.Cecil.Pdb.ModuleMetadata
struct ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper>, IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6
{
	inline ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetModuleProps_mC840D267A76322DADE1DEDE3FBFFF958E62FB11B(Il2CppChar* ___szName0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName0' to managed representation
		String_t* ____szName0_unmarshaled = NULL;
		____szName0_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName0);

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetModuleProps_mCE46E963301C71CB9A9F3EC53EA60476EC1229E0(__thisValue, ____szName0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Save_mD7DE1DBE869B25B19E3C61159D8D3B8D9E823361(Il2CppChar* ___szFile0, uint32_t ___dwSaveFlags1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szFile0' to managed representation
		String_t* ____szFile0_unmarshaled = NULL;
		____szFile0_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szFile0);

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_Save_m2758C37F408777679004F165C98BFF99F11ADDCE(__thisValue, ____szFile0_unmarshaled, ___dwSaveFlags1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToStream_mF0B30D2FEA42E410D07AD074811C750873A83771(intptr_t ___pIStream0, uint32_t ___dwSaveFlags1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SaveToStream_m32DE965FA39DDD619D82F59EF423D67234F12E95(__thisValue, ___pIStream0, ___dwSaveFlags1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetSaveSize_mB411D8C978902BD04F8A5070DEA72ECD43966D6D(uint32_t ___fSave0, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetSaveSize_m30B13D28B24C8CB9E460BB17999D7162CA075494(__thisValue, ___fSave0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeDef_m30F3731627CE239DD393E9FBA8EB40B94E15BBAA(intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineTypeDef_mBD6173726A6704E99C96891D10AEFB56E27C0822(__thisValue, ___szTypeDef0, ___dwTypeDefFlags1, ___tkExtends2, ___rtkImplements3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineNestedType_m99A22EF3C693256D2E3FD9968FF91C1692870352(intptr_t ___szTypeDef0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3, uint32_t ___tdEncloser4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineNestedType_mBD1DF07C67315171E027F5537BEFD55BE6B80419(__thisValue, ___szTypeDef0, ___dwTypeDefFlags1, ___tkExtends2, ___rtkImplements3, ___tdEncloser4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetHandler_m9598AB0ECED5D385E9C2A5BF762BBE4B769143C4(Il2CppIUnknown* ___pUnk0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pUnk0' to managed representation
		RuntimeObject* ____pUnk0_unmarshaled = NULL;
		if (___pUnk0 != NULL)
		{
			____pUnk0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pUnk0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pUnk0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pUnk0_unmarshaled), Il2CppIUnknown::IID, ___pUnk0);
			}
		}
		else
		{
			____pUnk0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetHandler_m95DE7219A51A433DFA220F76EFD699D82DF806BA(__thisValue, ____pUnk0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethod_m6822B9D4B1A925EF7316AC820A5B311070E4FA57(uint32_t ___td0, intptr_t ___zName1, uint32_t ___dwMethodFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___ulCodeRVA5, uint32_t ___dwImplFlags6, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineMethod_mE94AFE3D216C57DF18AD213A13E215EA0910F90D(__thisValue, ___td0, ___zName1, ___dwMethodFlags2, ___pvSigBlob3, ___cbSigBlob4, ___ulCodeRVA5, ___dwImplFlags6, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMethodImpl_mCB1E4D7121893198D517483DE0570309DC55149E(uint32_t ___td0, uint32_t ___tkBody1, uint32_t ___tkDecl2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DefineMethodImpl_mD10655AB14FA21A546DE3D8996364EA49680B3DA(__thisValue, ___td0, ___tkBody1, ___tkDecl2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineTypeRefByName_mA71AF6950531F406E5C70CB1B7E283B210A3BDBA(uint32_t ___tkResolutionScope0, intptr_t ___szName1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineTypeRefByName_m3700F2ECD2AB0140C72C6B44B75200D5FBBB6A55(__thisValue, ___tkResolutionScope0, ___szName1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportType_mB05AC384B3C4B20E304AB7227425B2972323A22E(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___pImport3, uint32_t ___tdImport4, intptr_t ___pAssemEmit5, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pImport3' to managed representation
		RuntimeObject* ____pImport3_unmarshaled = NULL;
		if (___pImport3 != NULL)
		{
			____pImport3_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pImport3, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pImport3_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pImport3_unmarshaled), IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID, ___pImport3);
			}
		}
		else
		{
			____pImport3_unmarshaled = NULL;
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineImportType_m850CD4A95CE566CCC43B331F6C0392DF000DDF45(__thisValue, ___pAssemImport0, ___pbHashValue1, ___cbHashValue2, ____pImport3_unmarshaled, ___tdImport4, ___pAssemEmit5, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineMemberRef_mFDC9D352D6E542EF7C7AE640AABD62E401536A90(uint32_t ___tkImport0, Il2CppChar* ___szName1, intptr_t ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineMemberRef_m198FAE6EA5419F8C7A868FE059C8CFFB976C4C27(__thisValue, ___tkImport0, ____szName1_unmarshaled, ___pvSigBlob2, ___cbSigBlob3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineImportMember_m25879DCE4C0919C40E3BC2BFCE14B56316F5F2B4(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___pImport3, uint32_t ___mbMember4, intptr_t ___pAssemEmit5, uint32_t ___tkParent6, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pImport3' to managed representation
		RuntimeObject* ____pImport3_unmarshaled = NULL;
		if (___pImport3 != NULL)
		{
			____pImport3_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pImport3, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pImport3_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pImport3_unmarshaled), IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID, ___pImport3);
			}
		}
		else
		{
			____pImport3_unmarshaled = NULL;
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineImportMember_m6092404810C238E1D85268F1588D214ABA60C0BD(__thisValue, ___pAssemImport0, ___pbHashValue1, ___cbHashValue2, ____pImport3_unmarshaled, ___mbMember4, ___pAssemEmit5, ___tkParent6, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineEvent_mB315268B4BFA33C370554195B8C23EB2EFBD814B(uint32_t ___td0, Il2CppChar* ___szEvent1, uint32_t ___dwEventFlags2, uint32_t ___tkEventType3, uint32_t ___mdAddOn4, uint32_t ___mdRemoveOn5, uint32_t ___mdFire6, intptr_t ___rmdOtherMethods7, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szEvent1' to managed representation
		String_t* ____szEvent1_unmarshaled = NULL;
		____szEvent1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szEvent1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineEvent_mA48F3BB2063BF853A34B7E61A2807474362E81CF(__thisValue, ___td0, ____szEvent1_unmarshaled, ___dwEventFlags2, ___tkEventType3, ___mdAddOn4, ___mdRemoveOn5, ___mdFire6, ___rmdOtherMethods7, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetClassLayout_mCC56685D20CCE7AFBEA9214C34B5507EA7AE8AFB(uint32_t ___td0, uint32_t ___dwPackSize1, intptr_t ___rFieldOffsets2, uint32_t ___ulClassSize3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetClassLayout_m4B86699A26A90D6AACC61583732C20D8BE1FA62F(__thisValue, ___td0, ___dwPackSize1, ___rFieldOffsets2, ___ulClassSize3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteClassLayout_m6CC8D7F911CD44CC3B21B12155D78E0659490558(uint32_t ___td0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DeleteClassLayout_m8186ADB05C1E5276A25A3B1675CEC5FCD39120AD(__thisValue, ___td0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldMarshal_m7116BAD13B4048ED1E7B9FEBDF07922C43B3C0A3(uint32_t ___tk0, intptr_t ___pvNativeType1, uint32_t ___cbNativeType2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetFieldMarshal_mE3C10867C43645A469038FD2EE2908AD6137E10F(__thisValue, ___tk0, ___pvNativeType1, ___cbNativeType2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteFieldMarshal_mD1944C516D21C884A1DA3F807599C1B9BCB33765(uint32_t ___tk0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DeleteFieldMarshal_m3CD03AED762D31C1AA98611E7194E50F8E30C786(__thisValue, ___tk0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePermissionSet_m99ED99DD439D590E468869301EF8ED4189D32EC8(uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefinePermissionSet_mA2CA877A21684F9D3581CB82968EC4A6154ADEE8(__thisValue, ___tk0, ___dwAction1, ___pvPermission2, ___cbPermission3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetRVA_m74ED3B6A540A726DFEF4FB08E3DA3D23DDF2A297(uint32_t ___md0, uint32_t ___ulRVA1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetRVA_m0EDF65A51965BE5CD1748FD550C947F9B629A5DB(__thisValue, ___md0, ___ulRVA1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromSig_m16B82D4C5EC78EA6FE384F3BEDE55EBB429628AE(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTokenFromSig_mDB0748D3B0392F1B7C62766AF8314BFFA4A729A5(__thisValue, ___pvSig0, ___cbSig1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineModuleRef_m6A25DAD7A4B992F691976E14A40618871550B241(Il2CppChar* ___szName0, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName0' to managed representation
		String_t* ____szName0_unmarshaled = NULL;
		____szName0_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName0);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineModuleRef_mFD84C88DF9946045DEC5BBC1C18C45516FAC88B7(__thisValue, ____szName0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParent_mCC3CA4223E008E542A474CC7456F732810377E17(uint32_t ___mr0, uint32_t ___tk1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetParent_mDD08ED17C9832F8E79CDF64664681C8D41BC1439(__thisValue, ___mr0, ___tk1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_GetTokenFromTypeSpec_mC0D2C76EF9FFAFA0D03736D2A0F0E472039F04EA(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTokenFromTypeSpec_m75D90A94493C469887FD643C6711EE98949841D7(__thisValue, ___pvSig0, ___cbSig1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SaveToMemory_m7FEAB7C1D1E8B0EE3E48BDB569A3EA7C30E614F2(intptr_t ___pbData0, uint32_t ___cbData1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SaveToMemory_m1BB314516E225848BC5AC3ABF12A29D3147E14DC(__thisValue, ___pbData0, ___cbData1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineUserString_mAE24A2C7A880E41BD78283C15DC86C6F4BFEF83F(Il2CppChar* ___szString0, uint32_t ___cchString1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szString0' to managed representation
		String_t* ____szString0_unmarshaled = NULL;
		____szString0_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szString0);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineUserString_mE0304D32360FFCA0882AABC1E5F5320A855F16FB(__thisValue, ____szString0_unmarshaled, ___cchString1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeleteToken_mC5D88FC045064A14C25E50E37DAA7CF575735784(uint32_t ___tkObj0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DeleteToken_m81C6FC9D77ED80054AE1B78F4D1DEBB3B8D0ABEB(__thisValue, ___tkObj0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodProps_m7F6EC119814599A6E4F2A4A2A73187323219CC80(uint32_t ___md0, uint32_t ___dwMethodFlags1, uint32_t ___ulCodeRVA2, uint32_t ___dwImplFlags3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetMethodProps_m0523F9671BEDFDADD3B5B9D61B1951695457E237(__thisValue, ___md0, ___dwMethodFlags1, ___ulCodeRVA2, ___dwImplFlags3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetTypeDefProps_m54EC5EEF2B606C92D069BBBF50760BAFE7BCA364(uint32_t ___td0, uint32_t ___dwTypeDefFlags1, uint32_t ___tkExtends2, intptr_t ___rtkImplements3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetTypeDefProps_m446AEB656E77EDF6BF4DAC5D753891033AAB8500(__thisValue, ___td0, ___dwTypeDefFlags1, ___tkExtends2, ___rtkImplements3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetEventProps_m328BD4765E26BBA8895C57243E6E056BCFEFF0A0(uint32_t ___ev0, uint32_t ___dwEventFlags1, uint32_t ___tkEventType2, uint32_t ___mdAddOn3, uint32_t ___mdRemoveOn4, uint32_t ___mdFire5, intptr_t ___rmdOtherMethods6) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetEventProps_m97F4B0F98DBCC146C65D6C5C1152B777FAB9AE3D(__thisValue, ___ev0, ___dwEventFlags1, ___tkEventType2, ___mdAddOn3, ___mdRemoveOn4, ___mdFire5, ___rmdOtherMethods6, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPermissionSetProps_mACC0013B0012A5F935FAFAEB2B432C73EACAF2E7(uint32_t ___tk0, uint32_t ___dwAction1, intptr_t ___pvPermission2, uint32_t ___cbPermission3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_SetPermissionSetProps_m009D2504ED3AD6EAD6DD2A6D4DEE5DF19377440E(__thisValue, ___tk0, ___dwAction1, ___pvPermission2, ___cbPermission3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefinePinvokeMap_mB58EBD77CA3E28BB2407111DE5AF36758AF4AF25(uint32_t ___tk0, uint32_t ___dwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___mrImportDLL3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szImportName2' to managed representation
		String_t* ____szImportName2_unmarshaled = NULL;
		____szImportName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szImportName2);

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DefinePinvokeMap_mB95420D7A2808959DF8651C61D26EC2EA98E2F13(__thisValue, ___tk0, ___dwMappingFlags1, ____szImportName2_unmarshaled, ___mrImportDLL3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPinvokeMap_mB24D05CA82DD5D085367ADFFD14E3586C55E9022(uint32_t ___tk0, uint32_t ___dwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___mrImportDLL3) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szImportName2' to managed representation
		String_t* ____szImportName2_unmarshaled = NULL;
		____szImportName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szImportName2);

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetPinvokeMap_m33DB31CFFC151A89C09728E9244191EA16A057CA(__thisValue, ___tk0, ___dwMappingFlags1, ____szImportName2_unmarshaled, ___mrImportDLL3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DeletePinvokeMap_mCFD654830FD481AEE52B7F6B826264375BF34069(uint32_t ___tk0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_DeletePinvokeMap_m7A596DA14192526B84A2356464BBDEBE155E9060(__thisValue, ___tk0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineCustomAttribute_mFCA5ADB87A1D4990B3CE82A0731A834843042ADC(uint32_t ___tkObj0, uint32_t ___tkType1, intptr_t ___pCustomAttribute2, uint32_t ___cbCustomAttribute3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineCustomAttribute_m94311B28536622EF08A0FD191D88986D631AC0F0(__thisValue, ___tkObj0, ___tkType1, ___pCustomAttribute2, ___cbCustomAttribute3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetCustomAttributeValue_m69FBF2BB93E17B190F24FEB694CDF863EE45E9FD(uint32_t ___pcv0, intptr_t ___pCustomAttribute1, uint32_t ___cbCustomAttribute2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetCustomAttributeValue_m06C22B847A09C30DB8B968805165D5A701CE8E80(__thisValue, ___pcv0, ___pCustomAttribute1, ___cbCustomAttribute2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineField_m6139CB67CE6CE32E38867B3043A7A1F6D89DB3F0(uint32_t ___td0, Il2CppChar* ___szName1, uint32_t ___dwFieldFlags2, intptr_t ___pvSigBlob3, uint32_t ___cbSigBlob4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineField_m2DFF9242A88F1C1BA714EDD9C7FCB41980938A67(__thisValue, ___td0, ____szName1_unmarshaled, ___dwFieldFlags2, ___pvSigBlob3, ___cbSigBlob4, ___dwCPlusTypeFlag5, ___pValue6, ___cchValue7, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineProperty_m0A994B3C50886C213EB4E54F20E13DC96E33B1BC(uint32_t ___td0, Il2CppChar* ___szProperty1, uint32_t ___dwPropFlags2, intptr_t ___pvSig3, uint32_t ___cbSig4, uint32_t ___dwCPlusTypeFlag5, intptr_t ___pValue6, uint32_t ___cchValue7, uint32_t ___mdSetter8, uint32_t ___mdGetter9, intptr_t ___rmdOtherMethods10, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szProperty1' to managed representation
		String_t* ____szProperty1_unmarshaled = NULL;
		____szProperty1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szProperty1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineProperty_m167902C6B1933BD66A58E844F041F3CC98221629(__thisValue, ___td0, ____szProperty1_unmarshaled, ___dwPropFlags2, ___pvSig3, ___cbSig4, ___dwCPlusTypeFlag5, ___pValue6, ___cchValue7, ___mdSetter8, ___mdGetter9, ___rmdOtherMethods10, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineParam_m110CADED8CE4A3F9B2143B685F5B6E495ACFF071(uint32_t ___md0, uint32_t ___ulParamSeq1, Il2CppChar* ___szName2, uint32_t ___dwParamFlags3, uint32_t ___dwCPlusTypeFlag4, intptr_t ___pValue5, uint32_t ___cchValue6, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName2' to managed representation
		String_t* ____szName2_unmarshaled = NULL;
		____szName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName2);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineParam_mE54F47B775580576FA760812D70B20959A64E065(__thisValue, ___md0, ___ulParamSeq1, ____szName2_unmarshaled, ___dwParamFlags3, ___dwCPlusTypeFlag4, ___pValue5, ___cchValue6, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldProps_m404DF79CABC6647A74292B892321F782B59A4240(uint32_t ___fd0, uint32_t ___dwFieldFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetFieldProps_mB13583DE91C748F7E6F377A00DD3ABD32715BA7B(__thisValue, ___fd0, ___dwFieldFlags1, ___dwCPlusTypeFlag2, ___pValue3, ___cchValue4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetPropertyProps_m74BA1D6F2BD3D05E798B4596D0F36011AA57BE83(uint32_t ___pr0, uint32_t ___dwPropFlags1, uint32_t ___dwCPlusTypeFlag2, intptr_t ___pValue3, uint32_t ___cchValue4, uint32_t ___mdSetter5, uint32_t ___mdGetter6, intptr_t ___rmdOtherMethods7) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetPropertyProps_mD51FA31D3E50BC225FBBF20F9BA506929A30E22E(__thisValue, ___pr0, ___dwPropFlags1, ___dwCPlusTypeFlag2, ___pValue3, ___cchValue4, ___mdSetter5, ___mdGetter6, ___rmdOtherMethods7, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetParamProps_m9735EB1611160EF08CB275EA4642EF5B828BF8A9(uint32_t ___pd0, Il2CppChar* ___szName1, uint32_t ___dwParamFlags2, uint32_t ___dwCPlusTypeFlag3, intptr_t ___pValue4, uint32_t ___cchValue5) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetParamProps_mDB8C3FF8DB7539732D428A4D525910C73443989C(__thisValue, ___pd0, ____szName1_unmarshaled, ___dwParamFlags2, ___dwCPlusTypeFlag3, ___pValue4, ___cchValue5, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_DefineSecurityAttributeSet_m7DE694D3199F275E1D1883A80344947EE709B315(uint32_t ___tkObj0, intptr_t ___rSecAttrs1, uint32_t ___cSecAttrs2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_DefineSecurityAttributeSet_m5218825037BF1F696CFA8B37480CE6509046F754(__thisValue, ___tkObj0, ___rSecAttrs1, ___cSecAttrs2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_ApplyEditAndContinue_m98F63F07409155922E4F13A85872D1C677E138F6(Il2CppIUnknown* ___pImport0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pImport0' to managed representation
		RuntimeObject* ____pImport0_unmarshaled = NULL;
		if (___pImport0 != NULL)
		{
			____pImport0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pImport0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pImport0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pImport0_unmarshaled), Il2CppIUnknown::IID, ___pImport0);
			}
		}
		else
		{
			____pImport0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_ApplyEditAndContinue_mFF75718802A6E58C2DCED0E052BB3E148A78A10C(__thisValue, ____pImport0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_TranslateSigWithScope_m785C5478EEEF26D4B625E2B6EA412E64E46578AB(intptr_t ___pAssemImport0, intptr_t ___pbHashValue1, uint32_t ___cbHashValue2, IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___import3, intptr_t ___pbSigBlob4, uint32_t ___cbSigBlob5, intptr_t ___pAssemEmit6, IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C* ___emit7, intptr_t ___pvTranslatedSig8, uint32_t ___cbTranslatedSigMax9, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___import3' to managed representation
		RuntimeObject* ____import3_unmarshaled = NULL;
		if (___import3 != NULL)
		{
			____import3_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___import3, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____import3_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____import3_unmarshaled), IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID, ___import3);
			}
		}
		else
		{
			____import3_unmarshaled = NULL;
		}

		// Marshaling of parameter '___emit7' to managed representation
		RuntimeObject* ____emit7_unmarshaled = NULL;
		if (___emit7 != NULL)
		{
			____emit7_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___emit7, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____emit7_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____emit7_unmarshaled), IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C::IID, ___emit7);
			}
		}
		else
		{
			____emit7_unmarshaled = NULL;
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_TranslateSigWithScope_mA87F28C79E5076B75175E1E49AA6CEF5137BC2EC(__thisValue, ___pAssemImport0, ___pbHashValue1, ___cbHashValue2, ____import3_unmarshaled, ___pbSigBlob4, ___cbSigBlob5, ___pAssemEmit6, ____emit7_unmarshaled, ___pvTranslatedSig8, ___cbTranslatedSigMax9, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetMethodImplFlags_m48FD07FE2CE84331028AB24C45D6ED9B7ED2940F(uint32_t ___md0, uint32_t ___dwImplFlags1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetMethodImplFlags_mC5BF4B22764946E606A094286B0489560F29F70E(__thisValue, ___md0, ___dwImplFlags1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_SetFieldRVA_mF2FF5F0955BAB625A1BC340C3EA585FC65E75814(uint32_t ___fd0, uint32_t ___ulRVA1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_SetFieldRVA_m669CDE4CADAFBC3869DBCE3F99758EB78C9B7A03(__thisValue, ___fd0, ___ulRVA1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_Merge_m1BA4D0504F10BB734435C3A32064735496C18271(IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6* ___pImport0, intptr_t ___pHostMapToken1, Il2CppIUnknown* ___pHandler2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pImport0' to managed representation
		RuntimeObject* ____pImport0_unmarshaled = NULL;
		if (___pImport0 != NULL)
		{
			____pImport0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pImport0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pImport0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pImport0_unmarshaled), IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID, ___pImport0);
			}
		}
		else
		{
			____pImport0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___pHandler2' to managed representation
		RuntimeObject* ____pHandler2_unmarshaled = NULL;
		if (___pHandler2 != NULL)
		{
			____pHandler2_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(___pHandler2, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____pHandler2_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____pHandler2_unmarshaled), Il2CppIUnknown::IID, ___pHandler2);
			}
		}
		else
		{
			____pHandler2_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_Merge_m5C313FE69A9CF5C9F18AE94B3C7F29B69C259679(__thisValue, ____pImport0_unmarshaled, ___pHostMapToken1, ____pHandler2_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataEmit_MergeEnd_mA4C8A0BF5FCB3A858EE1A4D8BE9E4F077F52CA4C() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_MergeEnd_m8F7BFA31EEED280BA75CCD1DB5318B51394EA36C(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual void STDCALL IMetaDataImport_CloseEnum_m310C13C72081C3A7FDAFE41E34B863EB392A876C(uint32_t ___hEnum0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_CloseEnum_mB517553756918251874C744D9A4B422D03BF013D(__thisValue, ___hEnum0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		}

	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_CountEnum_m823E43D3A263850E298529646B8CBAE22D34C03C(uint32_t ___hEnum0, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_CountEnum_mBEC6C0E435DA4449D9D52A9A3DD8CB58B24581A3(__thisValue, ___hEnum0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResetEnum_m280AA7B10625D848A6B0645D266FBA89679387DA(uint32_t ___hEnum0, uint32_t ___ulPos1) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			ModuleMetadata_ResetEnum_mED68573292C20DCC9D05F8C646007DFD46B2FECE(__thisValue, ___hEnum0, ___ulPos1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeDefs_m6481834CC2528E4E612DA8A9DD984DC8183830DB(uint32_t* ___phEnum0, uint32_t* ___rTypeDefs1, uint32_t ___cMax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rTypeDefs1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rTypeDefs1_unmarshaled = NULL;
		if (___rTypeDefs1 != NULL)
		{
			____rTypeDefs1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax2)); i++)
			{
				(____rTypeDefs1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rTypeDefs1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumTypeDefs_m2A6657D77BA9380C62AD54E2E2E6FA0D1A19FA7F(__thisValue, ___phEnum0, ____rTypeDefs1_unmarshaled, ___cMax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumInterfaceImpls_mE1E0B8165E3A3C4642FAF1A305559C9B2E2ED634(uint32_t* ___phEnum0, uint32_t ___td1, uint32_t* ___rImpls2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rImpls2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rImpls2_unmarshaled = NULL;
		if (___rImpls2 != NULL)
		{
			____rImpls2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax3)); i++)
			{
				(____rImpls2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rImpls2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumInterfaceImpls_m9F3A2A1A353DCE48C5A86CC8CF6D2B9C92AEB47A(__thisValue, ___phEnum0, ___td1, ____rImpls2_unmarshaled, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeRefs_m721506E5BD34CAC28C5339ECB26CD74F1A7CAF8E(uint32_t* ___phEnum0, uint32_t* ___rTypeRefs1, uint32_t ___cMax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rTypeRefs1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rTypeRefs1_unmarshaled = NULL;
		if (___rTypeRefs1 != NULL)
		{
			____rTypeRefs1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax2)); i++)
			{
				(____rTypeRefs1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rTypeRefs1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumTypeRefs_m7D4AC70083F349902E95B6A76DCB5965A46C0E16(__thisValue, ___phEnum0, ____rTypeRefs1_unmarshaled, ___cMax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeDefByName_mF2E3130D9E90C90E09B9E27874847C25D62D7AB9(Il2CppChar* ___szTypeDef0, uint32_t ___tkEnclosingClass1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szTypeDef0' to managed representation
		String_t* ____szTypeDef0_unmarshaled = NULL;
		____szTypeDef0_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szTypeDef0);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindTypeDefByName_mB153E2C25B9B16DABBF8E3C9C1F83A64F073E512(__thisValue, ____szTypeDef0_unmarshaled, ___tkEnclosingClass1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetScopeProps_m29C9981D00A1EEE8D4C7A3F84A25A6A9D7CEE249(Il2CppChar* ___szName0, uint32_t ___cchName1, uint32_t* ___pchName2, Guid_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName0' to managed representation
		StringBuilder_t* ____szName0_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szName0_unmarshaled, ___szName0);

		// Marshaling of parameter '___pchName2' to managed representation
		uint32_t ____pchName2_empty = 0;

		// Managed method invocation
		Guid_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetScopeProps_mB192EB125BC0D1D87E4BC0287775FFBF9C6D904D(__thisValue, ____szName0_unmarshaled, ___cchName1, (&____pchName2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pchName2' back from managed representation
		*___pchName2 = ____pchName2_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleFromScope_mCA37CF0F851AB797A20F037BB2DF6B347533779A(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetModuleFromScope_mD32437F4034B07A96025312FC32C7AEF12DFBCF1(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeDefProps_m5A32D5C939952C9F4D8A17920E66994915F46F2D(uint32_t ___td0, intptr_t ___szTypeDef1, uint32_t ___cchTypeDef2, uint32_t* ___pchTypeDef3, intptr_t ___pdwTypeDefFlags4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pchTypeDef3' to managed representation
		uint32_t ____pchTypeDef3_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTypeDefProps_m9BC8D3FAB79A7ECD1F9B0855741F20DAC31C23ED(__thisValue, ___td0, ___szTypeDef1, ___cchTypeDef2, (&____pchTypeDef3_empty), ___pdwTypeDefFlags4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pchTypeDef3' back from managed representation
		*___pchTypeDef3 = ____pchTypeDef3_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetInterfaceImplProps_m5DA7865CDF02F9D32177D7217C698E47158CCA9A(uint32_t ___iiImpl0, uint32_t* ___pClass1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetInterfaceImplProps_m9BE32202360432DB9C04BA3BF075DFA0A3DE62AF(__thisValue, ___iiImpl0, (&____pClass1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeRefProps_m3B584009C0F1670712EEC5D0C1130D95B9428FC4(uint32_t ___tr0, uint32_t* ___ptkResolutionScope1, Il2CppChar* ___szName2, uint32_t ___cchName3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ptkResolutionScope1' to managed representation
		uint32_t ____ptkResolutionScope1_empty = 0;

		// Marshaling of parameter '___szName2' to managed representation
		StringBuilder_t* ____szName2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szName2_unmarshaled, ___szName2);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTypeRefProps_m9C663823EAF20DDD434C963B3FDE5FBD08C7976F(__thisValue, ___tr0, (&____ptkResolutionScope1_empty), ____szName2_unmarshaled, ___cchName3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ptkResolutionScope1' back from managed representation
		*___ptkResolutionScope1 = ____ptkResolutionScope1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_ResolveTypeRef_mA45CC81D7A807808D32571D48319A9532AE1A56F(uint32_t ___tr0, Guid_t* ___riid1, Il2CppIUnknown** ___ppIScope2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppIScope2' to managed representation
		RuntimeObject* ____ppIScope2_empty = NULL;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_ResolveTypeRef_m204BBB70AAD1921BF1FBCCA4B274A1AC3233225E(__thisValue, ___tr0, ___riid1, (&____ppIScope2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppIScope2' back from managed representation
		if (____ppIScope2_empty != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(____ppIScope2_empty))
			{
				*___ppIScope2 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(____ppIScope2_empty));
				(*___ppIScope2)->AddRef();
			}
			else
			{
				*___ppIScope2 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(____ppIScope2_empty);
			}
		}
		else
		{
			*___ppIScope2 = NULL;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembers_m9DD4D628291029E8124D603D9E3B7467271B4E40(uint32_t* ___phEnum0, uint32_t ___cl1, uint32_t* ___rMembers2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rMembers2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMembers2_unmarshaled = NULL;
		if (___rMembers2 != NULL)
		{
			____rMembers2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax3)); i++)
			{
				(____rMembers2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMembers2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMembers_m07B0AA12B8E3C05B7A13FB6FA9114BE390D1F6B4(__thisValue, ___phEnum0, ___cl1, ____rMembers2_unmarshaled, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMembersWithName_m02922DB6B166BC48A2AB0B969ECBDD64B43068E2(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rMembers3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName2' to managed representation
		String_t* ____szName2_unmarshaled = NULL;
		____szName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName2);

		// Marshaling of parameter '___rMembers3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMembers3_unmarshaled = NULL;
		if (___rMembers3 != NULL)
		{
			____rMembers3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rMembers3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMembers3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMembersWithName_mD171E228467EA6C345067A4B44F6069E91D84509(__thisValue, ___phEnum0, ___cl1, ____szName2_unmarshaled, ____rMembers3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethods_m7EF7B26995F0861A0A848374FE5D6EEC1173871A(uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rMethods2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethods_mA5FFD0DCFDF1D8E0CFC7F2356BA2B1A8BF8A59AF(__thisValue, ___phEnum0, ___cl1, ___rMethods2, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodsWithName_m80F19424E334DFE223E0F229E70BC5ACABB3E9C0(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rMethods3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName2' to managed representation
		String_t* ____szName2_unmarshaled = NULL;
		____szName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName2);

		// Marshaling of parameter '___rMethods3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMethods3_unmarshaled = NULL;
		if (___rMethods3 != NULL)
		{
			____rMethods3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rMethods3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMethods3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethodsWithName_m51DCF5C180142A0D88D255078304B07C96B474EC(__thisValue, ___phEnum0, ___cl1, ____szName2_unmarshaled, ____rMethods3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFields_m3F62CA7DF6B92ADEB6178B073E69B2442BB9591F(uint32_t* ___phEnum0, uint32_t ___cl1, intptr_t ___rFields2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumFields_mD9E1D6DC12C1DD88D39EF5FBA0F5FD982EEF4A49(__thisValue, ___phEnum0, ___cl1, ___rFields2, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumFieldsWithName_m6CC323CA641E58F4BCA856B832BB6F358C1344BE(uint32_t* ___phEnum0, uint32_t ___cl1, Il2CppChar* ___szName2, uint32_t* ___rFields3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName2' to managed representation
		String_t* ____szName2_unmarshaled = NULL;
		____szName2_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName2);

		// Marshaling of parameter '___rFields3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rFields3_unmarshaled = NULL;
		if (___rFields3 != NULL)
		{
			____rFields3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rFields3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rFields3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumFieldsWithName_m836DC6B4D5A03CF429F641A42D8C87E00CEA7F08(__thisValue, ___phEnum0, ___cl1, ____szName2_unmarshaled, ____rFields3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumParams_m0F22BEFA40D238C64A23E92C02252824BA31164F(uint32_t* ___phEnum0, uint32_t ___mb1, uint32_t* ___rParams2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rParams2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rParams2_unmarshaled = NULL;
		if (___rParams2 != NULL)
		{
			____rParams2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax3)); i++)
			{
				(____rParams2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rParams2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumParams_m9486735D04CD910E895FDA2E9EB8AAF12EF9E686(__thisValue, ___phEnum0, ___mb1, ____rParams2_unmarshaled, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMemberRefs_m9294B6F7F2E10004207590E1C5BB74A904DA2D03(uint32_t* ___phEnum0, uint32_t ___tkParent1, uint32_t* ___rMemberRefs2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rMemberRefs2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMemberRefs2_unmarshaled = NULL;
		if (___rMemberRefs2 != NULL)
		{
			____rMemberRefs2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax3)); i++)
			{
				(____rMemberRefs2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMemberRefs2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMemberRefs_m8F2284665D71E8A99D1065ADF82F3A664492CD98(__thisValue, ___phEnum0, ___tkParent1, ____rMemberRefs2_unmarshaled, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodImpls_mC6D871056A7366E9BB435B72CA348A878CE76AB3(uint32_t* ___phEnum0, uint32_t ___td1, uint32_t* ___rMethodBody2, uint32_t* ___rMethodDecl3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rMethodBody2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMethodBody2_unmarshaled = NULL;
		if (___rMethodBody2 != NULL)
		{
			____rMethodBody2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rMethodBody2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMethodBody2)[i]);
			}
		}

		// Marshaling of parameter '___rMethodDecl3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMethodDecl3_unmarshaled = NULL;
		if (___rMethodDecl3 != NULL)
		{
			____rMethodDecl3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rMethodDecl3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMethodDecl3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethodImpls_m4B19F3D0092E4CE661FC01A808089E72E79F2037(__thisValue, ___phEnum0, ___td1, ____rMethodBody2_unmarshaled, ____rMethodDecl3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumPermissionSets_m26600BE1C9CCF9F8B71684CCD7C5212528F7EC1A(uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___dwActions2, uint32_t* ___rPermission3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rPermission3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rPermission3_unmarshaled = NULL;
		if (___rPermission3 != NULL)
		{
			____rPermission3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rPermission3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rPermission3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumPermissionSets_m88682A7FA4F22E3887B04E47C3C21FB8136CBD4D(__thisValue, ___phEnum0, ___tk1, ___dwActions2, ____rPermission3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMember_mDDCC9CC98E60D8D5A6EC024EA551F58F9B1EBE2E(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Marshaling of parameter '___pvSigBlob2' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pvSigBlob2_unmarshaled = NULL;
		if (___pvSigBlob2 != NULL)
		{
			____pvSigBlob2_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___cbSigBlob3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cbSigBlob3)); i++)
			{
				(____pvSigBlob2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___pvSigBlob2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindMember_m923256560837C0A205A63BF75B13B7BE70F3ED68(__thisValue, ___td0, ____szName1_unmarshaled, ____pvSigBlob2_unmarshaled, ___cbSigBlob3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMethod_mDFD229591597FCAC8ADCDB940E4676F75FA53046(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Marshaling of parameter '___pvSigBlob2' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pvSigBlob2_unmarshaled = NULL;
		if (___pvSigBlob2 != NULL)
		{
			____pvSigBlob2_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___cbSigBlob3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cbSigBlob3)); i++)
			{
				(____pvSigBlob2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___pvSigBlob2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindMethod_m9FDCA4F8FB3E6F349800A3220B17960EB4F06828(__thisValue, ___td0, ____szName1_unmarshaled, ____pvSigBlob2_unmarshaled, ___cbSigBlob3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindField_mAD74A5812E92D020760493ACDB145907F674E2AC(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Marshaling of parameter '___pvSigBlob2' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pvSigBlob2_unmarshaled = NULL;
		if (___pvSigBlob2 != NULL)
		{
			____pvSigBlob2_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___cbSigBlob3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cbSigBlob3)); i++)
			{
				(____pvSigBlob2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___pvSigBlob2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindField_m584ABF30B71A04D3F3EF123DBAF321D660F90D52(__thisValue, ___td0, ____szName1_unmarshaled, ____pvSigBlob2_unmarshaled, ___cbSigBlob3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindMemberRef_mC6A7E418448EBB3080D92AD74D4B925B5970775B(uint32_t ___td0, Il2CppChar* ___szName1, uint8_t* ___pvSigBlob2, uint32_t ___cbSigBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Marshaling of parameter '___pvSigBlob2' to managed representation
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____pvSigBlob2_unmarshaled = NULL;
		if (___pvSigBlob2 != NULL)
		{
			____pvSigBlob2_unmarshaled = reinterpret_cast<ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*>((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, static_cast<int32_t>(___cbSigBlob3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cbSigBlob3)); i++)
			{
				(____pvSigBlob2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___pvSigBlob2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindMemberRef_m033FEF39C37D75F3B290FE3333AD8A3E1638A26F(__thisValue, ___td0, ____szName1_unmarshaled, ____pvSigBlob2_unmarshaled, ___cbSigBlob3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodProps_mEFACC432F0160025F5197FDF0606C45CC0611FC3(uint32_t ___mb0, uint32_t* ___pClass1, intptr_t ___szMethod2, uint32_t ___cchMethod3, uint32_t* ___pchMethod4, intptr_t ___pdwAttr5, intptr_t ___ppvSigBlob6, intptr_t ___pcbSigBlob7, intptr_t ___pulCodeRVA8, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Marshaling of parameter '___pchMethod4' to managed representation
		uint32_t ____pchMethod4_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMethodProps_mE40BA9931085101D0AB62A2457E49D4F7D95A6F8(__thisValue, ___mb0, (&____pClass1_empty), ___szMethod2, ___cchMethod3, (&____pchMethod4_empty), ___pdwAttr5, ___ppvSigBlob6, ___pcbSigBlob7, ___pulCodeRVA8, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		// Marshaling of parameter '___pchMethod4' back from managed representation
		*___pchMethod4 = ____pchMethod4_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberRefProps_m991E6806B40BDA5FB76207D26B3EA6E703112588(uint32_t ___mr0, uint32_t* ___ptk1, Il2CppChar* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, intptr_t* ___ppvSigBlob5, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szMember2' to managed representation
		StringBuilder_t* ____szMember2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szMember2_unmarshaled, ___szMember2);

		// Marshaling of parameter '___pchMember4' to managed representation
		uint32_t ____pchMember4_empty = 0;

		// Marshaling of parameter '___ppvSigBlob5' to managed representation
		intptr_t ____ppvSigBlob5_empty;
		memset((&____ppvSigBlob5_empty), 0, sizeof(____ppvSigBlob5_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMemberRefProps_mF81334E0100448943EB3DBB7F846EF74996EA51F(__thisValue, ___mr0, ___ptk1, ____szMember2_unmarshaled, ___cchMember3, (&____pchMember4_empty), (&____ppvSigBlob5_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pchMember4' back from managed representation
		*___pchMember4 = ____pchMember4_empty;

		// Marshaling of parameter '___ppvSigBlob5' back from managed representation
		*___ppvSigBlob5 = ____ppvSigBlob5_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumProperties_mB60344A5562BDE26FC6D36A8B8332C02B81D3E9E(uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rProperties2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumProperties_mF196AD10419823D5407DD5DEBAE744A2C5BE4886(__thisValue, ___phEnum0, ___td1, ___rProperties2, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumEvents_m84AD7CB71CC743B956A492A3552F030DBD15363E(uint32_t* ___phEnum0, uint32_t ___td1, intptr_t ___rEvents2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumEvents_mC2CF18857D166559E9CBCF51BCBB237FF4EE55AD(__thisValue, ___phEnum0, ___td1, ___rEvents2, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetEventProps_m324E64B5E7891770D5E41DAB3CED38C8E6DC3CF7(uint32_t ___ev0, uint32_t* ___pClass1, Il2CppChar* ___szEvent2, uint32_t ___cchEvent3, uint32_t* ___pchEvent4, uint32_t* ___pdwEventFlags5, uint32_t* ___ptkEventType6, uint32_t* ___pmdAddOn7, uint32_t* ___pmdRemoveOn8, uint32_t* ___pmdFire9, uint32_t* ___rmdOtherMethod10, uint32_t ___cMax11, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Marshaling of parameter '___szEvent2' to managed representation
		StringBuilder_t* ____szEvent2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szEvent2_unmarshaled, ___szEvent2);

		// Marshaling of parameter '___pchEvent4' to managed representation
		uint32_t ____pchEvent4_empty = 0;

		// Marshaling of parameter '___pdwEventFlags5' to managed representation
		uint32_t ____pdwEventFlags5_empty = 0;

		// Marshaling of parameter '___ptkEventType6' to managed representation
		uint32_t ____ptkEventType6_empty = 0;

		// Marshaling of parameter '___pmdAddOn7' to managed representation
		uint32_t ____pmdAddOn7_empty = 0;

		// Marshaling of parameter '___pmdRemoveOn8' to managed representation
		uint32_t ____pmdRemoveOn8_empty = 0;

		// Marshaling of parameter '___pmdFire9' to managed representation
		uint32_t ____pmdFire9_empty = 0;

		// Marshaling of parameter '___rmdOtherMethod10' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rmdOtherMethod10_unmarshaled = NULL;
		if (___rmdOtherMethod10 != NULL)
		{
			____rmdOtherMethod10_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax11)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax11)); i++)
			{
				(____rmdOtherMethod10_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rmdOtherMethod10)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetEventProps_mB6D640E0CE3B97AA01A40582B8B755F1DD7A89DA(__thisValue, ___ev0, (&____pClass1_empty), ____szEvent2_unmarshaled, ___cchEvent3, (&____pchEvent4_empty), (&____pdwEventFlags5_empty), (&____ptkEventType6_empty), (&____pmdAddOn7_empty), (&____pmdRemoveOn8_empty), (&____pmdFire9_empty), ____rmdOtherMethod10_unmarshaled, ___cMax11, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		// Marshaling of parameter '___pchEvent4' back from managed representation
		*___pchEvent4 = ____pchEvent4_empty;

		// Marshaling of parameter '___pdwEventFlags5' back from managed representation
		*___pdwEventFlags5 = ____pdwEventFlags5_empty;

		// Marshaling of parameter '___ptkEventType6' back from managed representation
		*___ptkEventType6 = ____ptkEventType6_empty;

		// Marshaling of parameter '___pmdAddOn7' back from managed representation
		*___pmdAddOn7 = ____pmdAddOn7_empty;

		// Marshaling of parameter '___pmdRemoveOn8' back from managed representation
		*___pmdRemoveOn8 = ____pmdRemoveOn8_empty;

		// Marshaling of parameter '___pmdFire9' back from managed representation
		*___pmdFire9 = ____pmdFire9_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumMethodSemantics_m73AF9164145EEF98A27CEAD68AE89696D8802DFC(uint32_t* ___phEnum0, uint32_t ___mb1, uint32_t* ___rEventProp2, uint32_t ___cMax3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rEventProp2' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rEventProp2_unmarshaled = NULL;
		if (___rEventProp2 != NULL)
		{
			____rEventProp2_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax3)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax3)); i++)
			{
				(____rEventProp2_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rEventProp2)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumMethodSemantics_mDB47921155483623AC3B6A86B4B72526A1ACA846(__thisValue, ___phEnum0, ___mb1, ____rEventProp2_unmarshaled, ___cMax3, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMethodSemantics_mC1C1BE975C52FE0E4A33BE76427FAA04BEEDE8CC(uint32_t ___mb0, uint32_t ___tkEventProp1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMethodSemantics_m5BED806CE50A4605B7FF39B702704FE7534CACF0(__thisValue, ___mb0, ___tkEventProp1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetClassLayout_m82BEF5233202F78B64501CACD86AB75A4B8B58AF(uint32_t ___td0, uint32_t* ___pdwPackSize1, intptr_t ___rFieldOffset2, uint32_t ___cMax3, uint32_t* ___pcFieldOffset4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pdwPackSize1' to managed representation
		uint32_t ____pdwPackSize1_empty = 0;

		// Marshaling of parameter '___pcFieldOffset4' to managed representation
		uint32_t ____pcFieldOffset4_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetClassLayout_m663BC6556C6CB6F12D13E425E1B69F77EABB6F35(__thisValue, ___td0, (&____pdwPackSize1_empty), ___rFieldOffset2, ___cMax3, (&____pcFieldOffset4_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pdwPackSize1' back from managed representation
		*___pdwPackSize1 = ____pdwPackSize1_empty;

		// Marshaling of parameter '___pcFieldOffset4' back from managed representation
		*___pcFieldOffset4 = ____pcFieldOffset4_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldMarshal_mF66AF1CA91704F4834BAD4E302D2A2A22D456FB4(uint32_t ___tk0, intptr_t* ___ppvNativeType1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppvNativeType1' to managed representation
		intptr_t ____ppvNativeType1_empty;
		memset((&____ppvNativeType1_empty), 0, sizeof(____ppvNativeType1_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetFieldMarshal_mE0986F50E3C130603817345A4F3ADF9B47F1FCD5(__thisValue, ___tk0, (&____ppvNativeType1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppvNativeType1' back from managed representation
		*___ppvNativeType1 = ____ppvNativeType1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetRVA_m966A46E321154BEFF702D8AE65E00348A09FD1DF(uint32_t ___tk0, uint32_t* ___pulCodeRVA1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pulCodeRVA1' to managed representation
		uint32_t ____pulCodeRVA1_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetRVA_m8DB3C662268009E449B7D75BC3A4B30402222818(__thisValue, ___tk0, (&____pulCodeRVA1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pulCodeRVA1' back from managed representation
		*___pulCodeRVA1 = ____pulCodeRVA1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPermissionSetProps_mD211E233325CA81166BDC469672A2F530C13D7A4(uint32_t ___pm0, uint32_t* ___pdwAction1, intptr_t* ___ppvPermission2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pdwAction1' to managed representation
		uint32_t ____pdwAction1_empty = 0;

		// Marshaling of parameter '___ppvPermission2' to managed representation
		intptr_t ____ppvPermission2_empty;
		memset((&____ppvPermission2_empty), 0, sizeof(____ppvPermission2_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetPermissionSetProps_m09653A469FC719751ED854A130453F53C43208A7(__thisValue, ___pm0, (&____pdwAction1_empty), (&____ppvPermission2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pdwAction1' back from managed representation
		*___pdwAction1 = ____pdwAction1_empty;

		// Marshaling of parameter '___ppvPermission2' back from managed representation
		*___ppvPermission2 = ____ppvPermission2_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetSigFromToken_m4E7A28C2755BE530F2E47812A8387BB0E5366EAB(uint32_t ___mdSig0, intptr_t* ___ppvSig1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppvSig1' to managed representation
		intptr_t ____ppvSig1_empty;
		memset((&____ppvSig1_empty), 0, sizeof(____ppvSig1_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetSigFromToken_m724A75B606FCC4ACCB70E8CA0DCBEDB3DD613F23(__thisValue, ___mdSig0, (&____ppvSig1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppvSig1' back from managed representation
		*___ppvSig1 = ____ppvSig1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetModuleRefProps_m18B35B5BBB834EE0E737826DBC1AD2D1F6CAF420(uint32_t ___mur0, Il2CppChar* ___szName1, uint32_t ___cchName2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		StringBuilder_t* ____szName1_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szName1_unmarshaled, ___szName1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetModuleRefProps_mE1F146F5740FED57A267FDB72260DC65790B0911(__thisValue, ___mur0, ____szName1_unmarshaled, ___cchName2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumModuleRefs_m6AA7CA2777C5008449A0C0D03B2B1CFFF3C7ADD1(uint32_t* ___phEnum0, uint32_t* ___rModuleRefs1, uint32_t ___cmax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rModuleRefs1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rModuleRefs1_unmarshaled = NULL;
		if (___rModuleRefs1 != NULL)
		{
			____rModuleRefs1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cmax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cmax2)); i++)
			{
				(____rModuleRefs1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rModuleRefs1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumModuleRefs_m8D62524559F44EA421928728CFC992F6F6B046B9(__thisValue, ___phEnum0, ____rModuleRefs1_unmarshaled, ___cmax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetTypeSpecFromToken_m441F2AA549A09B7345BECAFFF4444BB799DC3AD4(uint32_t ___typespec0, intptr_t* ___ppvSig1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ppvSig1' to managed representation
		intptr_t ____ppvSig1_empty;
		memset((&____ppvSig1_empty), 0, sizeof(____ppvSig1_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetTypeSpecFromToken_m2B449BFAD118FA5AA76D3C78975CFCBC87641866(__thisValue, ___typespec0, (&____ppvSig1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppvSig1' back from managed representation
		*___ppvSig1 = ____ppvSig1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNameFromToken_m31D57A947ACED822F6267DD7A85B5E2581FB434A(uint32_t ___tk0, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetNameFromToken_m6BA516BE418E4332F1C435938E4BEF1DD17B5F3A(__thisValue, ___tk0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUnresolvedMethods_m2F949D8A6BCC14AC679A2B875A5B6B3F69DD9876(uint32_t* ___phEnum0, uint32_t* ___rMethods1, uint32_t ___cMax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rMethods1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rMethods1_unmarshaled = NULL;
		if (___rMethods1 != NULL)
		{
			____rMethods1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax2)); i++)
			{
				(____rMethods1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rMethods1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumUnresolvedMethods_m3A6F207459B66B6864E29F30AE8B7B82ABC1174F(__thisValue, ___phEnum0, ____rMethods1_unmarshaled, ___cMax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetUserString_m1E2D0282CE6E121D966524737D47A0E54198BC71(uint32_t ___stk0, Il2CppChar* ___szString1, uint32_t ___cchString2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szString1' to managed representation
		StringBuilder_t* ____szString1_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szString1_unmarshaled, ___szString1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetUserString_m3CD2D5827F947F26A3A25B6F6446C6DA9595D4E5(__thisValue, ___stk0, ____szString1_unmarshaled, ___cchString2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPinvokeMap_m9B17B03B6B31AE63368E1B2410B03B7019531D8A(uint32_t ___tk0, uint32_t* ___pdwMappingFlags1, Il2CppChar* ___szImportName2, uint32_t ___cchImportName3, uint32_t* ___pchImportName4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pdwMappingFlags1' to managed representation
		uint32_t ____pdwMappingFlags1_empty = 0;

		// Marshaling of parameter '___szImportName2' to managed representation
		StringBuilder_t* ____szImportName2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szImportName2_unmarshaled, ___szImportName2);

		// Marshaling of parameter '___pchImportName4' to managed representation
		uint32_t ____pchImportName4_empty = 0;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetPinvokeMap_m959C1E8D69755B350C530C219489228B946E0C73(__thisValue, ___tk0, (&____pdwMappingFlags1_empty), ____szImportName2_unmarshaled, ___cchImportName3, (&____pchImportName4_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pdwMappingFlags1' back from managed representation
		*___pdwMappingFlags1 = ____pdwMappingFlags1_empty;

		// Marshaling of parameter '___pchImportName4' back from managed representation
		*___pchImportName4 = ____pchImportName4_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumSignatures_m07BDED2BC34DAE35BF9E271EAC56458EB9D07BBE(uint32_t* ___phEnum0, uint32_t* ___rSignatures1, uint32_t ___cmax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rSignatures1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rSignatures1_unmarshaled = NULL;
		if (___rSignatures1 != NULL)
		{
			____rSignatures1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cmax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cmax2)); i++)
			{
				(____rSignatures1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rSignatures1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumSignatures_m244A3353FF53F10E6E2544BE10C144D4D03E6607(__thisValue, ___phEnum0, ____rSignatures1_unmarshaled, ___cmax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumTypeSpecs_m4E85D3D62F6745C072DFD629B4EB111CC84C0454(uint32_t* ___phEnum0, uint32_t* ___rTypeSpecs1, uint32_t ___cmax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rTypeSpecs1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rTypeSpecs1_unmarshaled = NULL;
		if (___rTypeSpecs1 != NULL)
		{
			____rTypeSpecs1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cmax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cmax2)); i++)
			{
				(____rTypeSpecs1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rTypeSpecs1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumTypeSpecs_m6C50ADE4D30480365A419A989C541F087D9BEA6F(__thisValue, ___phEnum0, ____rTypeSpecs1_unmarshaled, ___cmax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumUserStrings_m00D146F142405717EB949A12F76A6A6C5A54A1C1(uint32_t* ___phEnum0, uint32_t* ___rStrings1, uint32_t ___cmax2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rStrings1' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rStrings1_unmarshaled = NULL;
		if (___rStrings1 != NULL)
		{
			____rStrings1_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cmax2)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cmax2)); i++)
			{
				(____rStrings1_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rStrings1)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumUserStrings_m7CBA61DB30CDE754E6944A5BF6600E34DFDF4241(__thisValue, ___phEnum0, ____rStrings1_unmarshaled, ___cmax2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual int32_t STDCALL IMetaDataImport_GetParamForMethodIndex_mCBBFD3190A2B2135CABAC4C8B74D59A8BA56E532(uint32_t ___md0, uint32_t ___ulParamSeq1, uint32_t* ___pParam2) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pParam2' to managed representation
		uint32_t ____pParam2_empty = 0;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetParamForMethodIndex_m789576602B44A5FFB3D4FD33C21B31BC26D52560(__thisValue, ___md0, ___ulParamSeq1, (&____pParam2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(ex.ex->hresult);
		}

		// Marshaling of parameter '___pParam2' back from managed representation
		*___pParam2 = ____pParam2_empty;

		return returnValue;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_EnumCustomAttributes_m150AAE4F9C8EB7B2ED6407B3C00D40920041C035(uint32_t* ___phEnum0, uint32_t ___tk1, uint32_t ___tkType2, uint32_t* ___rCustomAttributes3, uint32_t ___cMax4, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___rCustomAttributes3' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rCustomAttributes3_unmarshaled = NULL;
		if (___rCustomAttributes3 != NULL)
		{
			____rCustomAttributes3_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax4)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax4)); i++)
			{
				(____rCustomAttributes3_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rCustomAttributes3)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_EnumCustomAttributes_m6634A3B66B71BE5ECEB87A00EDAC1CB248E74987(__thisValue, ___phEnum0, ___tk1, ___tkType2, ____rCustomAttributes3_unmarshaled, ___cMax4, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeProps_m2C7D85E0C4469CA0B0A22083380C917EB390A7AE(uint32_t ___cv0, uint32_t* ___ptkObj1, uint32_t* ___ptkType2, intptr_t* ___ppBlob3, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___ptkObj1' to managed representation
		uint32_t ____ptkObj1_empty = 0;

		// Marshaling of parameter '___ptkType2' to managed representation
		uint32_t ____ptkType2_empty = 0;

		// Marshaling of parameter '___ppBlob3' to managed representation
		intptr_t ____ppBlob3_empty;
		memset((&____ppBlob3_empty), 0, sizeof(____ppBlob3_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetCustomAttributeProps_m4EE1C3F0B81A3C60E772DDC4DABB4C33E24C9FD1(__thisValue, ___cv0, (&____ptkObj1_empty), (&____ptkType2_empty), (&____ppBlob3_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ptkObj1' back from managed representation
		*___ptkObj1 = ____ptkObj1_empty;

		// Marshaling of parameter '___ptkType2' back from managed representation
		*___ptkType2 = ____ptkType2_empty;

		// Marshaling of parameter '___ppBlob3' back from managed representation
		*___ppBlob3 = ____ppBlob3_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_FindTypeRef_mB031CA8927A8E8C5A89E0542758FE08D860D94E2(uint32_t ___tkResolutionScope0, Il2CppChar* ___szName1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_FindTypeRef_m2B092E2C9EEB524CB9313DA55717BE10E1AAD231(__thisValue, ___tkResolutionScope0, ____szName1_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetMemberProps_m705554544233D93420572E09373B3D879028CC74(uint32_t ___mb0, uint32_t* ___pClass1, Il2CppChar* ___szMember2, uint32_t ___cchMember3, uint32_t* ___pchMember4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pulCodeRVA8, uint32_t* ___pdwImplFlags9, uint32_t* ___pdwCPlusTypeFlag10, intptr_t* ___ppValue11, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Marshaling of parameter '___szMember2' to managed representation
		StringBuilder_t* ____szMember2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szMember2_unmarshaled, ___szMember2);

		// Marshaling of parameter '___pchMember4' to managed representation
		uint32_t ____pchMember4_empty = 0;

		// Marshaling of parameter '___pdwAttr5' to managed representation
		uint32_t ____pdwAttr5_empty = 0;

		// Marshaling of parameter '___ppvSigBlob6' to managed representation
		intptr_t ____ppvSigBlob6_empty;
		memset((&____ppvSigBlob6_empty), 0, sizeof(____ppvSigBlob6_empty));

		// Marshaling of parameter '___pcbSigBlob7' to managed representation
		uint32_t ____pcbSigBlob7_empty = 0;

		// Marshaling of parameter '___pulCodeRVA8' to managed representation
		uint32_t ____pulCodeRVA8_empty = 0;

		// Marshaling of parameter '___pdwImplFlags9' to managed representation
		uint32_t ____pdwImplFlags9_empty = 0;

		// Marshaling of parameter '___pdwCPlusTypeFlag10' to managed representation
		uint32_t ____pdwCPlusTypeFlag10_empty = 0;

		// Marshaling of parameter '___ppValue11' to managed representation
		intptr_t ____ppValue11_empty;
		memset((&____ppValue11_empty), 0, sizeof(____ppValue11_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetMemberProps_mE84578A3ADCE3EEAD5A69A2D66D241ABAF40F453(__thisValue, ___mb0, (&____pClass1_empty), ____szMember2_unmarshaled, ___cchMember3, (&____pchMember4_empty), (&____pdwAttr5_empty), (&____ppvSigBlob6_empty), (&____pcbSigBlob7_empty), (&____pulCodeRVA8_empty), (&____pdwImplFlags9_empty), (&____pdwCPlusTypeFlag10_empty), (&____ppValue11_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		// Marshaling of parameter '___pchMember4' back from managed representation
		*___pchMember4 = ____pchMember4_empty;

		// Marshaling of parameter '___pdwAttr5' back from managed representation
		*___pdwAttr5 = ____pdwAttr5_empty;

		// Marshaling of parameter '___ppvSigBlob6' back from managed representation
		*___ppvSigBlob6 = ____ppvSigBlob6_empty;

		// Marshaling of parameter '___pcbSigBlob7' back from managed representation
		*___pcbSigBlob7 = ____pcbSigBlob7_empty;

		// Marshaling of parameter '___pulCodeRVA8' back from managed representation
		*___pulCodeRVA8 = ____pulCodeRVA8_empty;

		// Marshaling of parameter '___pdwImplFlags9' back from managed representation
		*___pdwImplFlags9 = ____pdwImplFlags9_empty;

		// Marshaling of parameter '___pdwCPlusTypeFlag10' back from managed representation
		*___pdwCPlusTypeFlag10 = ____pdwCPlusTypeFlag10_empty;

		// Marshaling of parameter '___ppValue11' back from managed representation
		*___ppValue11 = ____ppValue11_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetFieldProps_m8B4CB0E0AC7300E75BB85B8995CB0A678E16F603(uint32_t ___mb0, uint32_t* ___pClass1, Il2CppChar* ___szField2, uint32_t ___cchField3, uint32_t* ___pchField4, uint32_t* ___pdwAttr5, intptr_t* ___ppvSigBlob6, uint32_t* ___pcbSigBlob7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppValue9, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Marshaling of parameter '___szField2' to managed representation
		StringBuilder_t* ____szField2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szField2_unmarshaled, ___szField2);

		// Marshaling of parameter '___pchField4' to managed representation
		uint32_t ____pchField4_empty = 0;

		// Marshaling of parameter '___pdwAttr5' to managed representation
		uint32_t ____pdwAttr5_empty = 0;

		// Marshaling of parameter '___ppvSigBlob6' to managed representation
		intptr_t ____ppvSigBlob6_empty;
		memset((&____ppvSigBlob6_empty), 0, sizeof(____ppvSigBlob6_empty));

		// Marshaling of parameter '___pcbSigBlob7' to managed representation
		uint32_t ____pcbSigBlob7_empty = 0;

		// Marshaling of parameter '___pdwCPlusTypeFlag8' to managed representation
		uint32_t ____pdwCPlusTypeFlag8_empty = 0;

		// Marshaling of parameter '___ppValue9' to managed representation
		intptr_t ____ppValue9_empty;
		memset((&____ppValue9_empty), 0, sizeof(____ppValue9_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetFieldProps_m107F45370E062093334EE961DF6180C746560694(__thisValue, ___mb0, (&____pClass1_empty), ____szField2_unmarshaled, ___cchField3, (&____pchField4_empty), (&____pdwAttr5_empty), (&____ppvSigBlob6_empty), (&____pcbSigBlob7_empty), (&____pdwCPlusTypeFlag8_empty), (&____ppValue9_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		// Marshaling of parameter '___pchField4' back from managed representation
		*___pchField4 = ____pchField4_empty;

		// Marshaling of parameter '___pdwAttr5' back from managed representation
		*___pdwAttr5 = ____pdwAttr5_empty;

		// Marshaling of parameter '___ppvSigBlob6' back from managed representation
		*___ppvSigBlob6 = ____ppvSigBlob6_empty;

		// Marshaling of parameter '___pcbSigBlob7' back from managed representation
		*___pcbSigBlob7 = ____pcbSigBlob7_empty;

		// Marshaling of parameter '___pdwCPlusTypeFlag8' back from managed representation
		*___pdwCPlusTypeFlag8 = ____pdwCPlusTypeFlag8_empty;

		// Marshaling of parameter '___ppValue9' back from managed representation
		*___ppValue9 = ____ppValue9_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetPropertyProps_m1052916C42674704A3DFC12FBA066257C654157C(uint32_t ___prop0, uint32_t* ___pClass1, Il2CppChar* ___szProperty2, uint32_t ___cchProperty3, uint32_t* ___pchProperty4, uint32_t* ___pdwPropFlags5, intptr_t* ___ppvSig6, uint32_t* ___pbSig7, uint32_t* ___pdwCPlusTypeFlag8, intptr_t* ___ppDefaultValue9, uint32_t* ___pcchDefaultValue10, uint32_t* ___pmdSetter11, uint32_t* ___pmdGetter12, uint32_t* ___rmdOtherMethod13, uint32_t ___cMax14, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pClass1' to managed representation
		uint32_t ____pClass1_empty = 0;

		// Marshaling of parameter '___szProperty2' to managed representation
		StringBuilder_t* ____szProperty2_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szProperty2_unmarshaled, ___szProperty2);

		// Marshaling of parameter '___pchProperty4' to managed representation
		uint32_t ____pchProperty4_empty = 0;

		// Marshaling of parameter '___pdwPropFlags5' to managed representation
		uint32_t ____pdwPropFlags5_empty = 0;

		// Marshaling of parameter '___ppvSig6' to managed representation
		intptr_t ____ppvSig6_empty;
		memset((&____ppvSig6_empty), 0, sizeof(____ppvSig6_empty));

		// Marshaling of parameter '___pbSig7' to managed representation
		uint32_t ____pbSig7_empty = 0;

		// Marshaling of parameter '___pdwCPlusTypeFlag8' to managed representation
		uint32_t ____pdwCPlusTypeFlag8_empty = 0;

		// Marshaling of parameter '___ppDefaultValue9' to managed representation
		intptr_t ____ppDefaultValue9_empty;
		memset((&____ppDefaultValue9_empty), 0, sizeof(____ppDefaultValue9_empty));

		// Marshaling of parameter '___pcchDefaultValue10' to managed representation
		uint32_t ____pcchDefaultValue10_empty = 0;

		// Marshaling of parameter '___pmdSetter11' to managed representation
		uint32_t ____pmdSetter11_empty = 0;

		// Marshaling of parameter '___pmdGetter12' to managed representation
		uint32_t ____pmdGetter12_empty = 0;

		// Marshaling of parameter '___rmdOtherMethod13' to managed representation
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____rmdOtherMethod13_unmarshaled = NULL;
		if (___rmdOtherMethod13 != NULL)
		{
			____rmdOtherMethod13_unmarshaled = reinterpret_cast<UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*>((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, static_cast<int32_t>(___cMax14)));
			for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(___cMax14)); i++)
			{
				(____rmdOtherMethod13_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (___rmdOtherMethod13)[i]);
			}
		}

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetPropertyProps_m20A20481F4A024E7A0EB3A766AD3EA52BE3C6D10(__thisValue, ___prop0, (&____pClass1_empty), ____szProperty2_unmarshaled, ___cchProperty3, (&____pchProperty4_empty), (&____pdwPropFlags5_empty), (&____ppvSig6_empty), (&____pbSig7_empty), (&____pdwCPlusTypeFlag8_empty), (&____ppDefaultValue9_empty), (&____pcchDefaultValue10_empty), (&____pmdSetter11_empty), (&____pmdGetter12_empty), ____rmdOtherMethod13_unmarshaled, ___cMax14, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pClass1' back from managed representation
		*___pClass1 = ____pClass1_empty;

		// Marshaling of parameter '___pchProperty4' back from managed representation
		*___pchProperty4 = ____pchProperty4_empty;

		// Marshaling of parameter '___pdwPropFlags5' back from managed representation
		*___pdwPropFlags5 = ____pdwPropFlags5_empty;

		// Marshaling of parameter '___ppvSig6' back from managed representation
		*___ppvSig6 = ____ppvSig6_empty;

		// Marshaling of parameter '___pbSig7' back from managed representation
		*___pbSig7 = ____pbSig7_empty;

		// Marshaling of parameter '___pdwCPlusTypeFlag8' back from managed representation
		*___pdwCPlusTypeFlag8 = ____pdwCPlusTypeFlag8_empty;

		// Marshaling of parameter '___ppDefaultValue9' back from managed representation
		*___ppDefaultValue9 = ____ppDefaultValue9_empty;

		// Marshaling of parameter '___pcchDefaultValue10' back from managed representation
		*___pcchDefaultValue10 = ____pcchDefaultValue10_empty;

		// Marshaling of parameter '___pmdSetter11' back from managed representation
		*___pmdSetter11 = ____pmdSetter11_empty;

		// Marshaling of parameter '___pmdGetter12' back from managed representation
		*___pmdGetter12 = ____pmdGetter12_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetParamProps_m198461F87BDDAF573B02D64C083F826E1B528321(uint32_t ___tk0, uint32_t* ___pmd1, uint32_t* ___pulSequence2, Il2CppChar* ___szName3, uint32_t ___cchName4, uint32_t* ___pchName5, uint32_t* ___pdwAttr6, uint32_t* ___pdwCPlusTypeFlag7, intptr_t* ___ppValue8, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___pmd1' to managed representation
		uint32_t ____pmd1_empty = 0;

		// Marshaling of parameter '___pulSequence2' to managed representation
		uint32_t ____pulSequence2_empty = 0;

		// Marshaling of parameter '___szName3' to managed representation
		StringBuilder_t* ____szName3_unmarshaled = NULL;
		il2cpp_codegen_marshal_wstring_builder_result(____szName3_unmarshaled, ___szName3);

		// Marshaling of parameter '___pchName5' to managed representation
		uint32_t ____pchName5_empty = 0;

		// Marshaling of parameter '___pdwAttr6' to managed representation
		uint32_t ____pdwAttr6_empty = 0;

		// Marshaling of parameter '___pdwCPlusTypeFlag7' to managed representation
		uint32_t ____pdwCPlusTypeFlag7_empty = 0;

		// Marshaling of parameter '___ppValue8' to managed representation
		intptr_t ____ppValue8_empty;
		memset((&____ppValue8_empty), 0, sizeof(____ppValue8_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetParamProps_m28585EEFB3DF1A629B9ABD023250123AAE9CD90F(__thisValue, ___tk0, (&____pmd1_empty), (&____pulSequence2_empty), ____szName3_unmarshaled, ___cchName4, (&____pchName5_empty), (&____pdwAttr6_empty), (&____pdwCPlusTypeFlag7_empty), (&____ppValue8_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___pmd1' back from managed representation
		*___pmd1 = ____pmd1_empty;

		// Marshaling of parameter '___pulSequence2' back from managed representation
		*___pulSequence2 = ____pulSequence2_empty;

		// Marshaling of parameter '___pchName5' back from managed representation
		*___pchName5 = ____pchName5_empty;

		// Marshaling of parameter '___pdwAttr6' back from managed representation
		*___pdwAttr6 = ____pdwAttr6_empty;

		// Marshaling of parameter '___pdwCPlusTypeFlag7' back from managed representation
		*___pdwCPlusTypeFlag7 = ____pdwCPlusTypeFlag7_empty;

		// Marshaling of parameter '___ppValue8' back from managed representation
		*___ppValue8 = ____ppValue8_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetCustomAttributeByName_m917AB8DC144552B8BE73EEE0C033869715834EB5(uint32_t ___tkObj0, Il2CppChar* ___szName1, intptr_t* ___ppData2, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___szName1' to managed representation
		String_t* ____szName1_unmarshaled = NULL;
		____szName1_unmarshaled = il2cpp_codegen_marshal_bstring_result(___szName1);

		// Marshaling of parameter '___ppData2' to managed representation
		intptr_t ____ppData2_empty;
		memset((&____ppData2_empty), 0, sizeof(____ppData2_empty));

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetCustomAttributeByName_mF8B0A6D4827069ED3E022BA30A18D4683FF15E23(__thisValue, ___tkObj0, ____szName1_unmarshaled, (&____ppData2_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___ppData2' back from managed representation
		*___ppData2 = ____ppData2_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual int32_t STDCALL IMetaDataImport_IsValidToken_mD62AC24BBC10542D87BFBBE4C25C3B4ECAF7FEB4(uint32_t ___tk0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_IsValidToken_m998BA35F4BB592150050AC80174D326AEDE7AE82(__thisValue, ___tk0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return static_cast<int32_t>(0);
		}

		return static_cast<int32_t>(returnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNestedClassProps_mEBA3D1888E36C41231878DF70F5644B3D2808112(uint32_t ___tdNestedClass0, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetNestedClassProps_mFD67FE2CCE2F314EE0C795FE79F1165C0FB75EE3(__thisValue, ___tdNestedClass0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_GetNativeCallConvFromSig_m2ED7F998312F16D32BC3B9371CC90B3B3BAF3C57(intptr_t ___pvSig0, uint32_t ___cbSig1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_GetNativeCallConvFromSig_m0E79A248E0EB746359069B461EB6FC2CF9AC8321(__thisValue, ___pvSig0, ___cbSig1, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IMetaDataImport_IsGlobal_m3A0FAB8CB8D045EA53B1ED1456F242BD768EEBBD(uint32_t ___pd0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694* __thisValue = (ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694*)GetManagedObjectInline();
			returnValue = ModuleMetadata_IsGlobal_m884DE62EFEA9B313BF83F93AD79B73148716123C(__thisValue, ___pd0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_ComCallableWrapper(obj));
}
