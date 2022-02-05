#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct Guid_t;
struct IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C;
struct IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6;
struct IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8;
struct ISymUnmanagedDocumentWriter_tF11BEB427270C01DB5A54550A354FD1D63219264;
struct ImageDebugDirectory_t871A3B882EE8C032E8160B6C2E288CE996997392;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.InteropServices.ComTypes.IStream
struct NOVTABLE IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped0_Read_m3931B96A6502D63027D19B33BA00E7C458F4D7B4() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped1_Write_m6E380B9D97F9BE8C94006C2EFDAB9AECFB71C8A2() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped2_Seek_m48BA1F8D419524EA25388A125ACE01FD0E997E29() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped3_SetSize_mB7C3E686D66E8F06E9481D6568FA59859909618F() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped4_CopyTo_mFC5D2A1F09A0E8B93E0A59E073E3AA1E52BD0734() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped5_Commit_mB80C96189A539191961E33DB294ACE3212AF3F5E() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped6_Revert_m75A5D9DF47733C45D2A898B4BEF1D7F78388FFF7() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped7_LockRegion_m390EE8E850DD8FABE6AE1E5AFFBA3F9B99A97F7C() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped8_UnlockRegion_mC6D0528F61E174C8457129EC134A889C7171053D() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped9_Stat_mA04454F71EE8597AA29723BF0A5BA441E77ED55E() = 0;
	virtual il2cpp_hresult_t STDCALL IStream_U24__Stripped10_Clone_mAD943B3C6CA783518166BCC6DCBB78A60AB210C8() = 0;
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
// ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedDocumentWriter
struct NOVTABLE ISymUnmanagedDocumentWriter_tF11BEB427270C01DB5A54550A354FD1D63219264 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedDocumentWriter_SetSource_mB5D5791F99FD1FD1C7B8ECF4BB7578591CEA77A7(uint32_t ___sourceSize0, uint8_t* ___source1) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedDocumentWriter_SetCheckSum_mDC3CE9A0734397A42BA5DA4B3FB310621D8EBDE8(Guid_t ___algorithmId0, uint32_t ___checkSumSize1, uint8_t* ___checkSum2) = 0;
};
// ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedWriter2
struct NOVTABLE ISymUnmanagedWriter2_t8371869F209CF40AEE8014A40E2C87152C41ED53 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineDocument_m674D16B381D637FE50D8429B9850E4F9BF25AFDC(Il2CppChar* ___url0, Guid_t* ___langauge1, Guid_t* ___languageVendor2, Guid_t* ___documentType3, ISymUnmanagedDocumentWriter_tF11BEB427270C01DB5A54550A354FD1D63219264** ___pRetVal4) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetUserEntryPoint_m0EF60BC7F5E3AAFB87A72388BEEBF875BA4C3A45(int32_t ___methodToken0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_OpenMethod_mCDF14398F6F1213116F0F1B7FA32F6AEF2B3EF0A(int32_t ___methodToken0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_CloseMethod_mEBB7D087D9B4AB8380C0F06B757F0465ACFB9BF6() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_OpenScope_m23054BDB0A492D86A8EAE5569AB3676EC3479CB5(int32_t ___startOffset0, int32_t* ___pRetVal1) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_CloseScope_m0B07FD60B378B3CFCA7FC03ADF901E061C6DAA3E(int32_t ___endOffset0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetScopeRange_Placeholder_m4012D4F3086C0FD1D77F3D44247B34E88C842FBF() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineLocalVariable_Placeholder_m6D284A018B8DF8108D4E8323FDB1CF9CB8FEF4BA() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineParameter_Placeholder_m39C77B95DA219A6FEEBC3D79EF1D02AA5BE59418() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineField_Placeholder_mA471EF3648EE575B1287808A6A0399D2D1AC6AD4() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineGlobalVariable_Placeholder_m8E4F58B59E8AFF901A4310B41FE7DBAA47D447E2() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Close_m2E38A844F7F6EDC34C443169F606A11FB3772462() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetSymAttribute_mCDCBE5F78EB48567757DD40B83CDF6577A2C9DFC(uint32_t ___parent0, Il2CppChar* ___name1, uint32_t ___data2, intptr_t ___signature3) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_OpenNamespace_mA9D5D89CFBC41BADD01C8BEB5F34FD773C55898B(Il2CppChar* ___name0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_CloseNamespace_mD015A26D877C9AA835CE339894912E57D859FD29() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_UsingNamespace_m582833E80A19EB694AD4953915BB3EB5F7A25185(Il2CppChar* ___fullName0) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_SetMethodSourceRange_Placeholder_m77225A6A99BBCA1886DD2DCCF94808B02A4CB7CF() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Initialize_mE51AA7E33D54223F98D85F4BDC32A9444F44FD31(Il2CppIUnknown* ___emitter0, Il2CppChar* ___filename1, IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8* ___pIStream2, IL2CPP_VARIANT_BOOL ___fFullBuild3) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_GetDebugInfo_mBCFB7FCDB49D2CDFEAB13E732274CA266F9EA931(ImageDebugDirectory_t871A3B882EE8C032E8160B6C2E288CE996997392* ___pIDD0, int32_t ___cData1, int32_t* ___pcData2, uint8_t* ___data3) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineSequencePoints_m4C29D9A16EDA9F951BA37BA3911536E47EC47EE9(ISymUnmanagedDocumentWriter_tF11BEB427270C01DB5A54550A354FD1D63219264* ___document0, int32_t ___spCount1, int32_t* ___offsets2, int32_t* ___lines3, int32_t* ___columns4, int32_t* ___endLines5, int32_t* ___endColumns6) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_RemapToken_Placeholder_m1432B4F091F0A5E041525CB4775F62C1EACA5376() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Initialize2_Placeholder_m3399ED1045BE6877BB2633D5E1E7D57162ADACC1() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineConstant_Placeholder_m8AE888927432D979ADE1A862EFDAF6692F9B6140() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_Abort_Placeholder_m42DD41971B14C68432BC552FE6B7A22D2712771D() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineLocalVariable2_mD6C28DD193937E5C95FFB12C90BE525EEE42614A(Il2CppChar* ___name0, int32_t ___attributes1, int32_t ___sigToken2, int32_t ___addrKind3, int32_t ___addr14, int32_t ___addr25, int32_t ___addr36, int32_t ___startOffset7, int32_t ___endOffset8) = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineGlobalVariable2_Placeholder_m550632D5630420742B9A6A56A35DC5B60C1B6A36() = 0;
	virtual il2cpp_hresult_t STDCALL ISymUnmanagedWriter2_DefineConstant2_m4ED124AE23AA3F99F5407FD6FF513F2EED28075D(Il2CppChar* ___name0, Il2CppVariant ___variant1, int32_t ___sigToken2) = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07();
IL2CPP_EXTERN_C_CONST RuntimeType Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0;
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F();
IL2CPP_EXTERN_C_CONST RuntimeType AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0;
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_0_0_0;
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_0_0_0;
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_0_0_0;
IL2CPP_EXTERN_C void AnnotationSym_tD4B48555C6188DDB21191D20BC9CD467AB6425EE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AnnotationSym_tD4B48555C6188DDB21191D20BC9CD467AB6425EE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AnnotationSym_tD4B48555C6188DDB21191D20BC9CD467AB6425EE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AnnotationSym_tD4B48555C6188DDB21191D20BC9CD467AB6425EE_0_0_0;
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A();
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A_0_0_0;
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_0_0_0;
IL2CPP_EXTERN_C void ArrayDimension_t694641F8FFD28C67FF02DAF144269EF708F64588_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ArrayDimension_t694641F8FFD28C67FF02DAF144269EF708F64588_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ArrayDimension_t694641F8FFD28C67FF02DAF144269EF708F64588_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ArrayDimension_t694641F8FFD28C67FF02DAF144269EF708F64588_0_0_0;
IL2CPP_EXTERN_C void ArrayMetadata_tFFDF2DA711B821B4C3B054AFBCADFE8F8555F947_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ArrayMetadata_tFFDF2DA711B821B4C3B054AFBCADFE8F8555F947_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ArrayMetadata_tFFDF2DA711B821B4C3B054AFBCADFE8F8555F947_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ArrayMetadata_tFFDF2DA711B821B4C3B054AFBCADFE8F8555F947_0_0_0;
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Assembly_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Assembly_t_0_0_0;
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_0_0_0;
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_0_0_0;
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_0_0_0;
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_0_0_0;
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_0_0_0;
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_0_0_0;
IL2CPP_EXTERN_C void AttrManyRegSym_tB3F65F6B6301E576838C0A817F37168FB9695E82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrManyRegSym_tB3F65F6B6301E576838C0A817F37168FB9695E82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrManyRegSym_tB3F65F6B6301E576838C0A817F37168FB9695E82_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrManyRegSym_tB3F65F6B6301E576838C0A817F37168FB9695E82_0_0_0;
IL2CPP_EXTERN_C void AttrManyRegSym2_tED6147B70C0A0C33538B35B56B1B35F6EC50908E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrManyRegSym2_tED6147B70C0A0C33538B35B56B1B35F6EC50908E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrManyRegSym2_tED6147B70C0A0C33538B35B56B1B35F6EC50908E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrManyRegSym2_tED6147B70C0A0C33538B35B56B1B35F6EC50908E_0_0_0;
IL2CPP_EXTERN_C void AttrRegRel_tCEDB45BEE76939E4B4AD52DDA648F8297DC9E046_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrRegRel_tCEDB45BEE76939E4B4AD52DDA648F8297DC9E046_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrRegRel_tCEDB45BEE76939E4B4AD52DDA648F8297DC9E046_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrRegRel_tCEDB45BEE76939E4B4AD52DDA648F8297DC9E046_0_0_0;
IL2CPP_EXTERN_C void AttrRegSym_t9A3B7D5963B0E60A30E4E1D5665AD9B386D6210F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrRegSym_t9A3B7D5963B0E60A30E4E1D5665AD9B386D6210F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrRegSym_t9A3B7D5963B0E60A30E4E1D5665AD9B386D6210F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrRegSym_t9A3B7D5963B0E60A30E4E1D5665AD9B386D6210F_0_0_0;
IL2CPP_EXTERN_C void AttrSlotSym_t5B3A38AE02F768ABE7D5337BD9F8A580F9637026_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttrSlotSym_t5B3A38AE02F768ABE7D5337BD9F8A580F9637026_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttrSlotSym_t5B3A38AE02F768ABE7D5337BD9F8A580F9637026_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttrSlotSym_t5B3A38AE02F768ABE7D5337BD9F8A580F9637026_0_0_0;
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_0_0_0;
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0;
IL2CPP_EXTERN_C void BitSet_t8067A22E00DCE19D7DD0AF64B573F8D967A3DB0A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BitSet_t8067A22E00DCE19D7DD0AF64B573F8D967A3DB0A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BitSet_t8067A22E00DCE19D7DD0AF64B573F8D967A3DB0A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BitSet_t8067A22E00DCE19D7DD0AF64B573F8D967A3DB0A_0_0_0;
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_0_0_0;
IL2CPP_EXTERN_C void BlockSym32_t35547FB19A1E68647DF0E397E89160ED91A9B8A6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BlockSym32_t35547FB19A1E68647DF0E397E89160ED91A9B8A6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BlockSym32_t35547FB19A1E68647DF0E397E89160ED91A9B8A6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BlockSym32_t35547FB19A1E68647DF0E397E89160ED91A9B8A6_0_0_0;
IL2CPP_EXTERN_C void BpRelSym32_tE8942B71C13FAA2CD3CAD3EA85775612C0863D07_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BpRelSym32_tE8942B71C13FAA2CD3CAD3EA85775612C0863D07_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BpRelSym32_tE8942B71C13FAA2CD3CAD3EA85775612C0863D07_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BpRelSym32_tE8942B71C13FAA2CD3CAD3EA85775612C0863D07_0_0_0;
IL2CPP_EXTERN_C void CFlagSym_t7B6B2562CECFF683918DD709B1A8CBC44EE79336_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CFlagSym_t7B6B2562CECFF683918DD709B1A8CBC44EE79336_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CFlagSym_t7B6B2562CECFF683918DD709B1A8CBC44EE79336_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CFlagSym_t7B6B2562CECFF683918DD709B1A8CBC44EE79336_0_0_0;
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_0_0_0;
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_0_0_0;
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_0_0_0;
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_0_0_0;
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_0_0_0;
IL2CPP_EXTERN_C void CoffGroupSym_t80DA526E302A8ED86368EE1B4778EE0731019877_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CoffGroupSym_t80DA526E302A8ED86368EE1B4778EE0731019877_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CoffGroupSym_t80DA526E302A8ED86368EE1B4778EE0731019877_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CoffGroupSym_t80DA526E302A8ED86368EE1B4778EE0731019877_0_0_0;
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_0_0_0;
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_0_0_0;
IL2CPP_EXTERN_C void CompileSym_tE4231DD3072B5E36F97D6ABD133F2B7D48E16E2B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CompileSym_tE4231DD3072B5E36F97D6ABD133F2B7D48E16E2B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CompileSym_tE4231DD3072B5E36F97D6ABD133F2B7D48E16E2B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CompileSym_tE4231DD3072B5E36F97D6ABD133F2B7D48E16E2B_0_0_0;
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_0_0_0;
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_0_0_0;
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_0_0_0;
IL2CPP_EXTERN_C void ConstSym_t9E2C2611D0F9BBEAABC611087AFF3FE33074F60E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConstSym_t9E2C2611D0F9BBEAABC611087AFF3FE33074F60E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConstSym_t9E2C2611D0F9BBEAABC611087AFF3FE33074F60E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConstSym_t9E2C2611D0F9BBEAABC611087AFF3FE33074F60E_0_0_0;
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_0_0_0;
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_0_0_0;
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3();
IL2CPP_EXTERN_C_CONST RuntimeType CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3_0_0_0;
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_0_0_0;
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_0_0_0;
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_0_0_0;
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_0_0_0;
IL2CPP_EXTERN_C void CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeArgument_t9D9EA95244F5F2EDDE5885E96185FA810F4879BA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeArgument_t9D9EA95244F5F2EDDE5885E96185FA810F4879BA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeArgument_t9D9EA95244F5F2EDDE5885E96185FA810F4879BA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeArgument_t9D9EA95244F5F2EDDE5885E96185FA810F4879BA_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_tE86CBC971052F88D6563E7CC0C3AA9E5718040C4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_tE86CBC971052F88D6563E7CC0C3AA9E5718040C4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_tE86CBC971052F88D6563E7CC0C3AA9E5718040C4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeNamedArgument_tE86CBC971052F88D6563E7CC0C3AA9E5718040C4_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_0_0_0;
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CustomValueTypeParam_t90840EB4FDD50DE0A4979BD5A49D7D41668F1F34();
IL2CPP_EXTERN_C_CONST RuntimeType CustomValueTypeParam_t90840EB4FDD50DE0A4979BD5A49D7D41668F1F34_0_0_0;
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_0_0_0;
IL2CPP_EXTERN_C void DatasSym32_t4FF90ED7F1238D34D83CBB3EEC9D7BC842051A64_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DatasSym32_t4FF90ED7F1238D34D83CBB3EEC9D7BC842051A64_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DatasSym32_t4FF90ED7F1238D34D83CBB3EEC9D7BC842051A64_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DatasSym32_t4FF90ED7F1238D34D83CBB3EEC9D7BC842051A64_0_0_0;
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_0_0_0;
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_0_0_0;
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DecimalParam_t3CF5D70E3A495050CBD9B76CDB1A1AC8B6229ECB();
IL2CPP_EXTERN_C_CONST RuntimeType DecimalParam_t3CF5D70E3A495050CBD9B76CDB1A1AC8B6229ECB_0_0_0;
IL2CPP_EXTERN_C void DefRangeSym2_tC2F27D26EC0BDDAEA69138C228BA81BF501A7C85_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DefRangeSym2_tC2F27D26EC0BDDAEA69138C228BA81BF501A7C85_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DefRangeSym2_tC2F27D26EC0BDDAEA69138C228BA81BF501A7C85_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DefRangeSym2_tC2F27D26EC0BDDAEA69138C228BA81BF501A7C85_0_0_0;
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Delegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Delegate_t_0_0_0;
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_0_0_0;
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_0_0_0;
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_0_0_0;
IL2CPP_EXTERN_C void DiscardedSym_t1239E7420D07B66DDF346584968BCAC038F02C92_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DiscardedSym_t1239E7420D07B66DDF346584968BCAC038F02C92_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DiscardedSym_t1239E7420D07B66DDF346584968BCAC038F02C92_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DiscardedSym_t1239E7420D07B66DDF346584968BCAC038F02C92_0_0_0;
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_0_0_0;
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_0_0_0;
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_EnumParam_t6F22AF76062EB374744F6A9E672743E7CF856C11();
IL2CPP_EXTERN_C_CONST RuntimeType EnumParam_t6F22AF76062EB374744F6A9E672743E7CF856C11_0_0_0;
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_0_0_0;
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_0_0_0;
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_0_0_0;
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_0_0_0;
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Exception_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Exception_t_0_0_0;
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_0_0_0;
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_0_0_0;
IL2CPP_EXTERN_C void ExportSym_t90AA474EF93907B27C0E514D1DE18C32925F76CA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ExportSym_t90AA474EF93907B27C0E514D1DE18C32925F76CA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ExportSym_t90AA474EF93907B27C0E514D1DE18C32925F76CA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ExportSym_t90AA474EF93907B27C0E514D1DE18C32925F76CA_0_0_0;
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0;
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_0_0_0;
IL2CPP_EXTERN_C void FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_0_0_0;
IL2CPP_EXTERN_C void FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_0_0_0;
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_0_0_0;
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_0_0_0;
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_0_0_0;
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_0_0_0;
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_0_0_0;
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_0_0_0;
IL2CPP_EXTERN_C void FrameRelSym_t4B679F4E0FFD6733B87FA6DE9A57A86290E3BD09_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FrameRelSym_t4B679F4E0FFD6733B87FA6DE9A57A86290E3BD09_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FrameRelSym_t4B679F4E0FFD6733B87FA6DE9A57A86290E3BD09_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FrameRelSym_t4B679F4E0FFD6733B87FA6DE9A57A86290E3BD09_0_0_0;
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0;
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0;
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0;
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0;
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_0_0_0;
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_0_0_0;
const Il2CppGuid IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C::IID = { 0xba3fee4c, 0xecb9, 0x4e41, 0x83, 0xb7, 0x18, 0x3f, 0xa4, 0x1c, 0xd8, 0x59 };
IL2CPP_EXTERN_C_CONST RuntimeType IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C_0_0_0;
const Il2CppGuid IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID = { 0x7dac8207, 0xd3ae, 0x4c75, 0x9b, 0x67, 0x92, 0x80, 0x1a, 0x49, 0x7d, 0x44 };
IL2CPP_EXTERN_C_CONST RuntimeType IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6_0_0_0;
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_0_0_0;
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_0_0_0;
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_0_0_0;
const Il2CppGuid IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID = { 0xc, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
IL2CPP_EXTERN_C_CONST RuntimeType IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_0_0_0;
const Il2CppGuid ISymUnmanagedDocumentWriter_tF11BEB427270C01DB5A54550A354FD1D63219264::IID = { 0xb01fafeb, 0xc450, 0x3a4d, 0xbe, 0xec, 0xb4, 0xce, 0xec, 0x1, 0xe0, 0x6 };
IL2CPP_EXTERN_C_CONST RuntimeType ISymUnmanagedDocumentWriter_tF11BEB427270C01DB5A54550A354FD1D63219264_0_0_0;
const Il2CppGuid ISymUnmanagedWriter2_t8371869F209CF40AEE8014A40E2C87152C41ED53::IID = { 0xb97726e, 0x9e6d, 0x4f05, 0x9a, 0x26, 0x42, 0x40, 0x22, 0x9, 0x3c, 0xaa };
IL2CPP_EXTERN_C_CONST RuntimeType ISymUnmanagedWriter2_t8371869F209CF40AEE8014A40E2C87152C41ED53_0_0_0;
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_0_0_0;
IL2CPP_EXTERN_C void ImportGenericContext_t1C682853AF132E8DA6F21011014A2336DB0EDBC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImportGenericContext_t1C682853AF132E8DA6F21011014A2336DB0EDBC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImportGenericContext_t1C682853AF132E8DA6F21011014A2336DB0EDBC7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImportGenericContext_t1C682853AF132E8DA6F21011014A2336DB0EDBC7_0_0_0;
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_0_0_0;
IL2CPP_EXTERN_C void InlineMethodInfo_t317897333AED1A3740B5B6BDDB3964881F5827CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InlineMethodInfo_t317897333AED1A3740B5B6BDDB3964881F5827CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InlineMethodInfo_t317897333AED1A3740B5B6BDDB3964881F5827CE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InlineMethodInfo_t317897333AED1A3740B5B6BDDB3964881F5827CE_0_0_0;
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_0_0_0;
IL2CPP_EXTERN_C void InstructionOffset_t4C4248D55DABF836493F8C889FF26F47F874E489_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionOffset_t4C4248D55DABF836493F8C889FF26F47F874E489_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionOffset_t4C4248D55DABF836493F8C889FF26F47F874E489_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionOffset_t4C4248D55DABF836493F8C889FF26F47F874E489_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_IntParam_t0D7C1684B422CA9295EC57BE9A249D582CBC6C6B();
IL2CPP_EXTERN_C_CONST RuntimeType IntParam_t0D7C1684B422CA9295EC57BE9A249D582CBC6C6B_0_0_0;
IL2CPP_EXTERN_C void InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_0_0_0;
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_0_0_0;
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_0_0_0;
IL2CPP_EXTERN_C void InvocationContext_tE66E00A478C3DCDB761F8C6C5E059A19125E4860_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InvocationContext_tE66E00A478C3DCDB761F8C6C5E059A19125E4860_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InvocationContext_tE66E00A478C3DCDB761F8C6C5E059A19125E4860_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InvocationContext_tE66E00A478C3DCDB761F8C6C5E059A19125E4860_0_0_0;
IL2CPP_EXTERN_C void JITCompiler_t5B8F51C4C2A7E876758CAED06ED146FDF2C73E0F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void JITCompiler_t5B8F51C4C2A7E876758CAED06ED146FDF2C73E0F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void JITCompiler_t5B8F51C4C2A7E876758CAED06ED146FDF2C73E0F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType JITCompiler_t5B8F51C4C2A7E876758CAED06ED146FDF2C73E0F_0_0_0;
IL2CPP_EXTERN_C void LabelSym32_tCD17E3F9A8DCEB79256CD82FE654B3DC286FB5FC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LabelSym32_tCD17E3F9A8DCEB79256CD82FE654B3DC286FB5FC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LabelSym32_tCD17E3F9A8DCEB79256CD82FE654B3DC286FB5FC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LabelSym32_tCD17E3F9A8DCEB79256CD82FE654B3DC286FB5FC_0_0_0;
IL2CPP_EXTERN_C void LeafAlias_tAE818494E38AFDFFA05C787095CD3F3482E85604_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafAlias_tAE818494E38AFDFFA05C787095CD3F3482E85604_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafAlias_tAE818494E38AFDFFA05C787095CD3F3482E85604_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafAlias_tAE818494E38AFDFFA05C787095CD3F3482E85604_0_0_0;
IL2CPP_EXTERN_C void LeafArgList_t8FAD47F81B5481561DE4400B32D326CAF2B2F664_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafArgList_t8FAD47F81B5481561DE4400B32D326CAF2B2F664_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafArgList_t8FAD47F81B5481561DE4400B32D326CAF2B2F664_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafArgList_t8FAD47F81B5481561DE4400B32D326CAF2B2F664_0_0_0;
IL2CPP_EXTERN_C void LeafArray_tC5C381AA2CECBBA1BC324C4C5A4DCBC80AD6F117_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafArray_tC5C381AA2CECBBA1BC324C4C5A4DCBC80AD6F117_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafArray_tC5C381AA2CECBBA1BC324C4C5A4DCBC80AD6F117_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafArray_tC5C381AA2CECBBA1BC324C4C5A4DCBC80AD6F117_0_0_0;
IL2CPP_EXTERN_C void LeafBClass_t9706F17D37E331D77D4639B367908D19F237072F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafBClass_t9706F17D37E331D77D4639B367908D19F237072F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafBClass_t9706F17D37E331D77D4639B367908D19F237072F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafBClass_t9706F17D37E331D77D4639B367908D19F237072F_0_0_0;
IL2CPP_EXTERN_C void LeafClass_tFF470C9351EF8A7C1B552089388C1B823E6AED3E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafClass_tFF470C9351EF8A7C1B552089388C1B823E6AED3E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafClass_tFF470C9351EF8A7C1B552089388C1B823E6AED3E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafClass_tFF470C9351EF8A7C1B552089388C1B823E6AED3E_0_0_0;
IL2CPP_EXTERN_C void LeafCobol0_t72728390346841BF4E36346BACED874070403DA4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafCobol0_t72728390346841BF4E36346BACED874070403DA4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafCobol0_t72728390346841BF4E36346BACED874070403DA4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafCobol0_t72728390346841BF4E36346BACED874070403DA4_0_0_0;
IL2CPP_EXTERN_C void LeafCobol1_t35D2CF1B94181044CEDB9E10A83A71B4DAAB7D31_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafCobol1_t35D2CF1B94181044CEDB9E10A83A71B4DAAB7D31_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafCobol1_t35D2CF1B94181044CEDB9E10A83A71B4DAAB7D31_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafCobol1_t35D2CF1B94181044CEDB9E10A83A71B4DAAB7D31_0_0_0;
IL2CPP_EXTERN_C void LeafDefArg_tFDB27D450719305523FD6D0EE17C5179D0CF3254_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDefArg_tFDB27D450719305523FD6D0EE17C5179D0CF3254_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDefArg_tFDB27D450719305523FD6D0EE17C5179D0CF3254_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDefArg_tFDB27D450719305523FD6D0EE17C5179D0CF3254_0_0_0;
IL2CPP_EXTERN_C void LeafDerived_t19DA359B459F25E98FA60A49118D897D3BC265BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDerived_t19DA359B459F25E98FA60A49118D897D3BC265BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDerived_t19DA359B459F25E98FA60A49118D897D3BC265BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDerived_t19DA359B459F25E98FA60A49118D897D3BC265BB_0_0_0;
IL2CPP_EXTERN_C void LeafDimArray_tA2A806CBA3FBED98F7E531D9822D6FEE54014150_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDimArray_tA2A806CBA3FBED98F7E531D9822D6FEE54014150_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDimArray_tA2A806CBA3FBED98F7E531D9822D6FEE54014150_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDimArray_tA2A806CBA3FBED98F7E531D9822D6FEE54014150_0_0_0;
IL2CPP_EXTERN_C void LeafDimCon_tD30F82ED9822897296336C3098ECF323BBC0BF38_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDimCon_tD30F82ED9822897296336C3098ECF323BBC0BF38_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDimCon_tD30F82ED9822897296336C3098ECF323BBC0BF38_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDimCon_tD30F82ED9822897296336C3098ECF323BBC0BF38_0_0_0;
IL2CPP_EXTERN_C void LeafDimVar_tEEA683A92D6068E4B4C24E2D17F7B3E6BA953C32_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafDimVar_tEEA683A92D6068E4B4C24E2D17F7B3E6BA953C32_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafDimVar_tEEA683A92D6068E4B4C24E2D17F7B3E6BA953C32_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafDimVar_tEEA683A92D6068E4B4C24E2D17F7B3E6BA953C32_0_0_0;
IL2CPP_EXTERN_C void LeafEnum_tB0E93F84B872D2BE483C89FB6A5F3391C1AA2902_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafEnum_tB0E93F84B872D2BE483C89FB6A5F3391C1AA2902_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafEnum_tB0E93F84B872D2BE483C89FB6A5F3391C1AA2902_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafEnum_tB0E93F84B872D2BE483C89FB6A5F3391C1AA2902_0_0_0;
IL2CPP_EXTERN_C void LeafEnumerate_t40A6CB88B2C1BF7EFE03FC81C02C61BE9FDB606B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafEnumerate_t40A6CB88B2C1BF7EFE03FC81C02C61BE9FDB606B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafEnumerate_t40A6CB88B2C1BF7EFE03FC81C02C61BE9FDB606B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafEnumerate_t40A6CB88B2C1BF7EFE03FC81C02C61BE9FDB606B_0_0_0;
IL2CPP_EXTERN_C void LeafFieldList_t8A095A7FC326BF9B329ED8CE982D4812F0C306A5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafFieldList_t8A095A7FC326BF9B329ED8CE982D4812F0C306A5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafFieldList_t8A095A7FC326BF9B329ED8CE982D4812F0C306A5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafFieldList_t8A095A7FC326BF9B329ED8CE982D4812F0C306A5_0_0_0;
IL2CPP_EXTERN_C void LeafFriendFcn_t95F4DD55850CFCF520F34D890D82C16A533F3EA6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafFriendFcn_t95F4DD55850CFCF520F34D890D82C16A533F3EA6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafFriendFcn_t95F4DD55850CFCF520F34D890D82C16A533F3EA6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafFriendFcn_t95F4DD55850CFCF520F34D890D82C16A533F3EA6_0_0_0;
IL2CPP_EXTERN_C void LeafList_t7C2E4D1B2FA671EEE7959CFF0E263E643D4548CF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafList_t7C2E4D1B2FA671EEE7959CFF0E263E643D4548CF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafList_t7C2E4D1B2FA671EEE7959CFF0E263E643D4548CF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafList_t7C2E4D1B2FA671EEE7959CFF0E263E643D4548CF_0_0_0;
IL2CPP_EXTERN_C void LeafManaged_tE8DF4D70910FC94BBBA53AB7A1FEDCA11920F515_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafManaged_tE8DF4D70910FC94BBBA53AB7A1FEDCA11920F515_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafManaged_tE8DF4D70910FC94BBBA53AB7A1FEDCA11920F515_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafManaged_tE8DF4D70910FC94BBBA53AB7A1FEDCA11920F515_0_0_0;
IL2CPP_EXTERN_C void LeafMember_tAAF8A8475F6A9AFAC4E644C35D5CA3DEB3A5A482_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMember_tAAF8A8475F6A9AFAC4E644C35D5CA3DEB3A5A482_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMember_tAAF8A8475F6A9AFAC4E644C35D5CA3DEB3A5A482_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMember_tAAF8A8475F6A9AFAC4E644C35D5CA3DEB3A5A482_0_0_0;
IL2CPP_EXTERN_C void LeafMemberModify_t4FF7CD7E02987E015E212CCC959421415ED15200_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMemberModify_t4FF7CD7E02987E015E212CCC959421415ED15200_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMemberModify_t4FF7CD7E02987E015E212CCC959421415ED15200_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMemberModify_t4FF7CD7E02987E015E212CCC959421415ED15200_0_0_0;
IL2CPP_EXTERN_C void LeafMethod_tCA4611C19B6ADA17121DB9C6789CF4890DCD17BF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMethod_tCA4611C19B6ADA17121DB9C6789CF4890DCD17BF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMethod_tCA4611C19B6ADA17121DB9C6789CF4890DCD17BF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMethod_tCA4611C19B6ADA17121DB9C6789CF4890DCD17BF_0_0_0;
IL2CPP_EXTERN_C void LeafMethodList_t50FFA143F60858305998AB3194640B44617F7BD1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafMethodList_t50FFA143F60858305998AB3194640B44617F7BD1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafMethodList_t50FFA143F60858305998AB3194640B44617F7BD1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafMethodList_t50FFA143F60858305998AB3194640B44617F7BD1_0_0_0;
IL2CPP_EXTERN_C void LeafNestType_tB2A49FF9D4AF4C4D09BC375BA55B3EFA0156C786_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafNestType_tB2A49FF9D4AF4C4D09BC375BA55B3EFA0156C786_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafNestType_tB2A49FF9D4AF4C4D09BC375BA55B3EFA0156C786_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafNestType_tB2A49FF9D4AF4C4D09BC375BA55B3EFA0156C786_0_0_0;
IL2CPP_EXTERN_C void LeafNestTypeEx_t1A5E18B3D844B2C0D9E7251092FF143058F9D89F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafNestTypeEx_t1A5E18B3D844B2C0D9E7251092FF143058F9D89F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafNestTypeEx_t1A5E18B3D844B2C0D9E7251092FF143058F9D89F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafNestTypeEx_t1A5E18B3D844B2C0D9E7251092FF143058F9D89F_0_0_0;
IL2CPP_EXTERN_C void LeafOEM_t5FBBFC82AEAE53042041664D70114A8D139BD911_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafOEM_t5FBBFC82AEAE53042041664D70114A8D139BD911_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafOEM_t5FBBFC82AEAE53042041664D70114A8D139BD911_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafOEM_t5FBBFC82AEAE53042041664D70114A8D139BD911_0_0_0;
IL2CPP_EXTERN_C void LeafOEM2_t9436653424313BDCC06618C79EB2840DAC63FD69_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafOEM2_t9436653424313BDCC06618C79EB2840DAC63FD69_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafOEM2_t9436653424313BDCC06618C79EB2840DAC63FD69_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafOEM2_t9436653424313BDCC06618C79EB2840DAC63FD69_0_0_0;
IL2CPP_EXTERN_C void LeafOneMethod_t9B50AEE4A203093243B44AD836BDBA8F121AC55F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafOneMethod_t9B50AEE4A203093243B44AD836BDBA8F121AC55F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafOneMethod_t9B50AEE4A203093243B44AD836BDBA8F121AC55F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafOneMethod_t9B50AEE4A203093243B44AD836BDBA8F121AC55F_0_0_0;
IL2CPP_EXTERN_C void LeafPreComp_tEDF9DD601391E1A11CE852338BF015014A665466_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafPreComp_tEDF9DD601391E1A11CE852338BF015014A665466_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafPreComp_tEDF9DD601391E1A11CE852338BF015014A665466_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafPreComp_tEDF9DD601391E1A11CE852338BF015014A665466_0_0_0;
IL2CPP_EXTERN_C void LeafRefSym_t474A0FCFFC3DF8495CF87927CB877A6B637097EA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafRefSym_t474A0FCFFC3DF8495CF87927CB877A6B637097EA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafRefSym_t474A0FCFFC3DF8495CF87927CB877A6B637097EA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafRefSym_t474A0FCFFC3DF8495CF87927CB877A6B637097EA_0_0_0;
IL2CPP_EXTERN_C void LeafSTMember_tEB834DDC0EBC5B6A4EEE1B98511BDD3D5ADDFEC4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafSTMember_tEB834DDC0EBC5B6A4EEE1B98511BDD3D5ADDFEC4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafSTMember_tEB834DDC0EBC5B6A4EEE1B98511BDD3D5ADDFEC4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafSTMember_tEB834DDC0EBC5B6A4EEE1B98511BDD3D5ADDFEC4_0_0_0;
IL2CPP_EXTERN_C void LeafSkip_t059B0B2C46AACED0D353B083C9850C6BCF86BE42_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafSkip_t059B0B2C46AACED0D353B083C9850C6BCF86BE42_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafSkip_t059B0B2C46AACED0D353B083C9850C6BCF86BE42_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafSkip_t059B0B2C46AACED0D353B083C9850C6BCF86BE42_0_0_0;
IL2CPP_EXTERN_C void LeafTypeServer_tE97E93FA75F1B71519C16FBE6CB5E58875423099_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafTypeServer_tE97E93FA75F1B71519C16FBE6CB5E58875423099_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafTypeServer_tE97E93FA75F1B71519C16FBE6CB5E58875423099_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafTypeServer_tE97E93FA75F1B71519C16FBE6CB5E58875423099_0_0_0;
IL2CPP_EXTERN_C void LeafTypeServer2_t8FC4A14403EB867E6F84F682BAF26491773A5B0A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafTypeServer2_t8FC4A14403EB867E6F84F682BAF26491773A5B0A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafTypeServer2_t8FC4A14403EB867E6F84F682BAF26491773A5B0A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafTypeServer2_t8FC4A14403EB867E6F84F682BAF26491773A5B0A_0_0_0;
IL2CPP_EXTERN_C void LeafUnion_t17FF31A726D08A7E748AD064CF65B860F6926BE7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafUnion_t17FF31A726D08A7E748AD064CF65B860F6926BE7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafUnion_t17FF31A726D08A7E748AD064CF65B860F6926BE7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafUnion_t17FF31A726D08A7E748AD064CF65B860F6926BE7_0_0_0;
IL2CPP_EXTERN_C void LeafVBClass_t3C38EB9A50D7E901D2755E31597D6B00B31E8853_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVBClass_t3C38EB9A50D7E901D2755E31597D6B00B31E8853_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVBClass_t3C38EB9A50D7E901D2755E31597D6B00B31E8853_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVBClass_t3C38EB9A50D7E901D2755E31597D6B00B31E8853_0_0_0;
IL2CPP_EXTERN_C void LeafVFTPath_t95E5AE4B8118AE399126758E350610CE0C6CA3C2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVFTPath_t95E5AE4B8118AE399126758E350610CE0C6CA3C2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVFTPath_t95E5AE4B8118AE399126758E350610CE0C6CA3C2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVFTPath_t95E5AE4B8118AE399126758E350610CE0C6CA3C2_0_0_0;
IL2CPP_EXTERN_C void LeafVTShape_t91BF65182016C03DDA8D810EDE1840B12807786B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVTShape_t91BF65182016C03DDA8D810EDE1840B12807786B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVTShape_t91BF65182016C03DDA8D810EDE1840B12807786B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVTShape_t91BF65182016C03DDA8D810EDE1840B12807786B_0_0_0;
IL2CPP_EXTERN_C void LeafVarString_t2C4E381206B6D027B69860927DB3085097F9D84D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LeafVarString_t2C4E381206B6D027B69860927DB3085097F9D84D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LeafVarString_t2C4E381206B6D027B69860927DB3085097F9D84D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LeafVarString_t2C4E381206B6D027B69860927DB3085097F9D84D_0_0_0;
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_0_0_0;
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_0_0_0;
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_0_0_0;
IL2CPP_EXTERN_C void ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_0_0_0;
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_0_0_0;
IL2CPP_EXTERN_C void LocalSym_t7556B9814002E85C24964E988D2073E09219D9D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalSym_t7556B9814002E85C24964E988D2073E09219D9D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalSym_t7556B9814002E85C24964E988D2073E09219D9D4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalSym_t7556B9814002E85C24964E988D2073E09219D9D4_0_0_0;
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_0_0_0;
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_0_0_0;
IL2CPP_EXTERN_C void ManProcSym_t36EECFA08E28F6714C2E2D95F5FC4E23AC8CF890_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManProcSym_t36EECFA08E28F6714C2E2D95F5FC4E23AC8CF890_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManProcSym_t36EECFA08E28F6714C2E2D95F5FC4E23AC8CF890_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManProcSym_t36EECFA08E28F6714C2E2D95F5FC4E23AC8CF890_0_0_0;
IL2CPP_EXTERN_C void ManProcSymMips_tAB74450DF30C4ADE63AB0153B022A910968E9811_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManProcSymMips_tAB74450DF30C4ADE63AB0153B022A910968E9811_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManProcSymMips_tAB74450DF30C4ADE63AB0153B022A910968E9811_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManProcSymMips_tAB74450DF30C4ADE63AB0153B022A910968E9811_0_0_0;
IL2CPP_EXTERN_C void ManyRegSym_t49F714226130200B23BAA794D72E28C74A1E8E40_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManyRegSym_t49F714226130200B23BAA794D72E28C74A1E8E40_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManyRegSym_t49F714226130200B23BAA794D72E28C74A1E8E40_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManyRegSym_t49F714226130200B23BAA794D72E28C74A1E8E40_0_0_0;
IL2CPP_EXTERN_C void ManyRegSym2_tD8814A02ABD8881DE454A7D7FD7037B7C69D79DA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ManyRegSym2_tD8814A02ABD8881DE454A7D7FD7037B7C69D79DA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ManyRegSym2_tD8814A02ABD8881DE454A7D7FD7037B7C69D79DA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ManyRegSym2_tD8814A02ABD8881DE454A7D7FD7037B7C69D79DA_0_0_0;
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_0_0_0;
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_0_0_0;
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_0_0_0;
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_0_0_0;
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_0_0_0;
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_0_0_0;
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_0_0_0;
IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694(RuntimeObject* obj);
IL2CPP_EXTERN_C_CONST RuntimeType ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_0_0_0;
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_0_0_0;
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_0_0_0;
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_0_0_0;
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_0_0_0;
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_0_0_0;
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_0_0_0;
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_0_0_0;
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MulticastDelegate_t_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MulticastDelegate_t_0_0_0;
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_0_0_0;
IL2CPP_EXTERN_C void ObjNameSym_tA937F8537081CFB8431F4F0725A828E6B50E0C70_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ObjNameSym_tA937F8537081CFB8431F4F0725A828E6B50E0C70_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ObjNameSym_tA937F8537081CFB8431F4F0725A828E6B50E0C70_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ObjNameSym_tA937F8537081CFB8431F4F0725A828E6B50E0C70_0_0_0;
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ObjectCheck_t3C3B6487453EE3D86019E87B8FFBC002A09F834D();
IL2CPP_EXTERN_C_CONST RuntimeType ObjectCheck_t3C3B6487453EE3D86019E87B8FFBC002A09F834D_0_0_0;
IL2CPP_EXTERN_C void ObjectMetadata_tDD4AE894EE76776B42938752FA5EF5A4F14211B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ObjectMetadata_tDD4AE894EE76776B42938752FA5EF5A4F14211B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ObjectMetadata_tDD4AE894EE76776B42938752FA5EF5A4F14211B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ObjectMetadata_tDD4AE894EE76776B42938752FA5EF5A4F14211B4_0_0_0;
IL2CPP_EXTERN_C void OemSymbol_tD3CFB7FA74122CA34C9072A8E2120D7FDFEFFFC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OemSymbol_tD3CFB7FA74122CA34C9072A8E2120D7FDFEFFFC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OemSymbol_tD3CFB7FA74122CA34C9072A8E2120D7FDFEFFFC7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OemSymbol_tD3CFB7FA74122CA34C9072A8E2120D7FDFEFFFC7_0_0_0;
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_0_0_0;
IL2CPP_EXTERN_C void Param1_t15D4785333B5C5646D9CD61752047255E7409602_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Param1_t15D4785333B5C5646D9CD61752047255E7409602_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Param1_t15D4785333B5C5646D9CD61752047255E7409602_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Param1_t15D4785333B5C5646D9CD61752047255E7409602_0_0_0;
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_0_0_0;
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_0_0_0;
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_0_0_0;
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_0_0_0;
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_0_0_0;
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointLight_tD01A1428DC1015D98A527136034187F732433EA7_0_0_0;
IL2CPP_EXTERN_C void PrewarmInfo_tF6EA23A3006501844EC0BD35D13BEE754BEAACA5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PrewarmInfo_tF6EA23A3006501844EC0BD35D13BEE754BEAACA5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PrewarmInfo_tF6EA23A3006501844EC0BD35D13BEE754BEAACA5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PrewarmInfo_tF6EA23A3006501844EC0BD35D13BEE754BEAACA5_0_0_0;
IL2CPP_EXTERN_C void ProcSym32_t550E4764712286427A5A39716369A85F48DA7838_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcSym32_t550E4764712286427A5A39716369A85F48DA7838_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcSym32_t550E4764712286427A5A39716369A85F48DA7838_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcSym32_t550E4764712286427A5A39716369A85F48DA7838_0_0_0;
IL2CPP_EXTERN_C void ProcSymIa64_tDC9CCE068358AFD22A6B965C8660EA42877F3932_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcSymIa64_tDC9CCE068358AFD22A6B965C8660EA42877F3932_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcSymIa64_tDC9CCE068358AFD22A6B965C8660EA42877F3932_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcSymIa64_tDC9CCE068358AFD22A6B965C8660EA42877F3932_0_0_0;
IL2CPP_EXTERN_C void ProcSymMips_t59E19FDBECDBBA7A30C8C3B140A59DEA564391C9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcSymMips_t59E19FDBECDBBA7A30C8C3B140A59DEA564391C9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcSymMips_t59E19FDBECDBBA7A30C8C3B140A59DEA564391C9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcSymMips_t59E19FDBECDBBA7A30C8C3B140A59DEA564391C9_0_0_0;
IL2CPP_EXTERN_C void PropertyMetadata_t12480FB01CB9599C3D6DF4942FF6AC75300FCCC3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PropertyMetadata_t12480FB01CB9599C3D6DF4942FF6AC75300FCCC3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PropertyMetadata_t12480FB01CB9599C3D6DF4942FF6AC75300FCCC3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PropertyMetadata_t12480FB01CB9599C3D6DF4942FF6AC75300FCCC3_0_0_0;
IL2CPP_EXTERN_C void PubSym32_t3D7D43BB34192D1D68FAB409AC29AF91441F1B00_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PubSym32_t3D7D43BB34192D1D68FAB409AC29AF91441F1B00_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PubSym32_t3D7D43BB34192D1D68FAB409AC29AF91441F1B00_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PubSym32_t3D7D43BB34192D1D68FAB409AC29AF91441F1B00_0_0_0;
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_0_0_0;
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_0_0_0;
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_0_0_0;
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_0_0_0;
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0;
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_0_0_0;
IL2CPP_EXTERN_C void RefSym2_t660A79BE8BD4DE4FFC7B0213F23B13D1ABC2DC67_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RefSym2_t660A79BE8BD4DE4FFC7B0213F23B13D1ABC2DC67_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RefSym2_t660A79BE8BD4DE4FFC7B0213F23B13D1ABC2DC67_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RefSym2_t660A79BE8BD4DE4FFC7B0213F23B13D1ABC2DC67_0_0_0;
IL2CPP_EXTERN_C void RegRel32_t373DE1258EF16B325B16198BECE93DC632CE6DF9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegRel32_t373DE1258EF16B325B16198BECE93DC632CE6DF9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegRel32_t373DE1258EF16B325B16198BECE93DC632CE6DF9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegRel32_t373DE1258EF16B325B16198BECE93DC632CE6DF9_0_0_0;
IL2CPP_EXTERN_C void RegSym_t59599D122067D3D2031D896935B4B6B48C7C63B4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegSym_t59599D122067D3D2031D896935B4B6B48C7C63B4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegSym_t59599D122067D3D2031D896935B4B6B48C7C63B4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegSym_t59599D122067D3D2031D896935B4B6B48C7C63B4_0_0_0;
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_0_0_0;
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_0_0_0;
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_0_0_0;
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_0_0_0;
IL2CPP_EXTERN_C void RegisterFrameInfo_t579BAED29C41F77361524954DC13120B1FAD0C7F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegisterFrameInfo_t579BAED29C41F77361524954DC13120B1FAD0C7F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegisterFrameInfo_t579BAED29C41F77361524954DC13120B1FAD0C7F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegisterFrameInfo_t579BAED29C41F77361524954DC13120B1FAD0C7F_0_0_0;
IL2CPP_EXTERN_C void RegisterVMSymbol_t391D59EC603DD75307C1D720D163873A08DAF678_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RegisterVMSymbol_t391D59EC603DD75307C1D720D163873A08DAF678_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RegisterVMSymbol_t391D59EC603DD75307C1D720D163873A08DAF678_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RegisterVMSymbol_t391D59EC603DD75307C1D720D163873A08DAF678_0_0_0;
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_0_0_0;
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_0_0_0;
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_0_0_0;
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_0_0_0;
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_0_0_0;
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_0_0_0;
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_0_0_0;
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_0_0_0;
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716();
IL2CPP_EXTERN_C_CONST RuntimeType SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716_0_0_0;
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_0_0_0;
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_0_0_0;
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0;
IL2CPP_EXTERN_C void SectionSym_t66D84738FC60DB80D443BB100218C2C086B70E81_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SectionSym_t66D84738FC60DB80D443BB100218C2C086B70E81_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SectionSym_t66D84738FC60DB80D443BB100218C2C086B70E81_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SectionSym_t66D84738FC60DB80D443BB100218C2C086B70E81_0_0_0;
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_0_0_0;
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F();
IL2CPP_EXTERN_C_CONST RuntimeType SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F_0_0_0;
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_0_0_0;
IL2CPP_EXTERN_C void SlotSym32_t628BF1E4E38894A696578BA4639D8A46AF119FFC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SlotSym32_t628BF1E4E38894A696578BA4639D8A46AF119FFC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SlotSym32_t628BF1E4E38894A696578BA4639D8A46AF119FFC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SlotSym32_t628BF1E4E38894A696578BA4639D8A46AF119FFC_0_0_0;
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_0_0_0;
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_0_0_0;
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_0_0_0;
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_0_0_0;
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_0_0_0;
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_0_0_0;
IL2CPP_EXTERN_C void StackFrame_t5A5BC93C439EFC27A6D024B69F189D46C8326272_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StackFrame_t5A5BC93C439EFC27A6D024B69F189D46C8326272_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StackFrame_t5A5BC93C439EFC27A6D024B69F189D46C8326272_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StackFrame_t5A5BC93C439EFC27A6D024B69F189D46C8326272_0_0_0;
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StackObjectAllocateCallback_t783D1A37A7980923E9BC91BCDA9FF8F5909AAEC7();
IL2CPP_EXTERN_C_CONST RuntimeType StackObjectAllocateCallback_t783D1A37A7980923E9BC91BCDA9FF8F5909AAEC7_0_0_0;
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType State_tC241510131965D8DE1919EB16A3650E397E5AEAB_0_0_0;
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_0_0_0;
IL2CPP_EXTERN_C void StructTest_t264F5EBEAEEFD49490680FA70D7EC12F1A6EF322_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StructTest_t264F5EBEAEEFD49490680FA70D7EC12F1A6EF322_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StructTest_t264F5EBEAEEFD49490680FA70D7EC12F1A6EF322_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StructTest_t264F5EBEAEEFD49490680FA70D7EC12F1A6EF322_0_0_0;
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_0_0_0;
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_0_0_0;
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_0_0_0;
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_0_0_0;
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_0_0_0;
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_0_0_0;
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_0_0_0;
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_0_0_0;
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_0_0_0;
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_0_0_0;
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_0_0_0;
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_0_0_0;
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TestDelegateFunction_t7E78C87555CB3932038ECC982704C8979D8A6755();
IL2CPP_EXTERN_C_CONST RuntimeType TestDelegateFunction_t7E78C87555CB3932038ECC982704C8979D8A6755_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TestDelegateMethod_t5A0D7B5B47B316AB6EA944251DAA3F9B4F390596();
IL2CPP_EXTERN_C_CONST RuntimeType TestDelegateMethod_t5A0D7B5B47B316AB6EA944251DAA3F9B4F390596_0_0_0;
IL2CPP_EXTERN_C void TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_0_0_0;
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_0_0_0;
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_0_0_0;
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_0_0_0;
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_0_0_0;
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2();
IL2CPP_EXTERN_C_CONST RuntimeType ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_0_0_0;
IL2CPP_EXTERN_C void ThreadSym32_tA83B85288222A1E675505794C39D5A8C2EDD568E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ThreadSym32_tA83B85288222A1E675505794C39D5A8C2EDD568E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ThreadSym32_tA83B85288222A1E675505794C39D5A8C2EDD568E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ThreadSym32_tA83B85288222A1E675505794C39D5A8C2EDD568E_0_0_0;
IL2CPP_EXTERN_C void ThunkSym32_tA3D089F8C0F8E4AFF09972944C218C7A54EE6A13_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ThunkSym32_tA3D089F8C0F8E4AFF09972944C218C7A54EE6A13_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ThunkSym32_tA3D089F8C0F8E4AFF09972944C218C7A54EE6A13_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ThunkSym32_tA3D089F8C0F8E4AFF09972944C218C7A54EE6A13_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B();
IL2CPP_EXTERN_C_CONST RuntimeType TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B_0_0_0;
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_0_0_0;
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_0_0_0;
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_0_0_0;
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_0_0_0;
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_0_0_0;
IL2CPP_EXTERN_C void TypeSizeInfo_t1AAA1D7D5128C5EEDB1707E1EB5AC2B9AE9892DB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TypeSizeInfo_t1AAA1D7D5128C5EEDB1707E1EB5AC2B9AE9892DB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TypeSizeInfo_t1AAA1D7D5128C5EEDB1707E1EB5AC2B9AE9892DB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TypeSizeInfo_t1AAA1D7D5128C5EEDB1707E1EB5AC2B9AE9892DB_0_0_0;
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_0_0_0;
IL2CPP_EXTERN_C void UdtSym_t99A18EAF5C9A2FC560A29EC32E1DDF4021FD0146_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UdtSym_t99A18EAF5C9A2FC560A29EC32E1DDF4021FD0146_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UdtSym_t99A18EAF5C9A2FC560A29EC32E1DDF4021FD0146_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UdtSym_t99A18EAF5C9A2FC560A29EC32E1DDF4021FD0146_0_0_0;
IL2CPP_EXTERN_C void UnamespaceSym_t132720DF24B6ADD5953DE467EC1F0FC5843962B5_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnamespaceSym_t132720DF24B6ADD5953DE467EC1F0FC5843962B5_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnamespaceSym_t132720DF24B6ADD5953DE467EC1F0FC5843962B5_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnamespaceSym_t132720DF24B6ADD5953DE467EC1F0FC5843962B5_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7();
IL2CPP_EXTERN_C_CONST RuntimeType UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0;
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_0_0_0;
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_0_0_0;
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_0_0_0;
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_0_0_0;
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_0_0_0;
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0;
IL2CPP_EXTERN_C void ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_0_0_0;
IL2CPP_EXTERN_C void VariableIndex_t1B0CF82B6D2B17D4B1E518607EE8F00CCF8686F9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VariableIndex_t1B0CF82B6D2B17D4B1E518607EE8F00CCF8686F9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VariableIndex_t1B0CF82B6D2B17D4B1E518607EE8F00CCF8686F9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VariableIndex_t1B0CF82B6D2B17D4B1E518607EE8F00CCF8686F9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Vector3Param_tBF7B301BAA7FC5E25B69DD5B53DC3DA483508F67();
IL2CPP_EXTERN_C_CONST RuntimeType Vector3Param_tBF7B301BAA7FC5E25B69DD5B53DC3DA483508F67_0_0_0;
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_0_0_0;
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_0_0_0;
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_0_0_0;
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_0_0_0;
IL2CPP_EXTERN_C void WithSym32_t6D981C8EA5C958290C7DB2F6D5489C5FAEE6ED7E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WithSym32_t6D981C8EA5C958290C7DB2F6D5489C5FAEE6ED7E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WithSym32_t6D981C8EA5C958290C7DB2F6D5489C5FAEE6ED7E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WithSym32_t6D981C8EA5C958290C7DB2F6D5489C5FAEE6ED7E_0_0_0;
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_0_0_0;
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_0_0_0;
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_0_0_0;
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_0_0_0;
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_lua_CSFunction_t093CEFD032D3F839CA097158604FA3E07F039DEE();
IL2CPP_EXTERN_C_CONST RuntimeType lua_CSFunction_t093CEFD032D3F839CA097158604FA3E07F039DEE_0_0_0;
IL2CPP_EXTERN_C void mlMethod_t6FEFE718A64D4F826FF6C9E5BE58600B6941EC50_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void mlMethod_t6FEFE718A64D4F826FF6C9E5BE58600B6941EC50_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void mlMethod_t6FEFE718A64D4F826FF6C9E5BE58600B6941EC50_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType mlMethod_t6FEFE718A64D4F826FF6C9E5BE58600B6941EC50_0_0_0;
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5();
IL2CPP_EXTERN_C_CONST RuntimeType OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413();
IL2CPP_EXTERN_C_CONST RuntimeType LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F();
IL2CPP_EXTERN_C_CONST RuntimeType LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F_0_0_0;
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_0_0_0;
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_0_0_0;
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E();
IL2CPP_EXTERN_C_CONST RuntimeType PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072();
IL2CPP_EXTERN_C_CONST RuntimeType PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177();
IL2CPP_EXTERN_C_CONST RuntimeType AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_0_0_0;
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetE_tE4277A0E2C07762FAFC2419FECA63D618262E0CC();
IL2CPP_EXTERN_C_CONST RuntimeType GetE_tE4277A0E2C07762FAFC2419FECA63D618262E0CC_0_0_0;
IL2CPP_EXTERN_C void RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC();
IL2CPP_EXTERN_C_CONST RuntimeType WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_0_0_0;
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_0_0_0;
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F();
IL2CPP_EXTERN_C_CONST RuntimeType StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F_0_0_0;
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A();
IL2CPP_EXTERN_C_CONST RuntimeType OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A_0_0_0;
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Resources_t959FACC867970114DBF8DC7D4C649240E819940E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6();
IL2CPP_EXTERN_C_CONST RuntimeType ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9();
IL2CPP_EXTERN_C_CONST RuntimeType WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA();
IL2CPP_EXTERN_C_CONST RuntimeType UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68();
IL2CPP_EXTERN_C_CONST RuntimeType DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68_0_0_0;
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_0_0_0;
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_0_0_0;
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_0_0_0;
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_0_0_0;
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98();
IL2CPP_EXTERN_C_CONST RuntimeType ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA();
IL2CPP_EXTERN_C_CONST RuntimeType WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA_0_0_0;
IL2CPP_EXTERN_C void U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_0_0_0;
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1();
IL2CPP_EXTERN_C_CONST RuntimeType FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550();
IL2CPP_EXTERN_C_CONST RuntimeType WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_0_0_0;
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98();
IL2CPP_EXTERN_C_CONST RuntimeType SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98_0_0_0;
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_0_0_0;
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_0_0_0;
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_0_0_0;
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_0_0_0;
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B();
IL2CPP_EXTERN_C_CONST RuntimeType OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_0_0_0;
IL2CPP_EXTERN_C void InstructionOffsetCache_tFAD3A2F433E356DC0B220BCC10E3D16DB962A379_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void InstructionOffsetCache_tFAD3A2F433E356DC0B220BCC10E3D16DB962A379_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void InstructionOffsetCache_tFAD3A2F433E356DC0B220BCC10E3D16DB962A379_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType InstructionOffsetCache_tFAD3A2F433E356DC0B220BCC10E3D16DB962A379_0_0_0;
IL2CPP_EXTERN_C void bucket_t5970228849D5480847E5E9D6F4249C6B7FA5E345_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void bucket_t5970228849D5480847E5E9D6F4249C6B7FA5E345_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void bucket_t5970228849D5480847E5E9D6F4249C6B7FA5E345_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType bucket_t5970228849D5480847E5E9D6F4249C6B7FA5E345_0_0_0;
IL2CPP_EXTERN_C void TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_0_0_0;
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_0_0_0;
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CustomLoader_t70AA7C7DF71886FE90BC4B6BE246EC70AA02E77A();
IL2CPP_EXTERN_C_CONST RuntimeType CustomLoader_t70AA7C7DF71886FE90BC4B6BE246EC70AA02E77A_0_0_0;
IL2CPP_EXTERN_C void GCAction_t5A83281D1B30F40B24F1B2EE5739F8A4A7181EC1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void GCAction_t5A83281D1B30F40B24F1B2EE5739F8A4A7181EC1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void GCAction_t5A83281D1B30F40B24F1B2EE5739F8A4A7181EC1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType GCAction_t5A83281D1B30F40B24F1B2EE5739F8A4A7181EC1_0_0_0;
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_0_0_0;
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_0_0_0;
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_0_0_0;
IL2CPP_EXTERN_C void TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_0_0_0;
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_0_0_0;
IL2CPP_EXTERN_C void NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3();
IL2CPP_EXTERN_C_CONST RuntimeType InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3_0_0_0;
IL2CPP_EXTERN_C void Slot_t3510D6888C145B434D39A54F7D362B89791043B9_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Slot_t3510D6888C145B434D39A54F7D362B89791043B9_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Slot_t3510D6888C145B434D39A54F7D362B89791043B9_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Slot_t3510D6888C145B434D39A54F7D362B89791043B9_0_0_0;
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_0_0_0;
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509();
IL2CPP_EXTERN_C_CONST RuntimeType CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4();
IL2CPP_EXTERN_C_CONST RuntimeType UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_0_0_0;
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980();
IL2CPP_EXTERN_C_CONST RuntimeType GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC();
IL2CPP_EXTERN_C_CONST RuntimeType GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A();
IL2CPP_EXTERN_C_CONST RuntimeType Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A();
IL2CPP_EXTERN_C_CONST RuntimeType RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A_0_0_0;
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_0_0_0;
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_0_0_0;
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_0_0_0;
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_0_0_0;
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_0_0_0;
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_0_0_0;
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_0_0_0;
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_0_0_0;
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_0_0_0;
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_0_0_0;
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_0_0_0;
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_0_0_0;
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_0_0_0;
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326();
IL2CPP_EXTERN_C_CONST RuntimeType OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C();
IL2CPP_EXTERN_C_CONST RuntimeType OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C_0_0_0;
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_0_0_0;
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_0_0_0;
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_0_0_0;
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_0_0_0;
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_0_0_0;
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_0_0_0;
IL2CPP_EXTERN_C void StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_0_0_0;
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_0_0_0;
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_0_0_0;
IL2CPP_EXTERN_C void TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_0_0_0;
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_0_0_0;
IL2CPP_EXTERN_C void TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_0_0_0;
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_0_0_0;
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Entry_tB8765CA56422E2C92887314844384843688DCB9F_0_0_0;
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_0_0_0;
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_0_0_0;
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_0_0_0;
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_0_0_0;
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_0_0_0;
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_0_0_0;
IL2CPP_EXTERN_C void UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_0_0_0;
IL2CPP_EXTERN_C void MethodKey_t1F00487C1D95A9E20B6BB20C0795117AA44A1E8E_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void MethodKey_t1F00487C1D95A9E20B6BB20C0795117AA44A1E8E_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void MethodKey_t1F00487C1D95A9E20B6BB20C0795117AA44A1E8E_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType MethodKey_t1F00487C1D95A9E20B6BB20C0795117AA44A1E8E_0_0_0;
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0;
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_0_0_0;
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_0_0_0;
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_0_0_0;
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_0_0_0;
IL2CPP_EXTERN_C void ProjectionInfo_tFC560595E6363065FD69E509A725A1CE54AF46C6_marshal_pinvoke(void* managedStructure, void* marshaledStructure);
IL2CPP_EXTERN_C void ProjectionInfo_tFC560595E6363065FD69E509A725A1CE54AF46C6_marshal_pinvoke_back(void* marshaledStructure, void* managedStructure);
IL2CPP_EXTERN_C void ProjectionInfo_tFC560595E6363065FD69E509A725A1CE54AF46C6_marshal_pinvoke_cleanup(void* marshaledStructure);
IL2CPP_EXTERN_C_CONST RuntimeType ProjectionInfo_tFC560595E6363065FD69E509A725A1CE54AF46C6_0_0_0;
IL2CPP_EXTERN_C void DelegatePInvokeWrapper_WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4();
IL2CPP_EXTERN_C_CONST RuntimeType WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4_0_0_0;
IL2CPP_EXTERN_C Il2CppInteropData g_Il2CppInteropData[];
Il2CppInteropData g_Il2CppInteropData[426] = 
{
	{ DelegatePInvokeWrapper_Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07, NULL, NULL, NULL, NULL, NULL, &Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0 } /* System.Action */,
	{ NULL, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_back, Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshal_pinvoke_cleanup, NULL, NULL, &Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_0_0_0 } /* UnityEngine.UIElements.UIR.Alloc */,
	{ DelegatePInvokeWrapper_AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F, NULL, NULL, NULL, NULL, NULL, &AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_0_0_0 } /* UnityEngine.AndroidJavaRunnable */,
	{ NULL, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup, NULL, NULL, &AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_0_0_0 } /* UnityEngine.AnimationCurve */,
	{ NULL, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup, NULL, NULL, &AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_0_0_0 } /* UnityEngine.AnimationEvent */,
	{ NULL, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup, NULL, NULL, &AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_0_0_0 } /* UnityEngine.AnimatorTransitionInfo */,
	{ NULL, AnnotationSym_tD4B48555C6188DDB21191D20BC9CD467AB6425EE_marshal_pinvoke, AnnotationSym_tD4B48555C6188DDB21191D20BC9CD467AB6425EE_marshal_pinvoke_back, AnnotationSym_tD4B48555C6188DDB21191D20BC9CD467AB6425EE_marshal_pinvoke_cleanup, NULL, NULL, &AnnotationSym_tD4B48555C6188DDB21191D20BC9CD467AB6425EE_0_0_0 } /* Microsoft.Cci.Pdb.AnnotationSym */,
	{ NULL, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_back, AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshal_pinvoke_cleanup, NULL, NULL, &AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_0_0_0 } /* System.AppDomain */,
	{ DelegatePInvokeWrapper_AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A, NULL, NULL, NULL, NULL, NULL, &AppDomainInitializer_tED36272F704E9A95E8FEFFD67EECA50F089B4D1A_0_0_0 } /* System.AppDomainInitializer */,
	{ NULL, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_back, AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_marshal_pinvoke_cleanup, NULL, NULL, &AppDomainSetup_tCECBEFD01C102F2D0027CBB0C071FA66B87803C4_0_0_0 } /* System.AppDomainSetup */,
	{ NULL, ArrayDimension_t694641F8FFD28C67FF02DAF144269EF708F64588_marshal_pinvoke, ArrayDimension_t694641F8FFD28C67FF02DAF144269EF708F64588_marshal_pinvoke_back, ArrayDimension_t694641F8FFD28C67FF02DAF144269EF708F64588_marshal_pinvoke_cleanup, NULL, NULL, &ArrayDimension_t694641F8FFD28C67FF02DAF144269EF708F64588_0_0_0 } /* ILRuntime.Mono.Cecil.ArrayDimension */,
	{ NULL, ArrayMetadata_tFFDF2DA711B821B4C3B054AFBCADFE8F8555F947_marshal_pinvoke, ArrayMetadata_tFFDF2DA711B821B4C3B054AFBCADFE8F8555F947_marshal_pinvoke_back, ArrayMetadata_tFFDF2DA711B821B4C3B054AFBCADFE8F8555F947_marshal_pinvoke_cleanup, NULL, NULL, &ArrayMetadata_tFFDF2DA711B821B4C3B054AFBCADFE8F8555F947_0_0_0 } /* LitJson.ArrayMetadata */,
	{ NULL, Assembly_t_marshal_pinvoke, Assembly_t_marshal_pinvoke_back, Assembly_t_marshal_pinvoke_cleanup, NULL, NULL, &Assembly_t_0_0_0 } /* System.Reflection.Assembly */,
	{ NULL, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_back, AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshal_pinvoke_cleanup, NULL, NULL, &AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_0_0_0 } /* System.Reflection.AssemblyName */,
	{ NULL, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_back, AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshal_pinvoke_cleanup, NULL, NULL, &AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_0_0_0 } /* System.Runtime.CompilerServices.AsyncMethodBuilderCore */,
	{ NULL, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_back, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshal_pinvoke_cleanup, NULL, NULL, &AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_0_0_0 } /* UnityEngine.AsyncOperation */,
	{ NULL, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_back, AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerMetricsFilters_t8345AB04A9736805407C88046E48E05CE9CEB626_0_0_0 } /* Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetricsFilters */,
	{ NULL, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_back, AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_marshal_pinvoke_cleanup, NULL, NULL, &AsyncReadManagerRequestMetric_t41C6C9C513C5E798C5D4A9BD4A04216D42458B13_0_0_0 } /* Unity.IO.LowLevel.Unsafe.AsyncReadManagerRequestMetric */,
	{ NULL, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_back, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshal_pinvoke_cleanup, NULL, NULL, &AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_0_0_0 } /* System.Runtime.Remoting.Messaging.AsyncResult */,
	{ NULL, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_back, AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshal_pinvoke_cleanup, NULL, NULL, &AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_0_0_0 } /* System.Runtime.CompilerServices.AsyncTaskMethodBuilder */,
	{ NULL, AttrManyRegSym_tB3F65F6B6301E576838C0A817F37168FB9695E82_marshal_pinvoke, AttrManyRegSym_tB3F65F6B6301E576838C0A817F37168FB9695E82_marshal_pinvoke_back, AttrManyRegSym_tB3F65F6B6301E576838C0A817F37168FB9695E82_marshal_pinvoke_cleanup, NULL, NULL, &AttrManyRegSym_tB3F65F6B6301E576838C0A817F37168FB9695E82_0_0_0 } /* Microsoft.Cci.Pdb.AttrManyRegSym */,
	{ NULL, AttrManyRegSym2_tED6147B70C0A0C33538B35B56B1B35F6EC50908E_marshal_pinvoke, AttrManyRegSym2_tED6147B70C0A0C33538B35B56B1B35F6EC50908E_marshal_pinvoke_back, AttrManyRegSym2_tED6147B70C0A0C33538B35B56B1B35F6EC50908E_marshal_pinvoke_cleanup, NULL, NULL, &AttrManyRegSym2_tED6147B70C0A0C33538B35B56B1B35F6EC50908E_0_0_0 } /* Microsoft.Cci.Pdb.AttrManyRegSym2 */,
	{ NULL, AttrRegRel_tCEDB45BEE76939E4B4AD52DDA648F8297DC9E046_marshal_pinvoke, AttrRegRel_tCEDB45BEE76939E4B4AD52DDA648F8297DC9E046_marshal_pinvoke_back, AttrRegRel_tCEDB45BEE76939E4B4AD52DDA648F8297DC9E046_marshal_pinvoke_cleanup, NULL, NULL, &AttrRegRel_tCEDB45BEE76939E4B4AD52DDA648F8297DC9E046_0_0_0 } /* Microsoft.Cci.Pdb.AttrRegRel */,
	{ NULL, AttrRegSym_t9A3B7D5963B0E60A30E4E1D5665AD9B386D6210F_marshal_pinvoke, AttrRegSym_t9A3B7D5963B0E60A30E4E1D5665AD9B386D6210F_marshal_pinvoke_back, AttrRegSym_t9A3B7D5963B0E60A30E4E1D5665AD9B386D6210F_marshal_pinvoke_cleanup, NULL, NULL, &AttrRegSym_t9A3B7D5963B0E60A30E4E1D5665AD9B386D6210F_0_0_0 } /* Microsoft.Cci.Pdb.AttrRegSym */,
	{ NULL, AttrSlotSym_t5B3A38AE02F768ABE7D5337BD9F8A580F9637026_marshal_pinvoke, AttrSlotSym_t5B3A38AE02F768ABE7D5337BD9F8A580F9637026_marshal_pinvoke_back, AttrSlotSym_t5B3A38AE02F768ABE7D5337BD9F8A580F9637026_marshal_pinvoke_cleanup, NULL, NULL, &AttrSlotSym_t5B3A38AE02F768ABE7D5337BD9F8A580F9637026_0_0_0 } /* Microsoft.Cci.Pdb.AttrSlotSym */,
	{ NULL, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_back, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshal_pinvoke_cleanup, NULL, NULL, &Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_0_0_0 } /* UnityEngine.UIElements.Background */,
	{ NULL, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup, NULL, NULL, &BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0 } /* UnityEngine.Rendering.BatchRendererGroup */,
	{ NULL, BitSet_t8067A22E00DCE19D7DD0AF64B573F8D967A3DB0A_marshal_pinvoke, BitSet_t8067A22E00DCE19D7DD0AF64B573F8D967A3DB0A_marshal_pinvoke_back, BitSet_t8067A22E00DCE19D7DD0AF64B573F8D967A3DB0A_marshal_pinvoke_cleanup, NULL, NULL, &BitSet_t8067A22E00DCE19D7DD0AF64B573F8D967A3DB0A_0_0_0 } /* Microsoft.Cci.Pdb.BitSet */,
	{ NULL, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_back, BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshal_pinvoke_cleanup, NULL, NULL, &BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_0_0_0 } /* UnityEngine.UIElements.UIR.BitmapAllocator32 */,
	{ NULL, BlockSym32_t35547FB19A1E68647DF0E397E89160ED91A9B8A6_marshal_pinvoke, BlockSym32_t35547FB19A1E68647DF0E397E89160ED91A9B8A6_marshal_pinvoke_back, BlockSym32_t35547FB19A1E68647DF0E397E89160ED91A9B8A6_marshal_pinvoke_cleanup, NULL, NULL, &BlockSym32_t35547FB19A1E68647DF0E397E89160ED91A9B8A6_0_0_0 } /* Microsoft.Cci.Pdb.BlockSym32 */,
	{ NULL, BpRelSym32_tE8942B71C13FAA2CD3CAD3EA85775612C0863D07_marshal_pinvoke, BpRelSym32_tE8942B71C13FAA2CD3CAD3EA85775612C0863D07_marshal_pinvoke_back, BpRelSym32_tE8942B71C13FAA2CD3CAD3EA85775612C0863D07_marshal_pinvoke_cleanup, NULL, NULL, &BpRelSym32_tE8942B71C13FAA2CD3CAD3EA85775612C0863D07_0_0_0 } /* Microsoft.Cci.Pdb.BpRelSym32 */,
	{ NULL, CFlagSym_t7B6B2562CECFF683918DD709B1A8CBC44EE79336_marshal_pinvoke, CFlagSym_t7B6B2562CECFF683918DD709B1A8CBC44EE79336_marshal_pinvoke_back, CFlagSym_t7B6B2562CECFF683918DD709B1A8CBC44EE79336_marshal_pinvoke_cleanup, NULL, NULL, &CFlagSym_t7B6B2562CECFF683918DD709B1A8CBC44EE79336_0_0_0 } /* Microsoft.Cci.Pdb.CFlagSym */,
	{ NULL, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_back, CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_marshal_pinvoke_cleanup, NULL, NULL, &CalendarData_t4A54E28AB4470E0B835605CAEE9BEB25EBF9B6A9_0_0_0 } /* System.Globalization.CalendarData */,
	{ NULL, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_back, CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_marshal_pinvoke_cleanup, NULL, NULL, &CancellationCallbackCoreWorkArguments_t12DB960B203CDDF2119BC6A29ACA80175C15FAD0_0_0_0 } /* System.Threading.CancellationCallbackCoreWorkArguments */,
	{ NULL, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_back, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshal_pinvoke_cleanup, NULL, NULL, &CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_0_0_0 } /* System.Threading.CancellationToken */,
	{ NULL, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_back, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshal_pinvoke_cleanup, NULL, NULL, &CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_0_0_0 } /* System.Threading.CancellationTokenRegistration */,
	{ NULL, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup, NULL, NULL, &CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_0_0_0 } /* UnityEngine.Networking.CertificateHandler */,
	{ NULL, CoffGroupSym_t80DA526E302A8ED86368EE1B4778EE0731019877_marshal_pinvoke, CoffGroupSym_t80DA526E302A8ED86368EE1B4778EE0731019877_marshal_pinvoke_back, CoffGroupSym_t80DA526E302A8ED86368EE1B4778EE0731019877_marshal_pinvoke_cleanup, NULL, NULL, &CoffGroupSym_t80DA526E302A8ED86368EE1B4778EE0731019877_0_0_0 } /* Microsoft.Cci.Pdb.CoffGroupSym */,
	{ NULL, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_back, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshal_pinvoke_cleanup, NULL, NULL, &ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_0_0_0 } /* UnityEngine.UIElements.ColorPage */,
	{ NULL, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_back, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshal_pinvoke_cleanup, NULL, NULL, &ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_0_0_0 } /* UnityEngine.UI.CoroutineTween.ColorTween */,
	{ NULL, CompileSym_tE4231DD3072B5E36F97D6ABD133F2B7D48E16E2B_marshal_pinvoke, CompileSym_tE4231DD3072B5E36F97D6ABD133F2B7D48E16E2B_marshal_pinvoke_back, CompileSym_tE4231DD3072B5E36F97D6ABD133F2B7D48E16E2B_marshal_pinvoke_cleanup, NULL, NULL, &CompileSym_tE4231DD3072B5E36F97D6ABD133F2B7D48E16E2B_0_0_0 } /* Microsoft.Cci.Pdb.CompileSym */,
	{ NULL, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_back, ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshal_pinvoke_cleanup, NULL, NULL, &ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_0_0_0 } /* UnityEngine.UIElements.ComputedStyle */,
	{ NULL, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_back, ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshal_pinvoke_cleanup, NULL, NULL, &ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_0_0_0 } /* UnityEngine.UIElements.ComputedTransitionProperty */,
	{ NULL, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_back, ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable */,
	{ NULL, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_back, ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_marshal_pinvoke_cleanup, NULL, NULL, &ConsoleKeyInfo_t84640C60F53D0F6946B147ADAAF0366BBF1DE900_0_0_0 } /* System.ConsoleKeyInfo */,
	{ NULL, ConstSym_t9E2C2611D0F9BBEAABC611087AFF3FE33074F60E_marshal_pinvoke, ConstSym_t9E2C2611D0F9BBEAABC611087AFF3FE33074F60E_marshal_pinvoke_back, ConstSym_t9E2C2611D0F9BBEAABC611087AFF3FE33074F60E_marshal_pinvoke_cleanup, NULL, NULL, &ConstSym_t9E2C2611D0F9BBEAABC611087AFF3FE33074F60E_0_0_0 } /* Microsoft.Cci.Pdb.ConstSym */,
	{ NULL, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_back, Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_marshal_pinvoke_cleanup, NULL, NULL, &Context_t2CCB8C97E2B9649D3A11A72438694220AEA6CF95_0_0_0 } /* System.Runtime.Remoting.Contexts.Context */,
	{ NULL, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_back, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshal_pinvoke_cleanup, NULL, NULL, &Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_0_0_0 } /* UnityEngine.Coroutine */,
	{ NULL, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_back, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshal_pinvoke_cleanup, NULL, NULL, &CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_0_0_0 } /* UnityEngine.UIElements.CreationContext */,
	{ DelegatePInvokeWrapper_CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3, NULL, NULL, NULL, NULL, NULL, &CrossContextDelegate_t770FF83DFE79BBDEECEDDF4B0AA61D087C37F7A3_0_0_0 } /* System.Runtime.Remoting.Contexts.CrossContextDelegate */,
	{ NULL, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_back, CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_marshal_pinvoke_cleanup, NULL, NULL, &CullingGroup_t0732D3CC044BAE2BE39748CBF5D96DDB6DBF62E7_0_0_0 } /* UnityEngine.CullingGroup */,
	{ NULL, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_back, CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshal_pinvoke_cleanup, NULL, NULL, &CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_0_0_0 } /* System.Globalization.CultureData */,
	{ NULL, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_back, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshal_pinvoke_cleanup, NULL, NULL, &CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_0_0_0 } /* System.Globalization.CultureInfo */,
	{ NULL, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_back, Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_marshal_pinvoke_cleanup, NULL, NULL, &Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_0_0_0 } /* UnityEngine.UIElements.Cursor */,
	{ NULL, CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke, CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_back, CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_marshal_pinvoke_cleanup, NULL, NULL, &CursorPositionStylePainterParameters_tB79C17871EE8D6764B717689E7E93478D54BC81A_0_0_0 } /* UnityEngine.UIElements.CursorPositionStylePainterParameters */,
	{ NULL, CustomAttributeArgument_t9D9EA95244F5F2EDDE5885E96185FA810F4879BA_marshal_pinvoke, CustomAttributeArgument_t9D9EA95244F5F2EDDE5885E96185FA810F4879BA_marshal_pinvoke_back, CustomAttributeArgument_t9D9EA95244F5F2EDDE5885E96185FA810F4879BA_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeArgument_t9D9EA95244F5F2EDDE5885E96185FA810F4879BA_0_0_0 } /* ILRuntime.Mono.Cecil.CustomAttributeArgument */,
	{ NULL, CustomAttributeNamedArgument_tE86CBC971052F88D6563E7CC0C3AA9E5718040C4_marshal_pinvoke, CustomAttributeNamedArgument_tE86CBC971052F88D6563E7CC0C3AA9E5718040C4_marshal_pinvoke_back, CustomAttributeNamedArgument_tE86CBC971052F88D6563E7CC0C3AA9E5718040C4_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_tE86CBC971052F88D6563E7CC0C3AA9E5718040C4_0_0_0 } /* ILRuntime.Mono.Cecil.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_back, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_0_0_0 } /* System.Reflection.CustomAttributeNamedArgument */,
	{ NULL, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_back, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshal_pinvoke_cleanup, NULL, NULL, &CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_0_0_0 } /* System.Reflection.CustomAttributeTypedArgument */,
	{ DelegatePInvokeWrapper_CustomValueTypeParam_t90840EB4FDD50DE0A4979BD5A49D7D41668F1F34, NULL, NULL, NULL, NULL, NULL, &CustomValueTypeParam_t90840EB4FDD50DE0A4979BD5A49D7D41668F1F34_0_0_0 } /* XLuaTest.CustomValueTypeParam */,
	{ NULL, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_back, DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshal_pinvoke_cleanup, NULL, NULL, &DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_0_0_0 } /* System.Security.Cryptography.DSAParameters */,
	{ NULL, DatasSym32_t4FF90ED7F1238D34D83CBB3EEC9D7BC842051A64_marshal_pinvoke, DatasSym32_t4FF90ED7F1238D34D83CBB3EEC9D7BC842051A64_marshal_pinvoke_back, DatasSym32_t4FF90ED7F1238D34D83CBB3EEC9D7BC842051A64_marshal_pinvoke_cleanup, NULL, NULL, &DatasSym32_t4FF90ED7F1238D34D83CBB3EEC9D7BC842051A64_0_0_0 } /* Microsoft.Cci.Pdb.DatasSym32 */,
	{ NULL, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_back, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_0_0_0 } /* System.DateTimeRawInfo */,
	{ NULL, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_back, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_cleanup, NULL, NULL, &DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_0_0_0 } /* System.DateTimeResult */,
	{ NULL, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_back, DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_marshal_pinvoke_cleanup, NULL, NULL, &DaylightTimeStruct_tB667DCA32C2FA55FEFB2D8D3A871D4A5BF97CED1_0_0_0 } /* System.Globalization.DaylightTimeStruct */,
	{ DelegatePInvokeWrapper_DecimalParam_t3CF5D70E3A495050CBD9B76CDB1A1AC8B6229ECB, NULL, NULL, NULL, NULL, NULL, &DecimalParam_t3CF5D70E3A495050CBD9B76CDB1A1AC8B6229ECB_0_0_0 } /* XLuaTest.DecimalParam */,
	{ NULL, DefRangeSym2_tC2F27D26EC0BDDAEA69138C228BA81BF501A7C85_marshal_pinvoke, DefRangeSym2_tC2F27D26EC0BDDAEA69138C228BA81BF501A7C85_marshal_pinvoke_back, DefRangeSym2_tC2F27D26EC0BDDAEA69138C228BA81BF501A7C85_marshal_pinvoke_cleanup, NULL, NULL, &DefRangeSym2_tC2F27D26EC0BDDAEA69138C228BA81BF501A7C85_0_0_0 } /* Microsoft.Cci.Pdb.DefRangeSym2 */,
	{ NULL, Delegate_t_marshal_pinvoke, Delegate_t_marshal_pinvoke_back, Delegate_t_marshal_pinvoke_cleanup, NULL, NULL, &Delegate_t_0_0_0 } /* System.Delegate */,
	{ NULL, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_back, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_cleanup, NULL, NULL, &DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_0_0_0 } /* System.Collections.DictionaryEntry */,
	{ NULL, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup, NULL, NULL, &DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DirectionalLight */,
	{ NULL, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup, NULL, NULL, &DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.DiscLight */,
	{ NULL, DiscardedSym_t1239E7420D07B66DDF346584968BCAC038F02C92_marshal_pinvoke, DiscardedSym_t1239E7420D07B66DDF346584968BCAC038F02C92_marshal_pinvoke_back, DiscardedSym_t1239E7420D07B66DDF346584968BCAC038F02C92_marshal_pinvoke_cleanup, NULL, NULL, &DiscardedSym_t1239E7420D07B66DDF346584968BCAC038F02C92_0_0_0 } /* Microsoft.Cci.Pdb.DiscardedSym */,
	{ NULL, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_0_0_0 } /* UnityEngine.Networking.DownloadHandler */,
	{ NULL, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_back, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_cleanup, NULL, NULL, &DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_0_0_0 } /* UnityEngine.Networking.DownloadHandlerBuffer */,
	{ NULL, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_back, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshal_pinvoke_cleanup, NULL, NULL, &Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_0_0_0 } /* System.Enum */,
	{ DelegatePInvokeWrapper_EnumParam_t6F22AF76062EB374744F6A9E672743E7CF856C11, NULL, NULL, NULL, NULL, NULL, &EnumParam_t6F22AF76062EB374744F6A9E672743E7CF856C11_0_0_0 } /* XLuaTest.EnumParam */,
	{ NULL, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_back, Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_marshal_pinvoke_cleanup, NULL, NULL, &Ephemeron_t74F279F5E7CF4A0CFC21C822431DD840572C6DA2_0_0_0 } /* System.Runtime.CompilerServices.Ephemeron */,
	{ NULL, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_back, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshal_pinvoke_cleanup, NULL, NULL, &Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_0_0_0 } /* UnityEngine.Event */,
	{ NULL, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_back, EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_marshal_pinvoke_cleanup, NULL, NULL, &EventDispatcherGate_t75A9E135B6558D523DCFC5CF95B44F153A779097_0_0_0 } /* UnityEngine.UIElements.EventDispatcherGate */,
	{ NULL, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_back, EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshal_pinvoke_cleanup, NULL, NULL, &EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_0_0_0 } /* UnityEngine.EventInterests */,
	{ NULL, Exception_t_marshal_pinvoke, Exception_t_marshal_pinvoke_back, Exception_t_marshal_pinvoke_cleanup, NULL, NULL, &Exception_t_0_0_0 } /* System.Exception */,
	{ NULL, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_back, ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_marshal_pinvoke_cleanup, NULL, NULL, &ExceptionHandlingClause_t9FEDBA314A006A0A836538080D93D15758AA114B_0_0_0 } /* System.Reflection.ExceptionHandlingClause */,
	{ NULL, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_back, ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshal_pinvoke_cleanup, NULL, NULL, &ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_0_0_0 } /* System.Threading.ExecutionContextSwitcher */,
	{ NULL, ExportSym_t90AA474EF93907B27C0E514D1DE18C32925F76CA_marshal_pinvoke, ExportSym_t90AA474EF93907B27C0E514D1DE18C32925F76CA_marshal_pinvoke_back, ExportSym_t90AA474EF93907B27C0E514D1DE18C32925F76CA_marshal_pinvoke_cleanup, NULL, NULL, &ExportSym_t90AA474EF93907B27C0E514D1DE18C32925F76CA_0_0_0 } /* Microsoft.Cci.Pdb.ExportSym */,
	{ NULL, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_back, FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshal_pinvoke_cleanup, NULL, NULL, &FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_0_0_0 } /* UnityEngine.TextCore.FaceInfo */,
	{ NULL, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_back, FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_marshal_pinvoke_cleanup, NULL, NULL, &FailedToLoadScriptObject_t51C7A75B7D39FE935901EB6E75FE2D020AF14A89_0_0_0 } /* UnityEngine.FailedToLoadScriptObject */,
	{ NULL, FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke, FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke_back, FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshal_pinvoke_cleanup, NULL, NULL, &FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_0_0_0 } /* System.IO.FileStatus */,
	{ NULL, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke_back, FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_marshal_pinvoke_cleanup, NULL, NULL, &FileSystemEntry_t1AC410E35234CAADD69D36A0EB6730D40BB1484B_0_0_0 } /* System.IO.Enumeration.FileSystemEntry */,
	{ NULL, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_back, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshal_pinvoke_cleanup, NULL, NULL, &FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_0_0_0 } /* UnityEngine.UI.CoroutineTween.FloatTween */,
	{ NULL, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_back, FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetCreationEditorSettings_t0FF28D2E78F090105C63C81F9E438A7B09E3EA52_0_0_0 } /* UnityEngine.TextCore.Text.FontAssetCreationEditorSettings */,
	{ NULL, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_back, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshal_pinvoke_cleanup, NULL, NULL, &FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_0_0_0 } /* UnityEngine.UIElements.FontDefinition */,
	{ NULL, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_back, FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_marshal_pinvoke_cleanup, NULL, NULL, &FontReference_t550791D5AA7787156C3A229C65D7E1AC4BF76172_0_0_0 } /* UnityEngine.TextCore.LowLevel.FontReference */,
	{ NULL, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_back, FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_marshal_pinvoke_cleanup, NULL, NULL, &FontWeightPair_tB94169BD86D0DFC25D651F890B15991A3E0ADA42_0_0_0 } /* UnityEngine.TextCore.Text.FontWeightPair */,
	{ NULL, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_back, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshal_pinvoke_cleanup, NULL, NULL, &ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_0_0_0 } /* System.Threading.Tasks.ForceAsyncAwaiter */,
	{ NULL, FrameRelSym_t4B679F4E0FFD6733B87FA6DE9A57A86290E3BD09_marshal_pinvoke, FrameRelSym_t4B679F4E0FFD6733B87FA6DE9A57A86290E3BD09_marshal_pinvoke_back, FrameRelSym_t4B679F4E0FFD6733B87FA6DE9A57A86290E3BD09_marshal_pinvoke_cleanup, NULL, NULL, &FrameRelSym_t4B679F4E0FFD6733B87FA6DE9A57A86290E3BD09_0_0_0 } /* Microsoft.Cci.Pdb.FrameRelSym */,
	{ NULL, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_back, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_cleanup, NULL, NULL, &GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_0_0_0 } /* UnityEngine.GUIContent */,
	{ NULL, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_back, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_0_0_0 } /* UnityEngine.GUIStyle */,
	{ NULL, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_back, GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshal_pinvoke_cleanup, NULL, NULL, &GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_0_0_0 } /* UnityEngine.GUIStyleState */,
	{ NULL, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_back, Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_marshal_pinvoke_cleanup, NULL, NULL, &Glyph_t700CF8EBE04ED4AEAB520885AAA1B309E02A103F_0_0_0 } /* UnityEngine.TextCore.Glyph */,
	{ NULL, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_back, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshal_pinvoke_cleanup, NULL, NULL, &Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_0_0_0 } /* UnityEngine.Gradient */,
	{ NULL, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup, NULL, NULL, &HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_0_0_0 } /* UnityEngine.HumanBone */,
	{ NULL, NULL, NULL, NULL, NULL, &IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C::IID, &IMetaDataEmit_t48AE7763BC969C8A8453A54C5469F9316E412C6C_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.IMetaDataEmit */,
	{ NULL, NULL, NULL, NULL, NULL, &IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6::IID, &IMetaDataImport_t198664AFC7FD792CABAFC3A54CAE367ED03908A6_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.IMetaDataImport */,
	{ NULL, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_back, IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_marshal_pinvoke_cleanup, NULL, NULL, &IOAsyncResult_t667861995468DDF5B2CFED1940CC2BCEEDD2B374_0_0_0 } /* System.IOAsyncResult */,
	{ NULL, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_back, IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_marshal_pinvoke_cleanup, NULL, NULL, &IOSelectorJob_t988E3C2831A98169EFDB178A08E8548A4E90DD31_0_0_0 } /* System.IOSelectorJob */,
	{ NULL, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_back, IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_marshal_pinvoke_cleanup, NULL, NULL, &IPPacketInformation_tCD16AD717AD72D36684D9CFFDA0F6B53CCD3249B_0_0_0 } /* System.Net.Sockets.IPPacketInformation */,
	{ NULL, NULL, NULL, NULL, NULL, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8::IID, &IStream_tD557F2A7FBD3D478F37E3CBCAA456B6819902AF8_0_0_0 } /* System.Runtime.InteropServices.ComTypes.IStream */,
	{ NULL, NULL, NULL, NULL, NULL, &ISymUnmanagedDocumentWriter_tF11BEB427270C01DB5A54550A354FD1D63219264::IID, &ISymUnmanagedDocumentWriter_tF11BEB427270C01DB5A54550A354FD1D63219264_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedDocumentWriter */,
	{ NULL, NULL, NULL, NULL, NULL, &ISymUnmanagedWriter2_t8371869F209CF40AEE8014A40E2C87152C41ED53::IID, &ISymUnmanagedWriter2_t8371869F209CF40AEE8014A40E2C87152C41ED53_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.ISymUnmanagedWriter2 */,
	{ NULL, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_back, ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_marshal_pinvoke_cleanup, NULL, NULL, &ImageSource_t0990262FCFA5C1F3C695C53FB04A35F71CDD63B4_0_0_0 } /* UnityEngine.UIElements.StyleSheets.ImageSource */,
	{ NULL, ImportGenericContext_t1C682853AF132E8DA6F21011014A2336DB0EDBC7_marshal_pinvoke, ImportGenericContext_t1C682853AF132E8DA6F21011014A2336DB0EDBC7_marshal_pinvoke_back, ImportGenericContext_t1C682853AF132E8DA6F21011014A2336DB0EDBC7_marshal_pinvoke_cleanup, NULL, NULL, &ImportGenericContext_t1C682853AF132E8DA6F21011014A2336DB0EDBC7_0_0_0 } /* ILRuntime.Mono.Cecil.ImportGenericContext */,
	{ NULL, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_back, InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_marshal_pinvoke_cleanup, NULL, NULL, &InheritedData_t9CB0AE42B025C0BD86FEF0C979D5BFE15E188E67_0_0_0 } /* UnityEngine.UIElements.InheritedData */,
	{ NULL, InlineMethodInfo_t317897333AED1A3740B5B6BDDB3964881F5827CE_marshal_pinvoke, InlineMethodInfo_t317897333AED1A3740B5B6BDDB3964881F5827CE_marshal_pinvoke_back, InlineMethodInfo_t317897333AED1A3740B5B6BDDB3964881F5827CE_marshal_pinvoke_cleanup, NULL, NULL, &InlineMethodInfo_t317897333AED1A3740B5B6BDDB3964881F5827CE_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterVM.InlineMethodInfo */,
	{ NULL, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_back, InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_marshal_pinvoke_cleanup, NULL, NULL, &InputRecord_tD3D7910851FC56517EE2767EB28725EE7C295526_0_0_0 } /* System.InputRecord */,
	{ NULL, InstructionOffset_t4C4248D55DABF836493F8C889FF26F47F874E489_marshal_pinvoke, InstructionOffset_t4C4248D55DABF836493F8C889FF26F47F874E489_marshal_pinvoke_back, InstructionOffset_t4C4248D55DABF836493F8C889FF26F47F874E489_marshal_pinvoke_cleanup, NULL, NULL, &InstructionOffset_t4C4248D55DABF836493F8C889FF26F47F874E489_0_0_0 } /* ILRuntime.Mono.Cecil.Cil.InstructionOffset */,
	{ DelegatePInvokeWrapper_IntParam_t0D7C1684B422CA9295EC57BE9A249D582CBC6C6B, NULL, NULL, NULL, NULL, NULL, &IntParam_t0D7C1684B422CA9295EC57BE9A249D582CBC6C6B_0_0_0 } /* XLuaTest.IntParam */,
	{ NULL, InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke, InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_back, InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_marshal_pinvoke_cleanup, NULL, NULL, &InterfaceMapping_t4818CA9DD146752FBC643AD050582979B632D879_0_0_0 } /* System.Reflection.InterfaceMapping */,
	{ NULL, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_back, InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_marshal_pinvoke_cleanup, NULL, NULL, &InternalCodePageDataItem_t6B4913D6507B26FFAE0B805874644D3DBE78F316_0_0_0 } /* System.Globalization.InternalCodePageDataItem */,
	{ NULL, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_back, InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_marshal_pinvoke_cleanup, NULL, NULL, &InternalEncodingDataItem_t1D6DA6BCE8389C12ECC229A644D2CA45A86C06EB_0_0_0 } /* System.Globalization.InternalEncodingDataItem */,
	{ NULL, InvocationContext_tE66E00A478C3DCDB761F8C6C5E059A19125E4860_marshal_pinvoke, InvocationContext_tE66E00A478C3DCDB761F8C6C5E059A19125E4860_marshal_pinvoke_back, InvocationContext_tE66E00A478C3DCDB761F8C6C5E059A19125E4860_marshal_pinvoke_cleanup, NULL, NULL, &InvocationContext_tE66E00A478C3DCDB761F8C6C5E059A19125E4860_0_0_0 } /* ILRuntime.Runtime.Enviorment.InvocationContext */,
	{ NULL, JITCompiler_t5B8F51C4C2A7E876758CAED06ED146FDF2C73E0F_marshal_pinvoke, JITCompiler_t5B8F51C4C2A7E876758CAED06ED146FDF2C73E0F_marshal_pinvoke_back, JITCompiler_t5B8F51C4C2A7E876758CAED06ED146FDF2C73E0F_marshal_pinvoke_cleanup, NULL, NULL, &JITCompiler_t5B8F51C4C2A7E876758CAED06ED146FDF2C73E0F_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterVM.JITCompiler */,
	{ NULL, LabelSym32_tCD17E3F9A8DCEB79256CD82FE654B3DC286FB5FC_marshal_pinvoke, LabelSym32_tCD17E3F9A8DCEB79256CD82FE654B3DC286FB5FC_marshal_pinvoke_back, LabelSym32_tCD17E3F9A8DCEB79256CD82FE654B3DC286FB5FC_marshal_pinvoke_cleanup, NULL, NULL, &LabelSym32_tCD17E3F9A8DCEB79256CD82FE654B3DC286FB5FC_0_0_0 } /* Microsoft.Cci.Pdb.LabelSym32 */,
	{ NULL, LeafAlias_tAE818494E38AFDFFA05C787095CD3F3482E85604_marshal_pinvoke, LeafAlias_tAE818494E38AFDFFA05C787095CD3F3482E85604_marshal_pinvoke_back, LeafAlias_tAE818494E38AFDFFA05C787095CD3F3482E85604_marshal_pinvoke_cleanup, NULL, NULL, &LeafAlias_tAE818494E38AFDFFA05C787095CD3F3482E85604_0_0_0 } /* Microsoft.Cci.Pdb.LeafAlias */,
	{ NULL, LeafArgList_t8FAD47F81B5481561DE4400B32D326CAF2B2F664_marshal_pinvoke, LeafArgList_t8FAD47F81B5481561DE4400B32D326CAF2B2F664_marshal_pinvoke_back, LeafArgList_t8FAD47F81B5481561DE4400B32D326CAF2B2F664_marshal_pinvoke_cleanup, NULL, NULL, &LeafArgList_t8FAD47F81B5481561DE4400B32D326CAF2B2F664_0_0_0 } /* Microsoft.Cci.Pdb.LeafArgList */,
	{ NULL, LeafArray_tC5C381AA2CECBBA1BC324C4C5A4DCBC80AD6F117_marshal_pinvoke, LeafArray_tC5C381AA2CECBBA1BC324C4C5A4DCBC80AD6F117_marshal_pinvoke_back, LeafArray_tC5C381AA2CECBBA1BC324C4C5A4DCBC80AD6F117_marshal_pinvoke_cleanup, NULL, NULL, &LeafArray_tC5C381AA2CECBBA1BC324C4C5A4DCBC80AD6F117_0_0_0 } /* Microsoft.Cci.Pdb.LeafArray */,
	{ NULL, LeafBClass_t9706F17D37E331D77D4639B367908D19F237072F_marshal_pinvoke, LeafBClass_t9706F17D37E331D77D4639B367908D19F237072F_marshal_pinvoke_back, LeafBClass_t9706F17D37E331D77D4639B367908D19F237072F_marshal_pinvoke_cleanup, NULL, NULL, &LeafBClass_t9706F17D37E331D77D4639B367908D19F237072F_0_0_0 } /* Microsoft.Cci.Pdb.LeafBClass */,
	{ NULL, LeafClass_tFF470C9351EF8A7C1B552089388C1B823E6AED3E_marshal_pinvoke, LeafClass_tFF470C9351EF8A7C1B552089388C1B823E6AED3E_marshal_pinvoke_back, LeafClass_tFF470C9351EF8A7C1B552089388C1B823E6AED3E_marshal_pinvoke_cleanup, NULL, NULL, &LeafClass_tFF470C9351EF8A7C1B552089388C1B823E6AED3E_0_0_0 } /* Microsoft.Cci.Pdb.LeafClass */,
	{ NULL, LeafCobol0_t72728390346841BF4E36346BACED874070403DA4_marshal_pinvoke, LeafCobol0_t72728390346841BF4E36346BACED874070403DA4_marshal_pinvoke_back, LeafCobol0_t72728390346841BF4E36346BACED874070403DA4_marshal_pinvoke_cleanup, NULL, NULL, &LeafCobol0_t72728390346841BF4E36346BACED874070403DA4_0_0_0 } /* Microsoft.Cci.Pdb.LeafCobol0 */,
	{ NULL, LeafCobol1_t35D2CF1B94181044CEDB9E10A83A71B4DAAB7D31_marshal_pinvoke, LeafCobol1_t35D2CF1B94181044CEDB9E10A83A71B4DAAB7D31_marshal_pinvoke_back, LeafCobol1_t35D2CF1B94181044CEDB9E10A83A71B4DAAB7D31_marshal_pinvoke_cleanup, NULL, NULL, &LeafCobol1_t35D2CF1B94181044CEDB9E10A83A71B4DAAB7D31_0_0_0 } /* Microsoft.Cci.Pdb.LeafCobol1 */,
	{ NULL, LeafDefArg_tFDB27D450719305523FD6D0EE17C5179D0CF3254_marshal_pinvoke, LeafDefArg_tFDB27D450719305523FD6D0EE17C5179D0CF3254_marshal_pinvoke_back, LeafDefArg_tFDB27D450719305523FD6D0EE17C5179D0CF3254_marshal_pinvoke_cleanup, NULL, NULL, &LeafDefArg_tFDB27D450719305523FD6D0EE17C5179D0CF3254_0_0_0 } /* Microsoft.Cci.Pdb.LeafDefArg */,
	{ NULL, LeafDerived_t19DA359B459F25E98FA60A49118D897D3BC265BB_marshal_pinvoke, LeafDerived_t19DA359B459F25E98FA60A49118D897D3BC265BB_marshal_pinvoke_back, LeafDerived_t19DA359B459F25E98FA60A49118D897D3BC265BB_marshal_pinvoke_cleanup, NULL, NULL, &LeafDerived_t19DA359B459F25E98FA60A49118D897D3BC265BB_0_0_0 } /* Microsoft.Cci.Pdb.LeafDerived */,
	{ NULL, LeafDimArray_tA2A806CBA3FBED98F7E531D9822D6FEE54014150_marshal_pinvoke, LeafDimArray_tA2A806CBA3FBED98F7E531D9822D6FEE54014150_marshal_pinvoke_back, LeafDimArray_tA2A806CBA3FBED98F7E531D9822D6FEE54014150_marshal_pinvoke_cleanup, NULL, NULL, &LeafDimArray_tA2A806CBA3FBED98F7E531D9822D6FEE54014150_0_0_0 } /* Microsoft.Cci.Pdb.LeafDimArray */,
	{ NULL, LeafDimCon_tD30F82ED9822897296336C3098ECF323BBC0BF38_marshal_pinvoke, LeafDimCon_tD30F82ED9822897296336C3098ECF323BBC0BF38_marshal_pinvoke_back, LeafDimCon_tD30F82ED9822897296336C3098ECF323BBC0BF38_marshal_pinvoke_cleanup, NULL, NULL, &LeafDimCon_tD30F82ED9822897296336C3098ECF323BBC0BF38_0_0_0 } /* Microsoft.Cci.Pdb.LeafDimCon */,
	{ NULL, LeafDimVar_tEEA683A92D6068E4B4C24E2D17F7B3E6BA953C32_marshal_pinvoke, LeafDimVar_tEEA683A92D6068E4B4C24E2D17F7B3E6BA953C32_marshal_pinvoke_back, LeafDimVar_tEEA683A92D6068E4B4C24E2D17F7B3E6BA953C32_marshal_pinvoke_cleanup, NULL, NULL, &LeafDimVar_tEEA683A92D6068E4B4C24E2D17F7B3E6BA953C32_0_0_0 } /* Microsoft.Cci.Pdb.LeafDimVar */,
	{ NULL, LeafEnum_tB0E93F84B872D2BE483C89FB6A5F3391C1AA2902_marshal_pinvoke, LeafEnum_tB0E93F84B872D2BE483C89FB6A5F3391C1AA2902_marshal_pinvoke_back, LeafEnum_tB0E93F84B872D2BE483C89FB6A5F3391C1AA2902_marshal_pinvoke_cleanup, NULL, NULL, &LeafEnum_tB0E93F84B872D2BE483C89FB6A5F3391C1AA2902_0_0_0 } /* Microsoft.Cci.Pdb.LeafEnum */,
	{ NULL, LeafEnumerate_t40A6CB88B2C1BF7EFE03FC81C02C61BE9FDB606B_marshal_pinvoke, LeafEnumerate_t40A6CB88B2C1BF7EFE03FC81C02C61BE9FDB606B_marshal_pinvoke_back, LeafEnumerate_t40A6CB88B2C1BF7EFE03FC81C02C61BE9FDB606B_marshal_pinvoke_cleanup, NULL, NULL, &LeafEnumerate_t40A6CB88B2C1BF7EFE03FC81C02C61BE9FDB606B_0_0_0 } /* Microsoft.Cci.Pdb.LeafEnumerate */,
	{ NULL, LeafFieldList_t8A095A7FC326BF9B329ED8CE982D4812F0C306A5_marshal_pinvoke, LeafFieldList_t8A095A7FC326BF9B329ED8CE982D4812F0C306A5_marshal_pinvoke_back, LeafFieldList_t8A095A7FC326BF9B329ED8CE982D4812F0C306A5_marshal_pinvoke_cleanup, NULL, NULL, &LeafFieldList_t8A095A7FC326BF9B329ED8CE982D4812F0C306A5_0_0_0 } /* Microsoft.Cci.Pdb.LeafFieldList */,
	{ NULL, LeafFriendFcn_t95F4DD55850CFCF520F34D890D82C16A533F3EA6_marshal_pinvoke, LeafFriendFcn_t95F4DD55850CFCF520F34D890D82C16A533F3EA6_marshal_pinvoke_back, LeafFriendFcn_t95F4DD55850CFCF520F34D890D82C16A533F3EA6_marshal_pinvoke_cleanup, NULL, NULL, &LeafFriendFcn_t95F4DD55850CFCF520F34D890D82C16A533F3EA6_0_0_0 } /* Microsoft.Cci.Pdb.LeafFriendFcn */,
	{ NULL, LeafList_t7C2E4D1B2FA671EEE7959CFF0E263E643D4548CF_marshal_pinvoke, LeafList_t7C2E4D1B2FA671EEE7959CFF0E263E643D4548CF_marshal_pinvoke_back, LeafList_t7C2E4D1B2FA671EEE7959CFF0E263E643D4548CF_marshal_pinvoke_cleanup, NULL, NULL, &LeafList_t7C2E4D1B2FA671EEE7959CFF0E263E643D4548CF_0_0_0 } /* Microsoft.Cci.Pdb.LeafList */,
	{ NULL, LeafManaged_tE8DF4D70910FC94BBBA53AB7A1FEDCA11920F515_marshal_pinvoke, LeafManaged_tE8DF4D70910FC94BBBA53AB7A1FEDCA11920F515_marshal_pinvoke_back, LeafManaged_tE8DF4D70910FC94BBBA53AB7A1FEDCA11920F515_marshal_pinvoke_cleanup, NULL, NULL, &LeafManaged_tE8DF4D70910FC94BBBA53AB7A1FEDCA11920F515_0_0_0 } /* Microsoft.Cci.Pdb.LeafManaged */,
	{ NULL, LeafMember_tAAF8A8475F6A9AFAC4E644C35D5CA3DEB3A5A482_marshal_pinvoke, LeafMember_tAAF8A8475F6A9AFAC4E644C35D5CA3DEB3A5A482_marshal_pinvoke_back, LeafMember_tAAF8A8475F6A9AFAC4E644C35D5CA3DEB3A5A482_marshal_pinvoke_cleanup, NULL, NULL, &LeafMember_tAAF8A8475F6A9AFAC4E644C35D5CA3DEB3A5A482_0_0_0 } /* Microsoft.Cci.Pdb.LeafMember */,
	{ NULL, LeafMemberModify_t4FF7CD7E02987E015E212CCC959421415ED15200_marshal_pinvoke, LeafMemberModify_t4FF7CD7E02987E015E212CCC959421415ED15200_marshal_pinvoke_back, LeafMemberModify_t4FF7CD7E02987E015E212CCC959421415ED15200_marshal_pinvoke_cleanup, NULL, NULL, &LeafMemberModify_t4FF7CD7E02987E015E212CCC959421415ED15200_0_0_0 } /* Microsoft.Cci.Pdb.LeafMemberModify */,
	{ NULL, LeafMethod_tCA4611C19B6ADA17121DB9C6789CF4890DCD17BF_marshal_pinvoke, LeafMethod_tCA4611C19B6ADA17121DB9C6789CF4890DCD17BF_marshal_pinvoke_back, LeafMethod_tCA4611C19B6ADA17121DB9C6789CF4890DCD17BF_marshal_pinvoke_cleanup, NULL, NULL, &LeafMethod_tCA4611C19B6ADA17121DB9C6789CF4890DCD17BF_0_0_0 } /* Microsoft.Cci.Pdb.LeafMethod */,
	{ NULL, LeafMethodList_t50FFA143F60858305998AB3194640B44617F7BD1_marshal_pinvoke, LeafMethodList_t50FFA143F60858305998AB3194640B44617F7BD1_marshal_pinvoke_back, LeafMethodList_t50FFA143F60858305998AB3194640B44617F7BD1_marshal_pinvoke_cleanup, NULL, NULL, &LeafMethodList_t50FFA143F60858305998AB3194640B44617F7BD1_0_0_0 } /* Microsoft.Cci.Pdb.LeafMethodList */,
	{ NULL, LeafNestType_tB2A49FF9D4AF4C4D09BC375BA55B3EFA0156C786_marshal_pinvoke, LeafNestType_tB2A49FF9D4AF4C4D09BC375BA55B3EFA0156C786_marshal_pinvoke_back, LeafNestType_tB2A49FF9D4AF4C4D09BC375BA55B3EFA0156C786_marshal_pinvoke_cleanup, NULL, NULL, &LeafNestType_tB2A49FF9D4AF4C4D09BC375BA55B3EFA0156C786_0_0_0 } /* Microsoft.Cci.Pdb.LeafNestType */,
	{ NULL, LeafNestTypeEx_t1A5E18B3D844B2C0D9E7251092FF143058F9D89F_marshal_pinvoke, LeafNestTypeEx_t1A5E18B3D844B2C0D9E7251092FF143058F9D89F_marshal_pinvoke_back, LeafNestTypeEx_t1A5E18B3D844B2C0D9E7251092FF143058F9D89F_marshal_pinvoke_cleanup, NULL, NULL, &LeafNestTypeEx_t1A5E18B3D844B2C0D9E7251092FF143058F9D89F_0_0_0 } /* Microsoft.Cci.Pdb.LeafNestTypeEx */,
	{ NULL, LeafOEM_t5FBBFC82AEAE53042041664D70114A8D139BD911_marshal_pinvoke, LeafOEM_t5FBBFC82AEAE53042041664D70114A8D139BD911_marshal_pinvoke_back, LeafOEM_t5FBBFC82AEAE53042041664D70114A8D139BD911_marshal_pinvoke_cleanup, NULL, NULL, &LeafOEM_t5FBBFC82AEAE53042041664D70114A8D139BD911_0_0_0 } /* Microsoft.Cci.Pdb.LeafOEM */,
	{ NULL, LeafOEM2_t9436653424313BDCC06618C79EB2840DAC63FD69_marshal_pinvoke, LeafOEM2_t9436653424313BDCC06618C79EB2840DAC63FD69_marshal_pinvoke_back, LeafOEM2_t9436653424313BDCC06618C79EB2840DAC63FD69_marshal_pinvoke_cleanup, NULL, NULL, &LeafOEM2_t9436653424313BDCC06618C79EB2840DAC63FD69_0_0_0 } /* Microsoft.Cci.Pdb.LeafOEM2 */,
	{ NULL, LeafOneMethod_t9B50AEE4A203093243B44AD836BDBA8F121AC55F_marshal_pinvoke, LeafOneMethod_t9B50AEE4A203093243B44AD836BDBA8F121AC55F_marshal_pinvoke_back, LeafOneMethod_t9B50AEE4A203093243B44AD836BDBA8F121AC55F_marshal_pinvoke_cleanup, NULL, NULL, &LeafOneMethod_t9B50AEE4A203093243B44AD836BDBA8F121AC55F_0_0_0 } /* Microsoft.Cci.Pdb.LeafOneMethod */,
	{ NULL, LeafPreComp_tEDF9DD601391E1A11CE852338BF015014A665466_marshal_pinvoke, LeafPreComp_tEDF9DD601391E1A11CE852338BF015014A665466_marshal_pinvoke_back, LeafPreComp_tEDF9DD601391E1A11CE852338BF015014A665466_marshal_pinvoke_cleanup, NULL, NULL, &LeafPreComp_tEDF9DD601391E1A11CE852338BF015014A665466_0_0_0 } /* Microsoft.Cci.Pdb.LeafPreComp */,
	{ NULL, LeafRefSym_t474A0FCFFC3DF8495CF87927CB877A6B637097EA_marshal_pinvoke, LeafRefSym_t474A0FCFFC3DF8495CF87927CB877A6B637097EA_marshal_pinvoke_back, LeafRefSym_t474A0FCFFC3DF8495CF87927CB877A6B637097EA_marshal_pinvoke_cleanup, NULL, NULL, &LeafRefSym_t474A0FCFFC3DF8495CF87927CB877A6B637097EA_0_0_0 } /* Microsoft.Cci.Pdb.LeafRefSym */,
	{ NULL, LeafSTMember_tEB834DDC0EBC5B6A4EEE1B98511BDD3D5ADDFEC4_marshal_pinvoke, LeafSTMember_tEB834DDC0EBC5B6A4EEE1B98511BDD3D5ADDFEC4_marshal_pinvoke_back, LeafSTMember_tEB834DDC0EBC5B6A4EEE1B98511BDD3D5ADDFEC4_marshal_pinvoke_cleanup, NULL, NULL, &LeafSTMember_tEB834DDC0EBC5B6A4EEE1B98511BDD3D5ADDFEC4_0_0_0 } /* Microsoft.Cci.Pdb.LeafSTMember */,
	{ NULL, LeafSkip_t059B0B2C46AACED0D353B083C9850C6BCF86BE42_marshal_pinvoke, LeafSkip_t059B0B2C46AACED0D353B083C9850C6BCF86BE42_marshal_pinvoke_back, LeafSkip_t059B0B2C46AACED0D353B083C9850C6BCF86BE42_marshal_pinvoke_cleanup, NULL, NULL, &LeafSkip_t059B0B2C46AACED0D353B083C9850C6BCF86BE42_0_0_0 } /* Microsoft.Cci.Pdb.LeafSkip */,
	{ NULL, LeafTypeServer_tE97E93FA75F1B71519C16FBE6CB5E58875423099_marshal_pinvoke, LeafTypeServer_tE97E93FA75F1B71519C16FBE6CB5E58875423099_marshal_pinvoke_back, LeafTypeServer_tE97E93FA75F1B71519C16FBE6CB5E58875423099_marshal_pinvoke_cleanup, NULL, NULL, &LeafTypeServer_tE97E93FA75F1B71519C16FBE6CB5E58875423099_0_0_0 } /* Microsoft.Cci.Pdb.LeafTypeServer */,
	{ NULL, LeafTypeServer2_t8FC4A14403EB867E6F84F682BAF26491773A5B0A_marshal_pinvoke, LeafTypeServer2_t8FC4A14403EB867E6F84F682BAF26491773A5B0A_marshal_pinvoke_back, LeafTypeServer2_t8FC4A14403EB867E6F84F682BAF26491773A5B0A_marshal_pinvoke_cleanup, NULL, NULL, &LeafTypeServer2_t8FC4A14403EB867E6F84F682BAF26491773A5B0A_0_0_0 } /* Microsoft.Cci.Pdb.LeafTypeServer2 */,
	{ NULL, LeafUnion_t17FF31A726D08A7E748AD064CF65B860F6926BE7_marshal_pinvoke, LeafUnion_t17FF31A726D08A7E748AD064CF65B860F6926BE7_marshal_pinvoke_back, LeafUnion_t17FF31A726D08A7E748AD064CF65B860F6926BE7_marshal_pinvoke_cleanup, NULL, NULL, &LeafUnion_t17FF31A726D08A7E748AD064CF65B860F6926BE7_0_0_0 } /* Microsoft.Cci.Pdb.LeafUnion */,
	{ NULL, LeafVBClass_t3C38EB9A50D7E901D2755E31597D6B00B31E8853_marshal_pinvoke, LeafVBClass_t3C38EB9A50D7E901D2755E31597D6B00B31E8853_marshal_pinvoke_back, LeafVBClass_t3C38EB9A50D7E901D2755E31597D6B00B31E8853_marshal_pinvoke_cleanup, NULL, NULL, &LeafVBClass_t3C38EB9A50D7E901D2755E31597D6B00B31E8853_0_0_0 } /* Microsoft.Cci.Pdb.LeafVBClass */,
	{ NULL, LeafVFTPath_t95E5AE4B8118AE399126758E350610CE0C6CA3C2_marshal_pinvoke, LeafVFTPath_t95E5AE4B8118AE399126758E350610CE0C6CA3C2_marshal_pinvoke_back, LeafVFTPath_t95E5AE4B8118AE399126758E350610CE0C6CA3C2_marshal_pinvoke_cleanup, NULL, NULL, &LeafVFTPath_t95E5AE4B8118AE399126758E350610CE0C6CA3C2_0_0_0 } /* Microsoft.Cci.Pdb.LeafVFTPath */,
	{ NULL, LeafVTShape_t91BF65182016C03DDA8D810EDE1840B12807786B_marshal_pinvoke, LeafVTShape_t91BF65182016C03DDA8D810EDE1840B12807786B_marshal_pinvoke_back, LeafVTShape_t91BF65182016C03DDA8D810EDE1840B12807786B_marshal_pinvoke_cleanup, NULL, NULL, &LeafVTShape_t91BF65182016C03DDA8D810EDE1840B12807786B_0_0_0 } /* Microsoft.Cci.Pdb.LeafVTShape */,
	{ NULL, LeafVarString_t2C4E381206B6D027B69860927DB3085097F9D84D_marshal_pinvoke, LeafVarString_t2C4E381206B6D027B69860927DB3085097F9D84D_marshal_pinvoke_back, LeafVarString_t2C4E381206B6D027B69860927DB3085097F9D84D_marshal_pinvoke_cleanup, NULL, NULL, &LeafVarString_t2C4E381206B6D027B69860927DB3085097F9D84D_0_0_0 } /* Microsoft.Cci.Pdb.LeafVarString */,
	{ NULL, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_back, LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshal_pinvoke_cleanup, NULL, NULL, &LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_0_0_0 } /* UnityEngine.LightBakingOutput */,
	{ NULL, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_back, LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_marshal_pinvoke_cleanup, NULL, NULL, &LightProbes_tB0E0051ED428658D51E611C9E4B6FE3A49EB094D_0_0_0 } /* UnityEngine.LightProbes */,
	{ NULL, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_back, LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_marshal_pinvoke_cleanup, NULL, NULL, &LinkInfo_tE85DDAFDFBDA635E6405C88EE4FD5941A9243DD8_0_0_0 } /* UnityEngine.TextCore.Text.LinkInfo */,
	{ NULL, ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke, ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_back, ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_marshal_pinvoke_cleanup, NULL, NULL, &ListDragAndDropArgs_t12CC7206A73BE8F4D8126CD45DA6337DF8C91F53_0_0_0 } /* UnityEngine.UIElements.ListDragAndDropArgs */,
	{ NULL, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_back, LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_marshal_pinvoke_cleanup, NULL, NULL, &LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6_0_0_0 } /* System.Reflection.Emit.LocalBuilder */,
	{ NULL, LocalSym_t7556B9814002E85C24964E988D2073E09219D9D4_marshal_pinvoke, LocalSym_t7556B9814002E85C24964E988D2073E09219D9D4_marshal_pinvoke_back, LocalSym_t7556B9814002E85C24964E988D2073E09219D9D4_marshal_pinvoke_cleanup, NULL, NULL, &LocalSym_t7556B9814002E85C24964E988D2073E09219D9D4_0_0_0 } /* Microsoft.Cci.Pdb.LocalSym */,
	{ NULL, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_back, LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_marshal_pinvoke_cleanup, NULL, NULL, &LocalVariableInfo_tFEE59A3613A442977805D456B016C3592CE60B62_0_0_0 } /* System.Reflection.LocalVariableInfo */,
	{ NULL, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_back, LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_marshal_pinvoke_cleanup, NULL, NULL, &LockHolder_t759094B031976CAB1D40EEA607217A40DB7A0A59_0_0_0 } /* System.Threading.LockHolder */,
	{ NULL, ManProcSym_t36EECFA08E28F6714C2E2D95F5FC4E23AC8CF890_marshal_pinvoke, ManProcSym_t36EECFA08E28F6714C2E2D95F5FC4E23AC8CF890_marshal_pinvoke_back, ManProcSym_t36EECFA08E28F6714C2E2D95F5FC4E23AC8CF890_marshal_pinvoke_cleanup, NULL, NULL, &ManProcSym_t36EECFA08E28F6714C2E2D95F5FC4E23AC8CF890_0_0_0 } /* Microsoft.Cci.Pdb.ManProcSym */,
	{ NULL, ManProcSymMips_tAB74450DF30C4ADE63AB0153B022A910968E9811_marshal_pinvoke, ManProcSymMips_tAB74450DF30C4ADE63AB0153B022A910968E9811_marshal_pinvoke_back, ManProcSymMips_tAB74450DF30C4ADE63AB0153B022A910968E9811_marshal_pinvoke_cleanup, NULL, NULL, &ManProcSymMips_tAB74450DF30C4ADE63AB0153B022A910968E9811_0_0_0 } /* Microsoft.Cci.Pdb.ManProcSymMips */,
	{ NULL, ManyRegSym_t49F714226130200B23BAA794D72E28C74A1E8E40_marshal_pinvoke, ManyRegSym_t49F714226130200B23BAA794D72E28C74A1E8E40_marshal_pinvoke_back, ManyRegSym_t49F714226130200B23BAA794D72E28C74A1E8E40_marshal_pinvoke_cleanup, NULL, NULL, &ManyRegSym_t49F714226130200B23BAA794D72E28C74A1E8E40_0_0_0 } /* Microsoft.Cci.Pdb.ManyRegSym */,
	{ NULL, ManyRegSym2_tD8814A02ABD8881DE454A7D7FD7037B7C69D79DA_marshal_pinvoke, ManyRegSym2_tD8814A02ABD8881DE454A7D7FD7037B7C69D79DA_marshal_pinvoke_back, ManyRegSym2_tD8814A02ABD8881DE454A7D7FD7037B7C69D79DA_marshal_pinvoke_cleanup, NULL, NULL, &ManyRegSym2_tD8814A02ABD8881DE454A7D7FD7037B7C69D79DA_0_0_0 } /* Microsoft.Cci.Pdb.ManyRegSym2 */,
	{ NULL, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_back, MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshal_pinvoke_cleanup, NULL, NULL, &MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_0_0_0 } /* System.MarshalByRefObject */,
	{ NULL, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_back, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_cleanup, NULL, NULL, &MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_0_0_0 } /* UnityEngine.UIElements.StyleSheets.MatchResult */,
	{ NULL, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_back, MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_marshal_pinvoke_cleanup, NULL, NULL, &MatchResultInfo_t2D42F957A6C5CBA42159437BECB361DA59B66697_0_0_0 } /* UnityEngine.UIElements.StyleSheets.MatchResultInfo */,
	{ NULL, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_back, MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_marshal_pinvoke_cleanup, NULL, NULL, &MaterialReference_t86DB0799D5C82869D4FF0A4F59624AED6910FD26_0_0_0 } /* UnityEngine.TextCore.Text.MaterialReference */,
	{ NULL, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_back, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_cleanup, NULL, NULL, &MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_0_0_0 } /* System.Buffers.MemoryHandle */,
	{ NULL, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_back, MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshal_pinvoke_cleanup, NULL, NULL, &MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_0_0_0 } /* UnityEngine.TextCore.Text.MeshInfo */,
	{ NULL, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_back, Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshal_pinvoke_cleanup, NULL, NULL, &Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_0_0_0 } /* System.Reflection.Module */,
	{ NULL, NULL, NULL, NULL, CreateComCallableWrapperFor_ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694, NULL, &ModuleMetadata_t821706AAAC4317FE57DD5C0EFB3B39D8DD240694_0_0_0 } /* ILRuntime.Mono.Cecil.Pdb.ModuleMetadata */,
	{ NULL, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_back, MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_marshal_pinvoke_cleanup, NULL, NULL, &MonoAsyncCall_t4CB32CAF9A2C648A4A35E0D921CE0A886B5D1A37_0_0_0 } /* System.MonoAsyncCall */,
	{ NULL, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_back, MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_marshal_pinvoke_cleanup, NULL, NULL, &MonoEventInfo_tFC31A64CF7C2FC93D54A539434B3C403FC924777_0_0_0 } /* System.Reflection.MonoEventInfo */,
	{ NULL, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_back, MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodInfo_t1E614E57E686DDBD9D853F45CDFD61E1F9206F61_0_0_0 } /* System.Reflection.MonoMethodInfo */,
	{ NULL, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_back, MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshal_pinvoke_cleanup, NULL, NULL, &MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_0_0_0 } /* System.Runtime.Remoting.Messaging.MonoMethodMessage */,
	{ NULL, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_back, MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshal_pinvoke_cleanup, NULL, NULL, &MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_0_0_0 } /* System.Reflection.MonoPropertyInfo */,
	{ NULL, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_back, MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_marshal_pinvoke_cleanup, NULL, NULL, &MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501_0_0_0 } /* System.MonoTypeInfo */,
	{ NULL, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_back, MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_marshal_pinvoke_cleanup, NULL, NULL, &MovedFromAttributeData_t03CC6A15A3D30385AF3C6E10FA273DE13D874A2F_0_0_0 } /* UnityEngine.Scripting.APIUpdating.MovedFromAttributeData */,
	{ NULL, MulticastDelegate_t_marshal_pinvoke, MulticastDelegate_t_marshal_pinvoke_back, MulticastDelegate_t_marshal_pinvoke_cleanup, NULL, NULL, &MulticastDelegate_t_0_0_0 } /* System.MulticastDelegate */,
	{ NULL, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_back, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshal_pinvoke_cleanup, NULL, NULL, &Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_0_0_0 } /* UnityEngine.UI.Navigation */,
	{ NULL, ObjNameSym_tA937F8537081CFB8431F4F0725A828E6B50E0C70_marshal_pinvoke, ObjNameSym_tA937F8537081CFB8431F4F0725A828E6B50E0C70_marshal_pinvoke_back, ObjNameSym_tA937F8537081CFB8431F4F0725A828E6B50E0C70_marshal_pinvoke_cleanup, NULL, NULL, &ObjNameSym_tA937F8537081CFB8431F4F0725A828E6B50E0C70_0_0_0 } /* Microsoft.Cci.Pdb.ObjNameSym */,
	{ NULL, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup, NULL, NULL, &Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0 } /* UnityEngine.Object */,
	{ DelegatePInvokeWrapper_ObjectCheck_t3C3B6487453EE3D86019E87B8FFBC002A09F834D, NULL, NULL, NULL, NULL, NULL, &ObjectCheck_t3C3B6487453EE3D86019E87B8FFBC002A09F834D_0_0_0 } /* XLua.ObjectCheck */,
	{ NULL, ObjectMetadata_tDD4AE894EE76776B42938752FA5EF5A4F14211B4_marshal_pinvoke, ObjectMetadata_tDD4AE894EE76776B42938752FA5EF5A4F14211B4_marshal_pinvoke_back, ObjectMetadata_tDD4AE894EE76776B42938752FA5EF5A4F14211B4_marshal_pinvoke_cleanup, NULL, NULL, &ObjectMetadata_tDD4AE894EE76776B42938752FA5EF5A4F14211B4_0_0_0 } /* LitJson.ObjectMetadata */,
	{ NULL, OemSymbol_tD3CFB7FA74122CA34C9072A8E2120D7FDFEFFFC7_marshal_pinvoke, OemSymbol_tD3CFB7FA74122CA34C9072A8E2120D7FDFEFFFC7_marshal_pinvoke_back, OemSymbol_tD3CFB7FA74122CA34C9072A8E2120D7FDFEFFFC7_marshal_pinvoke_cleanup, NULL, NULL, &OemSymbol_tD3CFB7FA74122CA34C9072A8E2120D7FDFEFFFC7_0_0_0 } /* Microsoft.Cci.Pdb.OemSymbol */,
	{ NULL, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_back, PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshal_pinvoke_cleanup, NULL, NULL, &PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_0_0_0 } /* UnityEngine.UIElements.PanelClearSettings */,
	{ NULL, Param1_t15D4785333B5C5646D9CD61752047255E7409602_marshal_pinvoke, Param1_t15D4785333B5C5646D9CD61752047255E7409602_marshal_pinvoke_back, Param1_t15D4785333B5C5646D9CD61752047255E7409602_marshal_pinvoke_cleanup, NULL, NULL, &Param1_t15D4785333B5C5646D9CD61752047255E7409602_0_0_0 } /* Tutorial.Param1 */,
	{ NULL, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_back, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshal_pinvoke_cleanup, NULL, NULL, &ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_0_0_0 } /* System.Reflection.ParameterInfo */,
	{ NULL, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_back, ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_marshal_pinvoke_cleanup, NULL, NULL, &ParameterModifier_t75F1AF13B2AD5EDBD3A3579FD337D0A66E3FF510_0_0_0 } /* System.Reflection.ParameterModifier */,
	{ NULL, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_back, ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_marshal_pinvoke_cleanup, NULL, NULL, &ParamsArray_t2AE19F401652F4CBAB7A3CD4B0F195679FC16F1C_0_0_0 } /* System.ParamsArray */,
	{ NULL, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_back, PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshal_pinvoke_cleanup, NULL, NULL, &PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_0_0_0 } /* UnityEngine.Playables.PlayableBinding */,
	{ NULL, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_back, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem */,
	{ NULL, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_back, PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_marshal_pinvoke_cleanup, NULL, NULL, &PlayerLoopSystemInternal_tA4BFB5E55A895153CF14333B866219B77AAF1BC5_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystemInternal */,
	{ NULL, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup, NULL, NULL, &PointLight_tD01A1428DC1015D98A527136034187F732433EA7_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.PointLight */,
	{ NULL, PrewarmInfo_tF6EA23A3006501844EC0BD35D13BEE754BEAACA5_marshal_pinvoke, PrewarmInfo_tF6EA23A3006501844EC0BD35D13BEE754BEAACA5_marshal_pinvoke_back, PrewarmInfo_tF6EA23A3006501844EC0BD35D13BEE754BEAACA5_marshal_pinvoke_cleanup, NULL, NULL, &PrewarmInfo_tF6EA23A3006501844EC0BD35D13BEE754BEAACA5_0_0_0 } /* ILRuntime.Runtime.Enviorment.PrewarmInfo */,
	{ NULL, ProcSym32_t550E4764712286427A5A39716369A85F48DA7838_marshal_pinvoke, ProcSym32_t550E4764712286427A5A39716369A85F48DA7838_marshal_pinvoke_back, ProcSym32_t550E4764712286427A5A39716369A85F48DA7838_marshal_pinvoke_cleanup, NULL, NULL, &ProcSym32_t550E4764712286427A5A39716369A85F48DA7838_0_0_0 } /* Microsoft.Cci.Pdb.ProcSym32 */,
	{ NULL, ProcSymIa64_tDC9CCE068358AFD22A6B965C8660EA42877F3932_marshal_pinvoke, ProcSymIa64_tDC9CCE068358AFD22A6B965C8660EA42877F3932_marshal_pinvoke_back, ProcSymIa64_tDC9CCE068358AFD22A6B965C8660EA42877F3932_marshal_pinvoke_cleanup, NULL, NULL, &ProcSymIa64_tDC9CCE068358AFD22A6B965C8660EA42877F3932_0_0_0 } /* Microsoft.Cci.Pdb.ProcSymIa64 */,
	{ NULL, ProcSymMips_t59E19FDBECDBBA7A30C8C3B140A59DEA564391C9_marshal_pinvoke, ProcSymMips_t59E19FDBECDBBA7A30C8C3B140A59DEA564391C9_marshal_pinvoke_back, ProcSymMips_t59E19FDBECDBBA7A30C8C3B140A59DEA564391C9_marshal_pinvoke_cleanup, NULL, NULL, &ProcSymMips_t59E19FDBECDBBA7A30C8C3B140A59DEA564391C9_0_0_0 } /* Microsoft.Cci.Pdb.ProcSymMips */,
	{ NULL, PropertyMetadata_t12480FB01CB9599C3D6DF4942FF6AC75300FCCC3_marshal_pinvoke, PropertyMetadata_t12480FB01CB9599C3D6DF4942FF6AC75300FCCC3_marshal_pinvoke_back, PropertyMetadata_t12480FB01CB9599C3D6DF4942FF6AC75300FCCC3_marshal_pinvoke_cleanup, NULL, NULL, &PropertyMetadata_t12480FB01CB9599C3D6DF4942FF6AC75300FCCC3_0_0_0 } /* LitJson.PropertyMetadata */,
	{ NULL, PubSym32_t3D7D43BB34192D1D68FAB409AC29AF91441F1B00_marshal_pinvoke, PubSym32_t3D7D43BB34192D1D68FAB409AC29AF91441F1B00_marshal_pinvoke_back, PubSym32_t3D7D43BB34192D1D68FAB409AC29AF91441F1B00_marshal_pinvoke_cleanup, NULL, NULL, &PubSym32_t3D7D43BB34192D1D68FAB409AC29AF91441F1B00_0_0_0 } /* Microsoft.Cci.Pdb.PubSym32 */,
	{ NULL, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_back, RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshal_pinvoke_cleanup, NULL, NULL, &RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_0_0_0 } /* System.Security.Cryptography.RSAParameters */,
	{ NULL, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_back, RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_marshal_pinvoke_cleanup, NULL, NULL, &RareData_t2F466D955456C8E8898324C284948FCB0F4D6F26_0_0_0 } /* UnityEngine.UIElements.RareData */,
	{ NULL, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_back, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_cleanup, NULL, NULL, &RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_0_0_0 } /* UnityEngine.EventSystems.RaycastResult */,
	{ NULL, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_back, RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_marshal_pinvoke_cleanup, NULL, NULL, &RealProxy_t2D3667E71799D4A142B9E0EDED7FD858277FC9AB_0_0_0 } /* System.Runtime.Remoting.Proxies.RealProxy */,
	{ NULL, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_back, RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshal_pinvoke_cleanup, NULL, NULL, &RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_0_0_0 } /* UnityEngine.RectOffset */,
	{ NULL, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup, NULL, NULL, &RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.RectangleLight */,
	{ NULL, RefSym2_t660A79BE8BD4DE4FFC7B0213F23B13D1ABC2DC67_marshal_pinvoke, RefSym2_t660A79BE8BD4DE4FFC7B0213F23B13D1ABC2DC67_marshal_pinvoke_back, RefSym2_t660A79BE8BD4DE4FFC7B0213F23B13D1ABC2DC67_marshal_pinvoke_cleanup, NULL, NULL, &RefSym2_t660A79BE8BD4DE4FFC7B0213F23B13D1ABC2DC67_0_0_0 } /* Microsoft.Cci.Pdb.RefSym2 */,
	{ NULL, RegRel32_t373DE1258EF16B325B16198BECE93DC632CE6DF9_marshal_pinvoke, RegRel32_t373DE1258EF16B325B16198BECE93DC632CE6DF9_marshal_pinvoke_back, RegRel32_t373DE1258EF16B325B16198BECE93DC632CE6DF9_marshal_pinvoke_cleanup, NULL, NULL, &RegRel32_t373DE1258EF16B325B16198BECE93DC632CE6DF9_0_0_0 } /* Microsoft.Cci.Pdb.RegRel32 */,
	{ NULL, RegSym_t59599D122067D3D2031D896935B4B6B48C7C63B4_marshal_pinvoke, RegSym_t59599D122067D3D2031D896935B4B6B48C7C63B4_marshal_pinvoke_back, RegSym_t59599D122067D3D2031D896935B4B6B48C7C63B4_marshal_pinvoke_cleanup, NULL, NULL, &RegSym_t59599D122067D3D2031D896935B4B6B48C7C63B4_0_0_0 } /* Microsoft.Cci.Pdb.RegSym */,
	{ NULL, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_back, RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_marshal_pinvoke_cleanup, NULL, NULL, &RegexFCD_t696EC897BC155EF1EC7AEC0D97E2CE7717B45ADD_0_0_0 } /* System.Text.RegularExpressions.RegexFCD */,
	{ NULL, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_back, RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_marshal_pinvoke_cleanup, NULL, NULL, &RegexPrefix_tA54724081F84969072F7826C9CFA861073AD0044_0_0_0 } /* System.Text.RegularExpressions.RegexPrefix */,
	{ NULL, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_back, RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_marshal_pinvoke_cleanup, NULL, NULL, &RegexWriter_t618A9F9480E99C224DE6D93EEFED48EF0CEFAB12_0_0_0 } /* System.Text.RegularExpressions.RegexWriter */,
	{ NULL, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_back, RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_marshal_pinvoke_cleanup, NULL, NULL, &RegionInfo_tB80D4B7042096ED4166921F58B93FD1DB5555836_0_0_0 } /* System.Globalization.RegionInfo */,
	{ NULL, RegisterFrameInfo_t579BAED29C41F77361524954DC13120B1FAD0C7F_marshal_pinvoke, RegisterFrameInfo_t579BAED29C41F77361524954DC13120B1FAD0C7F_marshal_pinvoke_back, RegisterFrameInfo_t579BAED29C41F77361524954DC13120B1FAD0C7F_marshal_pinvoke_cleanup, NULL, NULL, &RegisterFrameInfo_t579BAED29C41F77361524954DC13120B1FAD0C7F_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterFrameInfo */,
	{ NULL, RegisterVMSymbol_t391D59EC603DD75307C1D720D163873A08DAF678_marshal_pinvoke, RegisterVMSymbol_t391D59EC603DD75307C1D720D163873A08DAF678_marshal_pinvoke_back, RegisterVMSymbol_t391D59EC603DD75307C1D720D163873A08DAF678_marshal_pinvoke_cleanup, NULL, NULL, &RegisterVMSymbol_t391D59EC603DD75307C1D720D163873A08DAF678_0_0_0 } /* ILRuntime.Runtime.Intepreter.RegisterVM.RegisterVMSymbol */,
	{ NULL, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_back, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_cleanup, NULL, NULL, &RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChainTextEntry */,
	{ NULL, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_back, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_cleanup, NULL, NULL, &RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChainVEData */,
	{ NULL, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_back, ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshal_pinvoke_cleanup, NULL, NULL, &ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_0_0_0 } /* System.Resources.ResourceLocator */,
	{ NULL, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_back, ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshal_pinvoke_cleanup, NULL, NULL, &ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_0_0_0 } /* UnityEngine.ResourceRequest */,
	{ NULL, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_back, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_marshal_pinvoke_cleanup, NULL, NULL, &Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_0_0_0 } /* UnityEngine.UIElements.Rotate */,
	{ NULL, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_back, RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshal_pinvoke_cleanup, NULL, NULL, &RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_0_0_0 } /* UnityEngine.UIElements.RuleMatcher */,
	{ NULL, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_back, RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_marshal_pinvoke_cleanup, NULL, NULL, &RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF_0_0_0 } /* System.Reflection.RuntimeAssembly */,
	{ NULL, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_back, RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_marshal_pinvoke_cleanup, NULL, NULL, &RuntimeModule_tF7DA9B52FC45487544703DCA49464B67CEA79633_0_0_0 } /* System.Reflection.RuntimeModule */,
	{ NULL, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_back, SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_marshal_pinvoke_cleanup, NULL, NULL, &SafeStringMarshal_t37C5C4D85118BDD5A55E3A20736550CF11C76C2E_0_0_0 } /* Mono.SafeStringMarshal */,
	{ DelegatePInvokeWrapper_SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716, NULL, NULL, NULL, NULL, NULL, &SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716_0_0_0 } /* UnityEngine.UIElements.SavePersistentViewData */,
	{ NULL, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_back, ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshal_pinvoke_cleanup, NULL, NULL, &ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_0_0_0 } /* UnityEngine.UIElements.StyleSheets.ScalableImage */,
	{ NULL, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_back, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_marshal_pinvoke_cleanup, NULL, NULL, &Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_0_0_0 } /* UnityEngine.UIElements.Scale */,
	{ NULL, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_back, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshal_pinvoke_cleanup, NULL, NULL, &ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0 } /* UnityEngine.ScriptableObject */,
	{ NULL, SectionSym_t66D84738FC60DB80D443BB100218C2C086B70E81_marshal_pinvoke, SectionSym_t66D84738FC60DB80D443BB100218C2C086B70E81_marshal_pinvoke_back, SectionSym_t66D84738FC60DB80D443BB100218C2C086B70E81_marshal_pinvoke_cleanup, NULL, NULL, &SectionSym_t66D84738FC60DB80D443BB100218C2C086B70E81_0_0_0 } /* Microsoft.Cci.Pdb.SectionSym */,
	{ NULL, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_back, SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_marshal_pinvoke_cleanup, NULL, NULL, &SelectorMatchRecord_t1E93CDB54312CFB4A67768BB25ABB9AFB31BC5D7_0_0_0 } /* UnityEngine.UIElements.StyleSheets.SelectorMatchRecord */,
	{ NULL, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_back, SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_marshal_pinvoke_cleanup, NULL, NULL, &SerializationEntry_t6A03B35039769EF0EDD14BE879E68F1C104FFF74_0_0_0 } /* System.Runtime.Serialization.SerializationEntry */,
	{ DelegatePInvokeWrapper_SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F, NULL, NULL, NULL, NULL, NULL, &SerializationEventHandler_t0A09DB90E1E5E0B2CCCB82D3380E02F4ACE8995F_0_0_0 } /* System.Runtime.Serialization.SerializationEventHandler */,
	{ NULL, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup, NULL, NULL, &SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_0_0_0 } /* UnityEngine.SkeletonBone */,
	{ NULL, SlotSym32_t628BF1E4E38894A696578BA4639D8A46AF119FFC_marshal_pinvoke, SlotSym32_t628BF1E4E38894A696578BA4639D8A46AF119FFC_marshal_pinvoke_back, SlotSym32_t628BF1E4E38894A696578BA4639D8A46AF119FFC_marshal_pinvoke_cleanup, NULL, NULL, &SlotSym32_t628BF1E4E38894A696578BA4639D8A46AF119FFC_0_0_0 } /* Microsoft.Cci.Pdb.SlotSym32 */,
	{ NULL, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_back, SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_marshal_pinvoke_cleanup, NULL, NULL, &SocketAsyncResult_tB157B0D0A1219D5A71AC5030C8BA8EA9D0F25340_0_0_0 } /* System.Net.Sockets.SocketAsyncResult */,
	{ NULL, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_back, SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_marshal_pinvoke_cleanup, NULL, NULL, &SortKey_tFE5594FAAAFF330066735114D1021DB0D5273740_0_0_0 } /* System.Globalization.SortKey */,
	{ NULL, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup, NULL, NULL, &SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_0_0_0 } /* UnityEngine.Experimental.GlobalIllumination.SpotLight */,
	{ NULL, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_back, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_cleanup, NULL, NULL, &SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_0_0_0 } /* UnityEngine.U2D.SpriteBone */,
	{ NULL, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup, NULL, NULL, &SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_0_0_0 } /* UnityEngine.Experimental.U2D.SpriteRendererGroup */,
	{ NULL, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_back, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshal_pinvoke_cleanup, NULL, NULL, &SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_0_0_0 } /* UnityEngine.UI.SpriteState */,
	{ NULL, StackFrame_t5A5BC93C439EFC27A6D024B69F189D46C8326272_marshal_pinvoke, StackFrame_t5A5BC93C439EFC27A6D024B69F189D46C8326272_marshal_pinvoke_back, StackFrame_t5A5BC93C439EFC27A6D024B69F189D46C8326272_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_t5A5BC93C439EFC27A6D024B69F189D46C8326272_0_0_0 } /* ILRuntime.Runtime.Stack.StackFrame */,
	{ NULL, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_back, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshal_pinvoke_cleanup, NULL, NULL, &StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_0_0_0 } /* System.Diagnostics.StackFrame */,
	{ DelegatePInvokeWrapper_StackObjectAllocateCallback_t783D1A37A7980923E9BC91BCDA9FF8F5909AAEC7, NULL, NULL, NULL, NULL, NULL, &StackObjectAllocateCallback_t783D1A37A7980923E9BC91BCDA9FF8F5909AAEC7_0_0_0 } /* ILRuntime.Runtime.Stack.StackObjectAllocateCallback */,
	{ NULL, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_back, State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshal_pinvoke_cleanup, NULL, NULL, &State_tC241510131965D8DE1919EB16A3650E397E5AEAB_0_0_0 } /* UnityEngine.UIElements.UIR.State */,
	{ NULL, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_back, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshal_pinvoke_cleanup, NULL, NULL, &StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_0_0_0 } /* System.Runtime.Serialization.StreamingContext */,
	{ NULL, StructTest_t264F5EBEAEEFD49490680FA70D7EC12F1A6EF322_marshal_pinvoke, StructTest_t264F5EBEAEEFD49490680FA70D7EC12F1A6EF322_marshal_pinvoke_back, StructTest_t264F5EBEAEEFD49490680FA70D7EC12F1A6EF322_marshal_pinvoke_cleanup, NULL, NULL, &StructTest_t264F5EBEAEEFD49490680FA70D7EC12F1A6EF322_0_0_0 } /* XLuaTest.StructTest */,
	{ NULL, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_back, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_marshal_pinvoke_cleanup, NULL, NULL, &StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_0_0_0 } /* UnityEngine.UIElements.StyleCursor */,
	{ NULL, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_back, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_0_0_0 } /* UnityEngine.UIElements.StylePropertyName */,
	{ NULL, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_back, StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyNameCollection_t2AB45DE2C2006786133A882AA60E6E782BB75312_0_0_0 } /* UnityEngine.UIElements.StylePropertyNameCollection */,
	{ NULL, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_back, StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshal_pinvoke_cleanup, NULL, NULL, &StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_0_0_0 } /* UnityEngine.UIElements.StyleSheets.StylePropertyValue */,
	{ NULL, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_back, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_marshal_pinvoke_cleanup, NULL, NULL, &StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_0_0_0 } /* UnityEngine.UIElements.StyleRotate */,
	{ NULL, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_back, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_marshal_pinvoke_cleanup, NULL, NULL, &StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_0_0_0 } /* UnityEngine.UIElements.StyleScale */,
	{ NULL, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_back, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshal_pinvoke_cleanup, NULL, NULL, &StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_0_0_0 } /* UnityEngine.UIElements.StyleSelectorPart */,
	{ NULL, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_back, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_cleanup, NULL, NULL, &StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_0_0_0 } /* UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken */,
	{ NULL, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_back, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_marshal_pinvoke_cleanup, NULL, NULL, &StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_0_0_0 } /* UnityEngine.UIElements.StyleTranslate */,
	{ NULL, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_back, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_cleanup, NULL, NULL, &StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_0_0_0 } /* UnityEngine.UIElements.StyleSheets.StyleValueManaged */,
	{ NULL, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_back, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_cleanup, NULL, NULL, &StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_0_0_0 } /* UnityEngine.UIElements.Experimental.StyleValues */,
	{ NULL, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_back, StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_marshal_pinvoke_cleanup, NULL, NULL, &StyleVariable_t5D4DEC936102A13961F4F2C6214B83D6CDC56269_0_0_0 } /* UnityEngine.UIElements.StyleVariable */,
	{ NULL, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_back, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshal_pinvoke_cleanup, NULL, NULL, &TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_0_0_0 } /* System.Runtime.CompilerServices.TaskAwaiter */,
	{ DelegatePInvokeWrapper_TestDelegateFunction_t7E78C87555CB3932038ECC982704C8979D8A6755, NULL, NULL, NULL, NULL, NULL, &TestDelegateFunction_t7E78C87555CB3932038ECC982704C8979D8A6755_0_0_0 } /* TestDelegateFunction */,
	{ DelegatePInvokeWrapper_TestDelegateMethod_t5A0D7B5B47B316AB6EA944251DAA3F9B4F390596, NULL, NULL, NULL, NULL, NULL, &TestDelegateMethod_t5A0D7B5B47B316AB6EA944251DAA3F9B4F390596_0_0_0 } /* TestDelegateMethod */,
	{ NULL, TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke, TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_back, TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_marshal_pinvoke_cleanup, NULL, NULL, &TextCoreHandle_t06766751C4FA547A46F83A8E3DD33A6FF2EBE4B5_0_0_0 } /* UnityEngine.UIElements.TextCoreHandle */,
	{ NULL, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_back, TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_marshal_pinvoke_cleanup, NULL, NULL, &TextElementInfo_tDD7A12E319505510E0B350E342BD55F32AB5F976_0_0_0 } /* UnityEngine.TextCore.Text.TextElementInfo */,
	{ NULL, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_back, TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_0_0_0 } /* UnityEngine.TextGenerationSettings */,
	{ NULL, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_back, TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshal_pinvoke_cleanup, NULL, NULL, &TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_0_0_0 } /* UnityEngine.TextGenerator */,
	{ NULL, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_back, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_cleanup, NULL, NULL, &TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_0_0_0 } /* UnityEngine.UIElements.TextNativeSettings */,
	{ NULL, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_back, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_cleanup, NULL, NULL, &TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_0_0_0 } /* UnityEngine.UIElements.UIR.TextureEntry */,
	{ DelegatePInvokeWrapper_ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2, NULL, NULL, NULL, NULL, NULL, &ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_0_0_0 } /* System.Threading.ThreadStart */,
	{ NULL, ThreadSym32_tA83B85288222A1E675505794C39D5A8C2EDD568E_marshal_pinvoke, ThreadSym32_tA83B85288222A1E675505794C39D5A8C2EDD568E_marshal_pinvoke_back, ThreadSym32_tA83B85288222A1E675505794C39D5A8C2EDD568E_marshal_pinvoke_cleanup, NULL, NULL, &ThreadSym32_tA83B85288222A1E675505794C39D5A8C2EDD568E_0_0_0 } /* Microsoft.Cci.Pdb.ThreadSym32 */,
	{ NULL, ThunkSym32_tA3D089F8C0F8E4AFF09972944C218C7A54EE6A13_marshal_pinvoke, ThunkSym32_tA3D089F8C0F8E4AFF09972944C218C7A54EE6A13_marshal_pinvoke_back, ThunkSym32_tA3D089F8C0F8E4AFF09972944C218C7A54EE6A13_marshal_pinvoke_cleanup, NULL, NULL, &ThunkSym32_tA3D089F8C0F8E4AFF09972944C218C7A54EE6A13_0_0_0 } /* Microsoft.Cci.Pdb.ThunkSym32 */,
	{ DelegatePInvokeWrapper_TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B, NULL, NULL, NULL, NULL, NULL, &TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B_0_0_0 } /* UnityEngine.UIElements.TimeMsFunction */,
	{ NULL, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_back, TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshal_pinvoke_cleanup, NULL, NULL, &TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_0_0_0 } /* UnityEngine.TrackedReference */,
	{ NULL, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_back, TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_marshal_pinvoke_cleanup, NULL, NULL, &TransformData_tC4540FA2761D7981877CC9077301F6AFEF1CF808_0_0_0 } /* UnityEngine.UIElements.TransformData */,
	{ NULL, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_back, TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_marshal_pinvoke_cleanup, NULL, NULL, &TransitionData_tF097DCEA6AD59BAD8C54693D84B3E2AE248AB321_0_0_0 } /* UnityEngine.UIElements.TransitionData */,
	{ NULL, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_back, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_marshal_pinvoke_cleanup, NULL, NULL, &Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_0_0_0 } /* UnityEngine.UIElements.Translate */,
	{ NULL, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_back, TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_marshal_pinvoke_cleanup, NULL, NULL, &TransparentProxy_t943163A9C567330AAD61F9F42479D4EAD2A55DD8_0_0_0 } /* System.Runtime.Remoting.Proxies.TransparentProxy */,
	{ NULL, TypeSizeInfo_t1AAA1D7D5128C5EEDB1707E1EB5AC2B9AE9892DB_marshal_pinvoke, TypeSizeInfo_t1AAA1D7D5128C5EEDB1707E1EB5AC2B9AE9892DB_marshal_pinvoke_back, TypeSizeInfo_t1AAA1D7D5128C5EEDB1707E1EB5AC2B9AE9892DB_marshal_pinvoke_cleanup, NULL, NULL, &TypeSizeInfo_t1AAA1D7D5128C5EEDB1707E1EB5AC2B9AE9892DB_0_0_0 } /* ILRuntime.Runtime.Enviorment.TypeSizeInfo */,
	{ NULL, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_back, UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshal_pinvoke_cleanup, NULL, NULL, &UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_0_0_0 } /* UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator */,
	{ NULL, UdtSym_t99A18EAF5C9A2FC560A29EC32E1DDF4021FD0146_marshal_pinvoke, UdtSym_t99A18EAF5C9A2FC560A29EC32E1DDF4021FD0146_marshal_pinvoke_back, UdtSym_t99A18EAF5C9A2FC560A29EC32E1DDF4021FD0146_marshal_pinvoke_cleanup, NULL, NULL, &UdtSym_t99A18EAF5C9A2FC560A29EC32E1DDF4021FD0146_0_0_0 } /* Microsoft.Cci.Pdb.UdtSym */,
	{ NULL, UnamespaceSym_t132720DF24B6ADD5953DE467EC1F0FC5843962B5_marshal_pinvoke, UnamespaceSym_t132720DF24B6ADD5953DE467EC1F0FC5843962B5_marshal_pinvoke_back, UnamespaceSym_t132720DF24B6ADD5953DE467EC1F0FC5843962B5_marshal_pinvoke_cleanup, NULL, NULL, &UnamespaceSym_t132720DF24B6ADD5953DE467EC1F0FC5843962B5_0_0_0 } /* Microsoft.Cci.Pdb.UnamespaceSym */,
	{ DelegatePInvokeWrapper_UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7, NULL, NULL, NULL, NULL, NULL, &UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_0_0_0 } /* UnityEngine.Events.UnityAction */,
	{ NULL, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_0_0_0 } /* UnityEngine.Networking.UnityWebRequest */,
	{ NULL, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_back, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_cleanup, NULL, NULL, &UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_0_0_0 } /* UnityEngine.Networking.UnityWebRequestAsyncOperation */,
	{ NULL, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_back, UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_marshal_pinvoke_cleanup, NULL, NULL, &UnmanagedMarshal_t266EA330E458C05C980D8B8C08DF106E266E378C_0_0_0 } /* System.Reflection.Emit.UnmanagedMarshal */,
	{ NULL, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup, NULL, NULL, &UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_0_0_0 } /* UnityEngine.Networking.UploadHandler */,
	{ NULL, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_back, ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_marshal_pinvoke_cleanup, NULL, NULL, &ValueStringBuilder_tC142140E6C0B9CD2BA423636F1BB5822672673E9_0_0_0 } /* System.Text.ValueStringBuilder */,
	{ NULL, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_back, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshal_pinvoke_cleanup, NULL, NULL, &ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_0_0_0 } /* System.Runtime.CompilerServices.ValueTaskAwaiter */,
	{ NULL, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_back, ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshal_pinvoke_cleanup, NULL, NULL, &ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_0_0_0 } /* System.ValueType */,
	{ NULL, ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke, ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_back, ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_marshal_pinvoke_cleanup, NULL, NULL, &ValueUtf8Converter_t46AD787999C475AFB40B2CCA5D2B1DA27E9E2266_0_0_0 } /* System.Text.ValueUtf8Converter */,
	{ NULL, VariableIndex_t1B0CF82B6D2B17D4B1E518607EE8F00CCF8686F9_marshal_pinvoke, VariableIndex_t1B0CF82B6D2B17D4B1E518607EE8F00CCF8686F9_marshal_pinvoke_back, VariableIndex_t1B0CF82B6D2B17D4B1E518607EE8F00CCF8686F9_marshal_pinvoke_cleanup, NULL, NULL, &VariableIndex_t1B0CF82B6D2B17D4B1E518607EE8F00CCF8686F9_0_0_0 } /* ILRuntime.Mono.Cecil.Cil.VariableIndex */,
	{ DelegatePInvokeWrapper_Vector3Param_tBF7B301BAA7FC5E25B69DD5B53DC3DA483508F67, NULL, NULL, NULL, NULL, NULL, &Vector3Param_tBF7B301BAA7FC5E25B69DD5B53DC3DA483508F67_0_0_0 } /* XLuaTest.Vector3Param */,
	{ NULL, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_back, VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_marshal_pinvoke_cleanup, NULL, NULL, &VisualData_t64B2C5387387BCEC426F3981BECC8582A02D3F1B_0_0_0 } /* UnityEngine.UIElements.VisualData */,
	{ NULL, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_back, VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_marshal_pinvoke_cleanup, NULL, NULL, &VisualElementStyleSheetSet_t01465769E0D9109A677300311A7058701873A23B_0_0_0 } /* UnityEngine.UIElements.VisualElementStyleSheetSet */,
	{ NULL, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_back, WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshal_pinvoke_cleanup, NULL, NULL, &WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_0_0_0 } /* UnityEngine.WaitForSeconds */,
	{ NULL, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_back, WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshal_pinvoke_cleanup, NULL, NULL, &WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_0_0_0 } /* System.Threading.WaitHandle */,
	{ NULL, WithSym32_t6D981C8EA5C958290C7DB2F6D5489C5FAEE6ED7E_marshal_pinvoke, WithSym32_t6D981C8EA5C958290C7DB2F6D5489C5FAEE6ED7E_marshal_pinvoke_back, WithSym32_t6D981C8EA5C958290C7DB2F6D5489C5FAEE6ED7E_marshal_pinvoke_cleanup, NULL, NULL, &WithSym32_t6D981C8EA5C958290C7DB2F6D5489C5FAEE6ED7E_0_0_0 } /* Microsoft.Cci.Pdb.WithSym32 */,
	{ NULL, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_back, WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_marshal_pinvoke_cleanup, NULL, NULL, &WordWrapState_tD71131CF008362DB9562FB9794AE9D9225D8F123_0_0_0 } /* UnityEngine.TextCore.Text.WordWrapState */,
	{ NULL, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_back, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_cleanup, NULL, NULL, &X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_0_0_0 } /* System.Security.Cryptography.X509Certificates.X509ChainStatus */,
	{ NULL, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_back, YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshal_pinvoke_cleanup, NULL, NULL, &YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_0_0_0 } /* UnityEngine.YieldInstruction */,
	{ NULL, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_back, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_cleanup, NULL, NULL, &__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_0_0_0 } /* System.__DTString */,
	{ NULL, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_back, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshal_pinvoke_cleanup, NULL, NULL, &jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_0_0_0 } /* UnityEngine.jvalue */,
	{ DelegatePInvokeWrapper_lua_CSFunction_t093CEFD032D3F839CA097158604FA3E07F039DEE, NULL, NULL, NULL, NULL, NULL, &lua_CSFunction_t093CEFD032D3F839CA097158604FA3E07F039DEE_0_0_0 } /* XLua.LuaDLL.lua_CSFunction */,
	{ NULL, mlMethod_t6FEFE718A64D4F826FF6C9E5BE58600B6941EC50_marshal_pinvoke, mlMethod_t6FEFE718A64D4F826FF6C9E5BE58600B6941EC50_marshal_pinvoke_back, mlMethod_t6FEFE718A64D4F826FF6C9E5BE58600B6941EC50_marshal_pinvoke_cleanup, NULL, NULL, &mlMethod_t6FEFE718A64D4F826FF6C9E5BE58600B6941EC50_0_0_0 } /* Microsoft.Cci.Pdb.mlMethod */,
	{ NULL, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_back, Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_marshal_pinvoke_cleanup, NULL, NULL, &Alloc2D_tB9971776E3506C8F38C7F3C66690F9AC0322542E_0_0_0 } /* UnityEngine.UIElements.UIR.Allocator2D/Alloc2D */,
	{ DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5, NULL, NULL, NULL, NULL, NULL, &OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5_0_0_0 } /* UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback */,
	{ DelegatePInvokeWrapper_LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413, NULL, NULL, NULL, NULL, NULL, &LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_0_0_0 } /* UnityEngine.Application/LogCallback */,
	{ DelegatePInvokeWrapper_LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F, NULL, NULL, NULL, NULL, NULL, &LowMemoryCallback_tF685A8AA4A24BB7603D190EB750E61C3F963026F_0_0_0 } /* UnityEngine.Application/LowMemoryCallback */,
	{ NULL, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_back, RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshal_pinvoke_cleanup, NULL, NULL, &RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_0_0_0 } /* System.Array/RawData */,
	{ NULL, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_back, SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_marshal_pinvoke_cleanup, NULL, NULL, &SorterGenericArray_t894488A2B9F4A1ACE408683B71920FA7DBAA47D9_0_0_0 } /* System.Array/SorterGenericArray */,
	{ NULL, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_back, SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_marshal_pinvoke_cleanup, NULL, NULL, &SorterObjectArray_t27D45F724041652AE2FD9645BE40292F8E343305_0_0_0 } /* System.Array/SorterObjectArray */,
	{ DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E, NULL, NULL, NULL, NULL, NULL, &PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E_0_0_0 } /* UnityEngine.AudioClip/PCMReaderCallback */,
	{ DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072, NULL, NULL, NULL, NULL, NULL, &PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072_0_0_0 } /* UnityEngine.AudioClip/PCMSetPositionCallback */,
	{ DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177, NULL, NULL, NULL, NULL, NULL, &AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177_0_0_0 } /* UnityEngine.AudioSettings/AudioConfigurationChangeHandler */,
	{ NULL, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_back, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshal_pinvoke_cleanup, NULL, NULL, &OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_0_0_0 } /* UnityEngine.BeforeRenderHelper/OrderBlock */,
	{ DelegatePInvokeWrapper_GetE_tE4277A0E2C07762FAFC2419FECA63D618262E0CC, NULL, NULL, NULL, NULL, NULL, &GetE_tE4277A0E2C07762FAFC2419FECA63D618262E0CC_0_0_0 } /* Tutorial.CSCallLua/GetE */,
	{ NULL, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_back, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshal_pinvoke_cleanup, NULL, NULL, &RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_0_0_0 } /* UnityEngine.Camera/RenderRequest */,
	{ DelegatePInvokeWrapper_WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC, NULL, NULL, NULL, NULL, NULL, &WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC_0_0_0 } /* UnityEngine.Canvas/WillRenderCanvases */,
	{ NULL, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_back, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshal_pinvoke_cleanup, NULL, NULL, &ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_0_0_0 } /* System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter */,
	{ NULL, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_back, ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_marshal_pinvoke_cleanup, NULL, NULL, &ProcessMessageRes_t6B49D2FAE01AC95889FDF8F854970E358D2AC2C7_0_0_0 } /* System.Runtime.Remoting.Channels.CrossAppDomainSink/ProcessMessageRes */,
	{ DelegatePInvokeWrapper_StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F, NULL, NULL, NULL, NULL, NULL, &StateChanged_t6DC116251B1ED50EC475CFF0195AB6625478485F_0_0_0 } /* UnityEngine.CullingGroup/StateChanged */,
	{ NULL, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_back, Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_marshal_pinvoke_cleanup, NULL, NULL, &Data_t589A371D0FD4E7B3C8E27FDDE05F06BA48BF2E4E_0_0_0 } /* System.Globalization.CultureInfo/Data */,
	{ DelegatePInvokeWrapper_OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A, NULL, NULL, NULL, NULL, NULL, &OnCultureInfoChangedDelegate_t643F89A369BE552AC4D546507F51BF998EBA670A_0_0_0 } /* System.Globalization.CultureInfo/OnCultureInfoChangedDelegate */,
	{ NULL, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_back, Resources_t959FACC867970114DBF8DC7D4C649240E819940E_marshal_pinvoke_cleanup, NULL, NULL, &Resources_t959FACC867970114DBF8DC7D4C649240E819940E_0_0_0 } /* UnityEngine.UI.DefaultControls/Resources */,
	{ DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6, NULL, NULL, NULL, NULL, NULL, &ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_0_0_0 } /* System.IO.Compression.DeflateStream/ReadMethod */,
	{ DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9, NULL, NULL, NULL, NULL, NULL, &WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_0_0_0 } /* System.IO.Compression.DeflateStream/WriteMethod */,
	{ DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA, NULL, NULL, NULL, NULL, NULL, &UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_0_0_0 } /* System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite */,
	{ DelegatePInvokeWrapper_DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68, NULL, NULL, NULL, NULL, NULL, &DisplaysUpdatedDelegate_t1BAACED9BE72131FD59213A3186F5D7AB9E1FD68_0_0_0 } /* UnityEngine.Display/DisplaysUpdatedDelegate */,
	{ NULL, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_back, EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_marshal_pinvoke_cleanup, NULL, NULL, &EnumResult_t136A685F59AB498579BD350717FADD4D6603DAB4_0_0_0 } /* System.Enum/EnumResult */,
	{ NULL, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_back, DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_marshal_pinvoke_cleanup, NULL, NULL, &DispatchContext_tFA37790A5FF30508B0146B79E4FF1880EB82E455_0_0_0 } /* UnityEngine.UIElements.EventDispatcher/DispatchContext */,
	{ NULL, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_back, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshal_pinvoke_cleanup, NULL, NULL, &EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_0_0_0 } /* UnityEngine.UIElements.EventDispatcher/EventRecord */,
	{ NULL, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_back, UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshal_pinvoke_cleanup, NULL, NULL, &UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_0_0_0 } /* UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig */,
	{ NULL, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_back, Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshal_pinvoke_cleanup, NULL, NULL, &Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_0_0_0 } /* System.Threading.ExecutionContext/Reader */,
	{ DelegatePInvokeWrapper_ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98, NULL, NULL, NULL, NULL, NULL, &ReadDelegate_tA1467DDB23ACEC2E32F06F86F7906D1B1AA67C98_0_0_0 } /* System.IO.FileStream/ReadDelegate */,
	{ DelegatePInvokeWrapper_WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA, NULL, NULL, NULL, NULL, NULL, &WriteDelegate_tACBC1C867E4248D4A20626FCBFB1C886993FA3BA_0_0_0 } /* System.IO.FileStream/WriteDelegate */,
	{ NULL, U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke, U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke_back, U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_marshal_pinvoke_cleanup, NULL, NULL, &U3C_fileNameBufferU3Ee__FixedBuffer_t97D162ACEB529263974C28711BBEEF547EA81918_0_0_0 } /* System.IO.Enumeration.FileSystemEntry/<_fileNameBuffer>e__FixedBuffer */,
	{ NULL, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_back, FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_marshal_pinvoke_cleanup, NULL, NULL, &FocusedElement_t1EE083A1C5276213C533A38C6B5DC02E9DE5CBEF_0_0_0 } /* UnityEngine.UIElements.FocusController/FocusedElement */,
	{ DelegatePInvokeWrapper_FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1, NULL, NULL, NULL, NULL, NULL, &FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1_0_0_0 } /* UnityEngine.Font/FontTextureRebuildCallback */,
	{ DelegatePInvokeWrapper_WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550, NULL, NULL, NULL, NULL, NULL, &WindowFunction_t0067B6F174FD5BEC3E869A38C2319BA8EE85D550_0_0_0 } /* UnityEngine.GUI/WindowFunction */,
	{ NULL, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_back, ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_marshal_pinvoke_cleanup, NULL, NULL, &ParentClipScope_tDAB1300C623213518730D926A970098BECFD9C52_0_0_0 } /* UnityEngine.GUIClip/ParentClipScope */,
	{ DelegatePInvokeWrapper_SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98, NULL, NULL, NULL, NULL, NULL, &SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98_0_0_0 } /* UnityEngine.GUISkin/SkinChangedDelegate */,
	{ NULL, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_back, RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_marshal_pinvoke_cleanup, NULL, NULL, &RawTexture_t11E3CED18C936D84173D8F6A55270D7AC5452FCA_0_0_0 } /* UnityEngine.UIElements.UIR.GradientSettingsAtlas/RawTexture */,
	{ NULL, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_back, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshal_pinvoke_cleanup, NULL, NULL, &GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_0_0_0 } /* System.Guid/GuidResult */,
	{ NULL, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_back, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_0_0_0 } /* System.Collections.Hashtable/bucket */,
	{ NULL, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_back, GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_marshal_pinvoke_cleanup, NULL, NULL, &GUIGlobals_tA6082A955224515E1D82F5B41D84A0CD35A9CF10_0_0_0 } /* UnityEngine.UIElements.IMGUIContainer/GUIGlobals */,
	{ NULL, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_back, InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_marshal_pinvoke_cleanup, NULL, NULL, &InlineRule_t33A25EE06BCFCD5561E60223DF8544C8EF644C30_0_0_0 } /* UnityEngine.UIElements.InlineStyleAccess/InlineRule */,
	{ DelegatePInvokeWrapper_OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B, NULL, NULL, NULL, NULL, NULL, &OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B_0_0_0 } /* UnityEngine.UI.InputField/OnValidateInput */,
	{ NULL, InstructionOffsetCache_tFAD3A2F433E356DC0B220BCC10E3D16DB962A379_marshal_pinvoke, InstructionOffsetCache_tFAD3A2F433E356DC0B220BCC10E3D16DB962A379_marshal_pinvoke_back, InstructionOffsetCache_tFAD3A2F433E356DC0B220BCC10E3D16DB962A379_marshal_pinvoke_cleanup, NULL, NULL, &InstructionOffsetCache_tFAD3A2F433E356DC0B220BCC10E3D16DB962A379_0_0_0 } /* ILRuntime.Mono.Cecil.Cil.InstructionCollection/InstructionOffsetCache */,
	{ NULL, bucket_t5970228849D5480847E5E9D6F4249C6B7FA5E345_marshal_pinvoke, bucket_t5970228849D5480847E5E9D6F4249C6B7FA5E345_marshal_pinvoke_back, bucket_t5970228849D5480847E5E9D6F4249C6B7FA5E345_marshal_pinvoke_cleanup, NULL, NULL, &bucket_t5970228849D5480847E5E9D6F4249C6B7FA5E345_0_0_0 } /* Microsoft.Cci.Pdb.IntHashTable/bucket */,
	{ NULL, TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke, TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_back, TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_marshal_pinvoke_cleanup, NULL, NULL, &TreeViewItemWrapper_tFA593EC4B06E0C963C0EAA9C18DDC99EEDC05D1F_0_0_0 } /* UnityEngine.UIElements.InternalTreeView/TreeViewItemWrapper */,
	{ NULL, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_back, DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshal_pinvoke_cleanup, NULL, NULL, &DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_0_0_0 } /* UnityEngine.UIElements.ListViewDragger/DragPosition */,
	{ NULL, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_back, Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_marshal_pinvoke_cleanup, NULL, NULL, &Reader_t77F3745416303EC22BC31DD74525DB04E7501DB6_0_0_0 } /* System.Runtime.Remoting.Messaging.LogicalCallContext/Reader */,
	{ DelegatePInvokeWrapper_CustomLoader_t70AA7C7DF71886FE90BC4B6BE246EC70AA02E77A, NULL, NULL, NULL, NULL, NULL, &CustomLoader_t70AA7C7DF71886FE90BC4B6BE246EC70AA02E77A_0_0_0 } /* XLua.LuaEnv/CustomLoader */,
	{ NULL, GCAction_t5A83281D1B30F40B24F1B2EE5739F8A4A7181EC1_marshal_pinvoke, GCAction_t5A83281D1B30F40B24F1B2EE5739F8A4A7181EC1_marshal_pinvoke_back, GCAction_t5A83281D1B30F40B24F1B2EE5739F8A4A7181EC1_marshal_pinvoke_cleanup, NULL, NULL, &GCAction_t5A83281D1B30F40B24F1B2EE5739F8A4A7181EC1_0_0_0 } /* XLua.LuaEnv/GCAction */,
	{ NULL, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_back, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_cleanup, NULL, NULL, &AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_0_0_0 } /* UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData */,
	{ NULL, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_back, BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshal_pinvoke_cleanup, NULL, NULL, &BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_0_0_0 } /* UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams */,
	{ NULL, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_back, RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshal_pinvoke_cleanup, NULL, NULL, &RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_0_0_0 } /* UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams */,
	{ NULL, TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke, TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_back, TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_marshal_pinvoke_cleanup, NULL, NULL, &TextParams_t943244753F8E3A49632BBEC7272DAEAA8E10546F_0_0_0 } /* UnityEngine.UIElements.MeshGenerationContextUtils/TextParams */,
	{ NULL, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_back, FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_marshal_pinvoke_cleanup, NULL, NULL, &FocusableHierarchyTraversal_tE18EF688B7AC65FC273812175FCF84916E3E7E4B_0_0_0 } /* UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal */,
	{ NULL, NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke, NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke_back, NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_marshal_pinvoke_cleanup, NULL, NULL, &NumberBuffer_tE874ADE8F26E879B88784939C623CCEEF30C7643_0_0_0 } /* System.Number/NumberBuffer */,
	{ DelegatePInvokeWrapper_InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3, NULL, NULL, NULL, NULL, NULL, &InvocationEntryDelegate_t6CCA2089ADE78BEAC44921F10D121BD51641A3C3_0_0_0 } /* System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate */,
	{ NULL, Slot_t3510D6888C145B434D39A54F7D362B89791043B9_marshal_pinvoke, Slot_t3510D6888C145B434D39A54F7D362B89791043B9_marshal_pinvoke_back, Slot_t3510D6888C145B434D39A54F7D362B89791043B9_marshal_pinvoke_cleanup, NULL, NULL, &Slot_t3510D6888C145B434D39A54F7D362B89791043B9_0_0_0 } /* XLua.ObjectPool/Slot */,
	{ NULL, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_back, FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_marshal_pinvoke_cleanup, NULL, NULL, &FormatParam_t76A31D70C9964751A9AAFD4CE6951437E6C1CD8E_0_0_0 } /* System.ParameterizedStrings/FormatParam */,
	{ NULL, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_back, EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_marshal_pinvoke_cleanup, NULL, NULL, &EmitParams_tE76279CE754C7B0A4ECDA7E294587AACB039FBA0_0_0_0 } /* UnityEngine.ParticleSystem/EmitParams */,
	{ DelegatePInvokeWrapper_CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509, NULL, NULL, NULL, NULL, NULL, &CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_0_0_0 } /* UnityEngine.Playables.PlayableBinding/CreateOutputMethod */,
	{ DelegatePInvokeWrapper_UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4, NULL, NULL, NULL, NULL, NULL, &UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_0_0_0 } /* UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction */,
	{ NULL, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_back, PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_marshal_pinvoke_cleanup, NULL, NULL, &PointerLocation_t4E582463D283A22822997C2841D5E1A30D16FCF6_0_0_0 } /* UnityEngine.UIElements.PointerDeviceState/PointerLocation */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback */,
	{ DelegatePInvokeWrapper_GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980, NULL, NULL, NULL, NULL, NULL, &GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback */,
	{ DelegatePInvokeWrapper_GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC, NULL, NULL, NULL, NULL, NULL, &GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback */,
	{ DelegatePInvokeWrapper_Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0, NULL, NULL, NULL, NULL, NULL, &Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback */,
	{ DelegatePInvokeWrapper_Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A, NULL, NULL, NULL, NULL, NULL, &Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback */,
	{ DelegatePInvokeWrapper_RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A, NULL, NULL, NULL, NULL, NULL, &RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A_0_0_0 } /* UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback */,
	{ NULL, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_back, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshal_pinvoke_cleanup, NULL, NULL, &CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_0_0_0 } /* System.Text.RegularExpressions.Regex/CachedCodeEntryKey */,
	{ NULL, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_back, LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_marshal_pinvoke_cleanup, NULL, NULL, &LowerCaseMapping_t3E26F9E4ED2CCDA7404B4E4C123B0175FF5F8FF1_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping */,
	{ NULL, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_back, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshal_pinvoke_cleanup, NULL, NULL, &SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_0_0_0 } /* System.Text.RegularExpressions.RegexCharClass/SingleRange */,
	{ NULL, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_back, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_cleanup, NULL, NULL, &DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking */,
	{ NULL, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_back, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_cleanup, NULL, NULL, &RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_0_0_0 } /* UnityEngine.UIElements.UIR.RenderChain/RenderNodeData */,
	{ NULL, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_back, HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_marshal_pinvoke_cleanup, NULL, NULL, &HitInfo_t34AF939575E1C059D581AB7ED8F039BCFFC70314_0_0_0 } /* UnityEngine.SendMouseEvents/HitInfo */,
	{ NULL, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_back, Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_marshal_pinvoke_cleanup, NULL, NULL, &Escape_tBDF8B9DE3CB50EC7389A1FCAD8AE65F6AA289178_0_0_0 } /* Mono.Globalization.Unicode.SimpleCollator/Escape */,
	{ NULL, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_back, ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_marshal_pinvoke_cleanup, NULL, NULL, &ReadWriteParameters_t14911E85F7252B5A39D9A53466C7EDE243327033_0_0_0 } /* System.IO.Stream/ReadWriteParameters */,
	{ NULL, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_back, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshal_pinvoke_cleanup, NULL, NULL, &PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_0_0_0 } /* UnityEngine.UIElements.StyleComplexSelector/PseudoStateData */,
	{ NULL, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_back, ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshal_pinvoke_cleanup, NULL, NULL, &ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_0_0_0 } /* UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair */,
	{ NULL, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_back, Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_marshal_pinvoke_cleanup, NULL, NULL, &Enumerator_tA61A6E560BAB8F96C2471024F8FBFF2B6BC1F1BB_0_0_0 } /* UnityEngine.UIElements.StylePropertyNameCollection/Enumerator */,
	{ NULL, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_back, ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_marshal_pinvoke_cleanup, NULL, NULL, &ImportStruct_t8CE0AC0405305E6E27224A07CF153167E99C98B1_0_0_0 } /* UnityEngine.UIElements.StyleSheet/ImportStruct */,
	{ NULL, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_back, ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_marshal_pinvoke_cleanup, NULL, NULL, &ResolveContext_tEF37DBA22D641E4FE1568C5EBE1605A98D86C992_0_0_0 } /* UnityEngine.UIElements.StyleVariableResolver/ResolveContext */,
	{ NULL, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_back, AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_marshal_pinvoke_cleanup, NULL, NULL, &AttributeOverride_t58F1DF22E69714D48ECBEEAD266D443A858BADEF_0_0_0 } /* UnityEngine.UIElements.TemplateAsset/AttributeOverride */,
	{ DelegatePInvokeWrapper_OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326, NULL, NULL, NULL, NULL, NULL, &OnDetectFocusChangeFunction_tB31D458403A6818419AAAFBA0049B72060284326_0_0_0 } /* UnityEngine.UIElements.TextEditorEngine/OnDetectFocusChangeFunction */,
	{ DelegatePInvokeWrapper_OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C, NULL, NULL, NULL, NULL, NULL, &OnIndexChangeFunction_t85C95CE0E180FEF496A57F758911AD7D1562043C_0_0_0 } /* UnityEngine.UIElements.TextEditorEngine/OnIndexChangeFunction */,
	{ NULL, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_back, SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_marshal_pinvoke_cleanup, NULL, NULL, &SpecialCharacter_t869F8BE65A7FE32AFD4196118258F49A63D8E2BD_0_0_0 } /* UnityEngine.TextCore.Text.TextGenerator/SpecialCharacter */,
	{ NULL, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_back, FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_marshal_pinvoke_cleanup, NULL, NULL, &FontAssetRef_t7B8E634754BC5683F1E6601D7CD0061285A28FF3_0_0_0 } /* UnityEngine.TextCore.Text.TextResourceManager/FontAssetRef */,
	{ NULL, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_back, FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_marshal_pinvoke_cleanup, NULL, NULL, &FontReferenceMap_t1C0CECF3F0F650BE4A881A50A25EFB26965E7831_0_0_0 } /* UnityEngine.TextCore.Text.TextSettings/FontReferenceMap */,
	{ NULL, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_back, BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_marshal_pinvoke_cleanup, NULL, NULL, &BlitInfo_t6D4C0580BBEF65F5EAD39FB6DBC85F360CF6A357_0_0_0 } /* UnityEngine.UIElements.UIR.TextureBlitter/BlitInfo */,
	{ NULL, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_back, TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_marshal_pinvoke_cleanup, NULL, NULL, &TextureInfo_t581C305A0444F786E0E7405054714685BE3A5A5B_0_0_0 } /* UnityEngine.UIElements.TextureRegistry/TextureInfo */,
	{ NULL, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_back, FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_marshal_pinvoke_cleanup, NULL, NULL, &FormatLiterals_tB7BAA4DA8EAC1AB8D825A2D9C446C9FCD9BBD94A_0_0_0 } /* System.Globalization.TimeSpanFormat/FormatLiterals */,
	{ NULL, StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke, StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_back, StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_marshal_pinvoke_cleanup, NULL, NULL, &StringParser_tBEB9E0DE757649065F3DAC284EBD029545747775_0_0_0 } /* System.Globalization.TimeSpanParse/StringParser */,
	{ NULL, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_back, TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanRawInfo_tDB52E4C9854A909DB47D2FEF0A1114A57F3C29FA_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanRawInfo */,
	{ NULL, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_back, TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_marshal_pinvoke_cleanup, NULL, NULL, &TimeSpanResult_tD0B15293C8224251926B8E7F9D699E00A0CB10B7_0_0_0 } /* System.Globalization.TimeSpanParse/TimeSpanResult */,
	{ NULL, TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke, TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke_back, TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_marshal_pinvoke_cleanup, NULL, NULL, &TZifType_t3ACBE0BB45077721E9D8DAF1414503F7990621D4_0_0_0 } /* System.TimeZoneInfo/TZifType */,
	{ NULL, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_back, TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_marshal_pinvoke_cleanup, NULL, NULL, &TransitionTime_tE1A32FD9A7AC39502239D3C9A4EA83ED2AD81823_0_0_0 } /* System.TimeZoneInfo/TransitionTime */,
	{ NULL, TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke, TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_back, TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_marshal_pinvoke_cleanup, NULL, NULL, &TreeViewItemWrapper_t8130863A8182C5BF6925A88AF5E77192A4D519CE_0_0_0 } /* UnityEngine.UIElements.TreeView/TreeViewItemWrapper */,
	{ NULL, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_back, ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_marshal_pinvoke_cleanup, NULL, NULL, &ClosingInfo_t2DD9FDAA81DB13384355D75E956D24D1594C9D14_0_0_0 } /* UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/ClosingInfo */,
	{ NULL, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_back, Entry_tB8765CA56422E2C92887314844384843688DCB9F_marshal_pinvoke_cleanup, NULL, NULL, &Entry_tB8765CA56422E2C92887314844384843688DCB9F_0_0_0 } /* UnityEngine.UIElements.UIR.Implementation.UIRStylePainter/Entry */,
	{ NULL, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_back, AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_marshal_pinvoke_cleanup, NULL, NULL, &AllocToFree_tC46982856CB8220A92BB724F5FB75CCCD09C67D8_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree */,
	{ NULL, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_back, AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_marshal_pinvoke_cleanup, NULL, NULL, &AllocToUpdate_tD0221D0ABC5378DDE5AAB1DAA219C337E562B512_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate */,
	{ NULL, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_back, DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_marshal_pinvoke_cleanup, NULL, NULL, &DeviceToFree_tF2AD2D5F5C1936F25516AEF0736CF4BCA1B3052B_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree */,
	{ NULL, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_back, EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_marshal_pinvoke_cleanup, NULL, NULL, &EvaluationState_t91A908747DD184A56AA6402529B965E07E555567_0_0_0 } /* UnityEngine.UIElements.UIR.UIRenderDevice/EvaluationState */,
	{ NULL, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_back, DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_marshal_pinvoke_cleanup, NULL, NULL, &DateMapping_tD71D0AF5C7C6CB4F9517C292B1B61D7AF7CFCCFD_0_0_0 } /* System.Globalization.UmAlQuraCalendar/DateMapping */,
	{ NULL, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_back, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshal_pinvoke_cleanup, NULL, NULL, &WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_0_0_0 } /* UnityEngine.UnitySynchronizationContext/WorkRequest */,
	{ NULL, UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke, UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_back, UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_marshal_pinvoke_cleanup, NULL, NULL, &UriScheme_t6B786086C95A0192D655D1576DCD35D7B26CD794_0_0_0 } /* Mono.Security.Uri/UriScheme */,
	{ NULL, MethodKey_t1F00487C1D95A9E20B6BB20C0795117AA44A1E8E_marshal_pinvoke, MethodKey_t1F00487C1D95A9E20B6BB20C0795117AA44A1E8E_marshal_pinvoke_back, MethodKey_t1F00487C1D95A9E20B6BB20C0795117AA44A1E8E_marshal_pinvoke_cleanup, NULL, NULL, &MethodKey_t1F00487C1D95A9E20B6BB20C0795117AA44A1E8E_0_0_0 } /* XLua.Utils/MethodKey */,
	{ NULL, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_back, Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshal_pinvoke_cleanup, NULL, NULL, &Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_0_0_0 } /* UnityEngine.UIElements.VisualElement/Hierarchy */,
	{ NULL, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_back, SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_marshal_pinvoke_cleanup, NULL, NULL, &SlotDefinition_t2E39E965BBE5A336DD1B93A115DD01044D1A66F8_0_0_0 } /* UnityEngine.UIElements.VisualTreeAsset/SlotDefinition */,
	{ NULL, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_back, SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_marshal_pinvoke_cleanup, NULL, NULL, &SlotUsageEntry_t73A628038C799E4FD44436E093EC19D2B9EA1B76_0_0_0 } /* UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry */,
	{ NULL, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_back, UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_marshal_pinvoke_cleanup, NULL, NULL, &UsingEntry_t0454AD34026FDFD1733CE07BD4AE807B0FBCE484_0_0_0 } /* UnityEngine.UIElements.VisualTreeAsset/UsingEntry */,
	{ NULL, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_back, VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshal_pinvoke_cleanup, NULL, NULL, &VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_0_0_0 } /* System.Threading.Volatile/VolatileObject */,
	{ NULL, ProjectionInfo_tFC560595E6363065FD69E509A725A1CE54AF46C6_marshal_pinvoke, ProjectionInfo_tFC560595E6363065FD69E509A725A1CE54AF46C6_marshal_pinvoke_back, ProjectionInfo_tFC560595E6363065FD69E509A725A1CE54AF46C6_marshal_pinvoke_cleanup, NULL, NULL, &ProjectionInfo_tFC560595E6363065FD69E509A725A1CE54AF46C6_0_0_0 } /* ILRuntime.Mono.Cecil.WindowsRuntimeProjections/ProjectionInfo */,
	{ DelegatePInvokeWrapper_WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4, NULL, NULL, NULL, NULL, NULL, &WindowsCancelHandler_tC396577B75EBC714D192D78185E70181CBB963B4_0_0_0 } /* System.Console/WindowsConsole/WindowsCancelHandler */,
};
